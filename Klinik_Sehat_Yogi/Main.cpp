#include "Queue.h"

int main(){
    Queue Q;
    createQueue(Q);

    ElemQ* P1 = createElemQueue("John Doe", 65, "lansia", 1);
    ElemQ* P2 = createElemQueue("Alice", 30, "tenaga kesehatan", 2);
    ElemQ* P3 = createElemQueue("Bob", 25, "pekerja", 3);
    ElemQ* P4 = createElemQueue("Charlie", 70, "pensiunan", 4);
    ElemQ* P5 = createElemQueue("David", 28, "pekerja", 5);

    enqueue(Q, P1);
    enqueue(Q, P2);
    enqueue(Q, P3);
    enqueue(Q, P4);
    enqueue(Q, P5);

    cout << "Isi antrean awal:" << endl;
    printInfo(Q);
    cout << endl;

    cout << "Melakukan pelayanan pada antrean: " << endl;
    serveQueue(Q);
    cout << endl;

    ElemQ* P6 = createElemQueue("Edward", 22, "pekerja", 6);
    enqueue(Q, P6);

    cout << "Mengatur ulang antrean berdasarkan prioritas:" << endl;
    reassignQueue(Q);
    printInfo(Q);
    cout << endl;

    cout << "Memeriksa waktu tunggu dan mengubah prioritas jika lebih dari 2 jam:" << endl;
    checkWaitingTime(Q, 130);
    printInfo(Q);
    cout << endl;

    cout << "Menangani kondisi darurat untuk warga dengan nomor antrean 5:" << endl;
    emergencyHandle(Q, 5);
    printInfo(Q);

    cout << "Menghapus warga dengan nomor antrean 3:" << endl;
    ElemQ* removedElem = findAndRemove(Q, 3);
    if (removedElem) {
        cout << "Warga yang dihapus: " << info(removedElem).nama << endl;
    }
    printInfo(Q);

    return 0;
}
