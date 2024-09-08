#include <bits/stdc++.h>
using namespace std;
int main()
{
    srand(time(0));
    int computer_choice = 0 + rand() % 3;
    int player_choice;
    cout << "welcome to rock paper scissors" << endl;
    cout << "simple rules" << endl;
    cout << "Rock beats Scissors" << endl;
    cout << "Scissors beats Paper" << endl;
    cout << "Paper beats Rock" << endl;
    cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "0 = Rock   1 = Paper  2 = Scissors" << endl;
    while (true)
    {
        cout << "type the choice you want: ";
        cin >> player_choice;
        if (player_choice > 2)
            cout << "invalid choice" << endl;
        char play_more;
        string comp_result;
        string player_result;
        if (computer_choice == 0)
            comp_result = "Rock";
        else if (computer_choice == 1)
            comp_result = "Paper";
        else if (computer_choice == 2)
            comp_result = "Scissors";

        if (player_choice == 0)
            player_result = "Rock";
        else if (player_choice == 1)
            player_result = "Paper";
        else if (player_choice == 2)
            player_result = "Scissors";

        if (computer_choice == player_choice)
            cout << "Tie" << endl;
        if (computer_choice == 0 && player_choice == 1 || computer_choice == 1 && player_choice == 2 || computer_choice == 2 && player_choice == 0)
        {
            cout << "Computer: " << comp_result << "   Player: " << player_result << endl;
            cout << "Player Wins" << endl;
        }
        else
        {
            cout << "Computer: " << comp_result << "   Player: " << player_result << endl;
            cout << "Computer Wins" << endl;
        }
        cout << "Wanna Continue? (y or n): ";
        cin >> play_more;
        if (play_more == 'y')
            continue;
        else if (play_more == 'n')
            break;
        else
            cout << "enter correct option" << endl;
    }
    cout << "Thankyou for playing have a great time!!" << endl;

    return 0;
}