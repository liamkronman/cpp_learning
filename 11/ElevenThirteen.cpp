#include <iostream>
#include <string_view>
#include <string>

int main()
{
  constexpr std::string_view names[]{ "Alex", "Betty", "Caroline", "Emily", "Fred", "Greg", "Holly"};

  std::string inputName {};
  std::cout << "Enter a name: ";
  std::cin >> inputName;

  bool found{ false };

  for (const auto name : names)
    {
      if (inputName == name)
	{
	  found = true;
	  break;
	}
    }
  if (found)
    std::cout << inputName << " was found.\n";
  else
    std::cout << inputName << " was not found.\n";

  return 0;
}
