import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Bimbel {
    // atribut
    private String nama;
    private String alamat;
    private List<Siswa> listSiswa;
    private List<Tutor> listTutor;
    private List<Materi> listMateri;
    private List<Jadwal> listJadwal;
    private List<Ruangan> listRuangan;

    // empty constructor
    public Bimbel() {
        this.nama = "";
        this.alamat = "";
        this.listSiswa = new ArrayList<>();
        this.listTutor = new ArrayList<>();
        this.listMateri = new ArrayList<>();
        this.listRuangan = new ArrayList<>();
        this.listJadwal = new ArrayList<>();
    }

    // constructor with parameter
    public Bimbel(String nama, String alamat) {
        this.nama = nama;
        this.alamat = alamat;
        this.listSiswa = new ArrayList<>();
        this.listTutor = new ArrayList<>();
        this.listMateri = new ArrayList<>();
        this.listRuangan = new ArrayList<>();
        this.listJadwal = new ArrayList<>();
    }

    // setter and getter for nama
    public void setNama(String nama) {this.nama = nama;}
    public String getNama() {return nama;}

    // setter and getter for alamat
    public void setAlamat(String alamat) {this.alamat = alamat;}
    public String getAlamat() {return alamat;}

    // setter and getter for listSiswa
    public void setSiswa(Siswa dataSiswa) {listSiswa.add(dataSiswa);}    // add satu siswa
    public void setListSiswa(List<Siswa> listSiswa) {                    // add siswa dalam list
        for (Siswa s : listSiswa) setSiswa(s);
    }
    public List<Siswa> getListSiswa() {return new ArrayList<>(listSiswa);}    // vector<Siswa*> (pass by value)

    // setter and getter for listTutor
    public void setTutor(Tutor dataTutor) {listTutor.add(dataTutor);}    // add satu tutor
    public void setListTutor(List<Tutor> listTutor) {                    // add tutor dalam list
        for (Tutor t : listTutor) setTutor(t);
    }
    public List<Tutor> getListTutor() {return new ArrayList<>(listTutor);}    // vector<Tutor*> (pass by value)

    // setter and getter for materi
    public void setMateri(String kodeMateri, String namaMateri) {
        listMateri.add(new Materi(kodeMateri, namaMateri));
    }
    // akses 1 elemen (dipakai saat membangun data / membuat Jadwal)
    public Materi getMateri(int index) {return listMateri.get(index);}
    public List<Materi> getListMateri() {return Collections.unmodifiableList(listMateri);}    // const vector<Materi>&

    // setter and getter for ruangan
    public void setRuangan(String kodeRuangan, int kapasitas) {
        listRuangan.add(new Ruangan(kodeRuangan, kapasitas));
    }
    public Ruangan getRuangan(int index) {return listRuangan.get(index);}         // akses 1 elemen
    public List<Ruangan> getListRuangan() {return Collections.unmodifiableList(listRuangan);} // const vector<Ruangan>&

    // setter and getter for jadwal
    public void setJadwal(String tanggal, String jamMulai, String jamSelesai, Tutor dataTutor,
                          Materi dataMateri, Ruangan dataRuangan, List<Siswa> dataSiswa) {
        listJadwal.add(new Jadwal(tanggal, jamMulai, jamSelesai, dataTutor, dataMateri, dataRuangan, dataSiswa));
    }
    public Jadwal getJadwal(int index) {return listJadwal.get(index);}           // akses 1 elemen
    public List<Jadwal> getListJadwal() {return Collections.unmodifiableList(listJadwal);}    // const vector<Jadwal>&
}
