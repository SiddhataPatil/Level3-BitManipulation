/*
 ==============================================================================================================================
 Name        : main.cpp
 Author      : Siddhata Patil
 Copyright   : Copyright © InterviewBit for the question.
 Copyright   : Copyright ©  Siddhata Patil. Sourcecode rights reserved.
 Question    :  Number of ones
 Example     : in 11 ----> 00000000000000000000000000001011 Output : 3
  ==============================================================================================================================
 */

#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int numSetBits(unsigned int A)  ;
}obj;

int Solution::numSetBits(unsigned int A)
{

 int result = 0;

    while(A/2 != 0)
    {
        if(A%2 != 0)
        {
            result++;
        }
        A = A/2;
    }
    if(A%2 != 0)
    {
        result++;
    }

  return result;

}

int main()
{
  int result=0;
  result = obj.numSetBits(11);
  cout<<"Number of ones in 11 = ";
  cout<<result<<endl;
  return 0;
}
