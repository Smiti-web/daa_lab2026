#include <iostream>
#include <vector>
using namespace std;

bool linearSearch(const vector<int>& arr, int key, int& comparisons) {
    comparisons = 0;
    
    for (int i = 0; i < arr.size(); i++) {
        comparisons++;              // One comparison
        if (arr[i] == key) {
            return true;             // Key found
        }
    }
    return false;                    // Key not found
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter array elements (non-negative integers): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int key;
    cout << "Enter key element to search: ";
    cin >> key;

    int comparisons = 0;
    bool found = linearSearch(arr, key, comparisons);

    if (found) {
        cout << "Key element is PRESENT in the array." << endl;
    } else {
        cout << "Key element is NOT PRESENT in the array." << endl;
    }

    cout << "Total number of comparisons: " << comparisons << endl;

    return 0;
}
