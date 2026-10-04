import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

public class Tryout {
    // atribut
    private String namaTryout;
    private List<Soal> listSoal;

    // empty constructor
    public Tryout() {
        this.namaTryout = "";
        this.listSoal = new ArrayList<>();
    }

    // constructor with parameter (listSoal opsional, default kosong)
    public Tryout(String namaTryout) {
        this(namaTryout, new ArrayList<>());
    }

    // constructor with parameter
    public Tryout(String namaTryout, List<Soal> listSoal) {
        this.namaTryout = namaTryout;
        this.listSoal = new ArrayList<>(listSoal);
    }

    // setter and getter for namaTryout
    public void setNamaTryout(String namaTryout) {this.namaTryout = namaTryout;}
    public String getNamaTryout() {return namaTryout;}

    // setter and getter for listSoal
    public void setSoal(String kodeSoal, String subtest) {
        listSoal.add(new Soal(kodeSoal, subtest));
    }
    public List<Soal> getListSoal() {return Collections.unmodifiableList(listSoal);}    // const vector<Soal>&
}
