#include <iostream>
#include <cstdlib> // system()
#include <chrono>
#include <thread>
#include <string>
#include <ctime>   // time()

using namespace std;
using namespace std::this_thread;
using namespace std::chrono;

const string rock = R"(
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)
)";

const string paper = R"(
    _______
---'   ____)____
          ______)
          _______)
         _______)
---.__________)
)";

const string scissors = R"(
    _______
---'   ____)____
          ______)
       __________)
      (____)
---.__(___)
)";

const string win = R"(
  __     ______  _    _  __          _______ _   _ _ 
  \ \   / / __ \| |  | | \ \        / /_   _| \ | | |
   \ \_/ / |  | | |  | |  \ \  /\  / /  | | |  \| | |
    \   /| |  | | |  | |   \ \/  \/ /   | | | . ` | |
     | | | |__| | |__| |    \  /\  /   _| |_| |\  |_|
     |_|  \____/ \____/      \/  \/   |_____|_| \_(_)
    )";

const string lose = R"(
  __     ______  _    _   _      ____   _____ ______ 
  \ \   / / __ \| |  | | | |    / __ \ / ____|  ____|
   \ \_/ / |  | | |  | | | |   | |  | | (___ | |__   
    \   /| |  | | |  | | | |   | |  | |\___ \|  __|  
     | | | |__| | |__| | | |___| |__| |____) | |____ 
     |_|  \____/ \____/  |______\____/|_____/|______|
    )";

const string tied = R"(
  _______ _____ ______ 
 |__   __|_   _|  ____|
    | |    | | | |__   
    | |    | | |  __|  
    | |   _| |_| |____ 
    |_|  |_____|______|
    )";

int choice = 0;
int cpuchoice = 0;


void draw() {
    cpuchoice = (rand() % 3) + 1;

    // rock vs rock, tie
    if(choice == 1 && cpuchoice == 1) {
        cout << "You chose Rock." << endl;
        cout << rock << endl;
        sleep_for(2s);
        cout << "The computer also chose Rock!" << endl;
        cout << rock << endl;
        sleep_for(2500ms);
        system("cls");
        cout << tied << endl;
        sleep_for(5s);

    }

    // rock vs paper, paper wins
    else if(choice == 1 && cpuchoice == 2) {
        cout << "You chose Rock." << endl;
        cout << rock << endl;
        sleep_for(2s);
        cout << "The computer chose Paper!" << endl;
        cout << paper << endl;
        sleep_for(2500ms);
        system("cls");
        cout << lose << endl;
        sleep_for(5s);

    }

     // rock vs scissors, rock wins
    else if(choice == 1 && cpuchoice == 3) {
        cout << "You chose Rock." << endl;
        cout << rock << endl;
        sleep_for(2s);
        cout << "The computer chose Scissors!" << endl;
        cout << scissors << endl;
        sleep_for(2500ms);
        system("cls");
        cout << win << endl;
        sleep_for(5s);

    }

    // paper vs rock, paper wins
    else if(choice == 2 && cpuchoice == 1) {
        cout << "You chose Paper." << endl;
        cout << paper << endl;
        sleep_for(2s);
        cout << "The computer chose Rock!" << endl;
        cout << rock << endl;
        sleep_for(2500ms);
        system("cls");
        cout << win << endl;
        sleep_for(5s);

    }

    // paper vs paper, tie
    else if(choice == 2 && cpuchoice == 2) {
        cout << "You chose Paper." << endl;
        cout << paper << endl;
        sleep_for(2s);
        cout << "The computer also chose Paper!" << endl;
        cout << paper << endl;
        sleep_for(2500ms);
        system("cls");
        cout << tied << endl;
        sleep_for(5s);

    }

    // paper vs scissors, scissors wins
    else if(choice == 2 && cpuchoice == 3) {
        cout << "You chose Paper." << endl;
        cout << paper << endl;
        sleep_for(2s);
        cout << "The computer chose Scissors!" << endl;
        cout << scissors << endl;
        sleep_for(2500ms);
        system("cls");
        cout << lose << endl;
        sleep_for(5s);

    }

    // scissors vs rock, rock wins
    else if(choice == 3 && cpuchoice == 1) {
        cout << "You chose Scissors." << endl;
        cout << scissors << endl;
        sleep_for(2s);
        cout << "The computer chose Rock!" << endl;
        cout << rock << endl;
        sleep_for(2500ms);
        system("cls");
        cout << lose << endl;
        sleep_for(5s);

    }

    // scissors vs paper, scissors wins
    else if(choice == 3 && cpuchoice == 2) {
        cout << "You chose Scissors." << endl;
        cout << scissors << endl;
        sleep_for(2s);
        cout << "The computer chose Paper!" << endl;
        cout << paper << endl;
        sleep_for(2500ms);
        system("cls");
        cout << win << endl;
        sleep_for(5s);

    }

    // scissors vs scissors, tie
    else if(choice == 3 && cpuchoice == 3) {
        cout << "You chose Scissors." << endl;
        cout << scissors << endl;
        sleep_for(2s);
        cout << "The computer also chose Scissors!" << endl;
        cout << scissors << endl;
        sleep_for(2500ms);
        system("cls");
        cout << tied << endl;
        sleep_for(5s);

    }
    
}


int main() {
    srand(time(0)); // seed generator with current time
    cout << "Welcome to Rock, Paper, Scissors!" << endl;
    cout << "Choose a number to play: " << endl;
    cout << "1. Rock" << endl;
    cout << "2. Paper" << endl;
    cout << "3. Scissors" << endl;
    cout << "Your choice: ";
    cin >> choice;
    system("cls");
    cout << "Ready?" << endl;
    sleep_for(1200ms);
    system("cls");
     cout << R"(                                       
                                                  333333333333333   
                                                  3:::::::::::::::33 
                                                  3::::::33333::::::3
                                                  3333333     3:::::3
                                                              3:::::3
                                                              3:::::3
                                                      33333333:::::3 
                                                      3:::::::::::3  
                                                      33333333:::::3 
                                                              3:::::3
                                                              3:::::3
                                                              3:::::3
                                                  3333333     3:::::3
                                                  3::::::33333::::::3
                                                  3:::::::::::::::33 
                                                   333333333333333   )" << '\n';
    sleep_for(1s);
    system("cls");
     cout << R"(                                       
                                                   222222222222222    
                                                  2:::::::::::::::22  
                                                  2::::::222222:::::2 
                                                  2222222     2:::::2 
                                                              2:::::2 
                                                              2:::::2 
                                                           2222::::2  
                                                      22222::::::22   
                                                    22::::::::222     
                                                   2:::::22222        
                                                  2:::::2             
                                                  2:::::2             
                                                  2:::::2       222222
                                                  2::::::2222222:::::2
                                                  2::::::::::::::::::2
                                                  2::::::::::::::::::2
                                                  22222222222222222222 )" << '\n';
    sleep_for(1s);
    system("cls");
     cout << R"(                       
                                                    1111111   
                                                   1::::::1   
                                                  1:::::::1   
                                                  111:::::1   
                                                     1::::1   
                                                     1::::1   
                                                     1::::1   
                                                     1::::l   
                                                     1::::l   
                                                     1::::l   
                                                     1::::l   
                                                     1::::l   
                                                  111::::::111
                                                  1::::::::::1
                                                  1::::::::::1
                                                  111111111111 )" << '\n';
    sleep_for(1s);
    system("cls");

    draw();

}
