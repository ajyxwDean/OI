/*
现给定 n 个闭区间 
[ai,bi] (1≤i≤n)。这些区间的并可以表示为一些不相交的闭区间的并。你的任务就是在这些表示方式中找出包含最少区间的方案。你的输出应该按照区间的升序排列。这里如果说两个区间 
[a,b] 和 [c,d] 是按照升序排列的，那么我们有 a≤b<c≤d
请写一个程序：
读入这些区间；
计算满足给定条件的不相交闭区间；
把这些区间按照升序输出。
*/
/*
    分析题目
    不难发现，题意中，线段的位置关系有3种
    1.一条线段在另一条内部，称为重合
    2.一条线段和另一条有接触的部分，但不完全重合，这种情况简称相接
    3.一条线段和另一条完全没有接触部分，称为相隔
    （以上并非标准术语，本人瞎编的）
    于是可以得出：
    当我们发现两条线段重合时，舍去较短的一条
    如果发现有相接的线段，我们就锁定相接的线段中较靠右的一条，寻找与之相接的线段，一直下循环去
    如果发现没有与当前线段相接的线段，就输出目前找到的线段的前端和后端，因为这条线段已经到头了
    有了这些，我们就可以用以下步骤，AC本题了。
    1.对线段进行排序（第一关键字为前端，第二关键字为后端）
    2.对于重合的线段，把较小的那条舍去
    3.O(n)的遍历，连接相接的线段，找出每条不相交的线段
*/
/*
5
5 6       1 4
1 4       5 10
10 10
6 9
8 10

123456789X
*****+*++*


*/
#include <bits/stdc++.h>
using namespace std;
struct sub {
    int tail;
    int head;
}lst[10005];
int cmp(const sub sa, const sub sb) {
    if(sa.head != sb.head) return sa.head < sb.head;
    else return sa.tail < sb.tail;
}
int n;
int main() {
    cin >> n;
    for(int i = 0; i < n; i++) {
        cin >> lst[i].tail >> lst[i].head;
    }//O(n)
    sort(lst, lst+n, cmp); //O(nlogn)
    for(int i = 0; i < n; i++) {
        if(lst[i].head > lst[i + 1].tail)
            if(lst[i].head - lst[i].tail + 1 > lst[i + 1].head - lst[i + 1].tail + 1) {
                //舍弃lst[i + 1]
                lst[i + 1].tail = -1, lst[i + 1].head = -1;
            }
    }//O(n);
    
    return 0;
}