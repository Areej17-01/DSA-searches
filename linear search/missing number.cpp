
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int idk = 0;
        bool flag = false;
        bool val = false;
        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    flag = true;
                }
            }
            if (flag == false) {

                idk = i;
                val = true;
                break;
            }
        }
        if (val == false) {
            return(n);
        }
        else {
            return(idk);

        }
    }
};
