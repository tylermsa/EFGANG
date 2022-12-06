# tylermsa

from random import *

min = 1
max = 1000

number_guessed = False

print("EFGANG: Everyone's Favorite Guess A Number Game")
print("powered by tylermsa")
print("- - - - - - - - - - - - - - - - - - - - - - - -")
print(" ")

num = randint(1, 1001)
# print(num)
print("Number Generated!")
print(" ")

attempts = 0

entered_number = 0


while number_guessed == False:
    entered_number = int(input("Guess a number from {} to {}: ".format(min, max)))
	# print("Guess a number from {} to {}: ".format(min, max))
	# entered_number = raw_input()
	# print(entered_number)
	# entered_number = int(entered_number)
	
    if entered_number < min:
	    print("That's way too low!")
    elif entered_number > max:
	    print("That's way too high!")
    elif entered_number == num:
        print("You found the number!")
        number_guessed == True
        break
    elif entered_number > num:
        print("Lower!")
    elif entered_number < num:
        print("Higher!")
    
    attempts = attempts + 1

print("You found the number in {} attempts!".format(attempts))
# End of Code
