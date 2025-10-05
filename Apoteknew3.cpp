#include <iostream>
using namespace std;

int main()
{
    string namaobat;
    int stokobat;

    cout << "==APOTEK MAS YUWAN==" << endl;
    cout << "Masukkan Nama Obat : ";
    cin >> namaobat;

    cout << "Masukkan Stok Obat: ";
    cin >> stokobat;

    if (stokobat > 50)
    {
        cout << "Stok Aman !!";
    } else if (stokobat <=50 && stokobat >= 20)
    {
        cout << "Stok Menipis !!!";
    } else
    {
        cout << "Stok Habis, Segera Restok !!!!";
    }
    
    
}