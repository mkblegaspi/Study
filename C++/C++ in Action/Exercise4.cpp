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

class Ladder
{
public:
  Ladder (int hor, int ver)
    : _frame1 (hor, ver), _ver (ver), _frame2 (hor, ver)
  {

  }

private:
  Frame _frame1;
  VerBar _ver;
  Frame _frame2;
};

int main ()
{
  Ladder myLadder (5, 10);
  
  return 0;
}
