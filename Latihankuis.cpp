#include <iostream>
using namespace std;
int main()
{
    string nama, namab_1, namab_2, tglb_1, tglb_2, pil_barang, ulang;
    int nim, pilihan, stok_1, stok_2;
    cout << "Masukkan username : ";
    cin >> nama;
    cout << "Masukkan password : ";
    cin >> nim;
    if (nama == "ragil" and nim == 146)
    {
        cout << "pilih menu : \n1. Input barang dan stok \n2. Pengecekan barang dan stok \n3. Pencarian barang yang masuk " << endl;
        cout << "pilih : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "nama barang pertama : ";
            cin >> namab_1;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_1;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_1;
            cout << "nama barang kedua : ";
            cin >> namab_2;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_2;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_2;
            break;
        case 2:
            cout << "nama barang pertama : " << namab_1 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
            cout << "stok barang masuk(angka) : " << stok_1 << endl;
            cout << "nama barang kedua : " << namab_2 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
            cout << "stok barang masuk(angka) : " << stok_2 << endl;
            break;
        case 3:
            cout << "masukkan nama barang : ";
            cin >> pil_barang;
            if (pil_barang == namab_1)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
                cout << "stok barang masuk(angka) : " << stok_1 << endl;
            }
            else if (pil_barang == namab_2)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
                cout << "stok barang masuk(angka) : " << stok_2 << endl;
            }
        }
        cout << "kembali ke halaman utama?(ya/tidak) ";
        cin >> ulang;
    }
    if (ulang == "ya")
    {
        cout << "pilih menu : \n1. Input barang dan stok \n2. Pengecekan barang dan stok \n3. Pencarian barang yang masuk " << endl;
        cout << "pilih : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "nama barang pertama : ";
            cin >> namab_1;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_1;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_1;
            cout << "nama barang kedua : ";
            cin >> namab_2;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_2;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_2;
            break;
        case 2:
            cout << "nama barang pertama : " << namab_1 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
            cout << "stok barang masuk(angka) : " << stok_1 << endl;
            cout << "nama barang kedua : " << namab_2 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
            cout << "stok barang masuk(angka) : " << stok_2 << endl;
            break;
        case 3:
            cout << "masukkan nama barang : ";
            cin >> pil_barang;
            if (pil_barang == namab_1)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
                cout << "stok barang masuk(angka) : " << stok_1 << endl;
            }
            else if (pil_barang == namab_2)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
                cout << "stok barang masuk(angka) : " << stok_2 << endl;
            }
        }
        cout << "kembali ke halaman utama?(ya/tidak) ";
        cin >> ulang;
    }
    if (ulang == "ya")
    {
        cout << "pilih menu : \n1. Input barang dan stok \n2. Pengecekan barang dan stok \n3. Pencarian barang yang masuk " << endl;
        cout << "pilih : ";
        cin >> pilihan;
        switch (pilihan)
        {
        case 1:
            cout << "nama barang pertama : ";
            cin >> namab_1;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_1;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_1;
            cout << "nama barang kedua : ";
            cin >> namab_2;
            cout << "tanggal barang masuk(hh/bb) : ";
            cin >> tglb_2;
            cout << "stok barang masuk(angka) : ";
            cin >> stok_2;
            break;
        case 2:
            cout << "nama barang pertama : " << namab_1 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
            cout << "stok barang masuk(angka) : " << stok_1 << endl;
            cout << "nama barang kedua : " << namab_2 << endl;
            cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
            cout << "stok barang masuk(angka) : " << stok_2 << endl;
            break;
        case 3:
            cout << "masukkan nama barang : ";
            cin >> pil_barang;
            if (pil_barang == namab_1)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_1 << endl;
                cout << "stok barang masuk(angka) : " << stok_1 << endl;
            }
            else if (pil_barang == namab_2)
            {
                cout << "tanggal barang masuk(hh/bb) : " << tglb_2 << endl;
                cout << "stok barang masuk(angka) : " << stok_2 << endl;
            }
        }
    }
}
