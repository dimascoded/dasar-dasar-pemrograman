#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    string nama;
    int nim;
    cout << "masukkan password untuk login" << endl;
    do
    {
        cout << "Masukkan username = ";
        cin >> nama;
        cout << "Masukkan Password = ";
        cin >> nim;

    } while (nama != "Ragil" and nim != 146);
    system("cls");
    int angkatebak;
    int angkabenar = 7;
    cout << "Selamat datang di permainan tebak angka !!!" << endl;
    cout << "Coba menebak angka dari 1 sampai 10 ya" << endl;

    do
    {
        cout << "Coba tebak ";
        cin >> angkatebak;
        if (angkatebak > angkabenar)
            cout << "angka terlalu besar" << endl;
        else if (angkatebak < angkabenar)
            cout << "angka terlalu kecil" << endl;
        else
            break;
    } while (angkatebak != angkabenar);
    cout << "anda benar";
}
