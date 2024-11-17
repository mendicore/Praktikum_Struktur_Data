#include "flight.h"

void createJadwal_103022300094(ListJadwal &L) {
    first(L) = NULL;
}

adr_jadwalP createElemenJadwal_103022300094(infoType x) {
    adr_jadwalP P = new ElemenJadwal;
    info(P) = x;
    next(P) = NULL;
    return P;
}

void insertLastJ_103022300094(ListJadwal &L, adr_jadwalP P) {
    if (first(L) == NULL) {
        first(L) = P;
    } else {
        adr_jadwalP Q = first(L);
        while (next(Q) != NULL) {
            Q = next(Q);
        }
        next(Q) = P;
    }
}

void showJadwal_103022300094(ListJadwal &L) {
    adr_jadwalP P = first(L);
    while (P != NULL) {
        cout << info(P).kode << endl;
        cout << info(P).asal << endl;
        cout << info(P).tujuan << endl;
        cout << info(P).tanggal << endl;
        cout << info(P).kapasitas << endl;
        cout << endl;
        P = next(P);
    }
}

void deleteFirst_103022300094(ListJadwal &L) {
    adr_jadwalP P = first(L);
    first(L) = next(P);
    next(P) = NULL;
    delete P;
}

bool SearchJ_103022300094(ListJadwal &L, string dari, string ke, string tanggal) {
    adr_jadwalP P = first(L);
    while (P != NULL) {
        if (info(P).asal == dari && info(P).tujuan == ke && info(P).tanggal == tanggal) {
            cout << "Jadwal yang dicari: " << endl;
            cout << info(P).kode << endl;
            cout << info(P).asal << endl;
            cout << info(P).tujuan << endl;
            cout << info(P).tanggal << endl;
            cout << info(P).kapasitas << endl;
            cout << endl;
            return true;
        }
        P = next(P);
    }
    cout << "Penerbangan tidak ditemukan." << endl;
    return false;
}
