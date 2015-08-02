def sumAB(a,b):
    return a+b

T = int(raw_input())
for i in range(0,T):
    a,b = raw_input().split()
    a,b = int(a),int(b)
    res = sumAB(a,b)
    print res
