# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
for i in range(n):
    t = 0
    s = raw_input()
    s1 = s[::-1]
    for j in range(1,len(s)):
        if abs(ord(s[j])-ord(s[j-1])) == abs(ord(s1[j])-ord(s1[j-1])):
            #print abs(ord(s[j])-ord(s[j-1])), abs(ord(s1[j])-ord(s1[j-1]))
            t = 1
        else:
            t = 0
            break
    #print s,s1
    if t == 0:
        print "Not Funny"
    else:
        print "Funny"
