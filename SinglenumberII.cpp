/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    : Given an array of integers, every element appears thrice except for one which occurs once. Find that element which does not appear thrice.
 Example     : Input : [1, 2, 4, 3, 3, 2, 2, 3, 1, 1] Output : 4
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int singleNumber(const vector<int> &A)  ;
}obj;

int Solution::singleNumber(const vector<int> &A)
{

   if(A.size() == 0)
   {
        return 0;
    }

    int number1 = 0;
    int number2 = 0;

    for(int i = 0; i < A.size(); i++)
    {
        number2 = number2 | (number1 & A[i]);
        number1 = number1 ^ A[i];
        int check = ~(number1 & number2);
        number1 = number1 & check;
        number2 = number2 & check;
    }

return number1;

}

int main()
{
  int A1[10] = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1};
  vector<int> A(A1,A1+sizeof(A1)/sizeof(A1[0]));
  int result=0;
  result = obj.singleNumber(A);
  cout<<"In A[10] = {1, 2, 4, 3, 3, 2, 2, 3, 1, 1} "<<endl;
  cout<<"Single number =  ";
  cout<<result<<endl;
  return 0;
}
