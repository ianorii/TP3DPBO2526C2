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
            listRuangan = {};
            listJadwal = {};
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
        void setSiswa(Siswa* dataSiswa) {listSiswa.push_back(dataSiswa);}   // add satu siswa
        void setListSiswa(vector<Siswa>& listSiswa) {                       // add siswa dalam list
            for(Siswa &s: listSiswa) setSiswa(&s);
        }
        vector<Siswa*> getListSiswa() {return listSiswa;}
        
        // setter and getter for listTutor
        void setTutor(Tutor* dataTutor) {listTutor.push_back(dataTutor);}   // add satu tutor
        void setListTutor(vector<Tutor>& listTutor) {                       // add tutor dalam list
            for(Tutor &t: listTutor) setTutor(&t);
        }
        vector<Tutor*> getListTutor() {return listTutor;}

        // setter and getter for materi
        void setMateri(string kodeMateri, string namaMateri) {
            listMateri.emplace_back(kodeMateri, namaMateri);
        }
        // akses 1 elemen (dipakai saat membangun data / membuat Jadwal)
        Materi& getMateri(int index) {return listMateri[index];}
        const vector<Materi>& getListMateri() const {return listMateri;}    // akses seluruh listMateri
        
        // setter and getter for ruangan
        void setRuangan(string kodeRuangan, int kapasitas) {
            listRuangan.emplace_back(kodeRuangan, kapasitas);
        }
        Ruangan& getRuangan(int index) {return listRuangan[index];}         // akses 1 elemen
        const vector<Ruangan>& getListRuangan() const {return listRuangan;} // akses seluruh list
        
        // setter and getter for jadwal 
        void setJadwal(string tanggal, string jamMulai, string jamSelesai, Tutor &dataTutor, Materi &dataMateri, Ruangan &dataRuangan, const vector<Siswa*> &dataSiswa) {
            listJadwal.emplace_back(tanggal, jamMulai, jamSelesai, dataTutor, dataMateri, dataRuangan, dataSiswa);
        }
        Jadwal& getJadwal(int index) {return listJadwal[index];}         // akses 1 elemen
        const vector<Jadwal>& getListJadwal() const {return listJadwal;}

        // destructor
        ~Bimbel() {}
};