#include<iostream> 
#include<algorithm> 
#include<string.h> 
using namespace std;
int n;
string s;
int a[5000]= {0};
int main() {
	cin>>s;
	n=s.length();
	int t=n;
	// 
	// cout<<t<<endl;
	for (int i=0;i<n;i++) {
		a[s[i]]++;
		//
		// cout<<s[i]<<" "<<a[s[i]]<<endl;
		if(a[s[i]]>2) t--;
	}
	//
	// cout<<t<<endl;
	if(t<4) {
		cout<<"No";
		return 0;
	}
	t=n;
	//
	// cout<<t<<endl;
	memset(a,0,sizeof(a));
	for (int i=0;i<n;i++) {
		a[s[i]]++;
		//
		// cout<<s[i]<<" "<<a[s[i]]<<endl;
		if(a[s[i]]>1) t--;
	}
	//
	// cout<<t<<endl;
	if(t>4) {
		cout<<"No";
		return 0;
	}
	cout<<"Yes";
}