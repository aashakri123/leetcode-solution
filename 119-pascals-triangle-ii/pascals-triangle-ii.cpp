class Solution {
public:
    vector<int> getRow(int rowIndex) {
       vector<int>prev;
       long long value = 1;
       for(int i = 0;i<=rowIndex; i++){
        prev.push_back(value);
        value = value*(rowIndex - i)/(i+1);
       }
       return prev;
    }
};