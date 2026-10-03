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
// ukuran tetap (tidak pakai push_back) supaya pointer yang dipegang
// Jadwal (Tutor*, Materi*, Ruangan*, Siswa*) tidak menjadi invalid
vector<Tryout> dummyTryout(3);
vector<Tutor> dummyTutor(2);
vector<Siswa> dummySiswa(2);
vector<Materi> dummyMateri(2);
vector<Ruangan> dummyRuangan(2);
vector<Jadwal> dummyJadwal(3);

void dataDummy() {
    // Data Soal -> dimasukkan ke tiap Tryout
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

    // Data Materi
    dummyMateri[0] = Materi("MATPK01", "Trik Cepat Persamaan & Fungsi Kuadrat UTBK");
    dummyMateri[1] = Materi("MATPU01", "Penalaran Logis & Analitis Super Cepat");

    // Data Ruangan
    dummyRuangan[0] = Ruangan("R101", 20);
    dummyRuangan[1] = Ruangan("R202", 50);

    // Data Jadwal
    dummyJadwal[0] = Jadwal(
        "12-10-2026", "15:30", "17:30",
        dummyTutor[0], dummyMateri[1], dummyRuangan[0],
        {&dummySiswa[0], &dummySiswa[1]}
    );
    dummyJadwal[1] = Jadwal(
        "14-10-2026", "13:00", "15:00",
        dummyTutor[1], dummyMateri[0], dummyRuangan[1],
        {&dummySiswa[0]}
    );
    dummyJadwal[2] = Jadwal(
        "16-10-2026", "16:00", "18:00",
        dummyTutor[1], dummyMateri[0], dummyRuangan[0],
        {&dummySiswa[1]}
    );

    // Data Bimbel
    dummyBimbel = Bimbel("Bimbel Magic Academy", "Jl. Diagon Alley No. 9 3/4, Bandung");
    for (Siswa &siswa : dummySiswa) dummyBimbel.addSiswa(&siswa);
    for (Tutor &tutor : dummyTutor) dummyBimbel.addTutor(&tutor);
    for (Materi &materi : dummyMateri) dummyBimbel.addMateri(materi);
    for (Jadwal &jadwal : dummyJadwal) dummyBimbel.addJadwal(jadwal);
    for (Ruangan &ruangan : dummyRuangan) dummyBimbel.addRuangan(ruangan);
}

int main() {
    dataDummy();

    cout << "╔══════════════════════════════════════════════════════════════════════╗" << endl;
    cout << "║                         BIMBEL UTBK ACADEMY                          ║" << endl;
    cout << "║               Sistem Manajemen Akademik & Tryout SNBT                ║" << endl;
    cout << "╚══════════════════════════════════════════════════════════════════════╝" << endl;

    cout << "[ INFORMASI BIMBEL ]" << endl;
    cout << "  • Nama Bimbel   : " << dummyBimbel.getNama() << endl;
    cout << "  • Alamat Kantor : " << dummyBimbel.getAlamat() << endl;
    cout << endl;

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

    cout << "[ DAFTAR TUTOR ]" << endl;
    for (int i = 0; i < (int)dummyTutor.size(); i++) {
        Tutor &tutor = dummyTutor[i];
        cout << "  " << i + 1 << ". " << tutor.getNama() << endl;
        cout << "     ├─ No. HP   : " << tutor.getNoHp() << endl;
        cout << "     ├─ Email    : " << tutor.getEmail() << endl;
        cout << "     ├─ Bidang   : " << tutor.getBidang() << endl;
        cout << "     └─ Status   : " << tutor.getStatus() << endl;
    }
    cout << endl;
    
    cout << "[ DAFTAR SISWA ]" << endl;
    for (int i = 0; i < (int)dummySiswa.size(); i++) {
        Siswa &siswa = dummySiswa[i];
        cout << "  " << i + 1 << ". " << siswa.getNama() << " (Kelas " << siswa.getKelas() << " SMA)" << endl;
        cout << "     ├─ Kontak   : " << siswa.getNoHp() << " | " << siswa.getEmail() << endl;
        cout << "     ├─ Target   : " << siswa.getTargetJurusan() << " - " << siswa.getTargetKampus() << endl;
        cout << "     └─ Tryout   : " << siswa.getListHasilTryout().size() << " Riwayat Tryout Selesai" << endl;
    }
    cout << endl;
    
    cout << "[ DAFTAR MATERI PEMBELAJARAN ]" << endl;
    for (Materi &materi : dummyMateri) {
        cout << "  • [" << materi.getKodeMateri() << "] " << materi.getNamaMateri() << endl;
    }
    cout << endl;
    
    cout << "[ DAFTAR RUANGAN KELAS ]" << endl;
    for (Ruangan &ruangan : dummyRuangan) {
        cout << "  • Kode: " << ruangan.getKodeRuangan() << "   │ Kapasitas: " << ruangan.getKapasitas() << " Kursi" << endl;
    }
    cout << endl;
    
    cout << "[ DAFTAR JADWAL BIMBINGAN AKTIF ]" << endl;
    for (int i = 0; i < (int)dummyJadwal.size(); i++) {
        Jadwal &jadwal = dummyJadwal[i];
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