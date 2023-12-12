#include<iostream>
using namespace std;
int twoSum(int *nums,int target){
    int size=sizeof(nums)/sizeof(nums[0]);
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(nums[i]+nums[j]==target){
               cout<<"["<<nums[i]<<","<<nums[j]<<"]";
            }
        }
    }
}
int main(){
int nums[]={5,6,8,7,4};
int target=10;
twoSum(nums,target);
    return 0;
}