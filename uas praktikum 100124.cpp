#include <iostream>
using namespace std;

int main()
{
    int n; // jumlah baris
    cout << "Masukkan jumlah baris: ";
    cin >> n;

    // perulangan untuk setiap baris
    for (int i = 1; i <= n; i++)
    {
        // mencetak spasi kosong sebelum bintang
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }

        // mencetak bintang sesuai dengan baris
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "^";
        }

        // pindah ke baris berikutnya
        cout << endl;
    }

    return 0;