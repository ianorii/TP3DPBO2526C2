public class Person {
    // atribut
    protected String nama;
    protected String noHp;
    protected String email;

    // empty constructor
    public Person() {
        this.nama = "";
        this.noHp = "";
        this.email = "";
    }

    // constructor with parameter
    public Person(String nama, String noHp, String email) {
        this.nama = nama;
        this.noHp = noHp;
        this.email = email;
    }

    // setter and getter for nama
    public void setNama(String nama) {this.nama = nama;}
    public String getNama() {return nama;}

    // setter and getter for noHp
    public void setNoHp(String noHp) {this.noHp = noHp;}
    public String getNoHp() {return noHp;}

    // setter and getter for email
    public void setEmail(String email) {this.email = email;}
    public String getEmail() {return email;}
}
