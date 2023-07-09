#ifndef FASTIO_H
#define FASTIO_H

#include <cstdio>
#include <string>

namespace fio
{
	template <typename T>
	inline int get_integer(T &t, std::FILE *pf = stdin)
	{
		using std::fgetc;
		t = 0;
		bool nega = false;
		char ch = fgetc(pf);
		while (~ch && (ch == ' ' || ch == '\n' || ch == '\r'))
		{
			ch = fgetc(pf);
		}
		if (~ch)
		{
			if (ch == '-')
			{
				nega = true;
				ch = fgetc(pf);
			}
			else if (ch == '+')
			{
				ch = fgetc(pf);
			}
			else if (ch < '0' || ch > '9')
			{
				std::ungetc(ch, pf);
				return 0;
			}
		}
		else
		{
			return EOF;
		}
		while ('0' <= ch && ch <= '9')
		{
			t = t * 10 + ch - '0';
			ch = fgetc(pf);
		}
		if (nega)
		{
			t = -t;
		}
		else
		{
			return EOF;
		}
		std::ungetc(ch, pf);
		return 1;
	}
	template <typename T = int>
	inline T get_integer(std::FILE *pf = stdin)
	{
		T x;
		return (~get_integer(x, pf) ? x : EOF);
	}

	inline char get_char(std::FILE *pf = stdin)
	{
		return std::fgetc(pf);
	}
	inline char get_char(char &ch, std::FILE *pf = stdin)
	{
		return (ch = std::fgetc(pf));
	}

	inline int get_bool(bool &b, std::FILE *pf = stdin)
	{
		b = false;
		int x;
		int ret = get_integer(x, pf);
		if (x)
		{
			if (x == 1)
			{
				b = true;
			}
		}
		return ret;
	}
	inline bool get_bool(std::FILE *pf = stdin)
	{
		bool b;
		get_bool(b, pf);
		return b;
	}

	inline char *get_str(char *s, std::FILE *pf = stdin)
	{
		using std::fgetc;
		if (s)
		{
			char ch = fgetc(pf), *p = s;
			if (~ch)
			{
				while (ch == '\n' || ch == '\r' || ch == ' ')
				{
					ch = fgetc(pf);
				}
				while (~ch && ch ^ '\n' && ch ^ '\r' && ch ^ ' ')
				{
					*(p++) = ch;
					ch = fgetc(pf);
				}
				std::ungetc(ch, pf);
				*p = '\0';
			}
			else
			{
				return nullptr;
			}
		}
		return s;
	}
	inline char *get_str(char *s, std::size_t max_len, std::FILE *pf = stdin)
	{
		using std::fgetc;
		if (s && max_len)
		{
			char ch = fgetc(pf), *p = s;
			if (~ch)
			{
				while (ch == '\n' || ch == '\r' || ch == ' ')
				{
					ch = fgetc(pf);
				}
				while ((--max_len) && ~ch && ch ^ '\n' && ch ^ '\r' && ch ^ ' ')
				{
					*(p++) = ch;
					ch = fgetc(pf);
				}
				std::ungetc(ch, pf);
				*p = '\0';
			}
			else
			{
				return nullptr;
			}
		}
		return s;
	}
	inline int get_str(std::string &s, std::FILE *pf = stdin)
	{
		using std::fgetc;
		s.clear();
		char ch = fgetc(pf);
		while (ch == '\n' || ch == '\r' || ch == ' ')
		{
			ch = fgetc(pf);
		}
		while (~ch && ch ^ '\n' && ch ^ '\r' && ch ^ ' ')
		{
			s.push_back(ch);
			ch = fgetc(pf);
		}
		std::ungetc(ch, pf);
		return (s.empty() ? -1 : 0);
	}
	inline std::string get_str(std::FILE *pf)
	{
		std::string s;
		get_str(s, pf);
		return s;
	}
	inline char *get_line(char *s, std::FILE *pf = stdin)
	{
		using std::fgetc;
		if (s)
		{
			char ch = fgetc(pf), *p = s;
			if (~ch)
			{
				while (~ch && ch ^ '\n' && ch ^ '\r')
				{
					*(p++) = ch;
					ch = fgetc(pf);
				}
				std::ungetc(ch, pf);
				*p = '\0';
			}
			else
			{
				return nullptr;
			}
		}
		return s;
	}
	inline char *get_line(char *s, size_t max_len, std::FILE *pf = stdin)
	{
		using std::fgetc;
		if (s && max_len)
		{
			char ch = fgetc(pf), *p = s;
			if (~ch)
			{
				while ((--max_len) && ~ch && ch ^ '\n' && ch ^ '\r')
				{
					*(p++) = ch;
					ch = fgetc(pf);
				}
				std::ungetc(ch, pf);
				*p = '\0';
			}
		}
		return s;
	}
	inline int get_line(std::string &s, std::FILE *pf = stdin)
	{
		using std::fgetc;
		s.clear();
		char ch = fgetc(pf);
		if (~ch)
		{
			while (~ch && ch ^ '\n' && ch ^ '\r')
			{
				s.push_back(ch);
				ch = fgetc(pf);
			}
			return 0;
		}
		else
		{
			return EOF;
		}
	}
	inline std::string get_line(std::FILE *pf = stdin)
	{
		std::string s;
		get_line(s, pf);
		return s;
	}

	template <typename T>
	int put_integer(T x, std::FILE *pf = stdout)
	{
		using std::fputc;
		if (x < 0)
		{
			if (~fputc('-', pf))
			{
				x = -x;
			}
			else
			{
				return EOF;
			}
		}
		if (x > 9)
		{
			if (~put_integer(x / 10) && ~fputc('0' + x % 10, pf))
			{
				return 0;
			}
			else
			{
				return EOF;
			}
		}
		else
		{
			return fputc('0' + x, pf);
		}
	}

	inline int put_char(char ch, std::FILE *pf = stdout)
	{
		return std::fputc(ch, pf);
	}

	inline int put_bool(bool b, std::FILE *pf = stdout)
	{
		return std::fputs((b ? "true" : "false"), pf);
	}

	inline int put_str(const char *s, std::FILE *pf = stdout)
	{
		return std::fputs(s, pf);
	}
	inline int put_str(const std::string &s, std::FILE *pf = stdout)
	{
		for (char ch : s)
		{
			if (~fputc(ch, pf))
			{
				return EOF;
			}
		}
		return 0;
	}

	inline int put_blank(std::FILE *pf = stdout)
	{
		return std::fputc(' ', pf);
	}
	inline int put_tab(std::FILE *pf)
	{
		return std::fputc('\t', pf);
	}
	inline int endline(std::FILE *pf = stdout)
	{
		return std::fputc('\n', pf);
	}
}

#endif