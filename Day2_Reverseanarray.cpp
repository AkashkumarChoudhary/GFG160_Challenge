 void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size();
        int low =0;
        int high =n-1;
        for(int i = 0;i< n ;i++){
            if(low<=high){
                swap (arr[low],arr[high] );
                low++ ,high--;
            }
        }
        // return arr;
    }