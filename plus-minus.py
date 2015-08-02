# Enter your code here. Read input from STDIN. Print output to STDOUT
from __future__ import division
n = int(raw_input())
ng = 0
ps = 0
z = 0
inp = raw_input().split()
#print inp
for i in inp:
    #print int(i)
    if int(i)< 0:
        ng += 1
    elif int(i) == 0:
        z += 1
    else:
        ps += 1

print ("%.3f" % (ps/n))
print ("%.3f" % (ng/n))
print ("%.3f" % (z/n))
