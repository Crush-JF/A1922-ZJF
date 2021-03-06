#ifndef stack_h
#define stack_h
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

typedef int dataType;
typedef struct node {
	dataType data;
	struct node *next;
}LinkStack;

LinkStack* InitStack();
int Empty(LinkStack *s);
void push(LinkStack *s,dataType x);
void pop(LinkStack *s);
dataType GetTop(LinkStack *s);
void Conversion(int n,int d);

#endif
