vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        vector<int> ans;
        int n=arr.size();
        int target=n/3;
        
        map<int,int> freq;
        for(auto ele:arr){
            freq[ele]++;
        }
        
        for(auto ele:freq){
            if(ele.second > target)
                ans.push_back(ele.first);
        }
        
        return ans;
        
    }