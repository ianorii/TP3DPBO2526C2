using namespace std;

class Bimbel {
    private:
        // atribut
        string nama;
        string alamat;
        vector<Siswa*> listSiswa;
        vector<Tutor*> listTutor;
        vector<Materi> listMateri;
        vector<Jadwal> listJadwal;
        vector<Ruangan> listRuangan;

    public:
        // empty constructor
        Bimbel() {
            nama = "";
            alamat = "";
            listSiswa = {};
            listTutor = {};
            listMateri = {};
            listJadwal = {};
            listRuangan = {};
        }

        // constructor with parameter
        Bimbel(string nama, string alamat) {
            this->nama = nama;
            this->alamat = alamat;
        }

        // setter and getter for nama
        void setNama(string nama) {this->nama = nama;}
        string getNama() {return nama;}

        // setter and getter for alamat
        void setAlamat(string alamat) {this->alamat = alamat;}
        string getAlamat() {return alamat;}
        
        // setter and getter for listSiswa
        void addSiswa(Siswa* dataSiswa) {listSiswa.push_back(dataSiswa);}
        void setListSiswa(const vector<Siswa*>& listSiswa) {this->listSiswa = listSiswa;}
        vector<Siswa*> getListSiswa() {return listSiswa;}
        
        // setter and getter for listTutor
        void addTutor(Tutor* dataTutor) {listTutor.push_back(dataTutor);}
        void setListTutor(const vector<Tutor*>& listTutor) {this->listTutor = listTutor;}
        vector<Tutor*> getListTutor() {return listTutor;}

        // setter and getter for materi
        void addMateri(Materi dataMateri) {listMateri.push_back(dataMateri);}
        void setListMateri(const vector<Materi>& listMateri) {this->listMateri = listMateri;}
        vector<Materi> getListMateri() {return listMateri;}
        
        // setter and getter for jadwal 
        void addJadwal(Jadwal dataJadwal) {listJadwal.push_back(dataJadwal);}
        void setListJadwal(const vector<Jadwal>& listJadwal) {this->listJadwal = listJadwal;}
        vector<Jadwal> getListJadwal() {return listJadwal;}
        
        // setter and getter for ruangan
        void addRuangan(Ruangan dataRuangan) {listRuangan.push_back(dataRuangan);}
        void setListRuangan(const vector<Ruangan>& listRuangan) {this->listRuangan = listRuangan;}
        vector<Ruangan> getListRuangan() {return listRuangan;}

        // destructor
        ~Bimbel() {}
};