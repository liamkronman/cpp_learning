#include <iostream>

void swap(int& a, int& b)
{
   int temp{ a };

   a = b;
  
   b = temp;
}

int main()
{
   int a{ 4 };
   int b{ 5 };
   swap(a, b);

   if (a == 5 && b == 4)
      std::cout << "It works!\n";
   else
      std::cout << "It's broken!\n";

   return 0;
}
