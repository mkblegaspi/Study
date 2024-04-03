#include <iostream>

class CelestialBody
{
public:
  CelestialBody (double mass)
    : _mass (mass)
  {
    
  }

  double GetMass ()
  {
    return _mass;
  }

private:
  double _mass;
};

class Planet : public CelestialBody
{
public:
  Planet (double mass, double albedo)
    : CelestialBody (mass),
      _albedo (albedo)
  {
    std::cout << "Creating a planet with mass " <<
      GetMass () << " and albedo " << _albedo << "." << std::endl;
  }

private:
  double _albedo;
};

int main ()
{
  Planet Earth (12.5, 34.67);
  return 0;
}
