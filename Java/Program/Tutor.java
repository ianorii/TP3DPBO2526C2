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
}
