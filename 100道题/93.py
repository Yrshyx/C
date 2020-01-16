a_list=input()
b_list=input()
c_list=[]
for i in a_list:
    for j in b_list:
        if i==j:
            c_list.append(i)
print(c_list)
