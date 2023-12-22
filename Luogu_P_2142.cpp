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

string a, b;
int na[N], nb[N], ans[N]; 
bool pd;

int main()
{
    cin >> a >> b;
	if((a < b && a.size() == b.size()) || a.size() < b.size())
	{
		swap(a, b);
		pd = true;
	}
    for(int i = a.size(); i > 0; i --)na[i] = a[a.size() - i] - '0';
    for(int i = b.size(); i > 0; i --)nb[i] = b[b.size() - i] - '0';
    int maxl = max(a.size(), b.size());
	for(int i = 1; i <= maxl; i ++)
	{
		if(na[i] < nb[i])
		{
			na[i + 1] --;
			na[i] += 10;
		}
		ans[i] = na[i] - nb[i];
	}
	
	while(ans[maxl] == 0)maxl --;
	
	if(pd == true)cout << "-";
	
	for(int i = maxl; i > 0; i --)cout << ans[i];
	if(maxl < 1)cout << "0";
    return 0;
}