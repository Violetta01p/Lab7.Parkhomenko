#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number :" << endl;
    cin >> n;

    int* array = new int[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i + 1 << ": ";
        cin >> array[i];
    }

    for (int i = 0; i < n / 2; i++) {
        int x = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = x;
    }

    cout << "Inverted array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << array[i] << endl;
    }

    delete[] array; 
    return 0;
}
