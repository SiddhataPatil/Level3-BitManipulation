/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Find Min XOR value of a pair
 Example     : Input 0 4 7 9 Output 3 (4 XOR 7)
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int findMinXor(vector<int> &A)  ;
}obj;

int Solution::findMinXor(vector<int> &A)
{
   sort(A.begin(), A.end());
    int temp_result = INT_MAX;
    int result = INT_MAX;
    for(int i=0;i<A.size()-1;i++)
    {
        temp_result = A[i]^A[i+1];
        result = min(result,temp_result);
    }
    return result;
}

int main()
{
  int A1[4] = {0, 2, 5, 7};
  vector<int> A(A1,A1+sizeof(A1)/sizeof(A1[0]));
  int result=0;
  result = obj.findMinXor(A);
  cout<<"In A1[4] = {0, 2, 5, 7} "<<endl;
  cout<<"Min XOR =  ";
  cout<<result<<endl;
  return 0;
}
