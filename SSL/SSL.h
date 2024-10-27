#ifndef SSL_H_INCLUDED
#define SSL_H_INCLUDED
#include <iostream>

#define first(L) L.first
#define next(P) P->next
#define info(P) P->info

using namespace std;

typedef int infoType;
typedef struct elmList *address;

struct elmList{
    infoType info;
    address next;
};

struct List{
    address first;
};

void createList_103022300094(List &L);
bool isEmpty_103022300094(List &L);
address alokasi_103022300094(infoType X);
address findElm_103022300094(List &L, int X);
void insertFirst_103022300094(List &L, address P);
void insertLast_103022300094(List &L, address P);
void insertAfter_103022300094(List &L, address prec, address P);
void deleteFirst_103022300094(List &L);
void deleteLast_103022300094(List &L);
void deleteAfter_103022300094(List &L, address prec);
void printList_103022300094(List &L);

#endif // SSL_H_INCLUDED
