#include "stack.h"

bool isEmpty(stack S){
/*
Jhon Andrew Goodman
1301204424
*/
    if(top(S) == nil){
        return true;
    }else{
        return false;
    }
}

bool isFull(stack S){
/*
Jhon Andrew Goodman
1301204424
*/
    if(top(S) == nMax){
        return true;
    }else {
        return false;
    }
}

void createS(stack &S){
/*
Jhon Andrew Goodman
1301204424
*/
    top(S) = nil;
}

void push(stack &S, infotype X){
/*
Jhon Andrew Goodman
1301204424
*/
    if(isFull(S) == false){
        top(S) = top(S) +1;
        info(S)[top(S)] = X;
    }
}

string pop(stack &S){
/*
Jhon Andrew Goodman
1301204424
*/
    infotype x = info(S)[top(S)];
    top(S) = top(S) - 1;
    return x;
}

void undo(stack &undoS, stack &redoS){
/*
Jhon Andrew Goodman
1301204424
*/
    infotype x;
    x = pop(undoS);
    push(redoS, x);
}
void redo(stack &redoS, stack &undoS){
/*
Jhon Andrew Goodman
1301204424
*/
    infotype x;
    x = pop(redoS);
    push(undoS, x);
}

void showStack(stack S){
/*
Jhon Andrew Goodman
1301204424
*/
    int i = top(S);
    while (i >= 1){
        cout << info(S)[i] << " ";
        i--;
    }
    cout << endl;
}

