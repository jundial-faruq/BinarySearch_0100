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
    cout << "\n==============================================\n";
    cout << "           Masukan Elemen Array                 \n";
    cout << "================================================\n";
    for (int i = 0; i < nPanjang; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> elemen[1];
    }
    
}


void bubbleSortArray()
{
    int pass = 1;
    do
    {
        for (int j = 0; j <= nPanjang - 1 - pass; j++)
        {
            if (elemen[j] > elemen[j + 1])
            {
                int temp = elemen[j];
                elemen[j] = elemen[j + 1 ];
                elemen[j + 1] = temp;
            }
            
        }
        pass++;
    } while (pass <= nPanjang - 1);
}
int main(){

    return 0;
}