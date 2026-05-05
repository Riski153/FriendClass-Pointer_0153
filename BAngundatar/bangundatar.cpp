#include <iostream>
using namespace std;

class BelahKetupat; // forward declaration

class LayangLayang {
private:
    float d1, d2; // diagonal
    float a, b;   // sisi

    public:
    void input() {
        cout << "Input diagonal 1 Layang-Layang: ";
        cin >> d1;
        cout << "Input diagonal 2 Layang-Layang: ";
        cin >> d2;
        cout << "Input sisi a: ";
        cin >> a;
        cout << "Input sisi b: ";
        cin >> b;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

    float keliling() {
        return 2 * (a + b);
    }

    void output() {
        cout << "\nLayang-Layang:" << endl;
        cout << "Luas = " << luas() << endl;
        cout << "Keliling = " << keliling() << endl;
    }

     // friend method dari BelahKetupat
    friend float BelahKetupat::ambilKelilingLayang(LayangLayang &l);

};

class BelahKetupat {
private:
    float d1, d2; // diagonal
    float sisi;

    public:
    void input() {
        cout << "\nInput diagonal 1 Belah Ketupat: ";
        cin >> d1;
        cout << "Input diagonal 2 Belah Ketupat: ";
        cin >> d2;
        cout << "Input sisi: ";
        cin >> sisi;
    }

    float luas() {
        return 0.5 * d1 * d2;
    }

     float keliling() {
        return 4 * sisi;
    }
    void output() {
        cout << "\nBelah Ketupat:" << endl;
        cout << "Luas = " << luas() << endl;
        cout << "Keliling = " << keliling() << endl;
    }

     // method yang jadi friend
    float ambilKelilingLayang(LayangLayang &l) {
        return l.keliling(); // akses dari LayangLayang
    }

};

int main() {}