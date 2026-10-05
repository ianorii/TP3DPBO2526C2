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

        // override method abstract Person -> polimorfisme
        vector<string> getDetail() override {
            vector<string> detail;
            vector<HasilTryout> riwayat = listHasilTryout;

            // lebar nama tryout terpanjang, supaya kolom skor sejajar
            int lebarNama = 0;
            for (HasilTryout &hasil : riwayat) {
                lebarNama = max(lebarNama, (int)hasil.getTryout()->getNamaTryout().size());
            }

            detail.push_back(nama + " (Kelas " + to_string(kelas) + " SMA)");
            detail.push_back("     ├─ Kontak   : " + noHp + " | " + email);
            detail.push_back("     ├─ Target   : " + targetJurusan + " - " + targetKampus);
            detail.push_back("     └─ Tryout   :");
            for (HasilTryout &hasil : riwayat) {
                ostringstream oss;
                // left << setw(lebarNama) -> rata kiri, ditambah spasi sampai lebarNama
                oss << "        - " << left << setw(lebarNama) << hasil.getTryout()->getNamaTryout()
                    << "   (Skor : " << fixed << setprecision(2) << hasil.getSkor() << ")";
                detail.push_back(oss.str());
            }
            return detail;
        }

        ~Siswa() {}
};