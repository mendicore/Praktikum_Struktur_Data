#include "DLL.h"

int main(){
    List L1, L2, L3;
    address P, Q;
    infoType lagu;

    createList(L1);
    createList(L2);
    createList(L3);

    //List1
    lagu.band = "Creepy Nuts";
    lagu.judulLagu = "Otonoke";
    P = createNewElmt(lagu);
    insertFirst(L1, P);
    cout << "-INSERT FIRST List 1" << endl;
    printList(L1);
    cout << endl;

    lagu.band = "Cidergirl";
    lagu.judulLagu = "Cinderella";
    P = createNewElmt(lagu);
    insertFirst(L1, P);
    cout << "-INSERT FIRST List 1" << endl;
    printList(L1);
    cout << endl;

    lagu.band = "KANA-BOON";
    lagu.judulLagu = "Silhouette";
    P = createNewElmt(lagu);
    insertLast(L1, P);
    cout << "-INSERT LAST List 1" << endl;
    printList(L1);
    cout << endl;

    lagu.band = "Kenshi Yonezu";
    lagu.judulLagu = "Lemon";
    P = createNewElmt(lagu);
    Q = findLagu("Cinderella", L1);
    insertAfter(L1, Q, P);
    cout << "-INSERT AFTER List 1" << endl;
    printList(L1);
    cout << endl;
    cout << endl;

    //List2
    lagu.band = "The Peggies";
    lagu.judulLagu = "Centimeter";
    P = createNewElmt(lagu);
    insertLast(L2, P);
    cout << "-INSERT LAST List 2" << endl;
    printList(L2);
    cout << endl;

    lagu.band = "Yoasobi";
    lagu.judulLagu = "Comet";
    P = createNewElmt(lagu);
    insertLast(L2, P);
    cout << "-INSERT LAST List 2" << endl;
    printList(L2);
    cout << endl;

    lagu.band = "YAMA";
    lagu.judulLagu = "Color";
    P = createNewElmt(lagu);
    Q = findLagu("Centimeter", L2);
    insertAfter(L2, Q, P);
    cout << "-INSERT AFTER List 2" << endl;
    printList(L2);
    cout << endl;

    lagu.band = "Fujifabric";
    lagu.judulLagu = "Blue";
    P = createNewElmt(lagu);
    insertFirst(L2, P);
    cout << "-INSERT FIRST List 2" << endl;
    printList(L2);
    cout << endl;

    //Concat
    cout << "-CONCAT/GABUNG LIST 1 & 2" << endl;
    concat(L1, L2, L3);
    printList(L3);
    cout << endl;

    cout << "REMOVE LAGU" << endl;
    removeLagu("Color", L3);
    removeLagu("Lemon", L3);
    removeLagu("Blue", L3);
    printList(L3);
}
