#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

// fungsi buat nerima input
void input(){
    while (true) {
        cout << "Enter number of element in array: ";
        cin >> n;
        if (n <= 20)
            break;
        else {
            cout << "Array can have maximum 20 elements.\n";
        }
    }

    // inimah cuma hiasan
    cout << endl;
    cout << "==================== << endl";
    cout << "Masukan elemen array" << endl;
    cout << "==================== << endl";

    // menambahkan elemen ke dalam array
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}




