#include "SSL.h"

void createList_103022300094(List &L){
    first(L) = NULL;
}

bool isEmpty_103022300094(List &L){
    return first(L) == NULL;
}

address createNewElement(infoType X){
    address P = new elmList;
    info(P) = X;
    next(P) = NULL;

    return P;
}

void insertLast_103022300094(List &L, address P){
    if (isEmpty_103022300094(L)) {
        first(L) = P;
    } else {
        address Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showAllData_103022300094(List &L){
    cout << endl;
    address P = first(L);
    while (P != NULL) {
        cout << info(P) << " -> ";
        P = next(P);
    }
    cout << "NULL" << endl;
}


address findMin_103022300094(List &L){
    address min = first(L);
    address temp = next(min);

    while (temp != NULL) {
        if (info(temp) < info(min)) {
            min = temp;
        }
        temp = next(temp);
    }
    return min;
}

void insertMiddle_103022300094(List &L, address P){
    if (isEmpty_103022300094(L)) {
        first(L) = P;
    } else if (next(first(L)) == NULL) {
        next(first(L)) = P;
    } else {
        address left = first(L);
        address right = first(L);

        while (next(right) != NULL && next(next(right)) != NULL) {
            left = next(left);
            right = next(next(right));
        }

        next(P) = next(left);
        next(left) = P;
    }
}
