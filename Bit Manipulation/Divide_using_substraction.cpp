===============================================  Divide two integers without using multiplication, division   ======================================================

Divide two integers without using multiplication, division and mod operator
Difficulty Level : Medium
 Last Updated : 10 Jan, 2019
Given a two integers say a and b. Find the quotient after dividing a by b without using multiplication, division and mod operator.

Example:

Input : a = 10, b = 3
Output : 3

Input : a = 43, b = -8
Output :  -5


==================================================================================================
Approach : 
          Use subtraction .
          
          
                #include <iostream>
                using namespace std;

                int main() {
                          int a,b;
                          cin>>a>>b;
                          int count=0;
                          while( a > abs(b) ){
                              a=a-abs(b);
                              count++;
                          }
                          if(b>0)
                                 cout <<  count;
                          else
                              cout <<   -count;  //for printing negative results


                  return 0;
                }
