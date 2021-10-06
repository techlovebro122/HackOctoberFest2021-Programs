
Link:https://leetcode.com/problems/number-of-pairs-of-strings-with-concatenation-equal-to-target/
Code:
class Solution {
public:
    int numOfPairs(vector<string>& nums, string target) {
        int n=nums.size(),c=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                c++;
            }
            
        }
        }
        for(int i=n-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
            if(nums[i]+nums[j]==target){
                c++;
            }
            
        }
        }
        
            return c;
    }
};
