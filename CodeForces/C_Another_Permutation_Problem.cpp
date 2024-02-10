#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

class Solution {
public:
    void recurPermute(int index, vector<int>& nums, vector<vector<int>>& ans) {
        if (index == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = index; i < nums.size(); i++) {
            swap(nums[index], nums[i]);
            recurPermute(index + 1, nums, ans);
            swap(nums[index], nums[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        recurPermute(0, nums, ans);
        return ans;
    }
};

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        Solution obj;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) cin >> v[i]; // Read input directly into the vector

        vector<vector<int>> sum = obj.permute(v);

        ll ans = -1;
        for (int i = 0; i < sum.size(); i++) {
            ll t = 0;
            int m = -1;
            for (int j = 0; j < sum[i].size(); j++) {
                t += sum[i][j] * (j + 1);
                m = max(sum[i][j] * (j + 1), m);
            }
            t -= m;
            ans = max(t, ans);
        }
        cout << ans << endl;
    }
    return 0;
}
