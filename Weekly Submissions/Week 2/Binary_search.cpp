class Solution {
public:
    int binarysearch(vector<int>& nums, int target,int s,int e){
        int mid=s+(e-s)/2;
        while(s<=e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]>target){
                e=mid-1;
            }
            else{
                s=mid+1;
            }
		mid=s+(e-s)/2;
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int ans=binarysearch(nums,target,0,nums.size()-1);
        return ans;
    }
};
