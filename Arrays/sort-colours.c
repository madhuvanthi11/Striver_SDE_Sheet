//dnf soln
void sortColors(int* nums, int numsSize) {
    int low=0,mid=0,high=numsSize-1; //low->0, mid->1, high->2
    int temp;
    while(mid<=high){
        if (nums[mid]==0){ //swap with low
            temp=nums[low];
            nums[low]=nums[mid];
            nums[mid]=temp;
            low++;
            mid++;
        }
        else if(nums[mid]==1){ //leave it. move forward
            mid++;
        }
        else{ //when mid points to 2, swap with high
            temp=nums[high];
            nums[high]=nums[mid];
            nums[mid]=temp;
            high--;
        }
    }
}