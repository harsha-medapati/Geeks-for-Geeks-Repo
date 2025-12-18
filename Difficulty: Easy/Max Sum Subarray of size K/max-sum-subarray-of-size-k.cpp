class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        if(arr.size() < k)
        {
            return -1;
        }
        int i,j,maxi=0;
        for(i=0;i<k;i++)
        {
            maxi += arr[i];
        }
        int winsum = maxi;
        for(i=k;i<arr.size();i++)
        {
            winsum += arr[i]-arr[i-k];
            maxi = max(maxi,winsum);
        }
        return maxi;
    }
};