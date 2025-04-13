# 🧛‍♀️ WELCOME TO THE FAMILY - Python Edition

# --- START OF THE GAME ---
name = input("The invisible hands of Carmilla grab your mind, forcing you to reveal your name: ")
print(" ")
print("You wake up chained in a marble hall of a dark castle.")
print("Walking like an alluring cat towards you is Carmilla herself, a tall and hypnotizing woman with skin as pale as snow, hair as black as the night, and eyes red as blood.")
print("You: Who are you?")
print("She smiles, her fangs gleaming. 'Poor little human. When I saw you there, so sad and lonely in your life, I knew I had to adopt you. I will turn you into a vampire, so you can be my cute pet forever. Isn't that fun!?") 
print("You: Let me go!")
print("She laughs. 'You are mine now. You belong to Mommy Carmilla, and you will do anything I say'. She kisses your forehead while giving you a headpat.")
print("'Now', she says. 'Let's see where you belong in my aristocratic vampire family, " + name + "…'")
print(" ")

# --- STATS SECTION ---
health = 10

# Sleep habit
print("'I need to know about your health' Carmilla says 'so I can decide the best type of bite I need to give you and the vampire energies that best suit your body.'")
sleep = input("'How many hours do you sleep per night?' (type A for '6 or less', or B for '7 or more'): ")
if sleep == "A":
    health = health - 2
elif sleep == "B":
    health = health + 2
print(" ")
# Workout habit
workout = input("'How many days per week do you workout?' (type A for 'never', B for '1 to 2', or C for '3 or more'): ")
if workout == "A":
    health = health - 2
elif workout == "B":
    health = health + 2
elif workout == "C":
    health = health + 3

print(" ")
# Reading habit
books = input("'How many books do you read per month?' (type A for '1 or less', B for '2 to 3', or C '4 or more'): ")
if books == "A":
    health = health - 2
elif books == "B":
    health = health + 2
elif books == "C":
    health = health + 3

# Vampire Points
vampire_points = health * 100
print(" ")
print(f"'It seems that your health value is {health} points... I expcted better from you, but I will make sure to make my pet healthy! Because of your health, you will have {vampire_points} vampire points, which is a good start. I don't allow weak vampires in my family, we need to keep the tradition of a strong bloodline'")

# Vampire Rank
if vampire_points <= 800:
    print("'Your rank is Pawn: a humble servant of the night. You will clean my mansion like a good pet'")
elif vampire_points <= 1000:
    print("'Your rank is Squire: learning the arts of blood and shadow. You will have private lessons with me to learn about your new eternal vampire life.'")
elif vampire_points <= 1200:
    print("'Your rank is Knight: a warrior of the blood court. You will have my permission to participate in hunting missions with my other pets.'")
elif vampire_points <= 1300:
    print("'Your rank is Bishop: a tactician and advisor to the dark throne.You will be able to command my weaker pets, but you will continue to obey only me.'")
elif vampire_points <= 1400:
    print("'Your rank is Hook: master of manipulation and secrets. You will be able to fight alongside me in the war against the werewolf clans.'")
elif vampire_points <= 1500:
    print("'Your rank is Count: a noble with influence and power.You will stay in the mansion, managing the family's secret business and attending balls with other influential families.'")
else:
    print("'Your rank is Prince: the highest of all. What you will receive will be a surprise, but I guarantee you will like it.'")

# --- VAMPIRE TYPE SECTION ---
print(" ")
print("'Now' Carmilla says. 'Let's see what kind of vampire you will be.'") 
q1 = input("'Are you driven more by your emotions or your logic?' (type 'emotion' or 'logic'): ")

if q1 == "emotion":
    q2 = input("'Do you prefer competition or helping others?' (type 'competition' or 'help'): ")
    
    if q2 == "competition":
        weapon = input("'Choose your weapon (sword, hammer, or whip):' ").lower()
        if weapon == "sword":
            print("'You will be a Night Hunter — fast, cruel, and relentless.'")
        elif weapon == "hammer":
            print("'You will be a Duskborn — strong, brutal, and guardian of the twilight.'")
        elif weapon == "whip":
            print("'You will be a Blademind — elegant, precise, and sadistic.'")
        else:
            print("'Mistress Carmilla doesn’t like indecisive people. You’ll become a snack.'")

    elif q2 == "help":
        servitor = input("Choose your servitor (wolf, cat, or bat): ").lower()
        if servitor == "wolf":
            print("'You will be a Darkheart — loyal, wild, and instinct-driven.'")
        elif servitor == "cat":
            print("'You will be a Shadow Piercer — quiet, observant, and deadly.'")
        elif servitor == "bat":
            print("'You will be a Dreamwalker — mysterious, dreamy, and able to touch minds.'")
        else:
            print("Carmilla sighs. 'No choices, no future.'")

    else:
        print("You didn’t follow the rules. Mommy Carmilla is displeased...")

elif q1 == "logic":
    q2 = input("'Are you more stable or creative?' (type 'stable' or 'creative'): ")
    
    if q2 == "creative":
        weapon = input("Choose your weapon (arrow, spear, or kopesh): ").lower()
        if weapon == "arrow":
            print("'You will be a Mindpiercer — quick, curious, and deadly at range.'")
        elif weapon == "spear":
            print("'You will be a Seerblade — elegant, insightful, and always one step ahead.'")
        elif weapon == "kopesh":
            print("'You will be a Bloodscribe — intellectual, magical, and keeper of ancient secrets.'")
        else:
            print("'Mommy Carmilla doesn't tolerate hesitation. You’ll become wall decoration.'")

    elif q2 == "stable":
        servitor = input("Choose your servitor (raven, snake, or goat): ").lower()
        if servitor == "raven":
            print("'You will be an Ironshade — watchful, composed, and master strategist.'")
        elif servitor == "snake":
            print("'You will be a Whisperfang — cold, patient, and silently lethal.'")
        elif servitor == "goat":
            print("'You will be a Stonemarrow — grounded, terrifying, and unshakable.'")
        else:
            print("The vampire lady laughs. 'You don't know what you want. Lucky me…'")

    else:
        print("'You didn’t follow the rules. Lady Carmilla is disappointed...'")

else:
    print("'You didn’t answer properly. Mommy is growing impatient...'")

# --- END OF THE GAME ---
print(" ")
print("She gets closer to you, her smile growing wider as her fangs get longer, her eyes glowing with hunger.")
print("'Your fate is sealed,", name + ". Welcome to the family.'")
print(" ")
print("As the bite sinks into your neck, you feel your body go limp, your mind going blank, and this story coming to an end...")
print(" ")
print("THE END")
print(" ")
