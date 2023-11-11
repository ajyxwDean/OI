#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
struct node{
	double x;
	double y;
};
struct node point[200005];
double dis(node a,node b)
{
	return sqrt((a.x-b.x)*(a.x-b.x)+(a.y-b.y)*(a.y-b.y));
}
int main()
{
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>point[i].x>>point[i].y;
	}
	double minn=1<<31-1;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(i==j)continue;
			if(minn>=dis(point[i],point[j]))minn=dis(point[i],point[j]);
		}
	}
	printf("%.4lf\n",minn);
	return 0;
}
