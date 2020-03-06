import pdb 
try:
    c = int(input('Please type 1st number to divide: '))
    d = int(input('Please type 2nd number to divide: '))
    def Divide(a,b):
        print(a/b)
    Divide(c,d)
except ValueError:
    print('Please type in integers and not strings')
except ZeroDivisionError:
    print('You can\' pass zero as the divisor')