/*
 * 习题10-6 递归求Fabonacci数列 (10分)
 * 本题要求实现求Fabonacci数列项的函数。Fabonacci数列的定义如下：
 *  f(n) = f(n?2) + f(n?1) (n≥2)，其中f(0)=0，f(1)=1。
 *  函数接口定义：
 *  int f( int n );
 *  函数f应返回第n个Fabonacci数。题目保证输入输出在长整型范围内。建议用递归实现。
 *  输入样例：
 *  6
 *  输出样例：
 *  8
 */

#include "stdio.h"

int f(int n);

int main() {
    int n;
    if (scanf("%d", &n) == 1) {
        printf("%d\n", f(n));
    }
    return 0;
}

/* 你的代码将被嵌在这里 */
int f(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return f(n - 2) + f(n - 1);
}


