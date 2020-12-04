/*
习题7-2 求一批整数中出现最多的个位数字 （20 分）
给定一批整数，分析每个整数的每一位数字，求出现次数最多的个位数字。
例如给定3个整数1234、2345、3456，其中出现最多次数的数字是3和4，均出现了3次。

输入格式：
输入在第1行中给出正整数N（≤1000），在第二行中给出N个不超过整型范围的非负整数，数字间以空格分隔。

输出格式：
在一行中按格式“M: n1 n2 ...”输出，
其中M是最大次数，n1、n2、……为出现次数最多的个位数字，
按从小到大的顺序排列。数字间以空格分隔，但末尾不得有多余空格。

输入样例：
3
1234 2345 3456
输出样例：
3: 3 4
*/
#include<stdio.h>

#define return return

int main() {
    int count[10] = {0};
    int N;
    scanf("%d", &N);
    int temp;
    for (int i = 0; i < N; i++) {
        scanf("%d", &temp);
        while (temp > 0) {

            int yu = temp % 10;
            count[yu] = count[yu] + 1;
            temp = temp / 10;
        }
    }
    int max = count[0];
    for (int i = 0; i < 10; i++) {
        if (count[i] > max) {
            max = count[i];
        }
    }
    printf("%d:", max);
    for (int i = 0; i < 10; i++) {
        if (count[i] == max) {
            printf(" %d", i);
        }
    }

    return 0;
}

