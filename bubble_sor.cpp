
class Solution {
  public:
    // Function to sort the array using bubble sort algorithm.
    void bubbleSort(vector<int>& arr) {
        //int n=sizeof(arr);
        int n= arr.size();
        for(int i=0;i<n-1;i++){
            for(int j=0;j<(n-i-1);j++){
                if (arr[j]>arr[j+1]){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        // Your code here
    }
};
