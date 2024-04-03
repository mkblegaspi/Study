#include <iostream>

class Hand
{
public:
  Hand (int n)
    : _n (n)
  {
    std::cout << "Creating a hand with " << _n << " fingers" << std::endl;
  }

private:
  int _n;
};

class Glove
{
public:
  Glove (int cFingers)
    : _n (cFingers), _hand (_n)
  {
    std::cout << "Glove with " << _n << " fingers" << std::endl;
  }

private:
  int _n;
  Hand _hand;
  //int _n;
};

int main ()
{
  Glove myGlove (5);
  return 0;
}
