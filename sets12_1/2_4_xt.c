/*
习题2-4 求交错序列前N项和 （15 分）
本题要求编写程序，计算交错序列 1-2/3+3/5-4/7+5/9-6/11+... 的前N项之和。

输入格式:
输入在一行中给出一个正整数N。

输出格式:
在一行中输出部分和的值，结果保留三位小数。
输入样例:
5
输出样例:
0.917
*/
#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    double sum = 0.0;
    double temp = 1;
    for (int i = 1; i <= N; i++) {
        sum += temp * i / (2 * i - 1);
        temp = 0 - temp;
    }
    printf("%.3lf", sum);
    return 0;
}

