int searchInsert(int* nums, int numsSize, int target) {
    int index =  -1;
    int index2 = -1;
    for(int i=0; i<numsSize; i++){
        if(nums[i] == target){
            index = i;
            break;
        }
        else if(nums[i] >= target){
            index2 = i;
            break;
        }
    }
    if(index == -1 && index2 == -1)
        return numsSize;

    if (index != -1) return index;

    else return index2;
}
