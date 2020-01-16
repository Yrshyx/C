import random
veri_list = []
def A_str():
    for i in range(4):
        veri_num1 = random.randint(65,90) 
        veri_str1 = chr(veri_num1)
        veri_list.append(veri_str1)
def a_str():
    for i in range(4):
        veri_num2 = random.randint(97,122)  
        veri_str2 = chr(veri_num2)           
        veri_list.append(veri_str2)
def num_1():
    for i in range(4):
        veri_num3 = random.randint(48,57)
        veri_str3 = chr(veri_num3)
        veri_list.append(veri_str3)
def main():
    A_str()
    a_str()
    num_1()
    veri_res = random.sample(veri_list,4)
    print(str(veri_res[0]) + str(veri_res[1]) + str(veri_res[2]) + str(veri_res[3]))
if __name__ == '__main__':
    main()
