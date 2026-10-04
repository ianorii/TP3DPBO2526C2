# JANJI
Saya Muhammad Rian Anugrah dengan NIM 2507241 mengerjakan Tugas Praktikum 3 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin

# STRUKTUR FOLDER

```text
TP3DPBO2526C2/
├── README.md
├── Diagram.png
│
├── CPP/
│   ├── Dokumentasi/
│   │   ├── before.png
│   │   ├── after1.png
│   │   └── after2.png
│   └── Program/
│       ├── Main.cpp
│       ├── Bimbel.cpp
│       ├── HasilTryout.cpp
│       ├── Jadwal.cpp
│       ├── Materi.cpp
│       ├── Person.cpp
│       ├── Ruangan.cpp
│       ├── Siswa.cpp
│       ├── Soal.cpp
│       ├── Tryout.cpp
│       └── Tutor.cpp
│
├── Java/
│   ├── Dokumentasi/
│   │   ├── before.png
│   │   ├── after1.png
│   │   └── after2.png
│   └── Program/
│       ├── Main.java
│       ├── Bimbel.java
│       ├── HasilTryout.java
│       ├── Jadwal.java
│       ├── Materi.java
│       ├── Person.java
│       ├── Ruangan.java
│       ├── Siswa.java
│       ├── Soal.java
│       ├── Tryout.java
│       └── Tutor.java
│
└── Python/
    ├── Dokumentasi/
    │   ├── before.png
    │   ├── after1.png
    │   └── after2.png
    └── Program/
        ├── Main.py
        ├── Bimbel.py
        ├── HasilTryout.py
        ├── Jadwal.py
        ├── Materi.py
        ├── Person.py
        ├── Ruangan.py
        ├── Siswa.py
        ├── Soal.py
        ├── Tryout.py
        └── Tutor.py
```

# DESIGN

## Referensi Arrows

<img src="https://github.com/user-attachments/assets/6d8d1897-05c5-4a1e-9deb-ee48abddb549" width=600>

## Diagram

<img src="./Diagram.png" width=600>

## Penjelasan

### Penjelasan Tiap Class

**Class Person**

Class induk dari `Tutor` dan `Siswa`. Isinya data umum yaitu `nama`, `noHp`, dan `email` yang sifatnya bisa langsung dipakai oleh kelas turunannya, jadi ketiga data ini tidak perlu ditulis ulang di `Tutor` maupun `Siswa`.

**Class Tutor**

Turunan dari `Person` yang menambah `bidang` dan `status`, misalnya bidang keahlian tutor dan apakah ia masih aktif. Nama, nomor HP, dan email tetap diwarisi dari `Person`, sehingga class ini hanya perlu menyimpan bagian yang memang khusus untuk seorang tutor.

**Class Siswa**

Turunan dari `Person` yang menambah `kelas`, `targetJurusan`, `targetKampus`, dan riwayat skor tryout. Riwayat skor disimpan dengan composition karena `HasilTryout` dan `Siswa` dianggap satu kesatuan, jadi objek `HasilTryout` dibuat di dalam `Siswa` dan skor tidak berarti tanpa siswa yang memilikinya.

**Class Bimbel**

Class utama yang menjadi wadah seluruh data bimbingan belajar, berisi `nama`, `alamat`, serta daftar siswa, tutor, materi, ruangan, dan jadwal. Hubungannya dengan `Tutor` dan `Siswa` berupa aggregation karena daftarnya dibuat lalu dimasukkan dari luar, sedangkan dengan `Materi`, `Ruangan`, dan `Jadwal` berupa composition karena objeknya dibuat langsung di dalam `Bimbel`. Semua daftar tersebut termasuk array of object.

**Class Materi**

Berisi `kodeMateri` dan `namaMateri` sebagai identitas tiap pelajaran yang diajarkan. Class ini termasuk bagian dari `Bimbel` lewat composition, jadi materi dibuat dan dimiliki langsung oleh bimbel.

**Class Ruangan**

Berisi `kodeRuangan` dan `kapasitas` untuk menandai tempat belajar beserta daya tampungnya. Sama seperti materi, class ini juga termasuk bagian dari `Bimbel` lewat composition.

**Class Jadwal**

Berisi `tanggal`, `jamMulai`, `jamSelesai`, serta rujukan `Tutor`, `Materi`, `Ruangan`, dan daftar `Siswa` yang hadir. Semuanya berupa aggregation karena jadwal hanya mengikat objek yang sudah dibuat pihak lain, jadi tutor, materi, ruangan, dan peserta tetap ada walaupun jadwalnya dihapus. Daftar siswa di sini berisi peserta yang mengikuti sesi belajar tersebut.

**Class Tryout**

Berisi `namaTryout` dan daftar soal yang menjadi isi dari paket tryout. Daftar soal dibuat dengan composition, jadi objek `Soal` dibuat di dalam `Tryout` dan selalu melekat pada paket tryoutnya.

**Class Soal**

Berisi `kodeSoal` dan `subtest` sebagai isi dari sebuah paket tryout. Tiap soal dibuat langsung oleh `Tryout` yang membawanya, sehingga soal tidak berdiri sendiri di luar paketnya.

**Class HasilTryout**

Berisi `skor` dan `dataTryout` yang menautkan siswa dengan tryout yang diikuti. Hubungannya dengan `Tryout` berupa aggregation karena objek tryout dibuat dan dimiliki pihak lain, sedangkan objeknya sendiri menjadi bagian dari composition milik `Siswa` sebagai riwayat skor.

### Alur Program

Program berjalan sebagai aplikasi console tanpa input dari pengguna. Urutannya:

1. Program menyiapkan objek `Bimbel` dan tiga list kosong untuk tryout, tutor, dan siswa.
2. Data dummy dibuat, berupa tiga paket tryout beserta soalnya, dua tutor, lalu dua siswa beserta riwayat skor tryout mereka.
3. `Bimbel` kemudian diisi nama, alamat, daftar siswa, tutor, materi, ruangan, dan jadwal. Materi, ruangan, dan jadwal dibuat langsung di dalam `Bimbel`, sedangkan tutor, materi, ruangan, dan peserta sudah dirujuk sebagai isi sesi belajar pada jadwal.
4. Program mencetak informasi bimbel, daftar tryout beserta soalnya, daftar tutor, daftar siswa beserta skor, materi dan ruangan, terakhir daftar jadwal beserta tutor, materi, ruangan, dan pesertanya.
5. Program selesai setelah seluruh data tercetak.

# DOKUMENTASI

## CPP

### Sebelum data dimasukkan
<img src="./CPP/Dokumentasi/before.png" width=600>

### Sesudah data dimasukkan
<img src="./CPP/Dokumentasi/after1.png" width=600><br>
<img src="./CPP/Dokumentasi/after2.png" width=600>

## Python

### Sebelum data dimasukkan
<img src="./Python/Dokumentasi/before.png" width=600>

### Sesudah data dimasukkan
<img src="./Python/Dokumentasi/after1.png" width=600><br>
<img src="./Python/Dokumentasi/after2.png" width=600>

## Java

### Sebelum data dimasukkan
<img src="./Java/Dokumentasi/before.png" width=600>

### Sesudah data dimasukkan
<img src="./Java/Dokumentasi/after1.png" width=600><br>
<img src="./Java/Dokumentasi/after2.png" width=600>
