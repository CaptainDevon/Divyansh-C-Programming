#include <bits/stdc++.h>
using namespace std;
class hangman
{
private:
    vector<string> dictionary = {
        // words starting with 'a'
        "apple", "ant", "astronaut", "aardvark", "albatross", "anchor", "arrow", "ambulance", "artist", "archer",
        "almond", "apartment", "apology", "army", "avocado", "axe", "armadillo", "amphibian", "apricot", "adventure",

        // words starting with 'b'
        "banana", "bear", "balloon", "butterfly", "boat", "bottle", "basket", "button", "buffalo", "bridge",
        "book", "battery", "bicycle", "blender", "branch", "beetle", "brick", "broccoli", "bowl", "bracelet",

        // words starting with 'c'
        "cat", "car", "castle", "cucumber", "crab", "candle", "camera", "coffee", "chocolate", "cloud",
        "clock", "calculator", "cheetah", "cup", "couch", "crown", "canyon", "cactus", "calendar", "chicken",

        // words starting with 'd'
        "dog", "duck", "dolphin", "dragon", "diamond", "drum", "drawer", "desert", "doctor", "dance",
        "donkey", "desk", "dice", "daisy", "diary", "dinner", "dish", "dream", "doll", "dinosaur",

        // words starting with 'e'
        "elephant", "eagle", "ear", "engine", "envelope", "eggplant", "energy", "engine", "escalator", "envelope",
        "experiment", "excavator", "exercise", "exit", "exhibit", "explorer", "eel", "echo", "emerald", "earthquake",

        // words starting with 'f'
        "fish", "frog", "fox", "flamingo", "feather", "flower", "fountain", "flag", "forest", "fire",
        "fan", "fence", "ferris", "falcon", "fruit", "friend", "fabric", "football", "fork", "flashlight",

        // words starting with 'g'
        "giraffe", "gorilla", "guitar", "garden", "glove", "grapes", "gold", "game", "goat", "garage",
        "gate", "gown", "galaxy", "glacier", "goblin", "gem", "glider", "giant", "grass", "goggles",

        // words starting with 'h'
        "house", "horse", "helicopter", "hamburger", "hat", "hawk", "hedgehog", "helmet", "hand", "hammer",
        "honey", "heart", "hose", "harbor", "hydrant", "harp", "hero", "hotel", "helmet", "hedge",

        // words starting with 'i'
        "igloo", "island", "ice", "insect", "iron", "idea", "instrument", "ink", "iceberg", "ivy",
        "internet", "invention", "invitation", "icicle", "illusion", "impact", "incense", "item", "illustration", "injury",

        // words starting with 'j'
        "jelly", "jaguar", "jungle", "jacket", "jellyfish", "jar", "jet", "jeep", "jigsaw", "jumper",
        "jewelry", "journal", "juice", "jukebox", "juggler", "journey", "joystick", "joke", "journey", "jazz",

        // words starting with 'k'
        "kite", "kangaroo", "key", "king", "kettle", "kitten", "knee", "knife", "kiwi", "keyboard",
        "ketchup", "kiss", "knight", "kitchen", "kangaroo", "kabob", "kettle", "kite", "knapsack", "kaleidoscope",

        // words starting with 'l'
        "lion", "lemon", "ladder", "lamp", "leaf", "lake", "lizard", "lighthouse", "lamb", "laptop",
        "library", "lava", "lobster", "lock", "lantern", "letter", "ladybug", "luggage", "lynx", "lollipop",

        // words starting with 'm'
        "monkey", "mountain", "moon", "mouse", "motorcycle", "milk", "mango", "mask", "mushroom", "map",
        "mirror", "mansion", "meadow", "marble", "magazine", "medal", "microscope", "melon", "mine", "magnet",

        // words starting with 'n'
        "nest", "nail", "notebook", "nose", "net", "nugget", "night", "necklace", "napkin", "needle",
        "nest", "notebook", "ninja", "nightmare", "nectar", "neighbor", "noodle", "newspaper", "neutron", "navy",

        // words starting with 'o'
        "orange", "owl", "ocean", "octopus", "oven", "ostrich", "onion", "oasis", "oil", "orbit",
        "organ", "omelet", "opal", "olive", "oven", "orca", "orchid", "oxygen", "overcoat", "opera",

        // words starting with 'p'
        "penguin", "pencil", "pizza", "pumpkin", "parrot", "pineapple", "pirate", "pearl", "plane", "puzzle",
        "panda", "palm", "peacock", "paper", "pickle", "pebble", "pillow", "pencil", "plant", "park",

        // words starting with 'q'
        "queen", "quilt", "quiz", "quartz", "quiver", "quail", "quarter", "quest", "quicksand", "quote",
        "quokka", "quill", "quiet", "queue", "quintet", "quadrant", "quota", "quasar", "quicksilver", "quadratic",

        // words starting with 'r'
        "rabbit", "rainbow", "river", "robot", "raccoon", "rose", "razor", "rook", "rope", "raft",
        "radio", "radar", "rat", "radar", "ring", "rail", "racecar", "rug", "rhino", "roller",

        // words starting with 's'
        "snake", "star", "sun", "shark", "spoon", "socks", "scissors", "sand", "shell", "swan",
        "spider", "snow", "sloth", "sock", "stove", "sword", "stone", "squid", "sail", "saucer",

        // words starting with 't'
        "tiger", "train", "tree", "turtle", "truck", "tooth", "table", "tent", "toy", "towel",
        "tornado", "temple", "tiger", "trampoline", "throne", "trombone", "tap", "triangle", "treasure", "twins",

        // words starting with 'u'
        "umbrella", "unicorn", "uniform", "universe", "upholstery", "undertaker", "unicycle", "urchin", "utensil", "ulcer",
        "upgrade", "unicycle", "unicorn", "uniform", "undertone", "upbeat", "uranium", "ultrasound", "user", "urn",

        // words starting with 'v'
        "violin", "vase", "volcano", "vulture", "vine", "vampire", "vortex", "vest", "vacation", "van",
        "velvet", "village", "vehicle", "vitamin", "visitor", "vault", "veteran", "violet", "victory", "venus",

        // words starting with 'w'
        "whale", "wolf", "window", "water", "watch", "worm", "whistle", "wagon", "wheel", "wing",
        "wrench", "waffle", "wizard", "wombat", "wand", "web", "wheat", "wine", "whisker", "wave",

        // words starting with 'x'
        "xylophone", "xenon", "xerox", "xylem", "xenophobia", "xray", "xylitol", "xenolith", "xeriscape", "xiphoid",
        "xerothermic", "xylograph", "xenophile", "xenobiotic", "xerophyte", "xenogamy", "xenogenesis", "xylotomy", "xyloid", "xenoblast",

        // words starting with 'y'
        "yacht", "yak", "yarn", "yawn", "yogurt", "yellow", "yard", "yolk", "yeti", "year",
        "yardstick", "yam", "youth", "yeast", "yield", "yodel", "yogurt", "yarn", "yew", "yarn",

        // words starting with 'z'
        "zebra", "zoo", "zipper", "zucchini", "zephyr", "zodiac", "zamboni", "zombie", "zenith", "zigzag",
        "zipper", "zest", "zucchini", "zero", "zoom", "zebra", "zygote", "zillion", "zircon", "zealot"};

public:
    string computer_choice()
    {
        srand((unsigned int)time(0));
        return dictionary[rand() % dictionary.size()];
    }

    void game_description()
    {
        cout << "Objective: " << endl;
        cout << "1--> The goal of Hangman is for a player to guess a hidden word by suggesting letters within a certain" << endl;
        cout << "2--> number of attempts. The game is traditionally played with pencil and paper, but can also be" << endl;
        cout << "3--> implemented as a computer game." << endl;
    }

    void display(string &hidden_word)
    {
        for (int i = 0; i < hidden_word.size(); i++)
        {
            cout << hidden_word[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    char player_choice;
    int number_of_chances = 10;
    hangman h;
    string computer_choice = h.computer_choice(), word(computer_choice.size(), '_');
    cout << "--------------------------------------welcome to Hangman------------------------------------!!" << endl;
    h.game_description();
    cout << "----------------------------------------------------------------------------------------------" << endl;
    cout << "----------------------------------------guess the word----------------------------------------" << endl;
    while (true)
    {
        h.display(word);
        cout << "enter the alphabet: ";
        cin >> player_choice;
        cout << endl;
        int change = 0;
        for (int i = 0; i < computer_choice.size(); i++)
        {
            if (computer_choice[i] == player_choice)
            {
                word[i] = player_choice;
                change++;
            }
        }
        if (change == 0)
            number_of_chances--;
        cout << "---------------------------------  number of lives Left= " << number_of_chances << "--------------------------" << endl;
        if (word == computer_choice)
        {
            cout << "-------------------------------------Congratulations You have guessed it right!-------------------------------------" << endl;
            h.display(word);
            break;
        }
        if (number_of_chances == 0)
        {
            cout << "-------------------------------------------------------game over!---------------------------------------------------" << endl;
            cout << "---------------------------------------------------the word was: " << computer_choice << " -----------------------------";
            break;
        }
    }
    system("pause");
    return 0;
    

}
