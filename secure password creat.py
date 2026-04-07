import random
import string
count= int(input("no. of passwords"))
length = int(input("enter length of password required"))
elements = string.ascii_letters + string.digits + string.punctuation
for j in range (count):
    passw=" "
    for i in range (length):
        passw = passw + random.choice(elements)
    print ("password",j+1,":\n",passw)
