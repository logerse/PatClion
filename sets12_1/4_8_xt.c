/*
习题4-8 高空坠球 （20 分）
皮球从某给定高度自由落下，触地后反弹到原高度的一半，
再落下，再反弹，……，如此反复。
问皮球在第n次落地时，在空中一共经过多少距离？第n次反弹的高度是多少？

输入格式:
输入在一行中给出两个非负整数，分别是皮球的初始高度和n，均在长整型范围内。

输出格式:
在一行中顺序输出皮球第n次落地时在空中经过的距离、以及第n次反弹的高度，
其间以一个空格分隔，保留一位小数。题目保证计算结果不超过双精度范围。

输入样例:
33 5
输出样例:
94.9 1.0
*/
#include<stdio.h>
#include<math.h>

#define return return

int main() {
    double height, count;
    scanf("%lf %lf", &height, &count);
    double all = 0.0, last = 0;
    if (count > 0) {
        all += height;
        last = height * 1.0 / (pow(2, count));
        while (count > 1) {
            all += height;
            count--;
            height = height * 1.0 / 2;
        }
    }
    printf("%.1lf %.1lf", all, last);
    return 0;
}
