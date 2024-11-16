#include<bits/stdc++.h>
#include<vector>
 void pushZerosToEnd(vector<int>& arr) {
        
        vector<int>v;
        int c=0;
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]==0) c++;
            else v.push_back(arr[i]);
        }
        for(int i=0;i<c;i++)
        {
            v.push_back(0);
        }
        arr.clear();
        for(int i=0;i<v.size();i++)
        {
            arr.push_back(v[i]);
        }
    }