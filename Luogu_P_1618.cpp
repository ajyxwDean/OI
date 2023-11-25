#define STL_INCLUDE
#include <iostream>
#include <cstdlib>
#include <stdint.h>
#include <cstdio>
#include <algorithm>
#ifdef STL_INCLUDE
#include <cstring>
#include <deque>
#include <queue>
#include <stack>
#include <list>
#endif
const int N = 1e5 + 10;

using ll = long long;
using LL = ll;
using std::cin;
using std::cout;
using std::ios;
using std::sort;
using std::nth_element;
using std::unique;
using std::min;
using std::max;
using std::string;
#ifdef STL_INCLUDE
using std::queue;
using std::stack;
using std::deque;
using std::list;

#endif

int a, b, c;
int used[12];
int used1[12];
int cnt = 0;

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int a, b, c;
    cin >> a >> b >> c;
    memset(used, 0, sizeof used);
    for(int i = 100; i <= 999; i++)
    {
        for(int j = i + 1; j <= 999; j++)
        {
            for(int k = j + 1; k <= 999; k++)
            {
                int x = i, y = j, z = k;
                while(x)
                {
                    used[x % 10] ++;
                    x /= 10;
                }
                while(y)
                {
                    used[y % 10] ++;
                    y /= 10;
                }
                while(k)
                {
                    used[k % 10] ++;
                    k /= 10;
                }
                if(used[0]) continue;

                int flg = 0;
                for(int l = 1; l <= 9; l++)
                {
                    if(used[l] >= 1){
                        flg = 1;
                        continue;
                    }
                }
                if(flg) continue;
                if(i * b == a * j && j * c == k * b)
                {
                    ++cnt;
                    cout << i << " " << j << "  "<< k << '\n';
                }
                    
            }
        }
    }
    if(!cnt) cout << "No!!!";
    return 0;
}