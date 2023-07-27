// //T2011
// #include <bits/stdc++.h>
// using namespace std;
// bool prime(int n) {
//     for(int i = 2; i*i <= n; i++) {
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// int main() {
//     int n;
//     cin >> n;
//     for(int i = 2; i <= n; i++) {
//         if(prime(i)) cout << i << " ";
//     }
//     return 0;
// }
//T2012
// #include <bits/stdc++.h>
// using namespace std;
// bool prime(int n) {
//     for(int i = 2; i*i <= n; i++) {
//         if(n % i == 0) return false;
//     }
//     return true;
// }
// const int MAXN = 1e8+5;
// int Primes[MAXN];
// int main() {
//     int cnt=0;
//     int n;
//     cin >> n;
//     for(int i = 2; i <= n; i++) {
//         if(prime(i)) Primes[cnt] = i,cnt++;
//     }
//     int q; 
//     cin >> q;
//     /*cout << cnt << "      \n";
//     for(int i = 0; i < cnt; i++) {
//         cout << Primes[i] << " ";
//     }*/
//     for(int i = 0; i <= q; i++) {
//         int k;
//         cin >> k;
//         cout << Primes[k-1] << endl;
//     } 
//     return 0;
// }
// #include <windows.h>
//T2013/*
/*
#include <bits/stdc++.h>
using namespace std;
#define LL long long
int mx = 0;
bool prime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= n / i; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int S;
    cin >> S;
  	for(int i = 2;i <= S; i++) {
        int j = S - i;
        if(!prime(i) && !prime(j)) {
            continue;
        }
        if(i * j > mx) {
            mx = i * j;
        }
    }
    cout << mx;
    return 0;
}//span.cm-variable*/
/*

132231


*//*
#include <bits/stdc++.h>
using namespace std;
#define LL long long
bool isPrime(int n) {
    if(n < 2) return false;
    for(int i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
bool huiwen(int n) {
    int n1 = n;
    int sum = 0;
    while(n > 0) {
        sum = sum * 10 + n % 10;
        n /= 10;
    }
    if(sum == n1) return true;
    else return false;
}
int main() {
    int n;
    cin >> n;
    if(isPrime(n) && huiwen(n)) {
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }
    return 0;
}*/
/*
数据千万条，清空第一条。
多测不清空，爆零两行泪。
清空不规范，超时总相伴。
*/
/*

#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int L,M;
int cnt=0;
int vis[10000+10];
int main()
{
    memset(vis,0,sizeof(vis));
    cin>>L>>M;
    for(int i=0;i<=L;i++)
        vis[i]=0;
    for(int i=1;i<=M;i++)
    {
        int head,tail;
        cin>>head>>tail;
        for(int j=head;j<=tail;j++)
            if(vis[j]==0)
                vis[j]=1;
    }
    for(int i=0;i<=L;i++)
    {
        if(vis[i]==0)
            cnt++;
    }
    cout<<cnt<<endl;
    return 0;
} 
*/
/*
#pragma warning (disable:4786)
#include <bits/stdc++.h>
#include <set>
vector< vector<int> > a;
using namespace std;
int main() {
    set<int> a;
    int n;
    cin >> n;
    int s;
    for(int i = 0; i < n; i++) {
        cin >> s;
        a.insert(s);
    }
    cout << a.size();
    for(set<int>::iterator it = a.begin(); it != a.end(); it++) {
        cout << *it;
    }
}
*/
/*
#include <bits/stdc++.h>
using namespace std;
map<string, int> mp;
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mp[s]++;
    }
    pair<string, int> mx;
    mx.first = mp.begin()->first;
    mx.second = mp.begin()->second;
    for(map<string, int>::iterator it = mp.begin(); it != mp.end(); it++) {
        if(it->second > mx.second) mx = *it;
    }
    cout << mx.first;
    return 0;
}*/
/*
#include <bits/stdc++.h>
using namespace std;
int a[1005];
int cnt = 0;
int main() {
    int n;
    cin >> n;
    int c;
    cin >> c;
    for(int i= 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
             if(abs(a[i] - a[j]) == c) cnt++;
        }
    }
    cout << cnt;
    return 0;
}*/
#include <bits/stdc++.h>
using namespace std;
int h1,m1,s1;
int h2,m2,s2;
int cnt = 0;
int main() {
    int flag = 0;
    scanf("%d:%d:%d",&h1,&m1,&s1);
    scanf("%d:%d:%d",&h2,&m2,&s2);
    for(;;) {
        if(h1 == 0 && m1 == 0 && s1 == 0) cout << "next day\n";
        if(h1 < 10) cout << "0";
        cout << h1;
        cout << ':';
        if(m1 < 10) cout << "0";
        cout << m1;
        cout << ':';
        if(s1 < 10) cout << "0";
        cout << s1;
        cout << endl;
        if(flag == 1) break;
        s1++;
        if(s1 == 60) s1 = 0,m1++;
        if(m1 == 60) m1 = 0,h1++;
        if(h1 == 24) h1 = 0;
        cnt++;
        if(h1 == h2 && m1 == m2 && s1 == s2) flag = 1;
    }
    cout << "total=" << cnt << endl;
    return 0;
}