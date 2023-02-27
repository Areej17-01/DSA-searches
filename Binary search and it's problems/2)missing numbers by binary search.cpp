class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int size = nums.size();

    for (int i = 0; i < size; i++) {
        int temp = nums[i];
        for (int j = 0; j < size; j++) {
            if (nums[j] > nums[i]) {
                int val = nums[j];
                nums[j] = nums[i];
                nums[i] = val;
            }
        }
    }
   
    int left = 0;
    int right = size - 1;
    if (nums[0] != 0) {
        return( 0);
    }
    else if (nums[right] != size) {
        return size ;
    }
    while (left < right) {
        int mid = (left + right) / 2;
        if (nums[mid] == mid) {
            left = mid + 1;

        }
        else {
            right = mid;
        }

    }
   return (left);
    }
     

};

#passes 118 cases out of 122
