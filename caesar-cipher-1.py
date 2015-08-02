# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
s = raw_input()
k = int(raw_input())
s1=""
for i in range(n):
    #print s[i]
    if s[i].isalpha():
        if (ord(s[i])+(k%26) > 90 and ord(s[i])<=90) or (ord(s[i])+(k%26)>122):
            s1 += chr(ord(s[i])+(k%26)-26)
        else:
            s1 += chr(ord(s[i])+(k%26))
    else:
        s1 += s[i]
print (s1)
