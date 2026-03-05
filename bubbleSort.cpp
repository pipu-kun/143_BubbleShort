#include <iostream>
#include <string>
using namespace std;

int arr[20];
int n;

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


}



