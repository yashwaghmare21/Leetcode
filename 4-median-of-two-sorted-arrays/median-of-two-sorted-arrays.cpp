class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(),n=nums2.size();
        vector<int>temp;
        int i=0,j=0;
        while(i<m && j<n){
            if(nums1[i]<=nums2[j]) temp.push_back(nums1[i++]);
            else temp.push_back(nums2[j++]);
        }
        while(i<m) temp.push_back(nums1[i++]);
        while(j<n) temp.push_back(nums2[j++]);
        if(temp.size()==0)return -1;
        int low=0,high=temp.size()-1;
        int mid=low+(high-low)/2;
        double ans= 0;
        if(temp.size() % 2 == 0){
            ans = (temp[mid]+temp[mid+1])/2.0;
        }else ans = temp[mid];
        return ans;
    }
};