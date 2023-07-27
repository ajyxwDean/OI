/*
T1:
#include <bits/stdc++.h>
using namespace std;
int main() {
    cout << "come on baby let's go";
    return 0;
}

T2:
#include <bits/stdc++.h>
using namespace std;
int main() {
    int a;
    cin >> a;
    if(a == 1) cout <<"唱";
    else if(a == 2) cout << "跳";
    else if(a == 3) cout << "rap";
    else if(a == 4) cout << "篮球";
    return 0;
}

T3:
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, cnt = 1;
    cin >> n;
    while (n > 1) {
        if (n % 2 == 1) {
            n = n * 3 + 1;
            n = n / 2.0;
            cnt+=2;
            continue;
            
        }
        else if (n % 2 == 0) {
            n = n / 2;
            cnt++;
            if(n == 1) break;
        }
    }
    cout << cnt;
    return 0;
}

T4:
#include <bits/stdc++.h>
using namespace std;
bool prime(int n) {
    if(n < 2) return false;
    for(int i = 2; i <= n / i; i++) {
        if(n % i == 0) return false;
    }
    return true;
}
int main() {
    int n;
    cin >> n;
    if(prime(n)) {
        printf("%d %d", 1, n);
        return 0;
    }
    if(n == 1) {
     	cout << 1;
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        if(n % i == 0) printf("%d ",i);
    }
    return 0;
}

T5:
#include <bits/stdc++.h>
using namespace std;
int a[105][105];
int n;
int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
     	for(int j = 0; j < n; j++){
         	cin >> a[i][j];   
        }
    }
	
 	return 0;   
}

T6:
#include <bits/stdc++.h>
using namespace std;
int n;
int e[10000005];
bool prime(int n){
    for(int i = 2; i <= n; i++){
     	int flag = 0;
        for(int j = 2; j <= sqrt(n); j++){
         	if(i * j == 0){
             	flag = 1;
                break;
            }
        }
       	
    }
}
//const int N = 1e8+1;
//bool prime[N];
//int a[1000005],cnt;

//void init(int n) {
    prime[1] = 0;
    for(int i = 2; i <= n; i++) {
        prime[i] = 1;
    }
    for(int i = 2; i <= sqrt(n); i++) {
        if(prime[i] == 1) {
            for(int j = i * i; j <= n; j+= i) { 
                prime[j] = 0;
            }
        }
    }
    for(int i = 2; i <= n; i++) {
        if(prime[i] == 1) {
            a[++cnt] = i;
        }
    }
}
bool a(int a, int b)
{
 	int sum = 0;
    for(int i = a ;i <= b; i++){
     	if(e[i] == i) sum++;   
    }
    cout << sum;
}
int l[1000005], r[1000005];
int main(){
	
 	return 0;   
}

*/
#include <bits/stdc++.h>
using namespace std;
int n,q,l,r;
int main() {
    
    return 0;
}
// 3 4 1 3 2