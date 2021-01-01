=============================================  Power set of a string =============================================

Given a string S find all possible substrings of the string in lexicographically-sorted order.

Example 1:

Input : str = "abc"
Output: a ab abc ac b bc câ€‹
Explanation : There are 7 substrings that 
can be formed from abc.
Example 2:

Input: str = "aa"
Output: a a aa
Explanation : There are 3 substrings that 
can be formed from aa.
Your Task:
You don't need to read ot print anything. Your task is to complete the function AllPossibleStrings() which takes S as input parameter and returns a list of all possible substrings(non-empty) that can be formed from S in lexicographically-sorted order.
 

Expected Time Complexity: O(2^n) where n is the length of the string
Expected Space Complexity : O(n * 2n)
 

Constraints: 
1 <= Length of string <= 16



=============================================================================
Approach :
          substring possible using recursiion
          stored leaf elements into temp vector
          sort the vector return as answer.
          
          
          Solution:
            
              class Solution{
	public:
	vector <string> temp;
	void substring(string s, string curr,int index){
	    if(s.length()==index){
	        if(curr!="")
	         temp.push_back(curr);
	        return;
	    }
	    
	    substring(s,curr,index+1);
	    substring(s,curr+s[index],index+1);
	}
	
		vector<string> AllPossibleStrings(string s){
		    // Code here
		    substring(s,"",0);
		    sort(temp.begin(),temp.end());
		    return temp;
		}
};

          
