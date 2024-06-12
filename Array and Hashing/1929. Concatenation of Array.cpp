class Solution {
public:
    #define ll int
    #define sz(x) (int)(x).size()
    vector<int> getConcatenation(vector<int>& nums) {
        vector<ll> a = nums;
        ll j = 0;
        for(ll i = sz(nums); i < 2*sz(nums); ++i){
            a.push_back(nums[j]);
            j++;
        }
        return a;
    }
};