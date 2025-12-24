// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        // code here
        int i;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i] >= x)
            {
                return i;
            }
        }
        return -1;
    }
};