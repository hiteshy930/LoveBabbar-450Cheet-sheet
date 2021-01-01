====================================================== Finding 2 numbers which are appear only once ===========================
Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers  (in ascending order).

Example 1:

Input: 
2
1 2 3 2 1 4
Output:
3 4 
Explanation: 3 and 4 occur exactly once.
Example 2:

Input:
1
2 1 3 2
Output:
1 3
Explanation: 1 3 occur exactly once.
Your Task:
You do not need to read or print anything. Your task is to complete the function singleNumber() which takes the array as input parameter and returns a list of two numbers which occur exactly once in the array.

Expected Time Complexity: O(n)
Expected Space Complexity: O(1)

Constraints:
1 <= length of array <= 106 
1 <= Elements in array <= 5 * 106

===========================================================================================
Approach : 2- odd appearing numbers

       class Solution
{
public:
    vector<int> singleNumber(vector<int>& nums) 
    {
        // Code here.
        int xorr=0;
        vector<int> temp;
        for(int i:nums)
             xorr ^= i;
             
         int rightsetbit= xorr & ~(xorr-1);
         int res1=0,res2=0;
         for(int i=0;i<nums.size();i++){
             if((rightsetbit & nums[i])!=0)
                res1^=nums[i];
            else 
                res2^=nums[i];
         }
         temp.push_back(res1);
         temp.push_back(res2);
         sort(temp.begin(),temp.end());
         return temp;
    }
};
