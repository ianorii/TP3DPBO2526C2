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

### Implementasi Konsep

**Inheritance**

Class turunan memakai ulang atribut milik class induknya. `Tutor` dan `Siswa` mewarisi `nama`, `noHp`, dan `email` dari `Person`, sehingga ketiganya tidak perlu ditulis dua kali.

---

**Hierarchical inheritance**

Satu class induk dipakai oleh lebih dari satu class turunan sekaligus. Di sini `Person` menjadi induk untuk `Tutor` dan `Siswa`, jadi atribut umum cukup didefinisikan sekali di `Person`.

---

**Composition**

Hubungan yang tidak terpisahkan, karena objek anak dibuat langsung di dalam class induknya. Dipakai oleh `Siswa` dengan `HasilTryout`, `Tryout` dengan `Soal`, serta `Bimbel` dengan `Materi`, `Ruangan`, dan `Jadwal`. Pada diagram ditandai dengan belah ketupat hitam.

**Aggregation**

---

Hubungan antara keseluruhan dengan bagianya, di mana objek bagian tetap dibuat dan dimiliki pihak lain, jadi objeknya tetap ada walaupun hubungannya sudah dihapus. Dipakai oleh `Bimbel` dengan `Tutor` dan `Siswa`, `HasilTryout` dengan `Tryout`, serta `Jadwal` dengan `Tutor`, `Materi`, `Ruangan`, dan `Siswa`. Pada diagram ditandai dengan belah ketupat kosong.

---

**Abstraction**

`Person` dibuat sebagai class abstract, jadi class ini hanya mendeklarasikan method yang harus dimiliki turunannya tanpa mengurus isinya, dan tidak bisa langsung dibuat objek. Isinya cuma data umum `nama`, `noHp`, dan `email` plus method `getDetail()` tanpa isi, sehingga hanya `Tutor` dan `Siswa` yang boleh diinstansiasi dan keduanya wajib mengisi `getDetail()` sendiri.

---

**Polymorphism**

`Person` hanya menyebut nama method `getDetail()` tanpa isinya, lalu `Tutor` dan `Siswa` mengisi method itu dengan isi yang berbeda. Di `Main`, `getDetail()` dipanggil lewat fungsi `tampilDetail()` yang parameternya bertipe `Person`, jadi satu blok cetak bisa menampilkan daftar tutor maupun daftar siswa — isi yang dijalankan mengikuti class aslinya.

### Penjelasan Tiap Class

**Class Person**

Class induk dari `Tutor` dan `Siswa` yang dibuat abstract sehingga tidak bisa langsung diinstansiasi. Isinya data umum `nama`, `noHp`, dan `email` yang langsung dipakai turunannya, jadi ketiganya tidak perlu ditulis ulang di `Tutor` maupun `Siswa`. Methodnya berupa constructor, setter dan getter ketiga atribut itu, plus `getDetail()` yang hanya berupa nama method tanpa isi.

---

**Class Tutor**

Turunan dari `Person` yang menambah `bidang` dan `status`. Nama, nomor HP, dan email tetap diwarisi dari `Person`, jadi class ini hanya menyimpan bagian khusus seorang tutor. Methodnya berupa setter dan getter `bidang` serta `status`, ditambah `getDetail()` yang mengisi detail seorang tutor.

---

**Class Siswa**

Turunan dari `Person` yang menambah `kelas`, `targetJurusan`, `targetKampus`, dan riwayat skor tryout. Riwayat skor disimpan dengan composition karena objek `HasilTryout` dibuat di dalam `Siswa`. Methodnya berupa setter dan getter ketiga atribut itu, `setHasil()` untuk menambah riwayat, `getListHasilTryout()` untuk mengambil seluruh riwayat, dan `getDetail()` yang mengisi detail siswa beserta daftar skornya.

---

**Class Bimbel**

Class utama yang menjadi wadah seluruh data bimbingan belajar, berisi `nama`, `alamat`, serta daftar siswa, tutor, materi, ruangan, dan jadwal. Hubungannya dengan `Tutor` dan `Siswa` berupa aggregation karena daftarnya dibuat lalu dimasukkan dari luar, sedangkan dengan `Materi`, `Ruangan`, dan `Jadwal` berupa composition karena objeknya dibuat langsung di dalam `Bimbel`. Semua daftar tersebut termasuk array of object. Methodnya dibagi menjadi tiga bagian. Untuk data bimbel tersedia setter dan getter `nama` serta `alamat`. Untuk siswa dan tutor tersedia `setSiswa()` dan `setTutor()` yang menambah satu objek ke daftar, serta `setListSiswa()` dan `setListTutor()` yang mengisi daftar sekaligus. Untuk materi, ruangan, dan jadwal tersedia `setMateri()`, `setRuangan()`, dan `setJadwal()` yang membuat objek baru langsung di dalam `Bimbel`, lalu `getMateri(index)`, `getRuangan(index)`, dan `getJadwal(index)` untuk mengambil satu elemen beserta `getListMateri()`, `getListRuangan()`, dan `getListJadwal()` untuk mengambil seluruh isi daftarnya.

---

**Class Materi**

Berisi `kodeMateri` dan `namaMateri` sebagai identitas tiap pelajaran yang diajarkan. Class ini termasuk bagian dari `Bimbel` lewat composition, jadi materi dibuat dan dimiliki langsung oleh bimbel. Method yang tersedia hanya constructor beserta setter dan getter untuk kedua atribut tersebut.

---

**Class Ruangan**

Berisi `kodeRuangan` dan `kapasitas` untuk menandai tempat belajar beserta daya tampungnya. Sama seperti materi, class ini juga termasuk bagian dari `Bimbel` lewat composition. Method yang tersedia hanya constructor beserta setter dan getter untuk kedua atribut tersebut.

---

**Class Jadwal**

Berisi `tanggal`, `jamMulai`, `jamSelesai`, serta rujukan `Tutor`, `Materi`, `Ruangan`, dan daftar `Siswa` yang hadir. Semuanya berupa aggregation karena jadwal hanya mengikat objek yang sudah dibuat pihak lain, jadi tutor, materi, ruangan, dan peserta tetap ada walaupun jadwalnya dihapus. Daftar siswa di sini berisi peserta yang mengikuti sesi belajar tersebut. Selain setter dan getter untuk tanggal serta jam, ada `setTutor()`, `setMateri()`, dan `setRuangan()` yang menautkan objek dari pihak lain ke jadwal, `setSiswa()` untuk menambah satu peserta, lalu `setListSiswa()` dan `getListSiswa()` untuk mengisi dan mengambil daftar peserta.

---

**Class Tryout**

Berisi `namaTryout` dan daftar soal yang menjadi isi dari paket tryout. Daftar soal dibuat dengan composition, jadi objek `Soal` dibuat di dalam `Tryout` dan selalu melekat pada paket tryoutnya. Selain setter dan getter `namaTryout`, ada `setSoal(kodeSoal, subtest)` yang membuat objek `Soal` baru di dalam paket tryout, dan `getListSoal()` untuk mengambil seluruh soal yang dimiliki tryout tersebut.

---

**Class Soal**

Berisi `kodeSoal` dan `subtest` sebagai isi dari sebuah paket tryout. Tiap soal dibuat langsung oleh `Tryout` yang membawanya, sehingga soal tidak berdiri sendiri di luar paketnya. Method yang tersedia hanya constructor beserta setter dan getter untuk kedua atribut tersebut.

---

**Class HasilTryout**

Berisi `skor` dan `dataTryout` yang menautkan siswa dengan tryout yang diikuti. Hubungannya dengan `Tryout` berupa aggregation karena objek tryout dibuat dan dimiliki pihak lain, sedangkan objeknya sendiri menjadi bagian dari composition milik `Siswa` sebagai riwayat skor. Method yang tersedia berupa setter dan getter `skor`, serta `setTryout()` dan `getTryout()` untuk menghubungkan skor dengan tryout yang diikuti siswa.

### Alur Program

Program berjalan sebagai aplikasi console tanpa input dari pengguna. Urutannya:

1. Program menyiapkan objek `Bimbel` dan tiga list kosong untuk tryout, tutor, dan siswa.
2. Data dummy dibuat, berupa tiga paket tryout beserta soalnya, dua tutor, lalu dua siswa beserta riwayat skor tryout mereka.
3. `Bimbel` kemudian diisi nama, alamat, daftar siswa, tutor, materi, ruangan, dan jadwal. Materi, ruangan, dan jadwal dibuat langsung di dalam `Bimbel`, sedangkan tutor, materi, ruangan, dan peserta sudah dirujuk sebagai isi sesi belajar pada jadwal.
4. Program mencetak informasi bimbel, daftar tryout beserta soalnya, daftar tutor, daftar siswa beserta skor, materi dan ruangan, terakhir daftar jadwal beserta tutor, materi, ruangan, dan pesertanya. Pencetakan daftar tutor dan siswa memakai `getDetail()` lewat fungsi `tampilDetail()`.
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
