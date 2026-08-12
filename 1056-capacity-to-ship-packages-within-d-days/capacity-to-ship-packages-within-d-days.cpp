class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end()),
        high= accumulate(weights.begin(),weights.end(),0);
        int ans = 0;
        while(low<=high){
            int mid = low + (high-low)/2;
            int sum = 0,temp=1;
            for(int i=0;i<weights.size();i++){
                if(sum + weights[i] <= mid) sum += weights[i];
                else {
                    sum = weights[i];
                    temp++;
                }
            }
            if(temp<=days){
                ans = mid;
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        cout << low << " " << high <<"\n";
        return ans;
    }
};