#include<bits/stdc++.h>
#include "Soal.cpp"
#include "Tryout.cpp"
#include "HasilTryout.cpp"
#include "Person.cpp"
#include "Tutor.cpp"
#include "Siswa.cpp"

#include "Ruangan.cpp"
#include "Materi.cpp"
#include "Jadwal.cpp"

#include "Bimbel.cpp"

using namespace std;

Bimbel dummyBimbel;

// list of object
vector<Tryout> dummyTryout;
vector<Tutor> dummyTutor;
vector<Siswa> dummySiswa;

void dataDummy() {
    // Resize vector
    dummyTryout.resize(3);
    dummyTutor.resize(2);
    dummySiswa.resize(2);

    // Data Soal : dimasukkan ke tiap Tryout
    dummyTryout[0] = Tryout("TO Diagnostic Test UTBK SNBT");
    dummyTryout[0].setSoal("PU001", "Penalaran Umum");
    dummyTryout[0].setSoal("PK001", "Pengetahuan Kuantitatif");

    dummyTryout[1] = Tryout("TO Akbar UTBK SNBT - Gelombang 1");
    dummyTryout[1].setSoal("PU001", "Penalaran Umum");
    dummyTryout[1].setSoal("PK001", "Pengetahuan Kuantitatif");
    dummyTryout[1].setSoal("PBM001", "Pemahaman Bacaan dan Menulis");
    dummyTryout[1].setSoal("PPU001", "Pengetahuan dan Pemahaman Umum");

    dummyTryout[2] = Tryout("TO Final Sprint PTN Impian");
    dummyTryout[2].setSoal("PU001", "Penalaran Umum");
    dummyTryout[2].setSoal("PK001", "Pengetahuan Kuantitatif");
    dummyTryout[2].setSoal("PBM001", "Pemahaman Bacaan dan Menulis");
    dummyTryout[2].setSoal("PPU001", "Pengetahuan dan Pemahaman Umum");
    dummyTryout[2].setSoal("LB001", "Literasi dalam Bahasa Indonesia");

    // Data Tutor
    dummyTutor[0] = Tutor("Prof. Albus Dumbledore", "081111111001", "albus.dumbledore@hogwarts.edu", "Matematika", "Tetap");
    dummyTutor[1] = Tutor("Severus Snape", "081111111002", "severus.snape@hogwarts.edu", "Bahasa Indonesia", "Freelance");

    // Data Siswa + HasilTryout miliknya
    dummySiswa[0] = Siswa(
        "Chihiro Ogino", "083333333001", "chihiro.ogino@ghibli.jp", 12, "Arsitektur Lanskap", "Universitas Gadjah Mada"
    );
    dummySiswa[0].setHasil(650.00, dummyTryout[0]);
    dummySiswa[0].setHasil(725.50, dummyTryout[1]);
    dummySiswa[0].setHasil(758.10, dummyTryout[2]);

    dummySiswa[1] = Siswa(
        "Howl Jenkins", "083333333002", "howl.jenkins@ghibli.jp", 12, "Desain Komunikasi Visual", "Institut Teknologi Bandung"
    );
    dummySiswa[1].setHasil(690.40, dummyTryout[1]);

    // Data Bimbel
    dummyBimbel = Bimbel("Bimbel Magic Academy", "Jl. Diagon Alley No. 9 3/4, Bandung");
    dummyBimbel.setListSiswa(dummySiswa);
    dummyBimbel.setListTutor(dummyTutor);

    // Data Materi -> langsung diinstansiasi di dalam Bimbel
    dummyBimbel.setMateri("MATPK01", "Trik Cepat Persamaan & Fungsi Kuadrat UTBK");
    dummyBimbel.setMateri("MATPU01", "Literasi & Tata Bahasa");

    // Data Ruangan -> langsung diinstansiasi di dalam Bimbel
    dummyBimbel.setRuangan("R101", 20);
    dummyBimbel.setRuangan("R202", 50);

    // Data Jadwal -> langsung diinstansiasi di dalam Bimbel
    dummyBimbel.setJadwal(                                              // Tutor 1 (Matematika)
        "12-10-2026", "15:30", "17:30",
        dummyTutor[0], dummyBimbel.getMateri(0), dummyBimbel.getRuangan(0),
        {&dummySiswa[0], &dummySiswa[1]}
    );
    dummyBimbel.setJadwal(                                              // Tutor 2 (Bahasa Indonesia)
        "14-10-2026", "13:00", "15:00",
        dummyTutor[1], dummyBimbel.getMateri(1), dummyBimbel.getRuangan(1),
        {&dummySiswa[0]}
    );
    dummyBimbel.setJadwal(                                              // Tutor 2 (Bahasa Indonesia)
        "16-10-2026", "16:00", "18:00",
        dummyTutor[1], dummyBimbel.getMateri(1), dummyBimbel.getRuangan(0),
        {&dummySiswa[1]}
    );
}

// cetak detail milik objek Person.
void tampilDetail(Person &person, int no) {
    vector<string> detail = person.getDetail();
    cout << "  " << no << ". " << detail[0] << endl;
    for (int i = 1; i < (int)detail.size(); i++) {
        cout << detail[i] << endl;
    }
}

// jalankan main
int main() {
    // isi data dummy
    dataDummy();

    cout << "╔══════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║                         BIMBEL UTBK ACADEMY                          ║" << endl;
    cout << "║               Sistem Manajemen Akademik & Tryout SNBT                ║" << endl;
    cout << "╚══════════════════════════════════════════════════════════════════════╝" << endl;

    // data bimbel
    cout << "[ INFORMASI BIMBEL ]" << endl;
    cout << "  • Nama Bimbel   : " << dummyBimbel.getNama() << endl;
    cout << "  • Alamat Kantor : " << dummyBimbel.getAlamat() << endl;
    cout << endl;

    // data tryout
    cout << "[ DAFTAR PAKET TRYOUT ]" << endl;
    for (int i = 0; i < (int)dummyTryout.size(); i++) {
        Tryout &tryout = dummyTryout[i];
        cout << "  " << i + 1 << ". " << tryout.getNamaTryout() << endl;
        cout << "     └─ Daftar Soal   :" << endl;
        for (Soal soal : tryout.getListSoal()) {
            cout << "        - [" << soal.getKodeSoal() << "] " << soal.getSubtest() << endl;
        }
    }
    cout << endl;

    // data tutor
    cout << "[ DAFTAR TUTOR ]" << endl;
    for (int i = 0; i < (int)dummyTutor.size(); i++) {
        tampilDetail(dummyTutor[i], i + 1);
    }
    cout << endl;
    
    // data siswa
    cout << "[ DAFTAR SISWA ]" << endl;
    for (int i = 0; i < (int)dummySiswa.size(); i++) {
        tampilDetail(dummySiswa[i], i + 1);
    }
    cout << endl;
    
    // data materi
    cout << "[ DAFTAR MATERI PEMBELAJARAN ]" << endl;
    for (const Materi &materi : dummyBimbel.getListMateri()) {
        cout << "  • [" << materi.getKodeMateri() << "] " << materi.getNamaMateri() << endl;
    }
    cout << endl;
    
    // data ruang kelas
    cout << "[ DAFTAR RUANGAN KELAS ]" << endl;
    for (const Ruangan &ruangan : dummyBimbel.getListRuangan()) {
        cout << "  • Kode: " << ruangan.getKodeRuangan() << "   │ Kapasitas: " << ruangan.getKapasitas() << " Kursi" << endl;
    }
    cout << endl;
    
    // data jadwal
    cout << "[ DAFTAR JADWAL BIMBINGAN AKTIF ]" << endl;
    const vector<Jadwal> &listJadwal = dummyBimbel.getListJadwal();
    for (int i = 0; i < (int)listJadwal.size(); i++) {
        const Jadwal &jadwal = listJadwal[i];
        cout << "  • Sesi " << i + 1 << " : " << jadwal.getTanggal()
        << " (" << jadwal.getJamMulai() << " - " << jadwal.getJamSelesai() << ")" << endl;
        cout << "    ├─ Modul Pembelajaran : " << jadwal.getMateri()->getNamaMateri() << endl;
        cout << "    ├─ Tutor Pengajar     : " << jadwal.getTutor()->getNama() << endl;
        cout << "    ├─ Lokasi Ruangan     : " << jadwal.getRuangan()->getKodeRuangan() << endl;
        cout << "    └─ Peserta Hadir      :" << endl;
        for (Siswa *peserta : jadwal.getListSiswa()) {
            cout << "       - " << peserta->getNama() << endl;
        }
    }
    cout << endl;

    return 0;
}