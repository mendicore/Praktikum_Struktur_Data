#include "SSL.h"

void createList_103022300094(List &L){
    first(L) = NULL;
}

bool isEmpty_103022300094(List &L){
    return first(L) == NULL;
}

address alokasi_103022300094(infoType X){
    address P = new elmList;
    info(P) = X;
    next(P) = NULL;

    return P;
}

address findElm_103022300094(List &L, int X){
    address P = first(L);
    while(P != NULL){
        if(info(P) == X){
            return P;
        }

        P = next(P);
    }

    return NULL;
}

void insertFirst_103022300094(List &L, address P){
    if(isEmpty_103022300094(L)){
        first(L) = P;
    }else{
        next(P) = first(L);
        first(L) = P;
    }
}
void insertLast_103022300094(List &L, address P){
    if(isEmpty_103022300094(L)){
        P = first(L);
    }else{
        address Q = first(L);
        while(next(Q) != NULL){
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void insertAfter_103022300094(List &L, address prec, address P){
    if(isEmpty_103022300094(L)){
        insertFirst_103022300094(L, P);
    }else if(next(prec) == NULL){
        insertLast_103022300094(L, P);
    }else{
        next(P) = next(prec);
        next(prec) = P;
    }
}

void deleteFirst_103022300094(List &L){
    if(isEmpty_103022300094(L)){
        cout << "List Kosong" << endl;
    }else{
        address P = first(L);
        first(L) = next(P);
        next(P) = NULL;
        delete P;
    }
}

void deleteLast_103022300094(List &L){
    if(isEmpty_103022300094(L)){
        cout << "List kosong" << endl;
    }else {
         address P = first(L);
          if (next(P) == NULL) {
            deleteFirst_103022300094(L);
          }else{
                address prev = NULL;
                while (next(P) != NULL){
                     prev = P;
                    P = next(P);
                }
                next(prev) = NULL;
                delete P;
        }
    }
}

void deleteAfter_103022300094(List &L, address prec){
    if(isEmpty_103022300094(L)){
        cout << "List kosong" << endl;
    }else {
        address P = next(prec);
        if (P != NULL) {
            next(prec) = next(P);
            next(P) = NULL;
            delete P;
        }else{
            deleteLast_103022300094(L);
        }
    }
}

void printList_103022300094(List &L){
    cout << endl;
    address P = first(L);
    while (P != NULL) {
        cout << info(P) << " -> ";
        P = next(P);
    }
    cout << "NULL" << endl;
}
