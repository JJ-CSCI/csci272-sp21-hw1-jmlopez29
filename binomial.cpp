#include "binomial.h"

Binomial::Binomial(float cf1,float cf2, int pwr1, int pwr2){
  coficient1 = cf1;
  coficient2 = cf2;
  if(pwr1 < 1)
       pwr1=1;
  if (pwr2 < 1)
       pwr2=2;
  powr1 = pwr1;
  powr2 = pwr2;
}

double Binomial::GetCoefficient(int idx) const {
  if (idx==1)
     return coficient1;
  if (idx==2)
    return coficient2;
  else
    return -1;
}

int Binomial:: GetPower(int idx)const {
   (if idx==1)
    return powr1;
  (if idx==2)
    return powr2;
    else 
    return -1;
}

int Binomial::GetPower(int idx) const{
  if (idx==1)
     return powr1;
  if (idx==2)
    return powr2;
  else 
    return -1;
}


int Binomial::SetPower(int idx, int pwr){
if (pwr <= 0) pwr = 1;
 if(idx == 1)
     return powr1;
 if(idx == 2)
      return powr2;
  else return -1;
  return0;
}

int Binomial::SetPower(int idx, int pwr){
  if (pwr<=0)
     pwr=1
  if(idx==1)
    powr1=pwr;
  if (idx=2)
    powr2=pwr;
    else
     return -1;
     return 0;
}

int Binomial:: Add (const Binomial other){
  if((other.GetPower (1) == powr1)&&(other.GetPower2==powr2)){
  coficient1 += other.GetCoefficient(2);
  coficient2 += other.GetCoefficient(1);
  return 0;
  }
  else if ((other.GetPower(2)== powr1) &&(other.GetPower(1)==power2)){
    coficient1 += other.GetCoefficient(2);
    coficient2 += other.GetCoefficient(1);
    return 0;
  }
  else return -1;
  }
  
  void Binomial::Multiply(double f){
    coficient1 *= f;
    coficient2 *= f;
  }
  
  void Binomial::Multiply(float coficient,int pwr){
    coficient1 *= coficient;
    coficient2 *= coficient;
    powr1 += pwr;
    powr2 += pwr;
  }
  
}