#include <iostream>

class HorBar
{
public:
  HorBar (int n)
    : _n (n)
  {
    std::cout << "+";
    for (int i = 0; i < _n; ++i)
      {
	std::cout << "-";
      }
    std::cout << "+" << std::endl;
  }

private:
  int _n;
};

class VerBar
{
public:
  VerBar (int n)
    : _n (n)
  {
    for (int i = 0; i < _n; ++i)
      {
	std::cout << "|" << std::endl;
      }
  }

private:
  int _n;
};

class Frame
{
public:
  Frame (int hor, int ver)
    : _horT (hor), _ver (ver), _horB (hor)
  {

  }

private:
  HorBar _horT;
  VerBar _ver;
  HorBar _horB;
};

int main ()
{
  Frame myFrame (5, 10);
  
  return 0;
}
