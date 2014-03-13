///////# Fibonaci & Factorial en código Phyton
c=0
f=[0,1,2,3,4,5,6,7,8,9]
def fibo(f):
    for i in range (10):
    if(f[i]<10):
        print f[i]
    else:
        c=(fibo(f[i]-1)+fibo(f[i]-2))
        print c
        
