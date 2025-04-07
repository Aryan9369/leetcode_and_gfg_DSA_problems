class Solution {
  public:
    // Function to perform selection sort on the given array.
    void selectionSort(vector<int> &arr) {
        int N=arr.size();
        
        
        int i,j,temp;
        for (i=0;i<N-1;i++){
            int min_indx=i;
            
           
            for (j=i+1;j<N;j++){
                
                if (arr[j]<arr[min_indx]){
                min_indx = j;
                
               }  
            }
            if (min_indx!=i){
            temp=arr[i];
            arr[i]=arr[min_indx];
            arr[min_indx]=temp;
            }
        }
  
    }

}; //MAKE MAIN FUNCTION AND OBJECT TO PRINT THIS ARRAY
