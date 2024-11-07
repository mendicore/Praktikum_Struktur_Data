#include "Queue.h"

void createQueue(Queue &Q){
    head(Q) = NULL;
    tail(Q) = NULL;
}

bool isEmpty(Queue Q){
    return head(Q) == NULL;
}

ElemQ* createElemQueue(string nama, int usia, string pekerjaan, int nomor_antrean){
    ElemQ *P = new ElemQ;
        info(P).nama = nama;
        info(P).usia = usia;
        info(P).pekerjaan = pekerjaan;
        info(P).prioritas = (usia >= 60 || pekerjaan == "tenaga kesehatan");
        info(P).nomor_antrean = nomor_antrean;
        info(P).kondisi_darurat = false;
        next(P) = NULL;
    return P;
}

void enqueue(Queue &Q, ElemQ *P){
    next(P) == NULL;
    if (isEmpty(Q)) {
        head(Q) = P;
        tail(Q) = P;
    } else if (info(P).prioritas) {
        if (!info(head(Q)).prioritas) {
                next(P) = head(Q);
                head(Q) = P;
        } else {
            ElemQ *temp = head(Q);
            while (next(temp) != NULL && info(next(temp)).prioritas) {
                    temp = next(temp);
            }
            next(P) = next(temp);
            next(temp) = P;
            if (next(P) == NULL) {
                tail(Q) = P;
            }
        }
    } else {
        next(tail(Q)) = P;
        tail(Q) = P;
    }
}

void dequeue(Queue &Q, ElemQ *&P){
    if (isEmpty(Q)) {
        P = NULL;
        cout << "Semua warga telah terlayani." << endl;
    } else { P = head(Q); head(Q) = next(head(Q));
        if (head(Q) == NULL) {
            tail(Q) = NULL;
        }
    next(P) = NULL;
    }
}

ElemQ* front(Queue Q){
    return head(Q);
}


ElemQ* back(Queue Q){
    return tail(Q);
}

int size(Queue Q){
    int count = 0;
    ElemQ *temp = head(Q);
    while (temp != NULL) {
        count++;
        temp = next(temp);
    }
    return count;
}

void printInfo(Queue Q){
    ElemQ *P = head(Q);
    cout << "Daftar Antrean: " << endl;
    if(isEmpty(Q)){
        cout << "Antrean kosong." << endl;
    }
        while (P != NULL) {
            cout << "Nama: " << info(P).nama << endl;
            cout << "Usia: " << info(P).usia << endl;
            cout << "Pekerjaan: " << info(P).pekerjaan << endl;
            cout << "Nomor Antrean: " << info(P).nomor_antrean << endl;
            cout << "Prioritas: " << (info(P).prioritas ? "Ya" : "Tidak") << endl;
            cout << "-------------------------" << endl;
            P = next(P);
        }
    }


void serveQueue(Queue Q) {
    ElemQ *P;
    while (!isEmpty(Q)) {
        dequeue(Q, P);
        if(P != NULL){

            cout << "Nama: " << info(P).nama << endl;
            cout << "Usia: " << info(P).usia << endl;
            cout << "Pekerjaan: " << info(P).pekerjaan << endl;
            cout << "Nomor Antrean: " << info(P).nomor_antrean << endl;
            cout << "Prioritas: " << (info(P).prioritas ? "Ya" : "Tidak") << endl;
            cout << "Vaksinasi berhasil." << endl;
            cout << "-------------------------" << endl;
        delete P;
        }
    }
}

void reassignQueue(Queue Q) {
    ElemQ *temp = head(Q);
    int nomor_antrean = 1;
    while (temp != NULL) {
        info(temp).nomor_antrean = nomor_antrean++;
        temp = next(temp);
    }
}

void checkWaitingTime(Queue Q, int waktu_sekarang) {
    ElemQ *temp = head(Q);
    while (temp != NULL) {
        cout << "Nama: " << info(temp).nama << endl;
        temp = next(temp);
    }
}

void emergencyHandle(Queue Q, int nomor_antrean) {
    ElemQ *temp = head(Q);
    while (temp != NULL) {
        if (info(temp).nomor_antrean == nomor_antrean) {
            info(temp).kondisi_darurat = true;
            info(temp).prioritas = true;
            break;
        }
        temp = next(temp);
    }

    if (temp != NULL && temp != head(Q)) {
        ElemQ *prev = head(Q);
        while (next(prev) != temp) {
            prev = next(prev);
        }
        next(prev) = next(temp);

        if (next(temp) == NULL) {
            tail(Q) = prev;
        }

        next(temp) = head(Q);
        head(Q) = temp;
    }
}

void updatePriority(Queue Q) {
    ElemQ *temp = head(Q);
    while (temp != NULL) {
        if (info(temp).usia >= 60 || info(temp).pekerjaan == "tenaga kesehatan") {
            info(temp).prioritas = true;
        } else {
            info(temp).prioritas = false;
        }
        temp = next(temp);
    }
}

ElemQ* findAndRemove(Queue Q, int nomor_antrean) {
    if (isEmpty(Q)) return NULL;

    if (info(head(Q)).nomor_antrean == nomor_antrean) {
        ElemQ *P = head(Q);
        head(Q) = next(head(Q));
        if (head(Q) == NULL) {
            tail(Q) = NULL;
        }
        next(P) = NULL;
        return P;
    }

    ElemQ *temp = head(Q);
    while (next(temp) != NULL && info(next(temp)).nomor_antrean != nomor_antrean) {
        temp = next(temp);
    }

    if (next(temp) == NULL) return NULL;

    ElemQ *P = next(temp);
    next(temp) = next(P);
    if (next(P) == NULL) {
        tail(Q) = temp;
    }
    next(P) = NULL;
    return P;
}
