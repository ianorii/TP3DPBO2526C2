using namespace std;

class HasilTryout{
    private:
        // atribut
        float skor;

    public:
        // empty konstructor
        HasilTryout() {
            skor = 0.00;
        }

        // constructor with parameter
        HasilTryout(float skor) {
            this->skor = skor;
        }

        // setter and getter for skor
        void setSkor(float skor) {this->skor = skor;}
        float getSkor() {return skor;}

        ~HasilTryout() {}
};