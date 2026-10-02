using namespace std;

class Ruangan {
    private:
        // atribut
        string kodeRuangan;
        int kapasitas;

    public:
        // empty constructor
        Ruangan() {
            kodeRuangan = "";
            kapasitas = 0;
        }

        // constructor with parameter
        Ruangan(string kodeRuangan, int kapasitas) {
            this->kodeRuangan = kodeRuangan;
            this->kapasitas = kapasitas;
        }

        // setter and getter for kodeRuangan
        void setKodeRuangan(string kodeRuangan) {this->kodeRuangan = kodeRuangan;}
        string getKodeRuangan() {return kodeRuangan;}

        // setter and getter for kapasitas
        void setKapasitas(int kapasitas) {this->kapasitas = kapasitas;}
        int getKapasitas() {return kapasitas;}

        // destructor
        ~Ruangan() {}
};