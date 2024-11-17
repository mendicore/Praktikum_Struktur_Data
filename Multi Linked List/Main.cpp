#include "flight.h"

int main() {
    ListJadwal L;
    createJadwal_103022300094(L);

    int n;
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        infoType jadwal;
        getline(cin, jadwal.kode);
        getline(cin, jadwal.jenis);
        getline(cin, jadwal.tanggal);
        getline(cin, jadwal.waktu);
        getline(cin, jadwal.asal);
        getline(cin, jadwal.tujuan);
        cin >> jadwal.kapasitas;
                cin.ignore();

        adr_jadwalP P = createElemenJadwal_103022300094(jadwal);
        insertLastJ_103022300094(L, P);
    }

    cout << "\nJadwal Penerbangan:" << endl;
    showJadwal_103022300094(L);

    deleteFirst_103022300094(L);
    cout << "Jadwal Penerbangan setelah delete: " << endl;
    showJadwal_103022300094(L);

    string dari, ke, tanggal;
    getline(cin, dari);
    getline(cin, ke);
    getline(cin, tanggal);
    cout << endl;
    if (!SearchJ_103022300094(L, dari, ke, tanggal)) {
        cout << "Jadwal penerbangan tidak ditemukan." << endl;
    }

    return 0;
}
