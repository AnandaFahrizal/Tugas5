#include <iostream>
using namespace std;

double pokok(int jamKerja){
    return 7500 * jamKerja;
}
double lembur(int jamKerja){
    if (jamKerja > 8){
        return 7500 * 1.5 * (jamKerja - 8);
    } else {
        return 0;
    }
}
double makan(int jamKerja){
    if (jamKerja >= 9){
        return 10000;
    } else {
        return 0;
    }
}
double transport (int jamKerja){
    if (jamKerja >= 10){
        return 13000;
    } else {
        return 0;
    }
}

int main(){
    int nip, jamKerja;
    string nama;

    cout << "Input" << endl;
    cout << "Masukkan NIP: ";
    cin >> nip;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan Jam Kerja: ";
    cin >> jamKerja;

    double gajiPokok = pokok(jamKerja);
    double Lembur = lembur(jamKerja);
    double uangMakan = makan(jamKerja);
    double Transport = transport(jamKerja);

    cout << endl;
    cout << "Output" << endl;
    cout << "NIP: " << nip << endl;
    cout << "Nama: " << nama << endl;
    cout << "Jam Kerja: " << jamKerja << " jam/hari" << endl;
    cout << "Gaji Pokok: Rp. " << gajiPokok << endl;
    cout << "Uang Lembur: Rp. " << Lembur << endl;
    cout << "Uang Makan: Rp. "<< uangMakan << endl;
    cout << "Uang Transport: Rp. " << Transport << endl;

    return 0;
}
