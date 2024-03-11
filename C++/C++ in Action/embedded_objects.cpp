#include <iostream>

class Matter
{
public:
  Matter (int id)
    : _identifier (id)
  {
    std::cout << " Matter for " << _identifier << " created." << std::endl;
  }

  ~Matter ()
  {
    std::cout << " Matter in " << _identifier << " annihilated." << std::endl;
  }

private:
  const int _identifier;
};

class World
{
public:
  World (int id)
    : _identifier (id), _matter (_identifier) // initializing embeddings
  {
    std::cout << "Hello from world " << _identifier << "." << std::endl;
  }

  ~World ()
  {
    std::cout << "Good bye from world " << _identifier << "." << std::endl;
  }

private:
  const int _identifier;
  const Matter _matter;
};

World TheUniverse(1);

int main ()
{
  World myWorld (2);

  return 0;
}
