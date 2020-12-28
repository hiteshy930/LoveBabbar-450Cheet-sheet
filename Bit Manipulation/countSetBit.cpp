======================================== Count set bit in number  ====================================
Q: Count the total set bit in a number.

====================================
Solution:
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
	int count=0;
    while(n!=0){
        n=n &(n-1);
        count++;
    }
    cout<<count;
	return 0;
}
