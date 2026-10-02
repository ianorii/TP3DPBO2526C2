using namespace std;

class Soal{
    private:
        // atribut
        string kodeSoal;
        string subtest;

    public:
        // emmpty constructor
        Soal() {
            kodeSoal = "";
            subtest = "";
        }

        // constructor with parameter
        Soal(string kodeSoal, string subtest) {
            this->kodeSoal = kodeSoal;
            this->subtest = subtest;
        }

        // setter and getter for kodeSoal
        void setKodeSoal(string kodeSoal) {this->kodeSoal = kodeSoal;}
        string getKodeSoal() {return kodeSoal;}

        // setter and getter for subtest
        void setSubtest(string subtest) {this->subtest = subtest;}
        string getSubtest() {return subtest;}

        // destructor
        ~Soal() {}
};