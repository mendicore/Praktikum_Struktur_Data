#ifndef DLL_H_INCLUDED
#define DLL_H_INCLUDED

#include <iostream>
using namespace std;

#define first(L) (L).first
#define last(L) (L).last
#define next(P) (P)->next
#define prev(P) (P)->prev
#define info(P) (P)->info

struct infoType {
    string band;
    string judulLagu;
};

struct elmList {
    infoType info;
    elmList *next;
    elmList *prev;
};

typedef elmList* address;

struct List {
    address first;
    address last;
};

bool isEmpty(const List &L);
void createList(List &L);
address createNewElmt(const infoType &x);
void insertFirst(List &L, address P);
void insertAfter(List &L, address Prec, address P);
void insertLast(List &L, address P);
void deleteFirst(List &L, address &P);
void deleteAfter(List &L, address Prec, address &P);
void deleteLast(List &L, address &P);
void concat(List &L1, List &L2, List &L3);
address findLagu(const string &Judul, const List &L);
void removeLagu(const string &Judul, List &L);
void printList(const List &L);

#endif // DLL_H_INCLUDED
