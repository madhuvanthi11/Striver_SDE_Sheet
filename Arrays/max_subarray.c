//kadane's algo
int maxSubArray(int* nums, int numsSize) {
    int current_sum=nums[0]; //to add the applicable no.s as iteration progresses
    int max_sum=nums[0]; //to store the max sum at that pt
    for(int i=1; i<numsSize;i++){
        if(current_sum<0){  //if curr sum is negative, it's gonna reduce the max sum. so it's better to start a new array
            current_sum=nums[i];
        }
        else{
            current_sum+=nums[i]; //add the current element and inc curr sum
        }

        if(current_sum>max_sum){
            max_sum=current_sum;
        }
    }
    return max_sum;
}