using namespace std;

class Materi {
    private:
        // atribut
        string kodeMateri;
        string namaMateri;

    public:
        // empty constructor
        Materi() {
            kodeMateri = "";
            namaMateri = "";
        }

        // constructor with parameter
        Materi(string kodeMateri, string namaMateri) {
            this->kodeMateri = kodeMateri;
            this->namaMateri = namaMateri;
        }

        // setter and getter for kodeMateri
        void setKodeMateri(string kodeMateri) {this->kodeMateri = kodeMateri;}
        string getKodeMateri() const {return kodeMateri;}

        // setter and getter for namaMateri
        void setNamaMateri(string namaMateri) {this->namaMateri = namaMateri;}
        string getNamaMateri() const {return namaMateri;}

        // destructor
        ~Materi() {}
};