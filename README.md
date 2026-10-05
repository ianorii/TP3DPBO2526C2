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

---

**Aggregation**

Hubungan antara keseluruhan dengan bagianya, di mana objek bagian tetap dibuat dan dimiliki pihak lain, jadi objeknya tetap ada walaupun hubungannya sudah dihapus. Dipakai oleh `Bimbel` dengan `Tutor` dan `Siswa`, `HasilTryout` dengan `Tryout`, serta `Jadwal` dengan `Tutor`, `Materi`, `Ruangan`, dan `Siswa`. Pada diagram ditandai dengan belah ketupat kosong.

---

**Abstraction**

`Person` dibuat sebagai class abstract, jadi hanya berisi data umum nama, nomor HP, dan email beserta satu method yang sengaja tidak diisi. Karena itu `Person` tidak bisa langsung dibuat objek, hanya `Tutor` dan `Siswa` yang boleh, dan keduanya wajib mengisi method tersebut sendiri.

---

**Polymorphism**

`Tutor` dan `Siswa` mengisi method yang sama dengan isi yang berbeda. Saat mencetak daftar tutor dan siswa, `Main` cukup memanggil method itu satu kali lewat tipe `Person`, dan hasilnya otomatis mengikuti isi class masing-masing objek.

### Penjelasan Tiap Class

**Class Person**

Class induk dari `Tutor` dan `Siswa` yang dibuat abstract sehingga tidak bisa langsung diinstansiasi. Berisi data umum nama, nomor HP, dan email yang langsung dipakai turunannya, jadi ketiganya tidak perlu ditulis ulang di `Tutor` maupun `Siswa`. Di class ini juga ada method tampilan yang belum diisi, yang wajib diisi oleh kedua class turunannya.

---

**Class Tutor**

Turunan dari `Person` yang menambah bidang keahlian dan status tutor. Nama, nomor HP, dan email tetap diwarisi dari `Person`, jadi class ini hanya menyimpan bagian khusus seorang tutor. Method tampilannya mengeluarkan data seorang tutor lengkap dengan bidang dan statusnya.

---

**Class Siswa**

Turunan dari `Person` yang menambah kelas, target jurusan, target kampus, dan riwayat skor tryout. Riwayat skor disimpan dengan composition, jadi skor baru dibuat langsung di dalam `Siswa` dan tidak berarti tanpa siswa pemiliknya. Method tampilannya mengeluarkan data siswa beserta seluruh daftar skor tryoutnya.

---

**Class Bimbel**

Class utama yang menjadi wadah seluruh data bimbingan belajar, berisi nama, alamat, serta daftar siswa, tutor, materi, ruangan, dan jadwal. Hubungannya dengan `Tutor` dan `Siswa` berupa aggregation karena daftarnya dibuat lalu dimasukkan dari luar, sedangkan dengan `Materi`, `Ruangan`, dan `Jadwal` berupa composition karena objeknya dibuat langsung di dalam `Bimbel`. Semua daftar tersebut termasuk array of object. Nama dan alamat bimbel bisa diubah dan dibaca, siswa serta tutor bisa dimasukkan satu per satu maupun sekaligus, sedangkan materi, ruangan, dan jadwal dibuat langsung di dalam `Bimbel` lalu bisa diambil satu per satu maupun seluruh daftarnya.

---

**Class Materi**

Berisi kode materi dan nama materi sebagai identitas tiap pelajaran yang diajarkan. Class ini termasuk bagian dari `Bimbel` lewat composition, jadi materi dibuat dan dimiliki langsung oleh bimbel.

---

**Class Ruangan**

Berisi kode ruangan dan kapasitasnya untuk menandai tempat belajar beserta daya tampungnya. Sama seperti materi, class ini juga termasuk bagian dari `Bimbel` lewat composition.

---

**Class Jadwal**

Berisi tanggal, jam mulai, jam selesai, serta tutor, materi, ruangan, dan daftar siswa yang hadir. Semuanya berupa aggregation karena jadwal hanya mengikat objek yang sudah dibuat pihak lain, jadi tutor, materi, ruangan, dan peserta tetap ada walaupun jadwalnya dihapus. Daftar siswa di sini berisi peserta yang mengikuti sesi belajar tersebut. Jadwal menyimpan rujukan ke tutor, materi, dan ruangan, lalu menambah peserta satu per satu maupun sekaligus.

---

**Class Tryout**

Berisi nama paket tryout dan daftar soal yang menjadi isinya. Daftar soal dibuat dengan composition, jadi soal diinstansiasi di dalam class `Tryout` dan selalu melekat pada paket tryoutnya. Satu paket tryout bisa memuat beberapa soal dengan subtest yang berbeda.

---

**Class Soal**

Berisi kode soal dan subtest sebagai isi dari sebuah paket tryout. Tiap soal dibuat langsung oleh `Tryout` yang membawanya, sehingga soal tidak berdiri sendiri di luar paketnya.

---

**Class HasilTryout**

Berisi skor yang didapat siswa beserta tryout yang diikuti sebagai penghubungnya. Hubungannya dengan `Tryout` berupa aggregation karena objek tryout dibuat dan dimiliki pihak lain, sedangkan objeknya sendiri menjadi bagian dari composition milik `Siswa` sebagai riwayat skor.

### Alur Program

Program berjalan sebagai aplikasi console tanpa input dari pengguna. Urutannya:

1. Program menyiapkan objek `Bimbel` dan tiga list kosong untuk tryout, tutor, dan siswa.
2. Data dummy dibuat, berupa tiga paket tryout beserta soalnya, dua tutor, lalu dua siswa beserta riwayat skor tryout mereka.
3. `Bimbel` kemudian diisi nama, alamat, daftar siswa, tutor, materi, ruangan, dan jadwal. Materi, ruangan, dan jadwal dibuat langsung di dalam `Bimbel`, sedangkan tutor, materi, ruangan, dan peserta sudah dirujuk sebagai isi sesi belajar pada jadwal.
4. Program mencetak informasi bimbel, daftar tryout beserta soalnya, daftar tutor, daftar siswa beserta skor, materi dan ruangan, terakhir daftar jadwal beserta tutor, materi, ruangan, dan pesertanya. Pencetakan daftar tutor dan siswa memakai satu cara yang sama, jadi format cetaknya cukup ditulis sekali.
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
