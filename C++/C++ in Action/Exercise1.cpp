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
  {
    World myWorld (1);
  }
  World myWorld (2);

  return 0;
}
