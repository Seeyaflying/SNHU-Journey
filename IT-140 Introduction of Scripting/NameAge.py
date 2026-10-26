from datetime import date
current_year = date.today().year
# User's input
name = input("What is your name? ")
age = int(input("How old are you? "))
# To get birth year do Current year - age
birth_year = current_year - age
#Then print user's input into output
print(f"Hello {name}! You were born in {birth_year}.")
