using namespace std;

class Jadwal {
    private:
        // atribut
        Tutor dataTutor;
        Materi dataMateri;
        Ruangan dataRuangan;
        vector<Siswa> listSiswa;

    public:
        // empty construcotr
        Jadwal() {
            dataTutor = Tutor();
            dataMateri = Materi();
            dataRuangan = Ruangan();
        }

        // constructor with parameter
        Jadwal(Tutor dataTutor, Materi dataMateri, Ruangan dataRuangan, vector<Siswa> listSiswa) {
            this->dataTutor = dataTutor;
            this->dataMateri = dataMateri;
            this->dataRuangan = dataRuangan;
            this->listSiswa = listSiswa;
        }

        // setter and getter for dataTutor
        void setTutor(Tutor dataTutor) {this->dataTutor = dataTutor;}
        Tutor getTutor() {return dataTutor;}
        
        // setter and getter for dataMateri
        void setMateri(Materi dataMateri) {this->dataMateri = dataMateri;}
        Materi getMateri() {return dataMateri;}

        // setter and getter for dataRuangan
        void setRuangan(Ruangan dataRuangan) {this->dataRuangan = dataRuangan;}
        Ruangan getRuangan() {return dataRuangan;}
        
        // setter and getter for listSiswa
        void setListSiswa(vector<Siswa> listSiswa) {this->listSiswa = listSiswa;}
        vector<Siswa> getListSiswa() {return listSiswa;}

        // destructor
        ~Jadwal() {}
};