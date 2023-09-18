#include<bits/stdc++.h>
#include <Windows.h>
using namespace std;
#define random(x) rand()%(x)
int main() 
{
	printf("欢迎来到郝致远自创的扫雷游戏\n制作不易\nV1.0.4\n请输入行数（10,15）"); 
	int n;
	cin>>n;
	bool fa[999][999],lei[999][999];
	int ge[999][999],ch[999][999];
	memset(fa,false,sizeof(fa));
	memset(ge,0,sizeof(ge));
	memset(lei,false,sizeof(lei));
	int hh=(int)time(0),cnh=0;
	for(int i=1;i<=n;i++)
	{
		
		srand(hh);
		for(int j=1;j<=n;j++)
		{
			hh+=4;
			if(random(9)==2)
			{
				lei[i][j]=true;
				cnh++;
			}
		}
	}
	int sy=n*n,chy=0,sj=(int)time(0);
	while(sy>cnh)
	{
		int i,j;
		printf("输入行和列（a b）"); 
		scanf("%d %d",&i,&j);
		if(fa[i][j]==false)sy--;
		fa[i][j]=true;
		if(lei[i][j]==true)
		{
			int end=(int)time(0);
			printf("雷炸了，YOU DIE！\n 总雷数：%d  您已逃脱 %d 次炸弹 时间：%d s \n hh 记得关注我 网址：\n https://space.bilibili.com/1296411455?spm_id_from=333.1007.0.0\n\n",cnh,n*n-sy,end-sj);
			for(int y=1;y<=n;y++)
			{
				for(int tt=1;tt<=n;tt++)
				{
					if(lei[y][tt]==true)printf("%c  ",(char)64);
					else printf("%d  ",ch[y][tt]);
				}
			}
			Sleep(4999);
			return 0; 
		}
		else
		{
	        chy=0;
			if(i==1)
			{
				if(j==1)
				{
					if(lei[1][2]==true)chy++;
					if(lei[2][1]==true)chy++;
					if(lei[2][2]==true)chy++;
							
				}
				else if(j==n)
				{
					if(lei[1][n]==true)chy++;
					if(lei[2][n]==true)chy++;
					if(lei[2][n-1]==true)chy++;
				}
				else
				{
					if(lei[i][j-1]==true)chy++;
					if(lei[i][j+1]==true)chy++;
					if(lei[i+1][j-1]==true)chy++;
					if(lei[i+1][j]==true)chy++;
					if(lei[i+1][j+1]==true)chy++;
				}
			}
			if(i==n)
			{
				if(j==1)
				{
					if(lei[n][2]==true)chy++;
					if(lei[n-1][1]==true)chy++;
					if(lei[n-1][2]==true)chy++;
				}
				else if(j==n)
				{
					if(lei[n][n-1]==true)chy++;
					if(lei[n-1][n]==true)chy++;
					if(lei[n-1][n-1]==true)chy++;
				}
				else
				{
					if(lei[i-1][j-1]==true)chy++;
					if(lei[i-1][j]==true)chy++;
					if(lei[i-1][j+1]==true)chy++;
					if(lei[i][j-1]==true)chy++;
					if(lei[i][j+1]==true)chy++;
				}
			}
			if(i!=1&&i!=n)
			{
				if(j!=1&&j!=n)
				{
					if(lei[i-1][j-1]==true)chy++;
					if(lei[i-1][j]==true)chy++;
					if(lei[i-1][j+1]==true)chy++;
					if(lei[i][j-1]==true)chy++;
					if(lei[i][j+1]==true)chy++;
					if(lei[i+1][j-1]==true)chy++;
					if(lei[i+1][j]==true)chy++;
					if(lei[i+1][j+1]==true)chy++;
			 	} 
			 	else if(j==1)
			 	{
					if(lei[i-1][j]==true)chy++;
					if(lei[i-1][j+1]==true)chy++;
					if(lei[i][j+1]==true)chy++;
					if(lei[i+1][j]==true)chy++;
					if(lei[i+1][j+1]==true)chy++;
				}
				else if(j==n)
				{
					if(lei[i-1][j-1]==true)chy++;
					if(lei[i-1][j]==true)chy++;
					if(lei[i][j-1]==true)chy++;
					if(lei[i+1][j-1]==true)chy++;
					if(lei[i+1][j]==true)chy++;
				}
			}
		}
		ch[i][j]=chy;		 
		system("cls");
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(fa[i][j]==true)
				{
					printf("%d ",ch[i][j]);
				}
				else
				{
					printf("%c ",char(35));
				}
			}
			cout<<endl<<endl;
		 } 
		 printf("剩余 %d 个空，加油！\n",sy-cnh);
	}
	int iop=(int)time(0);
	printf("OHHHHHHHHHHHH  你赢了  逃脱 %d 次 用时 %d 秒 平均 %f s/个\n哈哈哈 觉得好玩 到https://space.bilibili.com/1296411455?spm_id_from=333.1007.0.0关注我，来个三联！\n10秒后退出!",n*n-cnh,iop-sj,(float)(iop-sj)/(n*n-cnh));
	Sleep(9999);
	return 0; 
	//喜欢一定要三连！！！！！！！！！！！！！！！！！！！！！！！！！！！！！ 
}