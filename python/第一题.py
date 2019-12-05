counter=0
for i in range(1,5):
    for j in range(1,5):
        for k in range(1,5):
            if i!=j and j!=k and i!=k:
                print("{} {} {}".format(i,j,k))
                counter +=1
print("共有{}种".format(counter))
