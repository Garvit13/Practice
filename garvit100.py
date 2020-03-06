n = input('Please enter a number :')
def fibo(n):
    n.replace(" ","")
    n = int(n)
    a=0
    b=1
    if n == 1:
        print(a)
    elif n == 2:
        print(a, b)
    else:
        print(a, b, end = " ")
        for i in range(n-2):
            c = a + b
            a = b
            b = c
            print(b, end = " ")
            i=i
    print(f'\nThe length of the last numbers generated is {len(str(b))} digits')
fibo(n)