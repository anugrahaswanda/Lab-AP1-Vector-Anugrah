#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void move_zero(vector<int>& arr) {
    stable_partition(arr.begin(), arr.end(), [](int x){return x == 0;});
}

int main() {
    vector<int> arr = {1, 2, 3, 0, 4, 5, 0, 0};

    cout << "Input : ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    move_zero(arr);

    cout << "Output: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
