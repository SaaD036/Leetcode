int findMin(vector<int>& nums) {
    int n=nums.size();

    for(int i=1; i<n; i++){
        if(nums[i] < nums[0]){
            return nums[i];
        }
    }

    return nums[0];
}
