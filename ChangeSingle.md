# 更改单/多标签页 VSCode

```cpp
#include <iostream>
#include <algorithm>
using ll= long long;
const int N = 2e5 + 10;
int a[N];
int b[N];
int main()
{
    int n;
    int ans = 1 << 30;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }
    for(int s = 1; s < (1 << n); s++) {
        int tots = 1, totc = 0;
        for(int i = 0; i < n; i++)
        {
            if(s & (i << i)) {
                tots *= a[i];
                totc += b[i];
            }
        }
        ans = min(ans, abs(tots - totc));
    }
    cout << ans << '\n';
    return 0;
}
```