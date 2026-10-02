using namespace std;

class HasilTryout{
    private:
        // atribut
        float skor;
        Tryout data;

    public:
        // empty konstructor
        HasilTryout() {
            skor = 0.00;
            data = Tryout();
        }

        // constructor with parameter
        HasilTryout(float skor, Tryout data) {
            this->skor = skor;
            this->data = data;
        }

        // setter and getter for skor
        void setSkor(float skor) {this->skor = skor;}
        float getSkor() {return skor;}

        // setter and getter for Tryout data
        void setTryout(Tryout data) {this->data = data;}
        Tryout getTryout() {return data;}

        // destructor
        ~HasilTryout() {}
};