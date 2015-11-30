#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;



int main(){
  
  const double t0 = 0.0;
  const double pi = 3.14159;
  const double t1 = 20*pi;
  const double dt = pi/10;
  const int M = t1/dt;
  const int N = 2;
  double yfwd[N];
  yfwd[0] = 1.0;
  yfwd[1] = 0.0;
  double ffwd[N];
  double xnum;
  
  
//   for(int i=0; i<M; i++){
//    xnum = cos(i*dt);
//    
//    cout << i*dt << "\t" << xnum << endl;
//   }
  
  for(int j=0; j<N; j++){
    for(int i=0; i<M; i++){
    
    ffwd[0]=-1.0*sin(i*dt);
    ffwd[1]=-1.0*cos(i*dt);

    yfwd[j] = yfwd[j] + dt*ffwd[j];
    
    xnum = cos(i*dt);
    
    cout << i*dt << "\t" << xnum << "\t" << yfwd[0] << "\t" << yfwd[1] << endl;  
    }
  }
  
 return 0; 
}

