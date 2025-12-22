#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int longestones(vector<int> &nums,int k){
        int maxlen=0,r=0,l=0,zero=0;
        while(r<nums.size())
        {
           if(nums[r]==0)
           {
            zero++;
           }
           while(zero>k)
           {
            if(nums[l]==0)
            {
             zero--;
            }
            l++;
           }
           if(zero<=k)
           {
            int len=r-l+1;
            maxlen=max(len,maxlen);
           }
        r++;

    
}
return maxlen;

}};
int main()
{
    Solution sol;
    vector<int> nums = {1,1,1,0,0,0,1,1,1,1,0};
    int k = 2;

    // Output the result
    cout << sol.longestones(nums, k) << endl;
    return 0;
}

