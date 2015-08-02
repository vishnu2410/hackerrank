# Enter your code here. Read input from STDIN. Print output to STDOUT
import numpy as np
n = int(raw_input())
mat = []
i = 0
for i in range(n):
    mat.append(raw_input().split()) 
left = 0
right = 0
i = 0
j = n-1
while i<n and j>=0:
    left += int(mat[i][i])
    right += int(mat[i][j])
    i += 1
    j -= 1
print abs(left-right)
