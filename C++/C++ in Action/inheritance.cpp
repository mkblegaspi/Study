#include <iostream>

class CelestialBody
{
public:
  CelestialBody (double mass)
    : _mass (mass)
  {
    std::cout << "Creating celestial body of mass " << _mass << "." << std::endl;
  }

  ~CelestialBody ()
  {
    std::cout << "Destroying celestial body of mass " << _mass << "." << std::endl;
  }

private:
  const double _mass;
};

class Star : public CelestialBody // Start is a CelestialBody
{
public:
  Star (double mass, double brightness)
    : CelestialBody (mass), _brightness (brightness)
  {
    std::cout << "Creating a star of brightness " <<
      _brightness << "." <<std::endl;
  }

  ~Star ()
  {
    std::cout << "Destroying a star of brightness " << _brightness << "." << std::endl;
  }

private:
  const double _brightness;
};

int main ()
{
  std::cout << "    Entering main." << std::endl;
  Star aStar (1234.5, 0.1);
  std::cout << "    Exiting main." << std::endl;
  return 0;
}
  
