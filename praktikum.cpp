#include <iostream>
using namespace std;

int angka;
int pilihan;

bool isPrima(int n) {
    if (n <= 1) return false;
    int i = 2;

    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

bool isFibonacci(int n) {
    if (n < 0) return false;
    int a = 0;
    int b = 1;

    while (a < n) {
        int temp = a + b;
        a = b;
        b = temp;
    }
    return (a == n);
}

void inputAngka() {
    cout << "Masukkan angka yang ingin dicek: ";
    cin >> angka;
}

void tampilkanHasilPrima() {
    if (isPrima(angka)) {
        cout << "Hasil: " << angka << " adalah BILANGAN PRIMA." << endl;
    } else {
        cout << "Hasil: " << angka << " BUKAN bilangan prima." << endl;
    }
}

void tampilkanHasilFibonacci() {
    if (isFibonacci(angka)) {
        cout << "Hasil: " << angka << " adalah bagian dari DERET FIBONACCI." << endl;
    } else {
        cout << "Hasil: " << angka << " BUKAN bagian dari deret Fibonacci." << endl;
    }
}

void tampilkanMenu() {
    cout << "\n========== MENU CEK BILANGAN ==========" << endl;
    cout << "1. Cek Bilangan Prima" << endl;
    cout << "2. Cek Bilangan Fibonacci" << endl;
    cout << "0. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> pilihan;
}

int main() {
    bool berjalan = true;

    while (berjalan) {
        tampilkanMenu();

        switch (pilihan) {
            case 1:
                inputAngka();
                tampilkanHasilPrima();
                break;
            case 2:
                inputAngka();
                tampilkanHasilFibonacci();
                break;