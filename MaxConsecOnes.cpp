#include <iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
    int count=0,curr=0;
    for(int i=0;i<nums.size();i++)
    {if(nums[i]==0){count=max(count,curr);curr=0;}
    else{curr++;}
    }
    count=max(count,curr);
    return count;}};

int main() {
  vector<int> v={1,1,1,1,0,1,1,1,1,1,0,1,1};
  Solution s; 
  int ans=s.findMaxConsecutiveOnes(v);
  cout<<ans;
return 0;}
