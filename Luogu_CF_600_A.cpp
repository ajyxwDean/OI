#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <string>
#include <stdint.h>

using namespace std;

const int N = 1e5 + 5;

string s;
string Words[N];
string Chara[N];
string Num[N];
// cnt++;
int cnt = 1;
int cnt1 = 1;
int cnt2 = 1;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    getline(cin, s);
    int len = s.size();
    string tmp;
    for(int i = 0;i < len; i++) 
    {
        if(s[i] == ';' || s[i] == ',')
        {
            Words[++ cnt] = tmp;
            tmp.clear();
        }else tmp += s[i];
    }
    Words[++ cnt] = tmp;
    for(int i = 1; i <= cnt; i++)
    {
        
    }
    for(int i = 1; i <= cnt; i++)
    {
        int flg = 0;
        if(Words[i].empty()) flg = 1;
        for(int j = 0; j < Words[i].size(); j++)
        {
            if (!(Words[i][j] - '0' >= 1 && Words[i][j] - '0' <= 9))
            {
                flg = 1;
            }
        }
        if(flg)
        {
            Chara[++ cnt1] = Words[i];
        }
        else
        {
            Num[++ cnt2] = Words[i];
        }
    }
    cout << "\"";
    for(int i = 1; i <= cnt; i++)
    {   
        if(i == cnt)
        {
            cout << Num[i];
            break;
        }
        if(!Num[i].empty())
            cout << Num[i] << ",";
    }
    cout << "\"";
    cout << '\n';
    cout << "\"";
    for(int i = 1; i <= cnt; i++)
    {   
        if(i == cnt)
        {
            cout << Chara[i];
            break;
        }
        if(!Chara[i].empty())
            cout << Chara[i] << ",";
    }
    cout << "\"";
    return 0;
}