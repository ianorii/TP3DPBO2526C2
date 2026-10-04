import java.util.ArrayList;
import java.util.List;

public class Siswa extends Person {
    // atribut
    private int kelas;
    private String targetJurusan;
    private String targetKampus;
    private List<HasilTryout> listHasilTryout;

    // empty constructor
    public Siswa() {
        super();
        this.kelas = 0;
        this.targetJurusan = "";
        this.targetKampus = "";
        this.listHasilTryout = new ArrayList<>();
    }

    // constructor with parameter
    public Siswa(String nama, String noHp, String email, int kelas,
                 String targetJurusan, String targetKampus) {
        super(nama, noHp, email);
        this.kelas = kelas;
        this.targetJurusan = targetJurusan;
        this.targetKampus = targetKampus;
        this.listHasilTryout = new ArrayList<>();
    }

    // setter and getter for kelas
    public void setKelas(int kelas) {this.kelas = kelas;}
    public int getKelas() {return kelas;}

    // setter and getter for targetJurusan
    public void setTargetJurusan(String targetJurusan) {this.targetJurusan = targetJurusan;}
    public String getTargetJurusan() {return targetJurusan;}

    // setter and getter for targetKampus
    public void setTargetKampus(String targetKampus) {this.targetKampus = targetKampus;}
    public String getTargetKampus() {return targetKampus;}

    // setter and getter for listHasilTryout
    public void setHasil(float skor, Tryout dataTryout) {
        listHasilTryout.add(new HasilTryout(skor, dataTryout));
    }
    public List<HasilTryout> getListHasilTryout() {
        return new ArrayList<>(listHasilTryout);    // di-copy, seperti variabel riwayat di Main.cpp
    }
}
