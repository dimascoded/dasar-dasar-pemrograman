#include <iostream>
#include <stdlib.h>
using namespace std;
struct penulis
{
    string nama;
};
struct data
{
    int id, harga;
    string judul;
    penulis penulis;
};
void tambah_buku(data buku[100], int &jml_buku)
{
    system("cls");
    int tambah;
    cout << "Masukkan jumlah buku yang ingin ditambahkan =";
    cin >> tambah;
    for (int a = jml_buku; a < jml_buku + tambah; a++)
    {
        cout << "Masukkan id buku: ";
        cin >> buku[a].id;
        cout << "Masukkan judul buku: ";
        cin.ignore();
        getline(cin, buku[a].judul);
        cout << "Masukkan nama penulis buku: ";
        getline(cin, buku[a].penulis.nama);
        cout << "Masukkan harga buku: ";
        cin >> buku[a].harga;
        system("cls");
    }
    jml_buku += tambah;
    system("pause");
    system("cls");
}
void tampil_buku(data buku[100], int jml_buku)
{
    for (int a = 0; a < jml_buku; a++)
    {
        cout << "Data buku ke-" << a + 1 << endl;
        cout << "id buku : " << buku[a].id << endl;
        cout << "judul buku : " << buku[a].judul << endl;
        cout << "nama penulis buku : " << buku[a].penulis.nama << endl;
        cout << "harga buku : " << buku[a].harga << endl;
        cout << endl;
    }
    system("pause");
    system("cls");
}
void ubah_data(data buku[100], int &jml_buku)
{
    system("cls");
    int id;
    cout << "masukkan id buku yang ingin diubah = ";
    cin >> id;
    for (int a = 0; a < jml_buku; a++)
    {
        if (id == buku[a].id)
        {
            cout << "masukkan judul baru = ";
            cin >> buku[a].judul;
            cout << "masukkan nama penulis baru = ";
            cin >> buku[a].penulis.nama;
            cout << "masukkan harga baru = ";
            cin >> buku[a].harga;
        }
    }
    system("pause");
    system("cls");
}
void hapus_buku(data buku[100], int &jml_buku)
{

    int id;
    cout << "masukkan id buku yang ingin dihapus= ";
    cin >> id;
    for (int a = 0; a < jml_buku; a++)
    {
        if (id == buku[a].id)
        {
            for (int i = a; i < jml_buku - 1; i++)
            {
                buku[i] = buku[i + 1];
            }
            jml_buku--;
            cout << "Buku dengan ID " << id << " berhasil dihapus." << endl;
            break;
        }
    }
    system("pause");
    system("cls");
}

void hitung_total(data buku[100], int jml_buku)
{
    int jml_beli, id;
    string kode;
    int total_harga = 0;
    bool penulis_diskon = false;
    bool kode_diskon = false;
    float total_diskon = 0.0;

    cout << "Masukkan jumlah buku yang ingin dibeli: ";
    cin >> jml_beli;

    // Array untuk menyimpan ID buku yang dibeli
    int id_buku_dibeli[jml_beli];

    // Input ID buku yang dibeli
    for (int a = 0; a < jml_beli; a++)
    {
        cout << "Masukkan id buku yang ingin dibeli = ";
        cin >> id_buku_dibeli[a];
    }

    // Masukkan kode voucher jika ada
    cout << "Masukkan kode voucher (jika ada) = ";
    cin >> kode;

    // Menghitung total harga
    for (int i = 0; i < jml_buku; i++)
    {
        for (int a = 0; a < jml_beli; a++)
        {
            if (buku[i].id == id_buku_dibeli[a])
            {
                total_harga += buku[i].harga;

                // Mengecek diskon penulis
                for (int j = 0; j < jml_buku; j++)
                {
                    // Diskon penulis jika ada dua buku dari penulis yang sama
                    if (jml_beli >= 2 and i != j && buku[i].penulis.nama == buku[j].penulis.nama && buku[i].id != buku[j].id)
                    {
                        penulis_diskon = true;
                    }
                }
            }
        }
    }

    // Mengecek kode voucher
    if (kode == "JPYUM")
    {
        kode_diskon = true;
    }

    // Menentukan total diskon
    float diskon_penulis = penulis_diskon ? 0.1 : 0.0;
    float diskon_voucher = kode_diskon ? 0.05 : 0.0;
    total_diskon = diskon_penulis + diskon_voucher;

    // Menghitung harga akhir setelah diskon
    float harga_akhir = total_harga * (1.0 - total_diskon);

    cout << "Total harga setelah diskon adalah = " << harga_akhir << " rupiah" << endl;

    system("pause");
    system("cls");
}

int main()
{
    int pil, jml_buku = 0;
    data buku[100];
    cout << "Selamat datang!" << endl;
    do
    {
        cout << "Menu : \n1. Tambah buku \n2. Tampilkan Daftar Buku \n3. Ubah data buku \n4. Hapus Buku \n5. Hitung Total Harga Pembelian dengan Diskon \n6. keluar" << endl;
        cout << "Pilih opsi = ";
        cin >> pil;
        switch (pil)
        {
        case 1:
            tambah_buku(buku, jml_buku);
            break;
        case 2:
            tampil_buku(buku, jml_buku);
            break;
        case 3:
            ubah_data(buku, jml_buku);
            break;
        case 4:
            hapus_buku(buku, jml_buku);
            break;
        case 5:
            hitung_total(buku, jml_buku);
            break;
        }
    } while (pil != 6);
}
