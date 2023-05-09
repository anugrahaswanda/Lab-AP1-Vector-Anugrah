#include <iostream>
#include <vector>

using namespace std;

vector<int> remove_duplicates(vector<int> v) {
    vector<int> result;

    for (int i = 0; i < v.size(); i++) {
        bool is_duplicate = false;

        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] == v[j]) {
                is_duplicate = true;
                break;
            }
        }

        if (!is_duplicate) {
            result.push_back(v[i]);
        }
    }

    return result;
}

int main() {
    vector<int> v = {1, 2, 2, 3, 4, 5, 5};

    v = remove_duplicates(v);

    cout << "Nilai setelah dihapus duplikat: ";
    for (int val : v) {
        cout << val << " ";
    }

    cout << endl;

    return 0;
}
