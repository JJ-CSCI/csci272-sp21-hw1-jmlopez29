class Binomial{
  double a,b;
  int p,q;
  public:
  Binomial(double = 1.0, int = 1, double  = 1.0, int = 1);
  double GetCoefficient(int);
  int GetPower(int);
  int SetPower(int, int);
  int Add(const Binomial&);
  void Multiply(double s);
  void Multiply(double c, int e);
};