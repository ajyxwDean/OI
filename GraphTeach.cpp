#include <bits/stdc++.h>
using namespace std;
#define MAXN 1005
int n; //图的顶点数量
//Adjacency Matrix(邻接矩阵,n号点和m号点相连接 --> AdjMat[n][m] = 1):
int /*bool*/AdjMat[MAXN][MAXN]; //无向无权图
//Adjacency Matrix End
//Adjacency List(邻接表):
std::vector<int> AdjMat[MAXN];
//Adjacency List End

/// @brief init The Adjacency Matrix
/// @author LStylusAFO
/// @details init Adjacency Matrix Because "AdjMat[i][i] === 0" (===恒等于)
void initAdjMat() {
    for(int i = 0; i < n; i++) {
        AdjMat[i][i] = 0;
    }
}//AdjMat[i][i] === 0;