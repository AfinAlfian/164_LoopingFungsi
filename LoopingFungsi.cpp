#include <iostream>
using namespace std;

int main()
{
    int i;
    int arr[5];

    for (i = 0; i < 5; i++) {
        cout << i << " selamat pagi dunia" << endl;
    }

    cout << "nilai i terakhir : " << i << endl;

    for (i = 0; i < 5; i++) {
        cout << "Masukkan nilai indeks ke-" << i << " :";
        cin >> arr[i];
    }

    for (i = 0; i < 5; i++) {
        cout << "data array ke-" << i << " :" << arr[i] << endl;
    }
}