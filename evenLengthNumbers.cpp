#include <iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int countDig(int num)
    {int c=0;while(num>0)
    {num=num/10;c++;}
    return c;}
    int findNumbers(vector<int>& nums) {
    int count=0;
    for(auto i:nums)
    {int k=countDig(i);
    if(k%2==0){count++;}}
    return count;
    }
};

int main() {
    Solution s;
    vector<int>nums = {12,345,2,6,7896};
    int c=s.findNumbers(nums);
    cout<<c;
return 0;}
