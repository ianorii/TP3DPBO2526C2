#include<bits/stdc++.h>
#include "Soal.cpp"
#include "Tryout.cpp"
#include "HasilTryout.cpp"
#include "Person.cpp"
#include "Tutor.cpp"
#include "Siswa.cpp"

using namespace std;

int main() {
    vector<Soal> latsol(2);
    latsol[0] = Soal("LT001", "Math");
    latsol[1] = Soal("LT002", "Science");

    Tryout temp1 = Tryout("Tryout 1", latsol);
    Tryout temp2 = Tryout("Tryout 2", latsol);

    vector<HasilTryout> hasil(2);
    hasil[0] = HasilTryout(800, temp1);
    hasil[1] = HasilTryout(788, temp2);
    Siswa data = Siswa("Rian", "09689699", "rian@", 12, "UI", "Ilkom", hasil);

    cout << data.getNama() << endl;
    for(HasilTryout i : data.getListHasilTryout()) {
        Tryout x = i.getTryout();
        cout << x.getNama() << endl;

        for(Soal j: x.getListSoal()) {
            cout << " - " << j.getKodeSoal() << " : " << j.getSubtest() << endl;
        }
    }

    return 0;
}