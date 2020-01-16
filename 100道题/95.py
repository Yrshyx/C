list=[1,2,3,4,6,7,8,10]
n=int(input())
for i in range(n+1):
    if i not in list:
            print(i,end=" ")
