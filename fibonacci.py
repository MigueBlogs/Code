///////# Fibonaci & Factorial en código Phyton
f=[0,1,2,3,4,5,6,7,8,9]
for i in range(9):
    temp=f[i]
    f[i]=temp+f[i+1]
    print f[i],","
