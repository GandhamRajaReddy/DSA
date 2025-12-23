#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Function to find the maximum number of fruits we can collect
    // with at most two types of fruits in the baskets.
    int totalFruit(vector<int>& fruits) {
     int l=0,r=0,maxlen=0;
     map<int,int>mpp;
     while(r<fruits.size())
     {
        mpp[fruits[r]]++;
        if(mpp.size()>2)
        {
            while(mpp.size()>2)
            {
            mpp[fruits[l]]--; 
            if(mpp[fruits[l]]==0)
            {
                mpp.erase(fruits[l]);
            } 
            l++;
            } 
            
        }
        if(mpp.size()<=2)
        {
            maxlen=max(maxlen,(r-l+1));
        }
        r++;
     }
     return maxlen;
    }
};

int main() {
    Solution sol;
    vector<int> fruits = {1,2,1,2,3};
    cout << sol.totalFruit(fruits) << endl;
    return 0;
}