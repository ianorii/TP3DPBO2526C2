public class HasilTryout {
    // atribut
    private float skor;
    private Tryout dataTryout;

    // empty constructor
    public HasilTryout() {
        this.skor = 0.00f;
        this.dataTryout = null;
    }

    // constructor with parameter
    public HasilTryout(float skor, Tryout dataTryout) {
        this.skor = skor;
        this.dataTryout = dataTryout;
    }

    // setter and getter for skor
    public void setSkor(float skor) {this.skor = skor;}
    public float getSkor() {return skor;}

    // setter and getter for dataTryout
    public void setTryout(Tryout dataTryout) {this.dataTryout = dataTryout;}
    public Tryout getTryout() {return dataTryout;}
}
