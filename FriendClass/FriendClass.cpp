#include <iostream>
using namespace std;

class siswa;

class orang {
private:
    string nama;
public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa {
private:
    int id;
public:
    void setId(int pId);
    void displayAll(orang& a);
};

void siswa::displayAll(orang& a) {
    cout << id << endl << a.nama;
}

void siswa::setId(int pid) {
    id = pid;
}

void orang::setNama(string pNama) {
    nama = pNama;
}

int main() {
    orang o;
    o.setNama("Joko Kumattt");
    siswa p;
    p.setId(1);
    p.displayAll(o);
    return 0;
}