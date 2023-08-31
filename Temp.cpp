#include <bits/stdc++.h>
/*
属性部分：
g_ 全局变量,c_ 　常量,m_ 　c++类成员变量,s_ 　静态变量,类型部分：,数组 a,指针　p,函数　fn,句柄　h,长整型　l,布尔　b,浮点型（有时也指文件）　,双字 　dw,字符串　 sz,短整型　 n,双精度浮点　d,计数　c（通常用cnt）,字符　ch（通常用c）,整型　i（通常用n）,字节　by,字　w,实型　r,无符号　u,描述部分：,最大　Max,最小　Min,初始化　Init,临时变量　T（或Temp）,源对象　Src,目的对象　Dest*/
inline int readint()
{
    int x = 0, f = 1;
    char ch = getchar();
    while (ch < '0' || ch > '9')
    {
        if (ch == '-')
            f = -1;
        ch = getchar();
    }
    while (ch >= '0' && ch <= '9')
    {
        x = (x << 1) + (x << 3) + (ch ^ 48);
        ch = getchar();
    }
    return x * f;
}
#define iR   readint()
using namespace std;
stack<char> dat,op;
stack<int> num,dat2;
int check(char c)
{
	switch(c)
	{
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
		case '^':return 3;
		case '(':return 0;
		case ')':return 0;
		default:return -1;
	}
}
int js(int x,int y,char t)
{
	switch(t)
	{
		case '+':return x+y;
		case '-':return x-y;
		case '*':return x*y;
		case '/':return x/y;
		case '^':return pow(x,y);
		default:return -0x3f3f3f3f;
	}
}
void change(string s)
{
	int len=s.size();
	for(int i=0;i<len;i++)
	{
		if(isdigit(s[i]))dat.push(s[i]);
		else if(s[i]=='(')op.push(s[i]);
		else if(s[i]==')')
		{
			char t=op.top();
			while(t!='(')
			{
				op.pop();
				dat.push(t);
				t=op.top();
			}
			op.pop();//要弹出左括号
		}
		else if(check(s[i])>=1&&check(s[i])<=3)//为运算符
		{
			if(!op.empty())
			{
				char t=op.top();
				while(!op.empty()&&check(s[i])<=check(t))
				{
					if(check(s[i])==check(t)&&s[i]=='^')break;//在s[i]与栈顶都是^号时也能进栈
					op.pop();
					dat.push(t);
					if(!op.empty())t=op.top();
				}
			}
			op.push(s[i]);
		}
	}
	while(!op.empty())
	{
		char t=op.top();
		op.pop();
		dat.push(t);
	}
	while(!dat.empty())
	{
		char t=dat.top();
		dat.pop();
		op.push(t);
	}
	while(!op.empty())
	{
		char t=op.top();
		cout<<t<<' ';
		op.pop();
		dat.push(t);
	}
	cout<<endl;
}
void calc()
{
	while(!dat.empty())
	{
		char t=dat.top();
		dat.pop();
		op.push(t);
	}
	while(!op.empty())
	{
		char t=op.top();
		op.pop();
		if(isdigit(t))num.push(t-'0');
		else
		{
			int x=num.top();
			num.pop();
			int y=num.top();
			num.pop();
			num.push(js(y,x,t));//传参数时要把x和y反过来
			while(!num.empty())
			{
				int t=num.top();
				num.pop();
				dat2.push(t); 
			}
			while(!dat2.empty())
			{
				int t=dat2.top();
				cout<<t<<' ';
				dat2.pop();
				num.push(t);
			}
			while(!op.empty())
			{
				char t=op.top();
				cout<<t<<' ';
				op.pop();
				dat.push(t);
			}
			while(!dat.empty())
			{
				char t=dat.top();
				dat.pop();
				op.push(t);
			}
			cout<<endl;
		}
	}
}
int main()
{
    // freopen("in.in","r",stdin);
    // freopen("out.out","w",stdout);
	string s;
	cin>>s;   
	change(s);
	calc();
	return 0;
}