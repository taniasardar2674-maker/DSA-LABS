#include <iostream>
using namespace std;

int main() {
    int arr[5], search;
    int found = 0;

    cout << "Enter 5 elements:" << endl;

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            cout << "Element found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if (found == 0) {
        cout << "Element not found.";
    }

    return 0;
}