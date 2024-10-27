#include "SSL.h"

using namespace std;

int main() {
    List L;
    address P, prec;
    bool loop = true;
    int choice, data;

    createList_103022300094(L);

    do {
        printList_103022300094(L);
        cout << endl;
        cout << "------MENU------" << endl;
        cout << "1. InsertFirst" << endl;
        cout << "2. InsertLast" << endl;
        cout << "3. InsertAfter" << endl;
        cout << "4. DeleteFirst" << endl;
        cout << "5. DeleteLast" << endl;
        cout << "6. DeleteAfter" << endl;
        cout << "0. Exit" << endl;
        cout << "----------------" << endl;
        cout << "Pilih: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukan data: ";
                cin >> data;
                P = alokasi_103022300094(data);
                insertFirst_103022300094(L, P);
                break;

            case 2:
                cout << "Masukan data: ";
                cin >> data;
                P = alokasi_103022300094(data);
                insertLast_103022300094(L, P);
                break;

            case 3:
                cout << "Masukan data: ";
                cin >> data;
                P = alokasi_103022300094(data);
                cout << "Setelah data? ";
                cin >> data;
                prec = findElm_103022300094(L, data);
                if (prec != NULL) {
                    insertAfter_103022300094(L, prec, P);
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                break;

            case 4:
                deleteFirst_103022300094(L);
                break;

            case 5:
                deleteLast_103022300094(L);
                break;

            case 6:
                cout << "Setelah data? ";
                cin >> data;
                prec = findElm_103022300094(L, data);
                if (prec != NULL) {
                    deleteAfter_103022300094(L, prec);
                } else {
                    cout << "Data tidak ditemukan!" << endl;
                }
                break;

            case 0:
                loop = false;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
        }

    } while (loop);
}
