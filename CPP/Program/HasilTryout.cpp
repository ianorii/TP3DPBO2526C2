using namespace std;

class HasilTryout{
    private:
        // atribut
        float skor;
        Tryout dataTryout;

    public:
        // empty konstructor
        HasilTryout() {
            skor = 0.00;
            dataTryout = Tryout();
        }

        // constructor with parameter
        HasilTryout(float skor, Tryout dataTryout) {
            this->skor = skor;
            this->dataTryout = dataTryout;
        }

        // setter and getter for skor
        void setSkor(float skor) {this->skor = skor;}
        float getSkor() {return skor;}

        // setter and getter for Tryout dataTryout
        void setTryout(Tryout dataTryout) {this->dataTryout = dataTryout;}
        Tryout getTryout() {return dataTryout;}

        // destructor
        ~HasilTryout() {}
};