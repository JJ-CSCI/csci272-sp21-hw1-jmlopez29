#include "binomial.h"

 Binomial::Binomial(double c1, int p1, double c2, int p2) : a{c1}, b{c2}, p{p1}, q{p2} 
 {
   if (p1 < 1)p = 1;
   if (p2 < 1)q = 1;
 }

  double Binomial::GetCoefficient(int i){
    if (i == 1) return a;
    if (i == 2) return b;
    return -1.0;
  }
  int Binomial::GetPower(int i){
    if (i == 1) return p;
    if (i == 2) return q;
    return -1;
  }
  int Binomial::SetPower(int i, int e){
    if (e < 1) e = 1;
    switch(i){
      case 1:
        p = e;
        return 0;
      case 2:
        q = e;
        return 0;
    }
    return -1;

  }
  int Binomial::Add(const Binomial& rhs){
    if (!((p == rhs.p) && (q == rhs.q)))
        return -1;
    a += rhs.a;
    b += rhs.b;
    return 0;
  }
  void Binomial::Multiply(double s){
    a *= s;
    b *= s;
  }
  void Binomial::Multiply(double c, int e){
   Multiply(c);
    p += e;
    q += e;
  }