#include <iostream>

using namespace std;


    int main()
{
        //Variabel
        double harga = 150000; // Harga Semula
        double diskon = 12.5; // Diskon
        double besarnyaDiskondariHarga, hargaSetelahDiskon;

        //Jumlah diskon
        besarnyaDiskondariHarga = harga * diskon / 100;

        //Harga setelah diskon
        hargaSetelahDiskon = harga - besarnyaDiskondariHarga;

        //Hasil
        cout << "Harga : " << harga << " ribu" << endl;
        cout << "Diskon : " << diskon << endl;
        cout << "Besarnya diskon dari harga : " << besarnyaDiskondariHarga << endl;
        cout << "Harga setelah diskon : " << hargaSetelahDiskon << " ribu" << endl;

        return 0;
}