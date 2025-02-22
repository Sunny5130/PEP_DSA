class Solution {
    public:
        int subarraySum(vector<int>& arr, int k) {
         int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int k=i;k<=j;k++){
                    sum=sum + arr[k];
                }
                if(sum==k) count++;
            }
        }
        return count;
        }
    };