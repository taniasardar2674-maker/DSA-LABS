#include <iostream>
using namespace std;

int main() {
    int arr[5], value, position;

    cout << "Enter 4 elements:" << endl;

    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }

    cout << "Enter value to insert: ";
    cin >> value;

    cout << "Enter position: ";
    cin >> position;

    for (int i = 4; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = value;

    cout << "Updated array:" << endl;

    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}