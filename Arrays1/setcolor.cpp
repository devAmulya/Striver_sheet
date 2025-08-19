#include<iostream>
#include<vector>
using namespace std;


int main(){
    vector<int> nums = {2,0,2,1,1,0};
    int i = 0, j = 0, k = nums.size()-1;
    while(j <= k){
        if(nums[j] == 0){
            swap(nums[i],nums[j]);
            j++;
            i++;
        }else if(nums[j] == 1){
            j++;
        }else{
            swap(nums[j],nums[k]);
            k--;
        }
    }

    return 0;
}