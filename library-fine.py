# Enter your code here. Read input from STDIN. Print output to STDOUT
rd = raw_input().split()
ed = raw_input().split()
edd = int(ed[0])
edm = int(ed[1])
edy = int(ed[2])
rdd = int(rd[0])
rdm = int(rd[1])
rdy = int(rd[2])

#print edd,edm,edy
#print rdd,rdm,rdy
fine = 0
if rdy > edy:
    print ("%d" % 10000)
elif rdm > edm and edy <= rdy:
    print ("%d" % (500*(rdm-edm)))
elif rdd > edd and edm <= rdm and edy <= rdy:
    print ("%d" % (15*(rdd-edd)))
else:
    print "0"
