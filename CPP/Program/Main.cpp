#include<bits/stdc++.h>
#include "Person.cpp"
#include "Tutor.cpp"
#include "Siswa.cpp"

using namespace std;

int main() {
    Siswa data = Siswa("Rian", "09689699", "rian@", 12, "UI", "Ilkom");

    cout << data.getNama() << " " << data.getTargetKampus() << endl;

    return 0;
}