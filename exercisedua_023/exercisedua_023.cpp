#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x; // variabel untuk menyimpan input dari lingkaran maupun bujursangkar
public:
    bidangDatar() { // constructor
        x = 0;
    }
    virtual void input() = 0; // fungsi yang menerima input dan mengirim input melalui fungsi setX untuk disimpan di x
    virtual float Luas() { return 0; } //fungsi untuk menghitung luas
    virtual float Keliling() { return 0; } //fungsi untuk menghitung keliling
    void setX(int a) { // fungsi untuk memberi/mengirim nilai pada x
        this->x = a;
    }
    int getX() { // fungsi untuk membaca/mengambil nilai dalam x
        return x;
    }
};

class Lingkaran : public bidangDatar {
public:
    void input() {
        cout << "Masukkan jari-jarinya : ";
        int r;
        cin >> r;
        setX(r);
    }
    float Luas() {
        return 3.14 * getX() * getX();
    }
    float Keliling() {
        return 2 * 3.14 * getX();
    }
};

class Bujursangkar : public bidangDatar {
public:
    void input() {
        cout << "Masukkan sisinya : ";
        int s;
        cin >> s;
        setX(s);
    }
    float Luas() {
        return getX() * getX();
    }
    float Keliling() {
        return 4 * getX();
    }
};

int main() {
    bidangDatar* objek;

    cout << "Lingkaran dibuat" << endl;
    objek = new Lingkaran();
    objek->input();
    cout << "Luas Lingkaran = " << objek->Luas() << endl;
    cout << "Keliling Lingkaran = " << objek->Keliling() << endl;

    cout << "Bujursangkar dibuat" << endl;
    objek = new Bujursangkar();
    objek->input();
    cout << "Luas Bujursangkar = " << objek->Luas() << endl;
    cout << "Keliling Bujursangkar = " << objek->Keliling() << endl;

    delete objek;
    delete objek;

    return 0;
}
