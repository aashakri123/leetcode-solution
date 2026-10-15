class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
       int n = nums.size();
        vector<int> ans(n, 0);
        vector<int> idx(n), temp(n);
        for (int i = 0; i < n; i++) {
            idx[i] = i;
        }
        mergeSort(nums, idx, temp, ans, 0, n - 1);
        return ans;
    }
private:
    void mergeSort(vector<int>& nums, vector<int>& idx,
        vector<int>& temp, vector<int>& ans,
        int left, int right) {
        if (left >= right) return;
        int mid = left + (right - left) / 2;
        mergeSort(nums, idx, temp, ans, left, mid);
        mergeSort(nums, idx, temp, ans, mid + 1, right);
        int i = left, j = mid + 1, k = left;
        int smaller = 0;
        while (i <= mid && j <= right) {
            if (nums[idx[j]] < nums[idx[i]]) {
                temp[k++] = idx[j++];
                smaller++;
            } else {
                ans[idx[i]] += smaller;
                temp[k++] = idx[i++];
            }
        }
        while (i <= mid) {
            ans[idx[i]] += smaller;
            temp[k++] = idx[i++];
        }
        while (j <= right) {
            temp[k++] = idx[j++];
        }
        for (int p = left; p <= right; p++) {
            idx[p] = temp[p];
        }
    }   
};