class Solution {
public:
    void merge(vector<int>& nums,int s,int mid,int e){
        int l1=mid-s+1;
        int l2=e-mid;
        int a[l1];
        int b[l2];
        int k=s;
        for(int i=0;i<l1;i++){
            a[i]=nums[k++];
        }
        k=mid+1;
        for(int j=0;j<l2;j++){
            b[j]=nums[k++];
        }
        int i=0;
        int j=0;
        k=s;
        while(i<l1 && j<l2){
            if(a[i]<b[j]){
                nums[k++]=a[i++];
            }
            else{
                nums[k++]=b[j++];
            }
        }
        while(i<l1){
            nums[k++]=a[i++];
        }
        while(j<l2){
            nums[k++]=b[j++];
        }
    }
    void merge_sort(vector<int>& nums,int s,int e){
        if(s>=e){
            return;
        }
        int mid=s+(e-s)/2;
        merge_sort(nums,0,mid);
        merge_sort(nums,mid+1,e);
        merge(nums,s,mid,e);
    }
    vector<int> sortArray(vector<int>& nums) {
        merge_sort(nums,0,nums.size()-1);
        return nums;
    }
};
