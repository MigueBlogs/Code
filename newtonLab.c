#include <iostream>
#include <cmath>
using namespace std;
float  newton (int,float *,float *,float);
int main (){
    float y[]={5,8,4,2};
    float x[]={-3,-2,0,4};
    float xi=2;
    float yi;
    int n=4;
    
    yi=newton(n,x,y,xi);
    cout<<"valor interpolado = "<<yi;
    cin.get();
    return 0;
        
    }
    
float newton (int n,float *x,float *y, float xi) {
          float b[20][20];
          float xt;
          float yi;
          
    for (int i=0;i<n;i++)
            b[i][0]=y[i];
        
    for (int j=1;j<n;j++)
        for (int i=0;i<n-j;i++)
            b[i][j]=(b[i+1][j-1]-b[i][j-1])/(x[i+j]-x[i]);
            
    xt=1;
    yi=b[0][0];
     for (int j=0;j<n;j++){
              xt=xt*(xi-x[j]);
              yi=yi+b[0][j+1]*xt;
    }
    return yi;
 }
