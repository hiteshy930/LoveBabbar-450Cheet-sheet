========================================== Reverse a String =======================================
You are given a string s. You need to reverse the string.

Example 1:

Input:
s = Geeks
Output: skeeG
Example 2:

Input:
s = for
Output: rof
Your Task:

You only need to complete the function reverseWord() that takes s as parameter and returns the reversed string.

Expected Time Complexity: O(|S|).
Expected Auxiliary Space: O(1).

Constraints:
1 <= |s| <= 10000
=====================================================================================
Approach: 
          Traverse from back of string to start and concatenate characters.
          
string reverseWord(string str){
    
  //Your code here
  string temp="";
  for(int i=str.length()-1; i>=0;i--)
      temp+=str[i];
      
     return temp; 
}
