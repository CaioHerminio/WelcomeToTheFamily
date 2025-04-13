// 🧛‍♀️ WELCOME TO THE FAMILY - JavaScript Edition (Node.js)

const readline = require('readline');
const rl = readline.createInterface({
  input: process.stdin,
  output: process.stdout
});

let health = 10;
let name = "";
let vampire_points = 0;

function ask(question) {
  return new Promise(resolve => rl.question(question, answer => resolve(answer)));
}

async function main() {
  // --- START OF THE GAME ---
  name = await ask("The invisible hands of Carmilla grab your mind, forcing you to reveal your name: ");
  console.log("\nYou wake up chained in a marble hall of a dark castle.");
  console.log("Walking like an alluring cat towards you is Carmilla herself, a tall and hypnotizing woman with skin as pale as snow, hair as black as the night, and eyes red as blood.");
  console.log("You: Who are you?");
  console.log("She smiles, her fangs gleaming. 'Poor little human. When I saw you there, so sad and lonely in your life, I knew I had to adopt you. I will turn you into a vampire, so you can be my cute pet forever. Isn't that fun!?");
  console.log("You: Let me go!");
  console.log("She laughs. 'You are mine now. You belong to Mommy Carmilla, and you will do anything I say'. She kisses your forehead while giving you a headpat.");
  console.log(`'Now', she says. 'Let's see where you belong in my aristocratic vampire family, ${name}…'\n`);

  // --- STATS SECTION ---
  console.log("'I need to know about your health' Carmilla says 'so I can decide the best type of bite I need to give you and the vampire energies that best suit your body.'");

  const sleep = await ask("'How many hours do you sleep per night?' (type A for '6 or less', or B for '7 or more'): ");
  if (sleep === "A") health -= 2;
  else if (sleep === "B") health += 2;

  const workout = await ask("'How many days per week do you workout?' (type A for 'never', B for '1 to 2', or C for '3 or more'): ");
  if (workout === "A") health -= 2;
  else if (workout === "B") health += 2;
  else if (workout === "C") health += 3;

  const books = await ask("'How many books do you read per month?' (type A for '1 or less', B for '2 to 3', or C '4 or more'): ");
  if (books === "A") health -= 2;
  else if (books === "B") health += 2;
  else if (books === "C") health += 3;

  vampire_points = health * 100;
  console.log(`\n'It seems that your health value is ${health} points... I expected better from you, but I will make sure to make my pet healthy! Because of your health, you will have ${vampire_points} vampire points, which is a good start. I don't allow weak vampires in my family, we need to keep the tradition of a strong bloodline'`);

  // Vampire Rank
  if (vampire_points <= 800) {
    console.log("'Your rank is Pawn: a humble servant of the night. You will clean my mansion like a good pet'");
  } else if (vampire_points <= 1000) {
    console.log("'Your rank is Squire: learning the arts of blood and shadow. You will have private lessons with me to learn about your new eternal vampire life.'");
  } else if (vampire_points <= 1200) {
    console.log("'Your rank is Knight: a warrior of the blood court. You will have my permission to participate in hunting missions with my other pets.'");
  } else if (vampire_points <= 1300) {
    console.log("'Your rank is Bishop: a tactician and advisor to the dark throne. You will be able to command my weaker pets, but you will continue to obey only me.'");
  } else if (vampire_points <= 1400) {
    console.log("'Your rank is Hook: master of manipulation and secrets. You will be able to fight alongside me in the war against the werewolf clans.'");
  } else if (vampire_points <= 1500) {
    console.log("'Your rank is Count: a noble with influence and power. You will stay in the mansion, managing the family's secret business and attending balls with other influential families.'");
  } else {
    console.log("'Your rank is Prince: the highest of all. What you will receive will be a surprise, but I guarantee you will like it.'");
  }

  // --- VAMPIRE TYPE SECTION ---
  console.log("\n'Now' Carmilla says. 'Let's see what kind of vampire you will be.'");
  const q1 = await ask("'Are you driven more by your emotions or your logic?' (type 'emotion' or 'logic'): ");

  if (q1 === "emotion") {
    const q2 = await ask("'Do you prefer competition or helping others?' (type 'competition' or 'help'): ");
    if (q2 === "competition") {
      const weapon = (await ask("'Choose your weapon (sword, hammer, or whip):' ")).toLowerCase();
      if (weapon === "sword") console.log("'You will be a Night Hunter — fast, cruel, and relentless.'");
      else if (weapon === "hammer") console.log("'You will be a Duskborn — strong, brutal, and guardian of the twilight.'");
      else if (weapon === "whip") console.log("'You will be a Blademind — elegant, precise, and sadistic.'");
      else console.log("'Mistress Carmilla doesn’t like indecisive people. You’ll become a snack.'");
    } else if (q2 === "help") {
      const servitor = (await ask("Choose your servitor (wolf, cat, or bat): ")).toLowerCase();
      if (servitor === "wolf") console.log("'You will be a Darkheart — loyal, wild, and instinct-driven.'");
      else if (servitor === "cat") console.log("'You will be a Shadow Piercer — quiet, observant, and deadly.'");
      else if (servitor === "bat") console.log("'You will be a Dreamwalker — mysterious, dreamy, and able to touch minds.'");
      else console.log("Carmilla sighs. 'No choices, no future.'");
    } else {
      console.log("You didn’t follow the rules. Mommy Carmilla is displeased...");
    }
  } else if (q1 === "logic") {
    const q2 = await ask("'Are you more stable or creative?' (type 'stable' or 'creative'): ");
    if (q2 === "creative") {
      const weapon = (await ask("Choose your weapon (arrow, spear, or kopesh): ")).toLowerCase();
      if (weapon === "arrow") console.log("'You will be a Mindpiercer — quick, curious, and deadly at range.'");
      else if (weapon === "spear") console.log("'You will be a Seerblade — elegant, insightful, and always one step ahead.'");
      else if (weapon === "kopesh") console.log("'You will be a Bloodscribe — intellectual, magical, and keeper of ancient secrets.'");
      else console.log("'Mommy Carmilla doesn't tolerate hesitation. You’ll become wall decoration.'");
    } else if (q2 === "stable") {
      const servitor = (await ask("Choose your servitor (raven, snake, or goat): ")).toLowerCase();
      if (servitor === "raven") console.log("'You will be an Ironshade — watchful, composed, and master strategist.'");
      else if (servitor === "snake") console.log("'You will be a Whisperfang — cold, patient, and silently lethal.'");
      else if (servitor === "goat") console.log("'You will be a Stonemarrow — grounded, terrifying, and unshakable.'");
      else console.log("The vampire lady laughs. 'You don't know what you want. Lucky me…'");
    } else {
      console.log("'You didn’t follow the rules. Lady Carmilla is disappointed...'");
    }
  } else {
    console.log("'You didn’t answer properly. Mommy is growing impatient...'");
  }

  // --- END OF THE GAME ---
  console.log(`\nShe gets closer to you, her smile growing wider as her fangs get longer, her eyes glowing with hunger.`);
  console.log(`'Your fate is sealed, ${name}. Welcome to the family.'`);
  console.log("As the bite sinks into your neck, you feel your body go limp, your mind going blank, and this story coming to an end...");
  console.log("THE END\n");

  rl.close();
}

main();
