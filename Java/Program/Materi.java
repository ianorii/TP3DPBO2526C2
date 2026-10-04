public class Materi {
    // atribut
    private String kodeMateri;
    private String namaMateri;

    // empty constructor
    public Materi() {
        this.kodeMateri = "";
        this.namaMateri = "";
    }

    // constructor with parameter
    public Materi(String kodeMateri, String namaMateri) {
        this.kodeMateri = kodeMateri;
        this.namaMateri = namaMateri;
    }

    // setter and getter for kodeMateri
    public void setKodeMateri(String kodeMateri) {this.kodeMateri = kodeMateri;}
    public String getKodeMateri() {return kodeMateri;}

    // setter and getter for namaMateri
    public void setNamaMateri(String namaMateri) {this.namaMateri = namaMateri;}
    public String getNamaMateri() {return namaMateri;}
}
