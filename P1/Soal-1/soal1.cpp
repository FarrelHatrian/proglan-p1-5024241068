#include <iostream>
#include <string>

class PembalapF1 {
private:
    std::string nama;
    int posisi;
    float point;

public:
    PembalapF1( ... ) {
    }

    float hitungPoint(int posisi) {
    }

    void printInfo() {
    }
};

int main() {
    int jumlahPembalap;
    std::cout << "Masukkan jumlah pembalap: ";
    std::cin >> jumlahPembalap;

    PembalapF1** pembalap = new PembalapF1*[jumlahPembalap];

    std::string nama;
    int posisi;

    for (int i = 0; i < jumlahPembalap; i++) {
        std::cin >> nama >> posisi;
        pembalap[i] = new PembalapF1(nama, posisi);
    }

    for (int i = 0; i < jumlahPembalap; i++) {
        pembalap[i]->printInfo();
        delete pembalap[i];
    }
    return 0;
}
