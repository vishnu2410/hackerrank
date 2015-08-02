# Enter your code here. Read input from STDIN. Print output to STDOUT
n = int(raw_input())
numbers = raw_input().split()
su = 0
for i in numbers:
    su += int(i)
print su
