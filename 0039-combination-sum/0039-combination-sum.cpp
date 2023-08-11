class Solution {
public:
void findComb(int ind, vector<int> &arr, vector<vector<int>> &ans, long long target, vector<int> &ds) {
    if (ind == arr.size()) {
        if (target == 0) {
            ans.push_back(ds);
        }
        return; 
    }

    if (arr[ind] <= target) {
        ds.push_back(arr[ind]);
        findComb(ind, arr, ans, target - arr[ind], ds);
        ds.pop_back();
    }
    findComb(ind + 1, arr, ans, target, ds);
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        findComb(0, candidates, ans, target, ds);
        return ans;
    }
};