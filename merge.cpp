
#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void mergeSort(vector<int>& arr, int low, int high) {
        if (low >= high) return;

        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);         // Left half
        mergeSort(arr, mid + 1, high);    // Right half
        merge(arr, low, mid, high);        // Merge the halves
    }

    void merge(vector<int>& arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid + 1;

        // Merge sorted halves
        while (left <= mid && right <= high) {
            if (arr[left] < arr[right]) {
                temp.push_back(arr[left]);
                left++;
            } else {
                temp.push_back(arr[right]);
                right++;
            }
        }

        // Copy remaining elements from left
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }

        // Copy remaining elements from right
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }

        // Copy sorted values back to original array
        for (int i = low; i <= high; ++i) {
            arr[i] = temp[i - low];  // temp[0] corresponds to arr[low]
        }
    }

    void display(const vector<int>& arr) {
        for (int val : arr) {
            cout << val << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> arr = {4,1,3,9,7};
    Solution obj1;
    obj1.mergesort(arr, 0, arr.size() - 1);
    obj1.display(arr);
    return 0;
}
