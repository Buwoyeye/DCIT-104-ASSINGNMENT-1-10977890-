#include <iostream>

using namespace std;

int main()
{   int sum, b;
    sum = 0;  b = 0;
    for ( int i; i<= 10000; i++)
      {
        if(i%2==0)
        {
            //so it give us even numbers
            sum = sum+i;//we sum all even numbers
            b++;//b tell us number of even numbers
        }
      }

      float avg;
      avg = sum/b;
      cout <<"average:"<<avg<<endl;
       // so run that




}
