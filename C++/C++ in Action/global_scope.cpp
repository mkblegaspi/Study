#include <iostream>

class World
{
public:
  World ()
  {
    std::cout << "Hello!" << std::endl;
  }
  ~World ()
  {
    std::cout << "Good bye!" << std::endl;
  }
};

World TheWorld;

int main ()
{
  return 0;
}
