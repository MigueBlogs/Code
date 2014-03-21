# polinomio interpolador por el metodo de las diferencias divididas de Newton
x = [1,2,4,5]
y = [0,6,12,24]
print " Determinaremos el polinomio interpolador por el metodo de las diferencias divididas de Newton para los puntos= "
print "( x , y )"
for i in range(4):
	print "(", x[i] ,",", y[i] ,")"
V1=[]
V2=[]
V3=0

for i in range ():
	V1[i]=y[i+1]-y[i]/x[i+1]-x[i]
for i in range ():
	V2[i]=V1[i+1]-V1[i]/x[i+2]-x[i]
V3=V2[2]-V2[1]/x[4]-x[1]
print "El resultado es el polinomio:"
print y[1]+V1[1] ,"(X-", x[1] ,")+", V2[1] ,"(X-", x[1] ,")(X-", x[2] ,")+", V3 ,"(X-", x[1] ,")(X-", x[2] ,")(X-", x[3] ,")"
