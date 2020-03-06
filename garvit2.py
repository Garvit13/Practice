name = input(' Please type in your name :')
age = input(" Please type in your age :")
name = name.replace(' ', '')
age1 = age.replace(' ', '')
age1 = int(age1)
str0 = 'You can watch coco!!'
str1 = 'Sorry you can\'t watch coco!!'
str2 = str0.center(len(str0) + 10, '*')
str3 = str1.center(len(str1) + 10, '*')
if age1 >= 10 and (name[0]=='a' or name[0]=='A'): 
    print(str2)
else: print(str3)