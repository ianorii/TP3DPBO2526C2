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
            listSoal = {};
        }

        // constructor with parameter
        Tryout(string namaTryout, vector<Soal> listSoal = {}) {
            this->namaTryout = namaTryout;
            this->listSoal = listSoal;
        }

        // setter and getter for namaTryout
        void setNamaTryout(string namaTryout) {this->namaTryout = namaTryout;}
        string getNamaTryout() {return namaTryout;}

        // setter and getter for listSoal
        void setSoal(string kodeSoal, string subtest) {
            listSoal.emplace_back(kodeSoal, subtest);
        }
        const vector<Soal>& getListSoal() {
            return listSoal;
        }

        // destructor
        ~Tryout() {}
};