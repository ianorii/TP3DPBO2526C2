public class Ruangan {
    // atribut
    private String kodeRuangan;
    private int kapasitas;

    // empty constructor
    public Ruangan() {
        this.kodeRuangan = "";
        this.kapasitas = 0;
    }

    // constructor with parameter
    public Ruangan(String kodeRuangan, int kapasitas) {
        this.kodeRuangan = kodeRuangan;
        this.kapasitas = kapasitas;
    }

    // setter and getter for kodeRuangan
    public void setKodeRuangan(String kodeRuangan) {this.kodeRuangan = kodeRuangan;}
    public String getKodeRuangan() {return kodeRuangan;}

    // setter and getter for kapasitas
    public void setKapasitas(int kapasitas) {this.kapasitas = kapasitas;}
    public int getKapasitas() {return kapasitas;}
}
