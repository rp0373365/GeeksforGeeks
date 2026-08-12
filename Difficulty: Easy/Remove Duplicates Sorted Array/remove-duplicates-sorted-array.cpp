class Solution {
  public:
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int n = arr.size();
        vector<int> temp;
        set<int> s;
        for(int j =0 ; j < n ; j++)
        {
            s.insert(arr[j]);
        }
        for(int x:s)
        {
            temp.push_back(x);
        }
        return temp;
    }
};