/*
习题6-7 简单计算器 （20 分）
模拟简单运算器的工作。
假设计算器只能进行加减乘除运算，运算数和结果都是整数，
四种运算符的优先级相同，按从左到右的顺序计算。

输入格式:
输入在一行中给出一个四则运算算式，没有空格，且至少有一个操作数。遇等号”=”说明输入结束。

输出格式:
在一行中输出算式的运算结果，或者如果除法分母为0或有非法运算符，则输出错误信息“ERROR”。

输入样例:
1+2*10-10/2=
输出样例:
10
*/
#include<stdio.h>

int main() {
    char c;
    int result;
    int temp;
    int first = 1;
    int error = 0;


    do {
        scanf("%d", &temp);
        if (first) {
            result = temp;
            first = 0;
        } else {
            if (!error) {
                if (c == '+') {
                    result += temp;
                } else if (c == '-') {
                    result -= temp;
                } else if (c == '*') {
                    result *= temp;
                } else if (c == '/') {
                    if (temp == 0) {
                        error = 1;
                    } else {
                        //printf("result = %d\n",result);
                        //	printf("temp   = %d\n",temp);
                        result = result / temp;
                    }
                } else {
                    error = 1;
                }
            }
        }
        //	printf("%d\n",result);
        scanf("%c", &c);
    } while (c != '=');
    if (error) {
        printf("ERROR");
    } else {
        printf("%d", result);
    }
    return 0;
}


