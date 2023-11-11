#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <string>

using namespace std;

//int a, b, c, d;
int cnt = 0;
int res = 1;

int main() 
{
//    cin >> a;
//    getchar();
//    cin >> b;
//    getchar();
//    cin >> c;
//    getchar();
//    cin >> d;
//    getchar();
    // freopen("in.in", "r", stdin);
    // freopen("out.out", "w", stdout);

//    scanf("%d-%d-%d-%d", &a, &b, &c, &d);
    string s;
    getline(cin, s);
    for(auto t : s)
    {
        if(t == '-')
        {
            // i--;
            continue;
        }
        cnt += (t - '0') * (res++);
    }
    cnt -= s[s.size() - 1] - '0';
    cnt %= 11;
    // printf("%d", s[s.size() - 1] - '0');
    // printf("\n%d\n", cnt);
    if(cnt == s[s.size() - 1] - '0')
    {
        printf("Right");
        // printf("%d", s[s.size() - 1] - '0');
    }
    else
    {
        for(int i = 0; i < s.size() - 1;i ++)
        {
            printf("%c", s[i]);
        }
        printf("%d", cnt);
    }

    // fclose(stdin);
    // fclose(stdout);
    return 0;
}