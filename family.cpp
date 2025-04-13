// 🧛‍♀️ WELCOME TO THE FAMILY - C++ Edition

#include <iostream>
#include <string>

using namespace std;

int main() {
    

    // --- START OF THE GAME ---
    string name;
    cout << "The invisible hands of Carmilla grab your mind, forcing you to reveal your name: ";
    getline(cin, name);
    cout << "\nYou wake up chained in a marble hall of a dark castle.\n";
    cout << "Walking like an alluring cat towards you is Carmilla herself, a tall and hypnotizing woman with skin as pale as snow, hair as black as the night, and eyes red as blood.\n";
    cout << "You: Who are you?\n";
    cout << "She smiles, her fangs gleaming. 'Poor little human. When I saw you there, so sad and lonely in your life, I knew I had to adopt you. I will turn you into a vampire, so you can be my cute pet forever. Isn't that fun!?'\n";
    cout << "You: Let me go!\n";
    cout << "She laughs. 'You are mine now. You belong to Mommy Carmilla, and you will do anything I say'. She kisses your forehead while giving you a headpat.\n";
    cout << "'Now', she says. 'Let's see where you belong in my aristocratic vampire family, " << name << "…'\n\n";

    // --- STATS SECTION ---
    int health = 10;
    string sleep, workout, books;

    // Sleep habit
    cout << "'I need to know about your health' Carmilla says 'so I can decide the best type of bite I need to give you and the vampire energies that best suit your body.'\n";
    cout << "'How many hours do you sleep per night?' (type A for '6 or less', or B for '7 or more'): ";
    cin >> sleep;
    if (sleep == "A") health -= 2;
    else if (sleep == "B") health += 2;

    cout << "\n";

    // Workout habit
    cout << "'How many days per week do you workout?' (type A for 'never', B for '1 to 2', or C for '3 or more'): ";
    cin >> workout;
    if (workout == "A") health -= 2;
    else if (workout == "B") health += 2;
    else if (workout == "C") health += 3;

    cout << "\n";

    // Reading habit
    cout << "'How many books do you read per month?' (type A for '1 or less', B for '2 to 3', or C for '4 or more'): ";
    cin >> books;
    if (books == "A") health -= 2;
    else if (books == "B") health += 2;
    else if (books == "C") health += 3;

    // Vampire Points
    int vampire_points = health * 100;
    cout << "\n'It seems that your health value is " << health << " points... I expected better from you, but I will make sure to make my pet healthy! Because of your health, you will have " << vampire_points << " vampire points, which is a good start. I don't allow weak vampires in my family, we need to keep the tradition of a strong bloodline'\n";

    // Vampire Rank
    if (vampire_points <= 800)
        cout << "'Your rank is Pawn: a humble servant of the night. You will clean my mansion like a good pet'\n";
    else if (vampire_points <= 1000)
        cout << "'Your rank is Squire: learning the arts of blood and shadow. You will have private lessons with me to learn about your new eternal vampire life.'\n";
    else if (vampire_points <= 1200)
        cout << "'Your rank is Knight: a warrior of the blood court. You will have my permission to participate in hunting missions with my other pets.'\n";
    else if (vampire_points <= 1300)
        cout << "'Your rank is Bishop: a tactician and advisor to the dark throne. You will be able to command my weaker pets, but you will continue to obey only me.'\n";
    else if (vampire_points <= 1400)
        cout << "'Your rank is Hook: master of manipulation and secrets. You will be able to fight alongside me in the war against the werewolf clans.'\n";
    else if (vampire_points <= 1500)
        cout << "'Your rank is Count: a noble with influence and power. You will stay in the mansion, managing the family's secret business and attending balls with other influential families.'\n";
    else
        cout << "'Your rank is Prince: the highest of all. What you will receive will be a surprise, but I guarantee you will like it.'\n";

    // --- VAMPIRE TYPE SECTION ---
    cout << "\n'Now' Carmilla says. 'Let's see what kind of vampire you will be.'\n";
    string q1, q2, choice;

    cout << "'Are you driven more by your emotions or your logic?' (type 'emotion' or 'logic'): ";
    cin >> q1;

    if (q1 == "emotion") {
        cout << "'Do you prefer competition or helping others?' (type 'competition' or 'help'): ";
        cin >> q2;

        if (q2 == "competition") {
            cout << "'Choose your weapon (sword, hammer, or whip):' ";
            cin >> choice;
            if (choice == "sword")
                cout << "'You will be a Night Hunter — fast, cruel, and relentless.'\n";
            else if (choice == "hammer")
                cout << "'You will be a Duskborn — strong, brutal, and guardian of the twilight.'\n";
            else if (choice == "whip")
                cout << "'You will be a Blademind — elegant, precise, and sadistic.'\n";
            else
                cout << "'Mistress Carmilla doesn’t like indecisive people. You’ll become a snack.'\n";

        } else if (q2 == "help") {
            cout << "Choose your servitor (wolf, cat, or bat): ";
            cin >> choice;
            if (choice == "wolf")
                cout << "'You will be a Darkheart — loyal, wild, and instinct-driven.'\n";
            else if (choice == "cat")
                cout << "'You will be a Shadow Piercer — quiet, observant, and deadly.'\n";
            else if (choice == "bat")
                cout << "'You will be a Dreamwalker — mysterious, dreamy, and able to touch minds.'\n";
            else
                cout << "Carmilla sighs. 'No choices, no future.'\n";
        } else {
            cout << "You didn’t follow the rules. Mommy Carmilla is displeased...\n";
        }

    } else if (q1 == "logic") {
        cout << "'Are you more stable or creative?' (type 'stable' or 'creative'): ";
        cin >> q2;

        if (q2 == "creative") {
            cout << "Choose your weapon (arrow, spear, or kopesh): ";
            cin >> choice;
            if (choice == "arrow")
                cout << "'You will be a Mindpiercer — quick, curious, and deadly at range.'\n";
            else if (choice == "spear")
                cout << "'You will be a Seerblade — elegant, insightful, and always one step ahead.'\n";
            else if (choice == "kopesh")
                cout << "'You will be a Bloodscribe — intellectual, magical, and keeper of ancient secrets.'\n";
            else
                cout << "'Mommy Carmilla doesn't tolerate hesitation. You’ll become wall decoration.'\n";

        } else if (q2 == "stable") {
            cout << "Choose your servitor (raven, snake, or goat): ";
            cin >> choice;
            if (choice == "raven")
                cout << "'You will be an Ironshade — watchful, composed, and master strategist.'\n";
            else if (choice == "snake")
                cout << "'You will be a Whisperfang — cold, patient, and silently lethal.'\n";
            else if (choice == "goat")
                cout << "'You will be a Stonemarrow — grounded, terrifying, and unshakable.'\n";
            else
                cout << "The vampire lady laughs. 'You don't know what you want. Lucky me…'\n";
        } else {
            cout << "'You didn’t follow the rules. Lady Carmilla is disappointed...'\n";
        }

    } else {
        cout << "'You didn’t answer properly. Mommy is growing impatient...'\n";
    }

    // --- END OF THE GAME ---
    cout << "\nShe gets closer to you, her smile growing wider as her fangs get longer, her eyes glowing with hunger.\n";
    cout << "'Your fate is sealed, " << name << ". Welcome to the family.'\n\n";
    cout << "As the bite sinks into your neck, you feel your body go limp, your mind going blank, and this story coming to an end...\n\n";
    cout << "THE END\n\n";

    return 0;
}
