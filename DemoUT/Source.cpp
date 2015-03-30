#include <iostream>
#include <assert.h>
#include "Header.h"
using namespace std;



int main()
{
   cout << McCarthy(130) << endl;
}


int McCarthy(int n)
{
   if (n>100)
      return(n - 10);
   else
      return(McCarthy(McCarthy(n + 11)));
}

void McCarthyUnitTesting()
{
   for (int i = 0; i <= 100; i++)
      assert(McCarthy(i) == 91);

   for (int i = 101; i <= 120; i++)
      assert(McCarthy(i) == i - 10);
}