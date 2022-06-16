#include <iostream>
#include <iterator>
#include <utility>

// Bubble sort!
int main()
{
  int array[]{ 6, 3, 2, 9, 7, 1, 5, 4, 8 };
  int length { static_cast<int>(std::size(array)) };
  int latestIndex { length - 1 };

  for (int index { 0 }; index < length - 1; ++index)
    {
      bool swapOccurred { false };
      for (int currIndex { 0 }; currIndex < latestIndex; ++currIndex)
	{
	  if (array[currIndex] > array[currIndex + 1])
	    {
	      std::swap(array[currIndex], array[currIndex + 1]);
	      swapOccurred = true;
	    }
	}
      --latestIndex;
      if (!swapOccurred)
	{
	  std::cout << "Early termination on iteration " << index + 1 << '\n';
	  break;
	}
    }

  for (int i { 0 }; i < length; ++i)
    {
      std::cout << array[i] << ' ';
    }

  std::cout << '\n';
  
  return 0;
}
