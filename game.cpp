#include<iostream>
using namespace std;

/*
Project Statement:

The Guesser Game is a simple number guessing game implemented in an object-oriented manner. In this game, there are four key entities: a Guesser, three Players, and an Umpire. The Guesser selects (guesses) a secret number, and each Player is given a chance to guess the same number. The Umpire is responsible for collecting the guesses from the Guesser and the Players, comparing them, and declaring the result. If one or more Players correctly guess the number chosen by the Guesser, they are declared winners. The game emphasizes basic object-oriented concepts such as class creation, object interaction, encapsulation, and control structures.
*/

class Guesser{
    int num;
    public:
    int guessedNum(){
        int n;
        cout<<"Give number for the Guesser :";
        cin>>n;
        num=n;
        return num;

    }
};
class Player{
    int num;
    public:
    int takePlayerInput(){
        int x;
        cin>>x;
        num=x;
        return num;
    }
};
class Umpire{
    int g,p1num,p2num,p3num;
    public:
    void getGuessedNumber(){
        Guesser g1;
        g=g1.guessedNum();
        
    }
    void getPlayerNumber(){
        Player p1,p2,p3;
        cout<<"Give number for Player 1: "<<endl;
        p1num=p1.takePlayerInput();
        cout<<"Give number for Player 2: "<<endl;
        p2num=p2.takePlayerInput();
        cout<<"Give number for Player 3: "<<endl;
        p3num=p3.takePlayerInput();
    }
    void result(){
        if(g==p1num){
            if(p2num==g){
                if(p3num==g){
                    cout<<"All has won the game"<<endl;
                }else{
                    cout<<"Player 1 and 2 have won the game"<<endl;
                }
            }else{
                if(g==p3num){
                    cout<<"Player 1 and 3 have won the game"<<endl;

                }else{
                cout<<"Player 1 has won the game"<<endl;
                }
            }

        }
        else if(g==p2num){
            if(g==p3num){
                cout<<"Player 2 and 3 have won the game"<<endl;
            }else{
                cout<<"Player 2 has won the game"<<endl;
            }

        }
        else if(g==p3num){
            cout<<"Player 3 has won the game"<<endl;

        }
        else{
            cout<<"All Players have lost the game"<<endl;
        }

    }
   


};




int main(){
    cout<<"--------Let's begin the game--------"<<endl;
   
    Umpire u;
    u.getGuessedNumber();
    u.getPlayerNumber();
    u.result();
    cout<<"--------End Game--------"<<endl;

}