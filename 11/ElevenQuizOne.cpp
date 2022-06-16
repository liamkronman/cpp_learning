#include <iostream>
#include <array>
#include <numeric>

enum ItemTypes
  {
   health_potion,
   torch,
   arrow,
   max_items
  };

using inventory_t = std::array<int, ItemTypes::max_items>;

int countTotalItems(const inventory_t& items)
{
  return std::reduce(items.begin(), items.end());
}

int main()
{
  inventory_t items{ 2, 5, 10 };

  std::cout << "The player has " << countTotalItems(items) << " item(s) in total.\n";

  std::cout << "The player has " << items[ItemTypes::torch] << " torch(es)\n";
  
  return 0;
}
