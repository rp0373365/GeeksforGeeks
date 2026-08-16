class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        unordered_set<int> st;
        vector<int> v;
        for(int i = 0 ; i < a.size() ; i++)
        {
            st.insert(a[i]);
        }
        for(int i = 0 ; i < b.size() ; i++)
        {
            st.insert(b[i]);
        }
        for(int x:st)
        {
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        return v;
    }
};