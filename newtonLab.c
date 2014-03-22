http://www.youtube.com/watch?v=uKiNxSz6PhE  <<<<< Video

///// polinomio interpolador por el metodo de las diferencias divididas de Newton
#include <stdio.h>
#include <stdlib.h>
main (){
    int i=0, a=0, xk=0, d=0, h=0, g=0;
printf("Ingrese la dimensión de la función tabular de y");
    scanf("%d",&d);
    //if(d<0)      // Determinar que el arreglo sea mayor que cero (se hará hasta el último como caso especial)
    int y[d];
    int x[d];
    int D1[d-1];
    int D2[d-2];
printf("Ingrese el valor interpolar a calcular:\n");
    scanf("%d",&xk);
printf("Ingrese la función tabular de y:\n");     //// llenando los valores de la tabla
    for (i=0;i<d;i++){
        scanf("%d",&a);
        y[i]=a;}
    for (i=0;i<d;i++){
        x[i]=i;
        }
printf("Determinaremos el polinomio interpolador en el punto; %d por el metodo de las diferencias divididas de Newton para los puntos= ", xk);
printf( "( x , y )\n");
    for (i=0;i<d;i++){
    	printf("( %d , %d )\n", x[i], y[i]);
	}
	
	h=x[1]-x[0];   /// Calcular el valor de h
    
    for (i=0;i<b;i++){
        D1[i]=y[i+1]-y[i];}
    for (i=0;i<b;i++){
        D2[i]=y[i+2]-2*y[i+1]+y[i];    
        }
    g=y[1]+xk*D1+xk*xk-1*
printf("El resultado es= %d", g);
//V1=[]
//V2=[]
//V3=0
//
//for i in range ():
//	V1[i]=y[i+1]-y[i]/x[i+1]-x[i]
//for i in range ():
//	V2[i]=V1[i+1]-V1[i]/x[i+2]-x[i]
//V3=V2[2]-V2[1]/x[4]-x[1]
//print "El resultado es el polinomio:"
//print y[1]+V1[1] ,"(X-", x[1] ,")+", V2[1] ,"(X-", x[1] ,")(X-", x[2] ,")+", V3 ,"(X-", x[1] ,")(X-", x[2] ,")(X-", x[3] ,")"
system("PAUSE");

}
