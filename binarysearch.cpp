#include <iostream>
using  namespace std;

int elemen[10];
int nPanjang;
int x;

void inpu()
{
    while (true)
    {
        cout << " Masukan banyaknya elemen Array (maksimal 10) : ";
        cin >> nPanjang;
        if (nPanjang <= 10)
        {
            break;
        }
        else
        {
            cout << "\n[!] Jumlah elem tidak boleh lebih dari 10, silahkan coba lagi.\n";
        }
        

    }
    
}
int main(){

    return 0;
}