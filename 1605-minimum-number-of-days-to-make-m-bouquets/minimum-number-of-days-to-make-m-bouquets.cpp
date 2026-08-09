class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if(1LL*m*k > bloomDay.size()) return -1;
        int low=1,ans=-1;
        int high= *max_element(begin(bloomDay),end(bloomDay));
        while(low <= high){
            int mid = low + (high-low)/2;
            int flowers=0,bouquet=0;
            for(int i : bloomDay){
                if( i <= mid){
                    flowers++;
                    if(flowers==k){
                        bouquet++;
                        flowers=0;
                    }
                }else{
                    flowers=0;
                }
            }
            if(bouquet >= m){
                ans=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return ans;
    }
};