#include <iostream>
using namespace std;

class siswa;

class orang {
private:
    string nama;
public:
    void setNama(string pnama);
    friend class siswa;
};

int main()
{
    std::cout << "Hello World!\n";
}