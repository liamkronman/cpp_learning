#include <iostream>

void printStr(const char* str)
{
   while (*str != '\0')
   {
      std::cout << *str;
      ++str;
   }

   std::cout << '\n';
}


int main()
{
   printStr("Hello, world!");   

   return 0;
}
