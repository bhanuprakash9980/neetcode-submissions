class NumArray {
public:
    NumArray(vector<int>& nums) {
        const size_t arr_size = nums.size();
        prefix_arr.resize(arr_size);
        prefix_arr = move(nums);
        for(size_t i=1; i<arr_size;i++)
        {
           prefix_arr[i]+= prefix_arr[i-1];
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0)
            return prefix_arr[right];
        else
            return prefix_arr[right]-prefix_arr[left-1];
    }
private:
    vector<int> prefix_arr;
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */