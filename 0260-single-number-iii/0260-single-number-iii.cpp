class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_set<int> res;
        for (int num : nums) {
            if (res.find(num) == res.end()) {
                res.insert(num);
            } else {
                res.erase(num);
            }
        }
        return vector<int>(res.begin(), res.end());
    }
};