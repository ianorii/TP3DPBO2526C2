public class Soal {
    // atribut
    private String kodeSoal;
    private String subtest;

    // empty constructor
    public Soal() {
        this.kodeSoal = "";
        this.subtest = "";
    }

    // constructor with parameter
    public Soal(String kodeSoal, String subtest) {
        this.kodeSoal = kodeSoal;
        this.subtest = subtest;
    }

    // setter and getter for kodeSoal
    public void setKodeSoal(String kodeSoal) {this.kodeSoal = kodeSoal;}
    public String getKodeSoal() {return kodeSoal;}

    // setter and getter for subtest
    public void setSubtest(String subtest) {this.subtest = subtest;}
    public String getSubtest() {return subtest;}
}
