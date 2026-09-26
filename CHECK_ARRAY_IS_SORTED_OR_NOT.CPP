class Solution {
  public:
    bool isSorted(vector<int>& arr) {
        // code here
        int i=0;
        int j=1;
        while(i <arr.size() && j<arr.size()){
            if(arr[i]>arr[j]){
                return false;
            }
            else{
                i++;
                j++;
            }
        }
        return true;
    }
};