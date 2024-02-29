#include <iostream>

class World
{
public:
  World (int i)
  {
    std::cout << "Hello from " << i << "." << std::endl;
  }

  ~World ()
  {
    std::cout << "Good bye!" << std::endl;
  }
};

World TheWorld (1);

int main ()
{
  World myWorld (2);
  std::cout << "Hello from main!" << std::endl;

  return 0;
}
