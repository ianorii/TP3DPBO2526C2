from Soal import Soal
from Tryout import Tryout
from HasilTryout import HasilTryout
from Person import Person
from Tutor import Tutor
from Siswa import Siswa

from Ruangan import Ruangan
from Materi import Materi
from Jadwal import Jadwal

from Bimbel import Bimbel

dummyBimbel = Bimbel()

# list of object
dummyTryout = []
dummyTutor = []
dummySiswa = []

def dataDummy():
    global dummyBimbel

    # Resize list
    dummyTryout[:] = [Tryout(), Tryout(), Tryout()]
    dummyTutor[:] = [Tutor(), Tutor()]
    dummySiswa[:] = [Siswa(), Siswa()]

    # Data Soal : dimasukkan ke tiap Tryout
    dummyTryout[0] = Tryout("TO Diagnostic Test UTBK SNBT")
    dummyTryout[0].setSoal("PU001", "Penalaran Umum")
    dummyTryout[0].setSoal("PK001", "Pengetahuan Kuantitatif")

    dummyTryout[1] = Tryout("TO Akbar UTBK SNBT - Gelombang 1")
    dummyTryout[1].setSoal("PU001", "Penalaran Umum")
    dummyTryout[1].setSoal("PK001", "Pengetahuan Kuantitatif")
    dummyTryout[1].setSoal("PBM001", "Pemahaman Bacaan dan Menulis")
    dummyTryout[1].setSoal("PPU001", "Pengetahuan dan Pemahaman Umum")

    dummyTryout[2] = Tryout("TO Final Sprint PTN Impian")
    dummyTryout[2].setSoal("PU001", "Penalaran Umum")
    dummyTryout[2].setSoal("PK001", "Pengetahuan Kuantitatif")
    dummyTryout[2].setSoal("PBM001", "Pemahaman Bacaan dan Menulis")
    dummyTryout[2].setSoal("PPU001", "Pengetahuan dan Pemahaman Umum")
    dummyTryout[2].setSoal("LB001", "Literasi dalam Bahasa Indonesia")

    # Data Tutor
    dummyTutor[0] = Tutor("Prof. Albus Dumbledore", "081111111001", "albus.dumbledore@hogwarts.edu", "Matematika", "Tetap")
    dummyTutor[1] = Tutor("Severus Snape", "081111111002", "severus.snape@hogwarts.edu", "Bahasa Indonesia", "Freelance")

    # Data Siswa + HasilTryout miliknya
    dummySiswa[0] = Siswa(
        "Chihiro Ogino", "083333333001", "chihiro.ogino@ghibli.jp", 12, "Arsitektur Lanskap", "Universitas Gadjah Mada"
    )
    dummySiswa[0].setHasil(650.00, dummyTryout[0])
    dummySiswa[0].setHasil(725.50, dummyTryout[1])
    dummySiswa[0].setHasil(758.10, dummyTryout[2])

    dummySiswa[1] = Siswa(
        "Howl Jenkins", "083333333002", "howl.jenkins@ghibli.jp", 12, "Desain Komunikasi Visual", "Institut Teknologi Bandung"
    )
    dummySiswa[1].setHasil(690.40, dummyTryout[1])

    # Data Bimbel
    dummyBimbel = Bimbel("Bimbel Magic Academy", "Jl. Diagon Alley No. 9 3/4, Bandung")
    dummyBimbel.setListSiswa(dummySiswa)
    dummyBimbel.setListTutor(dummyTutor)

    # Data Materi -> langsung diinstansiasi di dalam Bimbel
    dummyBimbel.setMateri("MATPK01", "Trik Cepat Persamaan & Fungsi Kuadrat UTBK")
    dummyBimbel.setMateri("MATPU01", "Literasi & Tata Bahasa")

    # Data Ruangan -> langsung diinstansiasi di dalam Bimbel
    dummyBimbel.setRuangan("R101", 20)
    dummyBimbel.setRuangan("R202", 50)

    # Data Jadwal -> langsung diinstansiasi di dalam Bimbel
    # materi disesuaikan dengan bidang tutor pengajarnya
    dummyBimbel.setJadwal(                                              # Tutor 1 (Matematika)
        "12-10-2026", "15:30", "17:30",
        dummyTutor[0], dummyBimbel.getMateri(0), dummyBimbel.getRuangan(0),
        [dummySiswa[0], dummySiswa[1]]
    )
    dummyBimbel.setJadwal(                                              # Tutor 2 (Bahasa Indonesia)
        "14-10-2026", "13:00", "15:00",
        dummyTutor[1], dummyBimbel.getMateri(1), dummyBimbel.getRuangan(1),
        [dummySiswa[0]]
    )
    dummyBimbel.setJadwal(                                              # Tutor 2 (Bahasa Indonesia)
        "16-10-2026", "16:00", "18:00",
        dummyTutor[1], dummyBimbel.getMateri(1), dummyBimbel.getRuangan(0),
        [dummySiswa[1]]
    )

def main():
    # isi data dummy
    dataDummy()

    print("╔══════════════════════════════════════════════════════════════════════╗")
    print("║                         BIMBEL UTBK ACADEMY                          ║")
    print("║               Sistem Manajemen Akademik & Tryout SNBT                ║")
    print("╚══════════════════════════════════════════════════════════════════════╝")

    # data bimbel
    print("[ INFORMASI BIMBEL ]")
    print("  • Nama Bimbel   : " + dummyBimbel.getNama())
    print("  • Alamat Kantor : " + dummyBimbel.getAlamat())
    print()

    # data tryout
    print("[ DAFTAR PAKET TRYOUT ]")
    for i in range(len(dummyTryout)):
        tryout = dummyTryout[i]
        print("  " + str(i + 1) + ". " + tryout.getNamaTryout())
        print("     └─ Daftar Soal   :")
        for soal in tryout.getListSoal():
            print("        - [" + soal.getKodeSoal() + "] " + soal.getSubtest())
    print()

    # data tutor
    print("[ DAFTAR TUTOR ]")
    for i in range(len(dummyTutor)):
        tutor = dummyTutor[i]
        print("  " + str(i + 1) + ". " + tutor.getNama())
        print("     ├─ No. HP   : " + tutor.getNoHp())
        print("     ├─ Email    : " + tutor.getEmail())
        print("     ├─ Bidang   : " + tutor.getBidang())
        print("     └─ Status   : " + tutor.getStatus())
    print()

    # data siswa
    print("[ DAFTAR SISWA ]")
    for i in range(len(dummySiswa)):
        siswa = dummySiswa[i]
        riwayat = list(siswa.getListHasilTryout())
        lebarNama = 0
        for hasil in riwayat:
            lebarNama = max(lebarNama, len(hasil.getTryout().getNamaTryout()))

        print("  " + str(i + 1) + ". " + siswa.getNama() + " (Kelas " + str(siswa.getKelas()) + " SMA)")
        print("     ├─ Kontak   : " + siswa.getNoHp() + " | " + siswa.getEmail())
        print("     ├─ Target   : " + siswa.getTargetJurusan() + " - " + siswa.getTargetKampus())
        print("     └─ Tryout   :")
        for hasil in riwayat:
            # left << setw(lebarNama) -> rata kiri, ditambah spasi sampai lebarNama
            print("        - " + hasil.getTryout().getNamaTryout().ljust(lebarNama)
                  + "   (Skor : " + format(hasil.getSkor(), ".2f") + ")")
    print()

    # data materi
    print("[ DAFTAR MATERI PEMBELAJARAN ]")
    for materi in dummyBimbel.getListMateri():
        print("  • [" + materi.getKodeMateri() + "] " + materi.getNamaMateri())
    print()

    # data ruang kelas
    print("[ DAFTAR RUANGAN KELAS ]")
    for ruangan in dummyBimbel.getListRuangan():
        print("  • Kode: " + ruangan.getKodeRuangan() + "   │ Kapasitas: " + str(ruangan.getKapasitas()) + " Kursi")
    print()

    # data jadwal
    print("[ DAFTAR JADWAL BIMBINGAN AKTIF ]")
    listJadwal = dummyBimbel.getListJadwal()
    for i in range(len(listJadwal)):
        jadwal = listJadwal[i]
        print("  • Sesi " + str(i + 1) + " : " + jadwal.getTanggal()
        + " (" + jadwal.getJamMulai() + " - " + jadwal.getJamSelesai() + ")")
        print("    ├─ Modul Pembelajaran : " + jadwal.getMateri().getNamaMateri())
        print("    ├─ Tutor Pengajar     : " + jadwal.getTutor().getNama())
        print("    ├─ Lokasi Ruangan     : " + jadwal.getRuangan().getKodeRuangan())
        print("    └─ Peserta Hadir      :")
        for peserta in jadwal.getListSiswa():
            print("       - " + peserta.getNama())
    print()

    return 0

if __name__ == "__main__":
    main()  # jalankan main
