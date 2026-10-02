#include<bits/stdc++.h>
#include "HasilTryout.cpp"
#include "Person.cpp"
#include "Tutor.cpp"
#include "Siswa.cpp"

using namespace std;

int main() {
    vector<HasilTryout> hasil(2);
    hasil[0] = HasilTryout(800);
    hasil[1] = HasilTryout(788);
    Siswa data = Siswa("Rian", "09689699", "rian@", 12, "UI", "Ilkom", hasil);
    
    data.addHasil(hasil[0]);
    vector<HasilTryout> ans = data.getListHasilTryout();
    for(HasilTryout i : ans) {
        cout << i.getSkor() << endl;
    }

    return 0;
}