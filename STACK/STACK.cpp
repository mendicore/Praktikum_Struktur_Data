#include "STACK.h"

void createStack_103022300094(stack &S){
    Top(S) = -1;
}

bool isEmpty_103022300094(stack &S){
    if(Top(S) == -1){
        return true;
    }else{
        return false;
    }
}
bool isFull_103022300094(stack &S){
    if(Top(S) == 14){
        return true;
    }else{
        return false;
    }
}

void push_103022300094(stack &S, infoType X){
    if(!isFull_103022300094(S)){
        Top(S)++;
        info(S)[Top(S)] = X;
    }else {
         cout << "Stack penuh!" << endl;
    }
}
infoType pop_103022300094(stack &S){
     if (!isEmpty_103022300094(S)) {
        infoType X = info(S)[Top(S)];
        Top(S)--;
        return X;
    } else {
        cout << "Stack kosong!" << endl;
    }
}
void printInfo_103022300094(stack S){
    for(int i= 0; i <= Top(S); i++){
        cout << info(S)[i] << " ";
    }
    cout << endl;
}
