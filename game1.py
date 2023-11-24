import random

def generate_nickname(name, age):
    # List of adjectives and nouns for nickname generation
    adjectives = ['Awesome', 'Sneaky', 'Daring', 'Swift', 'Brilliant']
    nouns = ['Panda', 'Phoenix', 'Ninja', 'Dragon', 'Wizard']
    
    # Select a random adjective and noun from the lists
    random_adj = random.choice(adjectives)
    random_noun = random.choice(nouns)
    
    # Combine the name, age, adjective, and noun to create the nickname
    nickname = f"{name.capitalize()} the {random_adj} {random_noun}"
    
    return nickname

# Get user's name and age
user_name = input("Enter your name: ")
user_age = input("Enter your age: ")

# Generate the nickname
nickname = generate_nickname(user_name, user_age)
print(f"Your unique nickname is: {nickname}")

