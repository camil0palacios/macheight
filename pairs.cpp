#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

typedef pair<int,int> Pairs;

vector<Pairs> sumTarget(int n, int target, vector<int>& nums) {
    vector<Pairs> ans;
    unordered_map<int, int> seen;
    for(int i = 0; i < n; i++) {
        if(seen.count(target - nums[i])) {
            ans.push_back(Pairs(nums[i], target - nums[i]));
        }
        seen[nums[i]] = 1;
    }
    return ans;
}

int main() { 
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int T;
    cin >> T;
    for(int t = 1; t <= T; t++) {
        int n, target;
        cin >> n >> target;
        vector<int> nums(n);
        for(int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        vector<Pairs> ans = sumTarget(n, target, nums);
        cout << "Case " << t << ": " << endl;
        for(auto [x, y]: ans) {
            cout << x << ' ' << y << endl;
        }
    }
    return 0; 
}