import java.util.ArrayList;
import java.util.List;

public class Tutor extends Person {
    // atribut
    private String bidang;
    private String status;

    // empty constructor
    public Tutor() {
        super();
        this.bidang = "";
        this.status = "";
    }

    // constructor with parameter
    public Tutor(String nama, String noHp, String email, String bidang, String status) {
        super(nama, noHp, email);
        this.bidang = bidang;
        this.status = status;
    }

    // setter and getter for bidang
    public void setBidang(String bidang) {this.bidang = bidang;}
    public String getBidang() {return bidang;}

    // setter and getter for status
    public void setStatus(String status) {this.status = status;}
    public String getStatus() {return status;}

    // override method abstract Person -> polimorfisme
    @Override
    public List<String> getDetail() {
        List<String> detail = new ArrayList<>();
        detail.add(nama);
        detail.add("     ├─ No. HP   : " + noHp);
        detail.add("     ├─ Email    : " + email);
        detail.add("     ├─ Bidang   : " + bidang);
        detail.add("     └─ Status   : " + status);
        return detail;
    }
}
