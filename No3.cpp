#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void move_zero(vector<int>& arr) {
    // Memindahkan elemen 0 ke depan vektor
    stable_partition(arr.begin(), arr.end(), [](int x){return x == 0;});
}

int main() {
    vector<int> arr = {1, 2, 3, 0, 4, 5, 0, 0};

    // Menampilkan vektor sebelum pemindahan nilai 0
    cout << "Input : ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Memindahkan nilai 0 ke awal vektor
    move_zero(arr);

    // Menampilkan vektor hasil pengurutan
    cout << "Output: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
