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
            listSiswa = {};
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
        string getTanggal() const {return tanggal;}

        // settre and getter for jamMulai
        void setJamMulai(string jamMulai) {this->jamMulai = jamMulai;}
        string getJamMulai() const {return jamMulai;}

        // settre and getter for jamSelesai
        void setJamSelesai(string jamSelesai) {this->jamSelesai = jamSelesai;}
        string getJamSelesai() const {return jamSelesai;}

        // setter and getter for dataTutor
        void setTutor(Tutor& dataTutor) {this->dataTutor = &dataTutor;}
        Tutor* getTutor() const {return dataTutor;}
        
        // setter and getter for dataMateri
        void setMateri(Materi& dataMateri) {this->dataMateri = &dataMateri;}
        Materi* getMateri() const {return dataMateri;}

        // setter and getter for dataRuangan
        void setRuangan(Ruangan& dataRuangan) {this->dataRuangan = &dataRuangan;}
        Ruangan* getRuangan() const {return dataRuangan;}
        
        // setter and getter for listSiswa
        void setSiswa(Siswa* dataSiswa) {listSiswa.push_back(dataSiswa);}
        void setListSiswa(vector<Siswa*>& listSiswa) {this->listSiswa = listSiswa;}
        vector<Siswa*> getListSiswa() const {return listSiswa;}

        // destructor
        ~Jadwal() {}
};