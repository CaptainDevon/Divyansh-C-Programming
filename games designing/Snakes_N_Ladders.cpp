#include<bits/stdc++.h>
using namespace std;

class Board
{
    protected:
    vector<pair<int,int>> snakes={{16,6},{48,26},{49,16},{64,60},{87,24},{93,73},{98,78}};
    vector<pair<int,int>> ladders={{4,14},{9,31},{21,42},{28,84},{51,67},{71,91},{80,97}};
};

class Game:public Board
{
    private:
    vector<int>players;

    int getRandomNumber() 
    {
        return (rand() % 6) + 1;
    }

    int snakeBite(int tile)
    {
        for(int i=0;i<snakes.size();i++)
        {
            if(snakes[i].first==tile)return i;
        }
        return -1;
    }

    int ladderClimb(int tile)
    {
        for(int i=0;i<ladders.size();i++)
        {
            if(ladders[i].first==tile) return i;
        }
        return -1;
    }

    void scoreDisplay()
    {
        for(auto it:players)
        {
            cout<<it<<" ";
        }
        cout<<endl;
    }

    void playTurn(int i)
    {
        int number=getRandomNumber();
        if(this->players[i]<=100)this->players[i]+=number;
        int snakeIndex=snakeBite(this->players[i]);
        int ladderIndex=ladderClimb(this->players[i]);
        if(snakeIndex!=-1)
        {
            cout<<"Snake bite!! phisssssss..."<<endl;
            this->players[i]=snakes[snakeIndex].second;
        }
        if(ladderIndex!=-1)
        {
            cout<<"Wao!! you found a ladder..."<<endl;
            this->players[i]=ladders[ladderIndex].second;
        }
        
        
    }

    bool winCondition(int tile)
    {
        if(tile==100) return true;
        return false;
    }

    public:
    Game(int players)
    {
        this->players=vector<int>(players,0);
    }

    void gameInformation()
    {
        cout << "Welcome to Snakes and Ladders!" << endl;
        cout << "1. The game is played on a board with 100 numbered squares." << endl;
        cout << "2. Players take turns rolling a die to move forward." << endl;
        cout << "3. Landing on a ladder moves the player up to a higher square." << endl;
        cout << "4. Landing on a snake moves the player down to a lower square." << endl;
        cout << "5. The first player to reach square 100 wins the game." << endl;
        cout << "6. If a roll exceeds 100, the player stays in place." << endl;
        cout << "7. The game requires at least two players." << endl;
        cout << "8. Good luck and have fun!" << endl;
    }

    void playground()
    {
        while(true)
        {
            int stopper=0;
            scoreDisplay();
            for(int i=0;i<players.size();i++)
            {
                playTurn(i);
                if(winCondition(players[i]))
                {
                    stopper+=1;
                    cout<<"player number "<<i+1<<" is the Winner!! congratulations..."<<endl;
                    break;
                }
            }
            if(stopper==1)break;
        }
    }
};

int main()
{
    int players;
    cout<<"enter number of players: ";
    cin>>players;
    Game g(players);
    g.gameInformation();
    g.playground();
    system("pause");
    return 0;
}