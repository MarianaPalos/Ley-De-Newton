#include <iostream>
#include <cmath>
using namespace std;

//v(t)=gm/c(t-e^-(c/m)t)
//m=68.1 kg
//c= 12.5 kg/s

struct Caida
{
  float t,v;
  const float m=68.1, c=12.5, g=9.81;

float Velocidad(float t){
  v=((g*m)/c)*(1-(exp(-(c/m)*t)));
  return v;
}

};

int main (void)
{

 Caida C1;

   double t;
   for (t=0; ;t++){
     cout << C1.Velocidad(t) << endl;
     if (C1.Velocidad(t+1)-C1.Velocidad(t)<=0.001){
       cout << "El equilibrio se logra en el segundo " << t+1<< "." << endl;
       break;
       }
   }


  return 0;
}
