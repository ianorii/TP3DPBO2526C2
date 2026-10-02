#include<bits/stdc++.h>
#include "Tutor.cpp"

using namespace std;

int main() {
    Tutor data = Tutor("Rian", "0489654886", "rian@gmail", "Math", "Freelance");

    cout << data.getNama() << " " << data.getBidang() << " " << data.getStatus() << endl;

    return 0;
}