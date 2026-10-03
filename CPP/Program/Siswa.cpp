using namespace std;

class Siswa : public Person{
    private:
        int kelas;
        string targetJurusan;
        string targetKampus;
        vector<HasilTryout> listHasilTryout;

    public:
        // empty constructor
        Siswa() {
            kelas = 0;
            targetJurusan = "";
            targetKampus = "";
            listHasilTryout = {};
        }

        // constructor with parameter
        Siswa(
            string nama, string noHp, string email, int kelas,
            string targetJurusan, string targetKampus
        ) : Person(nama, noHp, email) {
            this->kelas = kelas;
            this->targetJurusan = targetJurusan;
            this->targetKampus = targetKampus;
            this->listHasilTryout = {};
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
        
        // setter and getter for listHasilTryout
        void setHasil(float skor, Tryout& dataTryout) {
            listHasilTryout.emplace_back(skor, &dataTryout);
        }
        const vector<HasilTryout>& getListHasilTryout() const {
            return listHasilTryout;
        }

        ~Siswa() {}
};