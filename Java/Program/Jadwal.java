import java.util.ArrayList;
import java.util.List;

public class Jadwal {
    // atribut
    private String tanggal;
    private String jamMulai;
    private String jamSelesai;
    private Tutor dataTutor;
    private Materi dataMateri;
    private Ruangan dataRuangan;
    private List<Siswa> listSiswa;

    // empty constructor
    public Jadwal() {
        this.tanggal = "";
        this.jamMulai = "";
        this.jamSelesai = "";
        this.dataTutor = null;
        this.dataMateri = null;
        this.dataRuangan = null;
        this.listSiswa = new ArrayList<>();
    }

    // constructor with parameter
    public Jadwal(String tanggal, String jamMulai, String jamSelesai, Tutor dataTutor,
                  Materi dataMateri, Ruangan dataRuangan, List<Siswa> listSiswa) {
        this.tanggal = tanggal;
        this.jamMulai = jamMulai;
        this.jamSelesai = jamSelesai;
        this.dataTutor = dataTutor;
        this.dataMateri = dataMateri;
        this.dataRuangan = dataRuangan;
        this.listSiswa = new ArrayList<>(listSiswa);    // vector di-copy
    }

    // setter and getter for tanggal
    public void setTanggal(String tanggal) {this.tanggal = tanggal;}
    public String getTanggal() {return tanggal;}

    // setter and getter for jamMulai
    public void setJamMulai(String jamMulai) {this.jamMulai = jamMulai;}
    public String getJamMulai() {return jamMulai;}

    // setter and getter for jamSelesai
    public void setJamSelesai(String jamSelesai) {this.jamSelesai = jamSelesai;}
    public String getJamSelesai() {return jamSelesai;}

    // setter and getter for dataTutor
    public void setTutor(Tutor dataTutor) {this.dataTutor = dataTutor;}
    public Tutor getTutor() {return dataTutor;}

    // setter and getter for dataMateri
    public void setMateri(Materi dataMateri) {this.dataMateri = dataMateri;}
    public Materi getMateri() {return dataMateri;}

    // setter and getter for dataRuangan
    public void setRuangan(Ruangan dataRuangan) {this.dataRuangan = dataRuangan;}
    public Ruangan getRuangan() {return dataRuangan;}

    // setter and getter for listSiswa
    public void setSiswa(Siswa dataSiswa) {listSiswa.add(dataSiswa);}
    public void setListSiswa(List<Siswa> listSiswa) {this.listSiswa = new ArrayList<>(listSiswa);}
    public List<Siswa> getListSiswa() {return new ArrayList<>(listSiswa);}    // vector<Siswa*> (pass by value)
}
