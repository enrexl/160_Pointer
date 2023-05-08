#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim(); //Deklarasi method
}

void mahasiswa::showNim() { //Implementasi methode diluar class
    cout << "NO Induk = " << nim << endll;
        }


int main()
{
    mahasiswa mhs{ 1 }; //object mhs  
    mhs.showNim();      //Member Access Operator

    mahasiswa& ref = mhs;   //pointer reference refMhs
    ref.nim = 2;            //Member Access Operator
    mhs.showNim();
}
