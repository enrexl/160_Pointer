#include <iostream>
using namespace std;

class mahasiswa {
public:
    int nim;
    void showNim() {
        cout << "NO Induk = " << nim << endl;
    }
};

int main()
{
    mahasiswa* mhs = new mahasiswa{ 1 };
    mhs->nim = 2;
    mhs->showNim();
    delete mhs;
    system("pause");
    return 0;
    std::cout << "Hello World!\n";
}
