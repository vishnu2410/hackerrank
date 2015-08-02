# Enter your code here. Read input from STDIN. Print output to STDOUT
import string
n = int(raw_input())
str = ''
for i in range(n):
    str += '#'
    print str.rjust(i + 1 + n-len(str))
