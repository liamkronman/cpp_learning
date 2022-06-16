#include <iostream>
#include <string>
#include <algorithm>

int main()
{
  int numNames {};
  std::cout << "How many names would you like to enter? ";
  std::cin >> numNames;

  auto* names { new std::string[numNames]{} };

  for (int i{ 0 }; i < numNames; ++i)
    {
      std::cout << "Enter name #" << i + 1 << ": ";
      std::getline(std::cin >> std::ws, names[i]);
    }

  std::sort(names, names + numNames);

  std::cout << "\nHere is your sorted list:\n";

  for (int i{ 0 }; i < numNames; ++i)
    {
      std::cout << "Name #" << i + 1 << ": " << names[i] << '\n';
    }

  delete[] names;
  
  return 0;
}
