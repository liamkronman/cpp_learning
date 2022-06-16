#include <iostream>
#include <iterator>

int* find(int* startPtr, int* endPtr, int val)
{
  for (int* ptr{ startPtr }; ptr != endPtr; ++ptr)
    {
      if (*ptr == val)
	{
	  return ptr;
	}
    }

  return endPtr;
}


int main()
{
  int arr[]{ 2, 5, 4, 10, 8, 20, 16, 40 };

  int* found{ find(std::begin(arr), std::end(arr), 20) };

  if (found != std::end(arr))
    {
      std::cout << *found << '\n';
    }
  return 0;
}
