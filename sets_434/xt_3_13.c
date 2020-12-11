//
// Created by Administrator on 2020/12/8.
//
//习题3.13 双端队列 (25分)
//https://pintia.cn/problem-sets/434/problems/6096

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define ERROR
typedef int ElementType;
typedef int Position;
typedef struct QNode *PtrToQNode;
typedef PtrToQNode Deque;
struct QNode {
    //存储元素的素组
    ElementType *Data;
    //队列的头指针
    Position Front;
    //队列的尾指针
    Position Rear;
    //最大容量
    int MaxSize;
};

typedef enum {
    push,
    pop,
    inject,
    eject,
    end
} Operation;
typedef enum {
    false, true
} bool;


/* 创建双端队列 */
Deque CreateDeque(int MaxSize);

/**
 * 将元素X插入到双端队列D的头
 * @param X
 * @param D
 * @return
 */
bool Push(ElementType X, Deque D);

/**
 * 删除双端队列D的头元素，并返回
 * @param D
 * @return
 */
ElementType Pop(Deque D);

/**
 * 将元素插入到双端队列D的尾部
 * @param X
 * @param D
 * @return
 */
bool Inject(ElementType X, Deque D);

/**
 * 删除双端队列D的尾部元素，并返回
 * @param D
 * @return
 */
ElementType Eject(Deque D);

Operation getOP();

void PrintDeque(Deque D);

int main() {
    ElementType X;
    Deque D;
    int N;
    int done = 0;

    scanf("%d", &N);
    D = CreateDeque(N);
    while (!done) {
        switch (getOP()) {
            case push:
                scanf("%d", &X);
                if (Push(X, D) == false) {
                    printf("Deque is Full!\n");
                }
                break;
            case pop:


                break;
            case inject:
                break;
            case eject:
                break;
            case end:
                break;
        }
    }

    return 0;
}


/* 注意：为区分空队列和满队列，需要多开辟一个空间 */
Deque CreateDeque(int MaxSize) {
    Deque D = (Deque) malloc(sizeof(struct QNode));
    MaxSize++;
    D->Data = (ElementType *) malloc(sizeof(ElementType) * MaxSize);
    D->Front = 0;
    D->Rear = 0;
    D->MaxSize = MaxSize;
    return D;
}

Operation getOp() {
    char Push[] = "Push";
    char Pop[] = "Pop";
    char Inject[] = "Inject";
    char Eject[] = "Eject";
    char End[] = "End";
    char s[100];
    scanf("%s", s);
    if (strcmp(Push, s) == 0) {
        return push;
    }
    if (strcmp(Pop, s) == 0) {
        return pop;
    }
    if (strcmp(Inject, s) == 0) {
        return inject;
    }
    if (strcmp(Eject, s) == 0) {
        return eject;
    }
    if (strcmp(End, s) == 0) {
        return end;
    }
    return end;
}


bool Push(ElementType X, Deque D) {
    if (D->Rear - D->Front == D->MaxSize || D->Rear == D->Front) {
        return false;
    }


}