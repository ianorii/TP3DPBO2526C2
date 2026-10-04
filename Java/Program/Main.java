import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Locale;

public class Main {
    static Bimbel dummyBimbel = new Bimbel();

    // list of object
    static List<Tryout> dummyTryout = new ArrayList<>();
    static List<Tutor> dummyTutor = new ArrayList<>();
    static List<Siswa> dummySiswa = new ArrayList<>();

    static void dataDummy() {
        // Resize list
        dummyTryout = new ArrayList<>(Arrays.asList(new Tryout(), new Tryout(), new Tryout()));
        dummyTutor = new ArrayList<>(Arrays.asList(new Tutor(), new Tutor()));
        dummySiswa = new ArrayList<>(Arrays.asList(new Siswa(), new Siswa()));

        // Data Soal : dimasukkan ke tiap Tryout
        dummyTryout.set(0, new Tryout("TO Diagnostic Test UTBK SNBT"));
        dummyTryout.get(0).setSoal("PU001", "Penalaran Umum");
        dummyTryout.get(0).setSoal("PK001", "Pengetahuan Kuantitatif");

        dummyTryout.set(1, new Tryout("TO Akbar UTBK SNBT - Gelombang 1"));
        dummyTryout.get(1).setSoal("PU001", "Penalaran Umum");
        dummyTryout.get(1).setSoal("PK001", "Pengetahuan Kuantitatif");
        dummyTryout.get(1).setSoal("PBM001", "Pemahaman Bacaan dan Menulis");
        dummyTryout.get(1).setSoal("PPU001", "Pengetahuan dan Pemahaman Umum");

        dummyTryout.set(2, new Tryout("TO Final Sprint PTN Impian"));
        dummyTryout.get(2).setSoal("PU001", "Penalaran Umum");
        dummyTryout.get(2).setSoal("PK001", "Pengetahuan Kuantitatif");
        dummyTryout.get(2).setSoal("PBM001", "Pemahaman Bacaan dan Menulis");
        dummyTryout.get(2).setSoal("PPU001", "Pengetahuan dan Pemahaman Umum");
        dummyTryout.get(2).setSoal("LB001", "Literasi dalam Bahasa Indonesia");

        // Data Tutor
        dummyTutor.set(0, new Tutor("Prof. Albus Dumbledore", "081111111001", "albus.dumbledore@hogwarts.edu", "Matematika", "Tetap"));
        dummyTutor.set(1, new Tutor("Severus Snape", "081111111002", "severus.snape@hogwarts.edu", "Bahasa Indonesia", "Freelance"));

        // Data Siswa + HasilTryout miliknya
        dummySiswa.set(0, new Siswa(
            "Chihiro Ogino", "083333333001", "chihiro.ogino@ghibli.jp", 12, "Arsitektur Lanskap", "Universitas Gadjah Mada"
        ));
        dummySiswa.get(0).setHasil(650.00f, dummyTryout.get(0));
        dummySiswa.get(0).setHasil(725.50f, dummyTryout.get(1));
        dummySiswa.get(0).setHasil(758.10f, dummyTryout.get(2));

        dummySiswa.set(1, new Siswa(
            "Howl Jenkins", "083333333002", "howl.jenkins@ghibli.jp", 12, "Desain Komunikasi Visual", "Institut Teknologi Bandung"
        ));
        dummySiswa.get(1).setHasil(690.40f, dummyTryout.get(1));

        // Data Bimbel
        dummyBimbel = new Bimbel("Bimbel Magic Academy", "Jl. Diagon Alley No. 9 3/4, Bandung");
        dummyBimbel.setListSiswa(dummySiswa);
        dummyBimbel.setListTutor(dummyTutor);

        // Data Materi -> langsung diinstansiasi di dalam Bimbel
        dummyBimbel.setMateri("MATPK01", "Trik Cepat Persamaan & Fungsi Kuadrat UTBK");
        dummyBimbel.setMateri("MATPU01", "Literasi & Tata Bahasa");

        // Data Ruangan -> langsung diinstansiasi di dalam Bimbel
        dummyBimbel.setRuangan("R101", 20);
        dummyBimbel.setRuangan("R202", 50);

        // Data Jadwal -> langsung diinstansiasi di dalam Bimbel
        // materi disesuaikan dengan bidang tutor pengajarnya
        dummyBimbel.setJadwal(                                              // Tutor 1 (Matematika)
            "12-10-2026", "15:30", "17:30",
            dummyTutor.get(0), dummyBimbel.getMateri(0), dummyBimbel.getRuangan(0),
            Arrays.asList(dummySiswa.get(0), dummySiswa.get(1))
        );
        dummyBimbel.setJadwal(                                              // Tutor 2 (Bahasa Indonesia)
            "14-10-2026", "13:00", "15:00",
            dummyTutor.get(1), dummyBimbel.getMateri(1), dummyBimbel.getRuangan(1),
            Arrays.asList(dummySiswa.get(0))
        );
        dummyBimbel.setJadwal(                                              // Tutor 2 (Bahasa Indonesia)
            "16-10-2026", "16:00", "18:00",
            dummyTutor.get(1), dummyBimbel.getMateri(1), dummyBimbel.getRuangan(0),
            Arrays.asList(dummySiswa.get(1))
        );
    }

    public static void main(String[] args) {
        dataDummy();

        System.out.println("╔══════════════════════════════════════════════════════════════════════╗");
        System.out.println("║                         BIMBEL UTBK ACADEMY                          ║");
        System.out.println("║               Sistem Manajemen Akademik & Tryout SNBT                ║");
        System.out.println("╚══════════════════════════════════════════════════════════════════════╝");

        System.out.println("[ INFORMASI BIMBEL ]");
        System.out.println("  • Nama Bimbel   : " + dummyBimbel.getNama());
        System.out.println("  • Alamat Kantor : " + dummyBimbel.getAlamat());
        System.out.println();

        System.out.println("[ DAFTAR PAKET TRYOUT ]");
        for (int i = 0; i < dummyTryout.size(); i++) {
            Tryout tryout = dummyTryout.get(i);
            System.out.println("  " + (i + 1) + ". " + tryout.getNamaTryout());
            System.out.println("     └─ Daftar Soal   :");
            for (Soal soal : tryout.getListSoal()) {
                System.out.println("        - [" + soal.getKodeSoal() + "] " + soal.getSubtest());
            }
        }
        System.out.println();

        System.out.println("[ DAFTAR TUTOR ]");
        for (int i = 0; i < dummyTutor.size(); i++) {
            Tutor tutor = dummyTutor.get(i);
            System.out.println("  " + (i + 1) + ". " + tutor.getNama());
            System.out.println("     ├─ No. HP   : " + tutor.getNoHp());
            System.out.println("     ├─ Email    : " + tutor.getEmail());
            System.out.println("     ├─ Bidang   : " + tutor.getBidang());
            System.out.println("     └─ Status   : " + tutor.getStatus());
        }
        System.out.println();

        System.out.println("[ DAFTAR SISWA ]");
        for (int i = 0; i < dummySiswa.size(); i++) {
            Siswa siswa = dummySiswa.get(i);

            // getListHasilTryout() sudah berupa salinan, disimpan ke variabel biasa
            List<HasilTryout> riwayat = siswa.getListHasilTryout();

            // lebar nama tryout terpanjang, supaya kolom skor sejajar
            int lebarNama = 0;
            for (HasilTryout hasil : riwayat) {
                lebarNama = Math.max(lebarNama, hasil.getTryout().getNamaTryout().length());
            }

            System.out.println("  " + (i + 1) + ". " + siswa.getNama() + " (Kelas " + siswa.getKelas() + " SMA)");
            System.out.println("     ├─ Kontak   : " + siswa.getNoHp() + " | " + siswa.getEmail());
            System.out.println("     ├─ Target   : " + siswa.getTargetJurusan() + " - " + siswa.getTargetKampus());
            System.out.println("     └─ Tryout   :");
            for (HasilTryout hasil : riwayat) {
                // left << setw(lebarNama) -> rata kiri, ditambah spasi sampai lebarNama
                System.out.println("        - " + String.format("%-" + lebarNama + "s", hasil.getTryout().getNamaTryout())
                     + "   (Skor : " + String.format(Locale.US, "%.2f", hasil.getSkor()) + ")");
            }
        }
        System.out.println();

        System.out.println("[ DAFTAR MATERI PEMBELAJARAN ]");
        for (Materi materi : dummyBimbel.getListMateri()) {
            System.out.println("  • [" + materi.getKodeMateri() + "] " + materi.getNamaMateri());
        }
        System.out.println();

        System.out.println("[ DAFTAR RUANGAN KELAS ]");
        for (Ruangan ruangan : dummyBimbel.getListRuangan()) {
            System.out.println("  • Kode: " + ruangan.getKodeRuangan() + "   │ Kapasitas: " + ruangan.getKapasitas() + " Kursi");
        }
        System.out.println();

        System.out.println("[ DAFTAR JADWAL BIMBINGAN AKTIF ]");
        List<Jadwal> listJadwal = dummyBimbel.getListJadwal();
        for (int i = 0; i < listJadwal.size(); i++) {
            Jadwal jadwal = listJadwal.get(i);
            System.out.println("  • Sesi " + (i + 1) + " : " + jadwal.getTanggal()
            + " (" + jadwal.getJamMulai() + " - " + jadwal.getJamSelesai() + ")");
            System.out.println("    ├─ Modul Pembelajaran : " + jadwal.getMateri().getNamaMateri());
            System.out.println("    ├─ Tutor Pengajar     : " + jadwal.getTutor().getNama());
            System.out.println("    ├─ Lokasi Ruangan     : " + jadwal.getRuangan().getKodeRuangan());
            System.out.println("    └─ Peserta Hadir      :");
            for (Siswa peserta : jadwal.getListSiswa()) {
                System.out.println("       - " + peserta.getNama());
            }
        }
        System.out.println();
    }
}
