class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        sort(arr.begin(),arr.end());
        
        int n=arr.size();
       
       int i=n-1;
       
       while(i>0){
           if(arr[i]==arr[i-1]){
               i--;
           }
           else if(arr[i]!=arr[i-1]){
               return arr[i-1];
           }
           
       }
        return -1;
       
    }
};