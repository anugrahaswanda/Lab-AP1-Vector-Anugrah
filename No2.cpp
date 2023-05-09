#include <iostream>
#include <vector>

using namespace std;

int find_frequency(vector<int> arr, int num) {
    int freq = 0;

    for (int i = 0; i < arr.size(); i++) {

        if (arr[i] == num) {
            freq++;
        }
    }
        if (freq > 0) 
    {
        return freq;
    } else {
        cout << "Angka tidak ditemukan" << endl;
        return -1;
    }
}

int main() {
    vector<int> arr = {1, 2, 2, 3, 3, 3, 5};
    int num;

    cout << "Masukkan angka yang ingin dicari frekuensinya: ";
    cin >> num;

    int freq = find_frequency(arr, num);

    if (freq != -1) {
        cout << "Frekuensi dari angka " << num << " di dalam array adalah " << freq << endl;
    }

    return 0;
}
