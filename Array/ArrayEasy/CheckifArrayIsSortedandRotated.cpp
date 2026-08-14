#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            if(nums[i] > nums[(i + 1) % n]) {
                count++;
            }
        }
        return count <= 1;
    }
};
int main() {
    vector<int> nums = {3, 4, 5, 1, 2};
    Solution obj;
    cout << obj.check(nums);
    return 0;
}