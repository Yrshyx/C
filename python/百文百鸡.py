for i in range(1,21):
    for j in range(1,34):
        for k in range(1,101):
            if i+k+j==100 and i*5+j*3+k/3==100:
                print("公鸡:%d只，母鸡:%d只，小鸡:%d只"%(i,j,k))
