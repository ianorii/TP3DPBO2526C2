using namespace std;

class Tryout{
    private:
        // atribut
        string namaTryout;
        vector<Soal> listSoal;

    public:
        // empty constructor
        Tryout() {
            namaTryout = "";
        }

        // constructor with parameter
        Tryout(string namaTryout, vector<Soal> listSoal) {
            this->namaTryout = namaTryout;
            this->listSoal = listSoal;
        }

        // setter and getter for namaTryout
        void setNamaTryout(string namaTryout) {this->namaTryout = namaTryout;}
        string getNamaTryout() {return namaTryout;}

        // setter and getter for listSoal
        void setListSoal(vector<Soal> listSoal) {this->listSoal = listSoal;}
        vector<Soal> getListSoal() {return listSoal;}

        // destructor
        ~Tryout() {}
};