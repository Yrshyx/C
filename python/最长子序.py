n=input()
x=list(map(int,input().strip().split()))
m=[]
for i in range(len(x)-1):
    f=0
    for j in range(i,len(x)-2):
        if x[j]<x[j+1]:
            f+=1
        else:
            break
    m.append(f)
print(max(m)+1)
