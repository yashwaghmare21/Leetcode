class Solution {
public:
    bool canwesplit(vector<int>& nums,int i, int k){
        int sum = 0, splitcnt=1;
        for(int j:nums){
            if(sum + j <= i) sum += j;
            else{
                sum = j;
                splitcnt++;
            }
        }
        if(splitcnt <= k) return true;
        else return false;
    }
    int splitArray(vector<int>& nums, int k) {
        if( k > nums.size()) return -1;

        int low = *max_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);
        while(low<=high){
            int mid = low + (high-low)/2;
            if(canwesplit(nums,mid,k)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};