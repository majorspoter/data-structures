#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

// Class Definition 

class Solution{
    public:
	int Solution::trailingZeroes(int A) ;
};

// Program Code
int Solution::trailingZeroes(int A) {
   if (A< 0)
        return-1;
    int count = 0;
    for (int i = 5; A/ i >= 1; i *= 5)
        count += A/ i;
 
    return count;
}