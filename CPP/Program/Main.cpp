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

using namespace std;

int main() {
    Tutor a = Tutor("qeya", "087966", "qeya@gmail", "Math", "Freelance");
    Materi mat = Materi("M001", "Aljabar");
    Ruangan kelas = Ruangan("K001", 10);

    vector<Siswa> data(2);
    data[0] = Siswa("Rudi", "076547", "rud@", 10, "IT", "UPI");
    data[1] = Siswa("Rahmat", "576547", "mat@", 12, "Teknik", "ITB");

    Jadwal senin = Jadwal("10-10-2026", "07:00", "10:00", a, mat, kelas, {&data[0], &data[1]});

    cout << senin.getTanggal() << endl;
    cout << senin.getJamMulai() << "-" << senin.getJamSelesai()<< endl;
    cout << (senin.getTutor())->getNama() << endl;
    cout << (senin.getMateri())->getNamaMateri() << endl;

    return 0;
}