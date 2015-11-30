#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;



int main(){
  
  const double t0 = 0.0;
  const double pi = 3.14159;
  const double t1 = 20*pi;
  const double dt = pi/10;
  const int N = t1/dt;
  double yfwd[2];
  double ybwd[2];
  yfwd[0] = ybwd[0] = 1.0;
  yfwd[1] = ybwd[1] = 0.0;
  double ynum;
  
  double a;
  double b;

  
  for(int i=0; i<N; i++){
    
    a = yfwd[0];
    yfwd[0] = yfwd[0] + dt*yfwd[1];					//Euler Forward
    yfwd[1] = yfwd[1] - dt*a;
    
    b = ybwd[0];
    ybwd[0] = (ybwd[0] + dt*ybwd[1])/(1+pow(dt,2.0));			//Euler Backward
    ybwd[1] = ybwd[1] - (dt*b+dt*dt*ybwd[1])/(1+pow(dt,2.0));
    
    ynum = cos(i*dt);							//Numerical
    
    cout << i*dt << "\t" << ynum << "\t" << yfwd[0] << "\t" << ybwd[0] << endl;  
  }
  
  
 return 0; 
}

