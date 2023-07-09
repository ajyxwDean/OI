#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
int T[N], D[N], n;
int main()
{
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        char s;
        int a;
        cin >> s >> a;
        if (s == 'T')
            T[++T[0]] = a; // 分开储存
        else
            D[++D[0]] = a;
    }
    sort(T + 1, T + T[0] + 1);
    sort(D + 1, D + D[0] + 1);
    double pos = 0, tim = 0, k = 1; // 以此为当前位置，当前时间，题中描述的k
    int j = 1;
    for (int i = 1; i <= D[0]; i++)
    {
        double temp = (T[j] - tim) * 1.0 * (1 / k) + pos; // 到下一个时间点的总路程
        while (temp <= D[i] && j <= T[0])
        {                                  // 如果没超过下一个犯错位置就处理掉
            tim = T[j++], pos = temp, k++; // 更新各种元素
            temp = (T[j] - tim) * 1.0 * (1 / k) + pos;
        }
        tim += (D[i] - pos) * 1.0 / (1 / k);
        pos = D[i], k++;
    }
    double temp = (T[j] - tim) * 1.0 * (1 / k) + pos;
    while (temp <= 1000 && j <= T[0])
    { // 再次判断，如果没走到终点，就重复执行
        tim = T[j++], pos = temp, k++;
        temp = (T[j] - tim) * 1.0 * (1 / k) + pos;
    }
    if (pos < 1000)
        tim += (1000 - pos) * k;
    printf("%d", (int)(tim + 0.5));
    return 0;
}
/*

{
    "code-runner.executorMap": {
        "javascript": "node",
        "php": "C:\\php\\php.exe",
        "python": "python",
        "perl": "perl",
        "ruby": "C:\\Ruby23-x64\\bin\\ruby.exe",
        "go": "go run",
        "html": "\"C:\\Program Files (x86)\\Google\\Chrome\\Application\\chrome.exe\"",
        "java": "cd $dir && javac $fileName && java $fileNameWithoutExt",
        "c": "cd $dir && gcc $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
    }
}
*/