#include <iostream>

class World
{
public:
  World (int id)
    : _identifier (id)
  {
    std::cout << "Hello from " << _identifier << std::endl;
  }

  ~World ()
  {
    std::cout << "Good bye from " << _identifier << std::endl;
  }

private:
  int _identifier;
};

int main ()
{
  for (int i = 1; i < 2; i++)
    {
      World myWorld(i);
    }
  
  return 0;
}
