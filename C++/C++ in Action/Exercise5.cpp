#include <iostream>

class Input
{
public:
  Input ()
  {
    std::cout << "Enter a number: ";
    std::cin >> _n;
  }

  int GetValue ()
  {
    return _n;
  }

private:
  int _n;
};

class Factorial
{
public:
  Factorial ()
    : _ans (1)
  {
    
  }

  int Calculate ()
  {
    for (int i = _num.GetValue(); i > 0; --i)
      {
	_ans = _ans * i;
      }
    return _ans;
  }

  int GetValue ()
  {
    return _num.GetValue();
  }

private:
  Input _num;
  int _ans;
};

int main ()
{
  Factorial nFactorial;
  std::cout << nFactorial.GetValue() << "! = " << nFactorial.Calculate () << std::endl;
  return 0;
}
