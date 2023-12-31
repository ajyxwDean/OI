# 1.比赛前一天晚上请准备好你的各种证件，事先查好去往考场的路线
# 2.比赛之前请先调整你的屏幕分辨率到你喜欢的大小
# 3.比赛之前请把编译器的字体调为你平时惯用的字体，尤其是注意这种字体中的逗号，点，1，l这种易混淆的字是不是区分明显
# 4.在不影响视野的情况下，请将字号尽可能调大，方便查错
# 5.请将题目通读完以后，再开始深入思考你认为最容易的一道题
# 6.即使这道题再容易，也不要着急写代码，请先明确自己每一步要干什么后，再开始写，轻敌会是你最大的错误
# 7.即使这道题看起来再没法做，也不要提早放弃，这个时候纸和笔会是你最好的朋友，自己尝试几个例子，也许你就会找到答案
# 8.请一定先明确自己要干什么之后再写程序，不要走一步想一步
# 9.如果这是一道动态规划题，请先把转移方程写在纸上再编程
## 10.涉及到边界处理、加一减一之类的问题，请在纸上举个例子，标上下标以后，在编程时参照纸上的下标写
## 11.如果思考30分钟仍一头雾水，没有可以实现的算法，请你果断屏蔽掉100%的那一栏数据，开始写60%，50%乃至30%的算法——在 NOIP CSP里面，30分绝不是小数目
## 12.几个常用的复杂度参考：100以下——可能是搜索；100~500——N^3，1000~5000——N^2，100000~500000——NlogN，500000以上——N或1
## 13.如果你发现你旁边的人写得很快，请你放心，他的算法十有八九是错的
## 14.虽然1s+128MB内存 (这是以前的了，现在应该是 1s + 256MB) 是标准配置，不过也不是每道题都是这样的，还是请认真阅读试卷首页的试题说明
## 15.计算内存的方法：数组大小*类型长度/1000 / 1000=所占内存MB数，int(Pascal:longint)类型长度是4, long long (Pascal: int64) =8
## 16.记不住的话，记住int (Pascal: longint) 型数组在128MB内存下最大开到2500 0000是比较保险的（占100MB内存）
## 17.写完程序之后，请一定不要忙着编译，请一定要将你的代码从头到尾通读一遍，也就是静态查错，这是整个编程过程中最重要的步骤，有的变量重复调用问题调试的话，一个小时也看不出来，静态查错可以一下指出错误
# 18.静态查错请注意以下方面：
## 1. 是否写上了using namespace std？ (这是C++的，Pascal就不用了)
## 2. 数组开得是否够大？
## 3. 变量类型是否正确？
## 4. memset时，所填的sizeof（XX）的XX是不是匹配？大小是不是正确？ (Pascal 是 fillchar)
## 5. 外层循环与内层循环的i，j是不是混用了？
## 6. 循环之前，i，j是否定义了？
## 7. 输入数据都输入了吗？
## 8. 这个程序是在执行你想让它执行的步骤吗？
# 19.通过样例后，请你一定不要放松警惕，因为样例并不能覆盖所有的情况，请自己设计几组数据，争取卡死你的程序
# 20.如果出现问题，请你调试你的程序，请一定要分模块调试，不要从头跟到尾
# 21.如果你已经设计不出能卡住你的程序的数据，恭喜你可以做下一题了
# 22.如果你用的是windows，请你注意把system（“pause”）注释掉 ( 针对C/C++，Pascal 不存在 )
# 23.为了万无一失，请你用return 0结束你的程序 ( 同样 ， 针对 C/C++ ，建议是必须加上 )
# 24.在内存允许的情况下，能开普通队列就不要用循环队列，能开下普通数组就不要用滚动数组
# 25.在时间允许的情况下，能暴力就暴力，高精度能不压位就不压位，优化不需要的就不要
# 26.总之，在不超限制的前提下，能不优化就不优化，以减少代码量和出错概率为第一原则
# 27.当比赛还剩下5~15分钟的时候，请不要再改动你的程序，即使你怀疑它对你的一个输入给出了错误答案，因为你自己算出的结果也有可能是错的
# 28.这个时候请你检查是否注释掉了该注释掉的东西，文件名是否写对，文件夹是否建对，请一定反复检查！
# 29.今年赛制更改，没有人知道究竟会变成什么样，所以，与其瞻前顾后，不如集中精力做出你眼前的题目来的实际
# 30.请记住，NOIP CSP 不怕暴力，怕瞎算，不怕不会，怕不敢