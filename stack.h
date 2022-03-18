#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>

#define info(S) ((S).info)
#define top(S) ((S).top)
#define nil NULL
using namespace std;
/*
Jhon Andrew Goodman
1301204424
*/
const int nMax = 10;
typedef string infotype;

struct stack{
    infotype info[nMax];
    int top;
};

bool isEmpty(stack S);
bool isFull(stack S);
void createS(stack &S);
void push(stack &S, infotype X);
string pop(stack &S);
void undo(stack &S, stack &redoS);
void redo(stack &S, stack &undoS);
void showStack(stack S);
#endif // STACK_H_INCLUDED

