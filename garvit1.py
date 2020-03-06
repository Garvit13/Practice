def random1(input1):
    import random    
    input1= int(input('Please enter a number from Zero to Hundred : ')) 
    tries=0
    number_generated=random.randint(1,101)
    while True:
        tries+=1
        if number_generated > input1:
            print('Too Small !!!')
            tries+=1
            input1 = int(input('Try Again : '))
        elif number_generated< input1:
            print('Too Big !!!')
            input1 = int(input('Try Again : '))
        else:
            print(f'That is the Lucky Number !!! Congrats !!! You got it in {tries} Tries')
            break


random1(input)