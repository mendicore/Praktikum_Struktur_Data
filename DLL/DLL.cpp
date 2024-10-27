    #include "DLL.h"

    bool isEmpty(const List &L) {
        return first(L) == NULL;
    }

    void createList(List &L) {
        first(L) = NULL;
        last(L) = NULL;
    }

    address createNewElmt(const infoType &x) {
        address P = new elmList;
        if (P != NULL) {
            info(P) = x;
            prev(P) = NULL;
            next(P) = NULL;
        }
        return P;
    }

    void insertFirst(List &L, address P) {
        if (isEmpty(L)) {
            first(L) = P;
            last(L) = P;
        } else {
            next(P) = first(L);
            prev(first(L)) = P;
            first(L) = P;
        }
    }

    void insertAfter(List &L, address Prec, address P) {
        if (Prec != NULL) {
            next(P) = next(Prec);
            prev(P) = Prec;
            if (next(Prec) != NULL) {
                prev(next(P)) = P;
            } else {
                last(L) = P;
            }
            next(Prec) = P;
        }
    }

    void insertLast(List &L, address P) {
        if (isEmpty(L)) {
            first(L) = P;
            last(L) = P;
        } else {
            prev(P) = last(L);
            next(last(L)) = P;
            last(L) = P;
        }
    }

    void deleteFirst(List &L, address &P) {
        P = first(L);
        if (next(first(L)) != NULL) {
            first(L) = next(first(L));
            prev(first(L)) = NULL;
        } else {
            first(L) = NULL;
            last(L) = NULL;
        }
        delete P;
    }

    void deleteAfter(List &L, address Prec, address &P) {
        P = next(Prec);
        if (P != NULL) {
            next(Prec) = next(P);
            if (next(P) != NULL) {
                prev(next(P)) = Prec;
            } else {
                last(L) = Prec;
            }
            delete P;
        }
    }

    void deleteLast(List &L, address &P) {
        P = last(L);
        if (first(L) != last(L)) {
            last(L) = prev(P);
            next(last(L)) = NULL;
        } else {
            first(L) = NULL;
            last(L) = NULL;
        }
        delete P;
    }

    void concat(List &L1, List &L2, List &L3) {
        createList(L3);
        if (!isEmpty(L1)) {
            first(L3) = first(L1);
            last(L3) = last(L1);
        }
        if (!isEmpty(L2)) {
            if (isEmpty(L3)) {
                first(L3) = first(L2);
                last(L3) = last(L2);
            } else {
                next(last(L3)) = first(L2);
                prev(first(L2)) = last(L3);
                last(L3) = last(L2);
            }
        }
    }

    address findLagu(const string &Judul, const List &L) {
        address P = first(L);
        while (P != NULL) {
            if (info(P).judulLagu == Judul) {
                return P;
            }
            P = next(P);
        }
        return NULL;
    }

    void removeLagu(const string &Judul, List &L) {
        address P = findLagu(Judul, L);
        if (P != NULL) {
            if (P == first(L)) {
                deleteFirst(L, P);
            } else if (P == last(L)) {
                deleteLast(L, P);
            } else {
                deleteAfter(L, prev(P), P);
            }
        }
    }

    void printList(const List &L) {
    if (isEmpty(L)) {
        cout << "List kosong" << endl;
    } else {
        address P = first(L);
        while (P != NULL) {
            cout << "Band      : " << info(P).band << endl;
            cout << "Judul Lagu: " << info(P).judulLagu << endl;
            cout << endl;
            P = next(P);
        }
    }
}
