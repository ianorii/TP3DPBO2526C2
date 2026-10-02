using namespace std;

class Siswa : public Person{
    private:
        int kelas;
        string targetJurusan;
        string targetKampus;
        vector<HasilTryout> listHasilTryout;

    public:
        // empty constructor
        Siswa() {}

        // constructor with parameter
        Siswa(
            string nama, string noHp, string email, int kelas,
            string targetKampus, string targetJurusan,
            vector<HasilTryout> listHasilTryout
        ) : Person(nama, noHp, email) {
            this->kelas = kelas;
            this->targetJurusan = targetJurusan;
            this->targetKampus = targetKampus;
            this->listHasilTryout = listHasilTryout;
        }

        // setter and getter for kelas
        void setKelas(int kelas) {this->kelas = kelas;}
        int getKelas() {return kelas;}

        // setter and getter for targetJurusan
        void setTargetJurusan(string targetJurusan) {
            this->targetJurusan = targetJurusan;
        }
        string getTargetJurusan() {return targetJurusan;}

        // setter and getter for targetKampus
        void setTargetKampus(string targetKampus) {
            this->targetKampus = targetKampus;
        }
        string getTargetKampus() {return targetKampus;}

        // add list for listHasilTryout
        void addHasil(HasilTryout hasil) {
            listHasilTryout.push_back(hasil);
        }

        // setter and getter for listHasilTryout
        void setListHasilTryout(vector<HasilTryout> data) {listHasilTryout = data;}
        vector<HasilTryout> getListHasilTryout() {return listHasilTryout;}

        ~Siswa() {}
};