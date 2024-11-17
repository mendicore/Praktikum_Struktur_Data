#ifndef FLIGHT_H_INCLUDED
#define FLIGHT_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

#define info(P) (P)->info
#define first(L) (L).first
#define next(P) (P)->next

struct JadwalPenerbangan {
    string kode;
    string jenis;
    string tanggal;
    string waktu;
    string asal;
    string tujuan;
    int kapasitas;
};

typedef JadwalPenerbangan infoType;

struct ElemenJadwal {
    infoType info;
    ElemenJadwal* next;
};

typedef ElemenJadwal* adr_jadwalP;

struct ListJadwal {
    adr_jadwalP first;
};

void createJadwal_103022300094(ListJadwal &L);
adr_jadwalP createElemenJadwal_103022300094(infoType x);
void insertLastJ_103022300094(ListJadwal &L, adr_jadwalP P);
void showJadwal_103022300094(ListJadwal &L);
void deleteFirst_103022300094(ListJadwal &L);
bool SearchJ_103022300094(ListJadwal &L, string dari, string ke, string tanggal);

#endif // FLIGHT_H_INCLUDED
