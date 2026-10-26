# import random module
import random

# Prompt the user to input the lower bound and upper bound
lower_bound = int(input("Enter the lower bound: "))
upper_bound = int(input("Enter the upper bound: "))

# validate the input values
while lower_bound > upper_bound:
    print("Lower bound must be less than the upper bound.")
    # Prompt the user to input the lower bound and upper bound
    lower_bound = int(input("Enter the lower bound: "))
    upper_bound = int(input("Enter the upper bound: "))

# Generate random number for the given lower_bound and upper_bound
random_number = random.randint(lower_bound, upper_bound)

# Guess the number which repeatedly ask the user until the correct guess
while True:
    guess_number = int(input("Guess the number between {} and {}: ".format(lower_bound, upper_bound)))

    # validate the guess_number using loop
    while guess_number < lower_bound or guess_number > upper_bound:
        print("Enter valid guess number")
        guess_number = int(input("Guess the number between {} and {}: ".format(lower_bound, upper_bound)))

    # print the output based on the guess_number using decision branching
    if guess_number == random_number:
        print("Congratulation! You guessed the correct number")
        break
    elif guess_number < random_number:
        print("The guessed number is too low.")
    else:
        print("The guessed number is too high.")