from math import sqrt
import time



def main ():
    i = 3
    sum = 2;
    prime = True
    while (i < 2000000):
        for j in range (3, round(sqrt(i))+1, 2):
            if (i%j == 0):
                prime = False
                break;
        if prime:
            sum += i
        prime = True
        i+= 2
    print(sum)

start = time.time()
main()
end = time.time()
print( end - start)
