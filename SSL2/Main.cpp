#include "SSL.h"

using namespace std;

int main(){
    List L;
    createList_103022300094(L);
    address P;
    int choice, x, n;

    do {
        cout << "-------------MENU-------------" << endl;
        cout << "1. Menambah N data baru" << endl;
        cout << "2. Menampilkan semua data" << endl;
        cout << "3. Mencari nilai terkecil" << endl;
        cout << "4. Menyisipkan data ke tengah" << endl;
        cout << "0. Exit" << endl;
        cout << "------------------------------" << endl;
        cout << "Pilih menu: ";
        cin >> choice;
        cout << endl;

        switch (choice) {
            case 1:
                cout << "Masukkan jumlah data yang ingin ditambahkan: ";
                cin >> n;
                for (int i = 0; i < n; i++) {
                    cout << "Masukkan data ke-" << (i + 1) << ": ";
                    cin >> x;
                    P = createNewElement(x);
                    insertLast_103022300094(L, P);
                }
                cout << endl;
                break;

            case 2:
                cout << "-----Data dalam list-----" << endl;
                showAllData_103022300094(L);
                break;

            case 3:
                if (isEmpty_103022300094(L)) {
                    cout << "List kosong." << endl;
                } else {
                    address min = findMin_103022300094(L);
                    cout << "Nilai terkecil: " << info(min) << endl;
                    cout << "Alamat dari List dengan nilai terkecil: " << &min << endl;
                    cout << endl;
                }
                break;

            case 4:
                cout << "Masukkan nilai untuk disisipkan di tengah: ";
                cin >> x;
                P = createNewElement(x);
                insertMiddle_103022300094(L, P);
                break;

            case 0:
                cout << "Keluar dari program." << endl;
                break;

            default:
                cout << "Pilihan tidak valid." << endl;
                break;

        }
    } while (choice != 0);

    return 0;
}

