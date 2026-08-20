class Solution {
public:
    int maxele(vector<vector<int>>& mat,int n,int m,int mid){
        int maxelement=-1,maxidx=-1;
        for(int i=0;i<n;i++){
            if(mat[i][mid]>maxelement){
                maxelement=mat[i][mid];
                maxidx=i;
            }
        }
        return maxidx;
    }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low=0,high=m-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            int rownum=maxele(mat,n,m,mid);
            int left = (mid>0)? mat[rownum][mid-1]:-1;
            int right=(mid<m-1)? mat[rownum][mid+1]:-1;
            if(mat[rownum][mid]>left && mat[rownum][mid]>right){
                return {rownum,mid};
            }else if(mat[rownum][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {-1,-1};
    }
};