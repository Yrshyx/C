m=1000
for a in range(2,m+1):
    s=0
    L1=[]
    for i in range(1,a):
        if a%i==0:
            s+=i
            L1.append(i)
            if s==a:
                print("%d  its factors are:"%a,L1)
