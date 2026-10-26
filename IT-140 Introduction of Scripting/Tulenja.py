# Daniel Dalton
# IT-140 Project 2

#Introduction and instructions for game
def intro():
    print(f'-------Welcome to Tulenja. {user_name} -------')
    print('As you are walking towards the gate of the town. You feel a knock on the back of head.')
    print('Your vision goes dark and you fall to the ground.')
    print('You wake up in a dark room with a note saying you must you find the Six items in the rooms listed below.')
    print('You must find the Robes in the Wardrobe, the Fire Scroll in the Alchemy Lab, the Magic Book in the Library.')
    print('You must also find the Potion in the Tavern, the Wand in the Armory and the Cloak in the Jail. ')
    print('You must pick up the items all 10 items in the 12 rooms as well.')
    print('=========================================')
    print('Enter goNorth, goSouth, goEast and goWest to go that direction.')
    print('To pick up an item enter, the word "get" when prompted to add it to your inventory.')

#The dictionary links a room to other rooms.
rooms = {
    'Entrance': {'East': 'Bedroom','South': 'Catacomb',},  # First Room the user
    'Bedroom': {'West': 'Entrance','South': 'Wardrobe', 'item':'Gold Coin'},
    'Wardrobe': {'North': 'Bedroom', 'item':'Robe'},
    'Catacomb': {'North': 'Entrance','East': 'Kitchen', 'item':'Bone'},
    'Kitchen': {'West': 'Catacomb', 'East': 'Greenhouse', 'South': 'Jail', 'item':'Mortar & Pestle'},
    'Greenhouse': {'West': 'Kitchen', 'East':'Tavern', 'North':'Alchemy Lab', 'item':'Random Herbs'},
    'Alchemy Lab': {'South': 'Greenhouse','East':'Library', 'item':'Fire Scroll'},
    'Library': {'West': 'Alchemy Lab', 'item':'Magic Book'},
    'Tavern': {'West': 'Greenhouse', 'South':'Armory', 'item':'Potion'},
    'Armory': {'North': 'Tavern', 'West':'Jail', 'item':'Wand'},
    'Jail': {'West': 'Boss Room', 'East':'Armory','North':'Kitchen', 'item':'Cloak'},
    'Boss Room': {'East': 'Jail'} # Boss Room
}
# Text displayed for winning
def win():
    print('***********************     Congratulations!     ***********************')
    print('************************************************************************')
    print('       You have defeated the Beholder! You are met by an old mage.      ')
    print('            He ask you if you are ready for an adventure.               ')
    print('************************************************************************')
    print('^^^^^^^^^^^^^^^^^^^^^^^^^^ Thanks for playing! ^^^^^^^^^^^^^^^^^^^^^^^^^')
    print('*******************     Type exit to leave the game    *****************')
# Text displayed for losing
def lose():
    print('***********************     You Failed!          ***********************')
    print('************************************************************************')
    print('         You are missing items needed to defeat the Beholder.           ')
    print('         You must have the items on the scroll to defeat it.            ')
    print('************************************************************************')
    print('**********************     Please play again.    ***********************')
    print('*******************     Type exit to leave the game    *****************')



user_name = input("Enter your name: ") #waits on user input
intro() #displays the intro above
current_room = 'Entrance' # current starting room
directions = ['goNorth', 'goSouth', 'goEast', 'goWest'] #directions
inventory = [] #inventory starts off blank


while True: #condition to see if player wins or loses.
    if current_room == "Boss Room":
        if len(inventory) == 10:
            win()
        else:
            lose()
    print('You are in the {}.'.format(current_room)) # displays the players current location
    command = input('\nWhat do you wish to do? ') # gets the users input and this controls the movement from room to room
    if command in directions: #the loop for asking the user to input and when correct input is recieved to move the room
        command = command.replace("go", "")
        if command in rooms[current_room].keys():
            current_room = rooms[current_room][command]
            print(current_room) #prints current room when user moves
        else: # if the player inputs a bad movement
            print('You stumble into a wall. Please try again.')
    elif command == 'exit': # checks to see if the player quits the game
        print('Thanks for playing! Please come back soon so you can win.')
        break
    # invalid command will prompt the user to input again.
    else:
        print('Invalid input. Please try again.')
        print('=========================================')
        print(f'You are currently in the {current_room}')
        print(f'Your current inventory: {inventory}')
    item = rooms[current_room].get('item')
    if item: #code for picking up items and deleting items from rooms after picking up
        print(f'You see a {item}')
        action = input('Would you like to pick up the item? Type get to pick up.').lower()
        if action == 'get':
            print(f'{item} has been added')
            inventory.append(item)
            del rooms[current_room]['item']
        else:
            print('You leave the item behind.')