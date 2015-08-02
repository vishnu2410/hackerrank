# Enter your code here. Read input from STDIN. Print output to STDOUT
from datetime import datetime
s = raw_input()
print datetime.strptime(s, '%I:%M:%S%p').strftime('%H:%M:%S')
