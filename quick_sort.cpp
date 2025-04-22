class Solution {
public:
    // Quick Sort using Hoare's partition scheme
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int partition_index = quick_fun(arr, low, high);
            quickSort(arr, low, partition_index);         // Note: no -1 here
            quickSort(arr, partition_index + 1, high);
        }
    }

    int quick_fun(vector<int>& arr, int low, int high) {
        int pivot = arr[low];
        int i = low - 1;
        int j = high + 1;

        while (true) {
            do {
                i++;
            } while (arr[i] < pivot);

            do {
                j--;
            } while (arr[j] > pivot);

            if (i >= j)
                return j;

            swap(arr[i], arr[j]);
        }
    }
};
