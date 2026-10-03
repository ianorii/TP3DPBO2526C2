using namespace std;

class Jadwal {
    private:
        // atribut
        string tanggal;
        string jamMulai;
        string jamSelesai;
        Tutor* dataTutor;
        Materi* dataMateri;
        Ruangan* dataRuangan;
        vector<Siswa*> listSiswa;

    public:
        // empty construcotr
        Jadwal() {
            tanggal = "";
            jamMulai = "";
            jamSelesai = "";
            dataTutor = nullptr;
            dataMateri = nullptr;
            dataRuangan = nullptr;
            listSiswa = {nullptr};
        }

        // constructor with parameter
        Jadwal(
            string tanggal, string jamMulai, string jamSelesai, Tutor &dataTutor, 
            Materi& dataMateri, Ruangan& dataRuangan, const vector<Siswa*>& listSiswa
        ) {
            this->tanggal = tanggal;
            this->jamMulai = jamMulai;
            this->jamSelesai = jamSelesai;
            this->dataTutor = &dataTutor;
            this->dataMateri = &dataMateri;
            this->dataRuangan = &dataRuangan;
            this->listSiswa = listSiswa;
        }

        // setter and getter for tanggal
        void setTanggal(string tanggal) {this->tanggal = tanggal;}
        string getTanggal() {return tanggal;}

        // settre and getter for jamMulai
        void setJamMulai(string jamMulai) {this->jamMulai = jamMulai;}
        string getJamMulai() {return jamMulai;}

        // settre and getter for jamSelesai
        void setJamSelesai(string jamSelesai) {this->jamSelesai = jamSelesai;}
        string getJamSelesai() {return jamSelesai;}

        // setter and getter for dataTutor
        void setTutor(Tutor& dataTutor) {this->dataTutor = &dataTutor;}
        Tutor* getTutor() {return dataTutor;}
        
        // setter and getter for dataMateri
        void setMateri(Materi& dataMateri) {this->dataMateri = &dataMateri;}
        Materi* getMateri() {return dataMateri;}

        // setter and getter for dataRuangan
        void setRuangan(Ruangan& dataRuangan) {this->dataRuangan = &dataRuangan;}
        Ruangan* getRuangan() {return dataRuangan;}
        
        // setter and getter for listSiswa
        void setListSiswa(vector<Siswa*>& listSiswa) {this->listSiswa = listSiswa;}
        vector<Siswa*> getListSiswa() {return listSiswa;}

        // destructor
        ~Jadwal() {}
};