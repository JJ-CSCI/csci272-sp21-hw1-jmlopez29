#include "binomial.h"

Binomial:: Binomial(float cf1,float cf2, int pwr1, int pwr2){
  coficient1 = cf1;
  coficient2 = cf2;
  if (pwr1 < 1)
       pwr1=1;
  if (pwr2 < 1)
       pwr2=1;
  powr1 = pwr1;
  powr2 = pwr2;
}

float Binomial:: GetCoefficient(float idx) {
  if (idx==1)
    return coficient1;
  if (idx==2)
    return coficient2;
  else
    return -1;
}

int Binomial:: GetPower(int idx, int pwr) {
  if (idx==1)
    return pwr1;
  if (idx==2)
    return pwr2;
    else 
    return -1;
}


int Binomial:: SetPower(int idx, int pwr){
if (pwr <= 0) 
   pwr = 1;
 if(idx == 1) 
    powr1 = pwr;
 if(idx == 2) 
    powr2 = pwr;
  else 
  return 0;
  return -1;
}

void Binomial::Add (const Binomial ther){
  if((ther.GetPower(1)==powr1&&(ther.GetPower(2)==powr2)){
  coficient1 += ther.GetCoefficient(2);
  coficient2 += ther.GetCoefficient(1);
  return 0;
  }
  else if ((other.GetPower(2)== powr1) &&(ther.GetPower(1)==powr2)){
    coficient1 += ther.GetCoefficient(2);
    coficient2 += ther.GetCoefficient(1);
    return 0;
  }
  else 
     return -1;
  }
  void Binomial:: Multiply (float g){
    coficient1 *= g;
    coficient2 *= g;
  }
  
  void Binomial:: Multiply(float coficient, int pwr){
    coficient1 *= coficient;
    coficient2 *= coficient;
    powr1 += pwr;
    powr2 += pwr;
  }