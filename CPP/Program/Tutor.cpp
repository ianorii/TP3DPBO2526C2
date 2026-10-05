using namespace std;

class Tutor : public Person{
    private:
        // atribut
        string bidang;
        string status;

    public:
        // empty constructor
        Tutor() {
            bidang = "";
            status = "";
        }

        // constructor with parameter
        Tutor(string nama, string noHp, string email, string bidang, string status) : Person(nama, noHp, email){
            this->bidang = bidang;
            this->status = status;
        }

        // setter and getter for bidang
        void setBidang(string bidang) {this->bidang = bidang;}
        string getBidang() {return bidang;}
        
        // setter and getter for bidang
        void setStatus(string status) {this->status = status;}
        string getStatus() {return status;}

        // override method abstract Person -> polimorfisme
        vector<string> getDetail() override {
            vector<string> detail;
            detail.push_back(nama);
            detail.push_back("     ├─ No. HP   : " + noHp);
            detail.push_back("     ├─ Email    : " + email);
            detail.push_back("     ├─ Bidang   : " + bidang);
            detail.push_back("     └─ Status   : " + status);
            return detail;
        }

        // destructor
        ~Tutor() {}
};