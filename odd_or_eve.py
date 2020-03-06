import pdb
pdb.run('hello')
user_score=0
comp_score=0
if_done =0
def odd_or_eve():
    global if_done
    global user_score
    global comp_score
    import random
    def toss():
        print("Toss!!! Enter 1 for odd and 2 for even : ")
        odd_or_even = int(input(""))
        user_guess = int(input("Enter your number : "))
        computer_guess = random.randint(0,11)
        print(computer_guess)
        if ((computer_guess + user_guess)%2)==odd_or_even:
            print("Your Choice enter 1 to bat and 2 to ball : ")
            bat_or_ball = int(input(""))
            if bat_or_ball == 1:
                return "ball"
            return "bat"
        cmp_guesses = random.randint(0,1)
        if cmp_guesses == 1:
            print("My choice!!! BAT")
            return "bat"
        print("My choice!!! BALL")
        return "ball"
    def ball():
        global if_done
        global user_score
        global comp_score
        if if_done != 'user_bat_done':
            while True:
                comp_no= random.randint(0,11)
                user_given_no = int(input("Enter your number : "))
                print(comp_no)
                if comp_no != user_given_no:
                    user_score += user_given_no
                elif ((user_given_no == 0) and (comp_no != user_given_no)):
                    user_score += comp_no
                else:
                    print("Out!!!")
                    print(f"Score was {user_score}")
                    if_done = "user_bat_done"
                    return "done_ball"
                if ((comp_score>user_score) and (if_done == "user_ball_done")):
                    print("I won the match!!!")

                elif user_score==comp_score:
                    print("Super Over situation!!! Still under devlopment!!!")

                elif ((comp_score<user_score) and (if_done == "user_ball_done")):
                    print("You won the game!!!")
                    if_done = "user_bat_done"

                    return "done_ball"
                    break
    def bat():
        global user_score
        global comp_score
        global if_done
        if if_done != "user_ball_done":
            while True:
                comp_no= random.randint(0,11)
                user_given_no = int(input("Enter your number : "))
                print(comp_no)
                if ((user_given_no == 0) and (user_given_no !=comp_no)):
                    comp_score +=comp_no
                elif ((user_given_no != 0) and (user_given_no !=comp_no)):
                    comp_score +=comp_no
                else:
                    print("Out!!!")
                    print(f"Score was {comp_score}")
                    if_done = 'user_ball_done'
                    return "done_bat"
                if ((comp_score>user_score) and (if_done == "user_batl_done")):
                    print("I won the match!!!")
                    return "done_bat"
                    break
                elif user_score==comp_score:
                    print("Super Over situation!!! Still under devlopment!!!")                    
                    return 0
                elif ((comp_score<user_score) and (if_done == "user_bat_done")):
                    print("You won the game!!!")
                    return "done_bat"



    if toss()=="bat":
        bat()
    ball()
    if if_done == "user_ball_done":
        ball()
    bat()
    if comp_score>user_score:
        print("I won the match!!!")
        return 0
    elif user_score==comp_score:
        print("Super Over situation!!! Still under devlopment!!!")
        return 0
    else:
        print("You won the game!!!")
        return 0



odd_or_eve()