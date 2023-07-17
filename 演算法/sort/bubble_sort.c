#include "stdio.h"

int main() {

    int nums[6] = {6,2,6,5,1,2};
    int numsSize = 6;

    int temp=0;

    for(int i=0; i<numsSize-1; i++) {
        for(int j=0; j<numsSize-i-1; j++){
            if(nums[j] > nums[j+1]) {
                temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    for(int i=0; i<numsSize; i++) {
        printf("%d ", nums[i]);
    }

    return 0;
}