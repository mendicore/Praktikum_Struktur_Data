#ifndef SSL_H_INCLUDED
#define SSL_H_INCLUDED

#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infoType;
typedef struct elmList *address;

struct elmList {
    infoType info;
    address next;
};

struct List {
    address first;
};

void createList_103022300094(List &L);
bool isEmpty_103022300094(List &L);
address createNewElement(infoType X);
void insertLast_103022300094(List &L, address P);
void showAllData_103022300094(List &L);
address findMin_103022300094(List &L);
void insertMiddle_103022300094(List &L, address P);

#endif // SSL_H_INCLUDED
