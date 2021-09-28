import numpy as np
import scipy.linalg as la
line=int(input())
matrix=[]
for i in range(line):
    arr=list(input().split(" "))
    matrix.append(arr)
array=np.array(matrix)

result,vector=la.eig(array)
sum=0
mul=1
for i in list(result):
    sum+=i
    mul*=i
print(sum)
print(mul)