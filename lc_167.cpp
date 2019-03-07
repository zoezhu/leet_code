// No. 167
// Given an array of integers that is already sorted in ascending order,
// find two numbers such that they add up to a specific target number.
// The function twoSum should return indices of the two numbers such that they add up to the target,
// where index1 must be less than index2.
//
// This problem is focus on two pointers both from head and tail.
//
// Created by likegg on 07/03/2019.
//


#include <vector>
#include <iostream>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        while(l < r){
            if(numbers[l] + numbers[r] == target)
                return {l+1, r+1};
            if(numbers[l] + numbers[r] > target)
                r--;
            else
                l++;
        }
        return {};
    }
};


int main(){
    vector<int> test_numbers = {2, 7, 11, 15};
    int target = 9;
    Solution solu;
    vector<int> res;
    res = solu.twoSum(test_numbers, target);
    cout << res[0] << " " << res[1] << endl;
}