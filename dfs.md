
# 深度优先搜索

## n的全排列

```cpp
#include <bits/stdc++.h>
using namespace std;
int a[100005];
void dfs(int t) {
    if(t == 4) {
        if(a[1] != a[2] && a[2] != a[3] && a[1] != a[3])
            cout << a[1] << " " << a[2] << " " << s[3];
        return ;
    }
    for(int i = 1; i <= 3; i++) {
        a[t] = i;
        dfs(t + 1);
    }
}
int main() {
    dfs(1);
    return 0;
}
```

### 抽象