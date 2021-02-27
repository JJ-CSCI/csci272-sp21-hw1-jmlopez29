#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial{
  float coficient1;
  float coficient2;
  int powr1;
  int powr2;
  public:

  Binomial(float cf1 = 1.0, float cf2 = 1.0, int pwr1 = 1, int pwr2 = 1);
  float GetCoefficient(float idx);
  int GetPower(int idx, int pwr);
  int SetPower(int idx, int pwr);
  void Add(const Binomial ther);
  void Multiply(float g);
  void Multiply(float coficient, int pwr);
};

#endif