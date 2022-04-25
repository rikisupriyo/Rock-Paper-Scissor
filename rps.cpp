//rock paper scissors game

#include <bits/stdc++.h>
using namespace std;

int compare(pair<int, int> p){
    if(p.first == 1 && p.second == 0)
        return 1;
    else if(p.first == 2 && p.second == 1)
        return 1;
    else if(p.first == 0 && p.second == 2)
        return 1;
    return 0;
}

string compare(int choice, vector<string> v){
    if(choice == 0)
        return v[1];
    else if(choice == 1)
        return v[2];
    return v[0];
}

int main(){
    //variables
    vector<string> v;
    int choice1, choice2, choice3, choice4, my_score = 0, opp_score = 0;
    v.push_back("ROCK");
    v.push_back("PAPER");
    v.push_back("SCISSOR");

    //interface

    cout<<"------------------------------"<<endl;
    cout<<"\nDIFFICULTY:\n1.NORMAL\n2.HARD"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>choice1;
    cout<<"------------------------------"<<endl;

    if(choice1 == 1){
        cout<<"------------------------------"<<endl;
        cout<<"\nHOW MANY TURNS YOU WANT?\n1.5\n2.10\n3.15"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice2;
        cout<<"------------------------------"<<endl;

        //normal mode

        if(choice2 == 1){

            for(int i=1; i<=5; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    choice4 = rand()%3;
                    cout<<"\nYou choose "<<v[choice3]<<" and your opponent choose "<<v[choice4]<<endl;
                    if(choice3 != choice4){
                        pair<int, int> choice_pair = make_pair(choice3, choice4);
                        if(compare(choice_pair) == 1)
                            my_score += 1;
                        else
                            opp_score += 1;
                    }
                    cout<<"\nYOUR SCORE- "<<my_score<<"\nOPPONENT SCORE- "<<opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }

            }
            if(my_score > opp_score)
                cout<<"\nYOU WIN!";
            else if(my_score < opp_score)
                cout<<"\nYOU LOSE!";
            else
                cout<<"\nDRAW";
        }

        else if(choice2 == 2){

            for(int i=1; i<=10; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    choice4 = rand()%3;
                    cout<<"\nYou choose "<<v[choice3]<<" and your opponent choose "<<v[choice4]<<endl;
                    if(choice3 != choice4){
                        pair<int, int> choice_pair = make_pair(choice3, choice4);
                        if(compare(choice_pair) == 1)
                            my_score += 1;
                        else
                            opp_score += 1;
                    }
                    cout<<"\nYOUR SCORE- "<<my_score<<"\nOPPONENT SCORE- "<<opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }

            }
            if(my_score > opp_score)
                cout<<"\nYOU WIN!";
            else if(my_score < opp_score)
                cout<<"\nYOU LOSE!";
            else
                cout<<"\nDRAW";
        }

        else if(choice2 == 3){
            
            for(int i=1; i<=15; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    choice4 = rand()%3;
                    cout<<"\nYou choose "<<v[choice3]<<" and your opponent choose "<<v[choice4]<<endl;
                    if(choice3 != choice4){
                        pair<int, int> choice_pair = make_pair(choice3, choice4);
                        if(compare(choice_pair) == 1)
                            my_score += 1;
                        else
                            opp_score += 1;
                    }
                    cout<<"\nYOUR SCORE- "<<my_score<<"\nOPPONENT SCORE- "<<opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }

            }
            if(my_score > opp_score)
                cout<<"\nYOU WIN!";
            else if(my_score < opp_score)
                cout<<"\nYOU LOSE!";
            else
                cout<<"\nDRAW";
        }

        else
            cout<<"INVALID CHOICE!";

    }

    //hard mode

    else if(choice1 == 2){
        cout<<"------------------------------"<<endl;
        cout<<"\nHOW MANY TURNS YOU WANT?\n1.5\n2.10\n3.15"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice2;
        cout<<"------------------------------"<<endl;

        if(choice2 == 1){
            for(int i=1; i<=5; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    cout<<"You choose "<<v[choice3]<<" and your opponent choose "<<compare(choice3, v);
                    cout<<"\nYour Score = 0\nYour opponent score = "<<++opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }
            }
            if(my_score < opp_score)
                cout<<"YOU LOSE!";
        }

        else if(choice2 == 2){
            for(int i=1; i<=10; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    cout<<"You choose "<<v[choice3]<<" and your opponent choose "<<compare(choice3, v);
                    cout<<"\nYour Score = 0\nYour opponent score = "<<++opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }
            }
            if(my_score < opp_score)
                cout<<"YOU LOSE!";
        }

        else if(choice2 == 3){
            for(int i=1; i<=15; i++){

                cout<<"------------------------------"<<endl;
                cout<<"\nWHAT YOU WANT TO PICK?"<<endl;
                cout<<"0 --> ROCK"<<endl;
                cout<<"1 --> PAPER"<<endl;
                cout<<"2 --> SCISSOR"<<endl;
                cout<<"Enter your choice: ";
                cin>>choice3;
                cout<<"------------------------------"<<endl;

                if(choice3 == 0 || choice3 == 1 || choice3 == 2){
                    cout<<"You choose "<<v[choice3]<<" and your opponent choose "<<compare(choice3, v);
                    cout<<"\nYour Score = 0\nYour opponent score = "<<++opp_score<<endl;
                }

                else{
                    cout<<"INVALID CHOICE, PROGRAM TERMINATED!";
                    break;
                }
            }
            if(my_score < opp_score)
                cout<<"YOU LOSE!";
        }

        else
            cout<<"INVALID CHOICE!";

    }

    else    
        cout<<"INVALID CHOICE!";

    cout<<"\n\nThanks for playing the game!"<<endl;
    return 0;
}