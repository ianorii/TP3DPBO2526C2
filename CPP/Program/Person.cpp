using namespace std;

// class abstract: tidak bisa diinstansiasi langsung
class Person {
    protected:
        // atribut
        string nama;
        string noHp;
        string email;

    public:
        // empty constructor
        Person() {
            nama = "";
            noHp = "";
            email = "";
        }

        // constructor with parameter
        Person(string nama, string noHp, string email) {
            this->nama = nama;
            this->noHp = noHp;
            this->email = email;
        }

        // setter and getter for nama
        void setNama(string nama) {this->nama = nama;}
        string getNama() {return nama;}
        
        // setter and getter for no Hp
        void setNoHp(string noHp) {this->noHp = noHp;}
        string getNoHp() {return noHp;}
        
        // setter and getter for email
        void setEmail(string email) {this->email = email;}
        string getEmail() {return email;}

        // method abstract: hanya deklarasi tanpa isi
        virtual vector<string> getDetail() = 0;

        // destructor
        ~Person() {}
};