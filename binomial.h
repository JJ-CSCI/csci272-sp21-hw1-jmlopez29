#ifndef BINOMIAL_H
#define BINOMIAL_H

class Binomial{
  float coficient1;
  float coficient2;
  int powr1;
  int powr2;
  public:

  Binomial(float cf1 = 1.0, float cf2 = 1.0, int pwr1 = 1, int pwr2 = 1);
  float GetCoefficient(int idx)const;
  int GetPower(int idx)const;
  int SetPower(int idx, int pwr);
  int Add(const Binomial other);
  void Multiply(double f);
  void Multiply(double coficient, int pwr);
};

#endif