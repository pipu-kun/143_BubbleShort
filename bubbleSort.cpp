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
    cout << "====================" << endl;
    cout << "Masukan elemen array" << endl;
    cout << "====================" << endl;

    // menambahkan elemen ke dalam array
    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}


// bubbleShort procedure
void bubbleShortArray() {
    int pass = 1; // step 1

    do {
        for (int j = 0; j <= n - 1 - pass; j++) { // step 2
            if (arr[j] > arr[j + 1]) { // step 3
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; // step 4

        cout << "/nPass " << pass - 1 << ": "; //nomor pass
        for (int k = 0; k < n; k++) {
            cout << arr[k] << " "; // menampilkan data pada nomor pass
        }
        cout << endl;
    } while (pass <= n - 1); // step 5
    
}

// Display procedure
void display() {
    cout << endl;
    cout << "===============================" << endl;
    cout << "Elemen array yang sudah disusun" << endl;
    cout << "===============================" << endl;

    for (int j = 0; j < n; j++) {
        cout << arr[j];  // menampilkan array
        if (j < n - 1) {
            cout << " --> ";
        }
    }

    cout << endl;
    cout << endl;
    cout << "jumlah pass = "  << n -1 << endl; // menampilkan jumlah pass
    cout << endl;
    cout << endl;
}

//test


