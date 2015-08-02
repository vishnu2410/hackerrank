n = int(raw_input())

def f(i):
    if i>0:
        return i * f(i-1)
    else:
        return 1
res = f(n)
print res
