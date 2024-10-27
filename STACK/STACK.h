#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
#define Top(S) S.Top
#define info(S) S.info

using namespace std;

typedef char infoType;

struct stack {
    infoType info[15];
    int Top;
};

void createStack_103022300094(stack &S);
bool isEmpty_103022300094(stack &S);
bool isFull_103022300094(stack &S);
void push_103022300094(stack &S, infoType X);
infoType pop_103022300094(stack &S);
void printInfo_103022300094(stack S);

#endif // STACK_H_INCLUDED
