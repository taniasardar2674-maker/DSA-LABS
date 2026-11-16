#include <iostream>
using namespace std;

int main() {
    int arr[5], position;

    cout << "Enter 5 elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter position to delete: ";
    cin >> position;

    for (int i = position - 1; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    cout << "Updated array:" << endl;

    for (int i = 0; i < 4; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}