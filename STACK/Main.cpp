#include "STACK.h"

using namespace std;

int main(){
    stack S;

    createStack_103022300094(S);

    push_103022300094(S, 'I');
    push_103022300094(S, 'F');
    push_103022300094(S, 'L');
    push_103022300094(S, 'A');
    push_103022300094(S, 'B');
    push_103022300094(S, 'J');
    push_103022300094(S, 'A');
    push_103022300094(S, 'Y');
    push_103022300094(S, 'A');

    cout << "isi stack awal:" << endl;
    printInfo_103022300094(S);
    cout << endl;

    cout << "pop:" << endl;
    char output[4];
    for (int i = 0; i < 4; i++) {
        if (!isEmpty_103022300094(S)) {
            output[i] = pop_103022300094(S);
        }
    }

    for(int i=3; i>=0; i--){
        cout << output[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << "isi stack sesudah di pop:" << endl;
    printInfo_103022300094(S);
    return 0;

}

