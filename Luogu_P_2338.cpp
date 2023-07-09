#include <bits/stdc++.h>
using namespace std;
const int MAXN = 1e5 + 5;
/*
属性部分：
g_ 全局变量
c_ 　常量
m_ 　c++类成员变量
s_ 　静态变量
类型部分：
数组 a
指针　p
函数　fn
无效　v
句柄　h
长整型　l
布尔　b
浮点型（有时也指文件）　f
双字 　dw
字符串　 sz
短整型　 n
双精度浮点　d
计数　c（通常用cnt）
字符　ch（通常用c）
整型　i（通常用n）
字节　by
字　w
实型　r
无符号　u
描述部分：
最大　Max
最小　Min
初始化　Init
临时变量　T（或Temp）
源对象　Src
目的对象　Dest
*/
#define ll long long
#define LL long long
#define P printf
#define iR readint()
#define ENDL P("\n")
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
template <typename T>
inline void read(T &a)
{
    T s = 0, w = 1;
    char ch = getchar();
    while (!isdigit(ch))
    {
        if (ch == '-')
        {
            w = -1;
        }
        ch = getchar();
    }
    while (isdigit(ch))
    {
        s = s * 10 + ch - 48;
        ch = getchar();
    }
    a = s * w;
}
// int n;
// int t[MAXN], d[MAXN];
// int nowv, nowt, nows, tott, lsts;
// int it, id;
// struct node{
//     char type;
//     int val;
// } a[MAXN];
// int n;
// int nowv, nows, nowt, lsts, tott;
/*function*/ //node TtoD(node &ac)
// {
//     node a;
//     a.type = 'D';
//     a.val = lsts + nowv * ac.val;
//     return a;
// }
// bool cmp(node a, node b) {
//     if(a.type == 'T' && b.type == 'D') {
//         return TtoD(a).val < b.val;
//     }else if(a.type == 'D' && b.type == 'T') {
//         return a.val < TtoD(b).val;
//     }else if(a.type == 'T' && b.type == 'T'){
//         return TtoD(a).val < TtoD(b).val;
//     }else {
//         return a.val < b.val;
//     }
// }
int t[MAXN], d[MAXN],n;
int main()
{
#ifdef LOCAL
    freopen("in.in", "r", stdin);
    freopen("out.out", "w", stdout);
    clock_t time = clock();
#endif
//-----------------------------
// Ctrl + / -> 注释
// Start
    // // 第 k 次失误后，速度会下降到每秒 1 / (k + 1) 米。
    // read(n);
    // for (id = 0,it=0; (it + id) < n;)
    // {
    //     char type;
    //     read(type);
    //     if(type == 'T') {
    //         read(t[++it]);
    //     }else {
    //         read(d[++id]);
    //     }
    // }
    // sort(t, t + it);
    // sort(d, d + id);
    // nowv = nowt = nows = tott = lsts = 0;
    // while(1/*?*/) {
        
    // }
    // nowv = 1;
    // read(n);
    // for(int i = 0; i < n; i++) {
    //     read(a[i].type);
    //     read(a[i].val);
    // }
    // sort(a, a + n, cmp);
    // int i = 0;
    // nows = a[0].type == 'T' ? TtoD(a[0]).val : a[0].val;
    // int i = 0;
    // while(nows < 1000 && i < n) {
    //     lsts = nows;
    //     nows = nowt * nowv;
    //     //nowv sencond per meter
    // }
    // for(; i < n && nows < 1000; i++) {
    //     lsts = nows;
    //     nows = a[i].type == 'T' ? TtoD(a[i]).val : a[i].val;
    //     nowv = i + 1/*?*/;
    //     //i+1 second per metre
    //     nowt = nows * nowv;
    //     tott += nowt;
    // }
    // P("%d", tott);
    /*
    True Code:
    #include<bits/stdc++.h>
    using namespace std;
    const int N=10005;
    int T[N],D[N],n;
    int main(){
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            char s;
            int a;
            cin>>s>>a;
            if(s=='T')T[++T[0]]=a;//分开储存
            else D[++D[0]]=a;
        }
        sort(T+1,T+T[0]+1);
        sort(D+1,D+D[0]+1);
        double pos=0,tim=0,k=1;//以此为当前位置，当前时间，题中描述的k
        int j=1;
        for(int i=1;i<=D[0];i++){
            double temp=(T[j]-tim)*1.0*(1/k)+pos;//到下一个时间点的总路程
            while(temp<=D[i]&&j<=T[0]){//如果没超过下一个犯错位置就处理掉
                tim=T[j++],pos=temp,k++;//更新各种元素
                temp=(T[j]-tim)*1.0*(1/k)+pos;//upd temp
            }
            tim+=(D[i]-pos)*1.0/(1/k);//upd tot
            pos=D[i],k++;//upd again
        }
        double temp=(T[j]-tim)*1.0*(1/k)+pos;
        while(temp<=1000&&j<=T[0]){//再次判断，如果没走到终点，就重复执行
            tim=T[j++],pos=temp,k++;
            temp=(T[j]-tim)*1.0*(1/k)+pos;
        }
        if(pos<1000)tim+=(1000-pos)*k;
        printf("%d",(int)(tim+0.5));
        return 0;
    }
    */
    cin >> n;
    for(int i = 1; i <= n; i++) {
        char s;
        int a;
        // read(a),read(s);
        cin >> s >> a;
        if(s == 'T')
            t[++t[0]] = a;
        else
            d[++d[0]] = a;
    }
    //---(2):sort
    sort(t + 1, t + t[0] + 1);
    sort(d + 1, d + d[0] + 1);
    //---(3):moni
    double nowTime = 0, nowPos = 0, k = 1;
    int j = 1;
    for (int i = 1; i <= d[0]; i++){
        double dist = (t[j] - nowTime) * 1.0 * (1 / k) + nowPos;//Distance
        while(dist <= d[i] && j <= t[0]) {
            nowTime = t[j++], k++, nowPos = dist; //upd nowtime,k,nowpos
            dist = (t[j] - nowTime) * 1.0 * (1 / k) + nowPos;
        }
        nowTime += (d[i] - nowPos) * 1.0 / (1 / k);
        nowPos = d[i], k++;
    }
    double dist = (t[j] - nowTime) * 1.0 * (1 / k) + nowPos;
    while (dist <= 1000 && j <= t[0])
    {
        nowTime = t[j++], k++, nowPos = dist; // upd nowtime,k,nowpos
        dist = (t[j] - nowTime) * 1.0 * (1 / k) + nowPos;
    }
    //---(4):panduan
    // if(nowPos < 1000)
        // tott += (1000 - nowPos) * k;
    // P("%d", tott);
    if(nowPos < 1000)
        nowTime += (1000 - nowPos) * k;
    P("%d", (int)(nowTime + 0.5));
// End
//-----------------------------
#ifdef LOCAL
cerr << endl << "Time used: " << (clock() - time) / CLOCKS_PER_SEC * 1000 << "ms" << endl;
#endif
    return 0;
}
/*
|--------        /\         ----------  ----------
|       |       /  \        |           |
|       |      /    \       |           |
|--------     /------\      |---------  |---------
|            /        \              |           |
|           /          \             |           |
|          /            \   ----------  ----------
*/