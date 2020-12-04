/*
习题8-4 报数 （20 分）
报数游戏是这样的：有n个人围成一圈，按顺序从1到n编好号。
从第一个人开始报数，报到m（<n）的人退出圈子；
下一个人从1开始报数，报到m的人退出圈子。
如此下去，直到留下最后一个人。

本题要求编写函数，给出每个人的退出顺序编号。

函数接口定义：
void CountOff( int n, int m, int out[] );
其中n是初始人数；m是游戏规定的退出位次（保证为小于n的正整数）。
函数CountOff将每个人的退出顺序编号存在数组out[]中。
因为C语言数组下标是从0开始的，所以第i个位置上的人是第out[i-1]个退出的。

裁判测试程序样例：

输入样例：
11 3
输出样例：
4 10 1 7 5 2 11 9 3 6 8
*/
#include <stdio.h>

#define MAXN 20

void CountOff(int n, int m, int out[]);

int main() {
    int out[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    CountOff(n, m, out);
    for (i = 0; i < n; i++) {
        printf("%d ", out[i]);
        //	printf("%d \n",i);
    }

    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[]) {
    for (int i = 0; i < n; i++) {
        out[i] = 0;
    }
    int index = 1;
    int count = 0;
    while (index <= n) {
        for (int i = 0; i < n; i++) {
            if (out[i] == 0) {
                count++;
                if (count % m == 0) {
                    out[i] = index;
                    index++;
                }
            }
        }
    }
}

