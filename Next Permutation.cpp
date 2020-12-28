public:
    void findnext(vector<int>& nums,int i)
    {
        reverse(nums.begin()+i+1,nums.end());  
        for(int k=i+1;k<nums.size();k++)
            if(nums[k]>nums[i])
            {
                swap(nums[i],nums[k]);  
                return;
            }
    }
    void nextPermutation(vector<int>& nums) {
        for(int i=nums.size()-1;i>=1;i--)
        {
            if(nums[i]>nums[i-1])          
            {
                findnext(nums,i-1);
                return;
            }
        }
        reverse(nums.begin(),nums.end()); 
    }
};