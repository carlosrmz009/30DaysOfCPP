#include <iostream>
#include <string>
#include <cstdlib>
#include <chrono>
#include <thread>
#include <vector> // container

using namespace ::std;
using namespace std::this_thread;
using namespace std::chrono;

string titlescreen = R"(

__________     ___.  ___.   .__             _________              __   
\______   \__ _\_ |__\_ |__ |  |   ____    /   _____/ ____________/  |_ 
 |    |  _/  |  \ __ \| __ \|  | _/ __ \   \_____  \ /  _ \_  __ \   __\
 |    |   \  |  / \_\ \ \_\ \  |_\  ___/   /        (  <_> )  | \/|  |  
 |______  /____/|___  /___  /____/\___  > /_______  /\____/|__|   |__|  
        \/          \/    \/          \/          \/     
 BY CARLOS RAMIREZ  
              
)";

string bye = R"(



 _                  _ 
| |__  _   _  ___  | |
| '_ \| | | |/ _ \ | |
| |_) | |_| |  __/ |_|
|_.__/ \__, |\___| (_)
       |___/          

  
              
)";

string sorting1 = R"(







            ########################################
            #                  _   _               #
            #   ___  ___  _ __| |_(_)_ __   __ _   #
            #  / __|/ _ \| '__| __| | '_ \ / _` |  #
            #  \__ \ (_) | |  | |_| | | | | (_| |  #
            #  |___/\___/|_|   \__|_|_| |_|\__, |  #
            #                              |___/   #
            #                                      #
            ########################################  






              
)";

string sorting2 = R"(





        ################################################
        #                                              #
        #   ########################################   #
        #   #                  _   _               #   #
        #   #   ___  ___  _ __| |_(_)_ __   __ _   #   #
        #   #  / __|/ _ \| '__| __| | '_ \ / _` |  #   #
        #   #  \__ \ (_) | |  | |_| | | | | (_| |  #   #
        #   #  |___/\___/|_|   \__|_|_| |_|\__, |  #   #
        #   #                              |___/   #   #
        #   #                                      #   #
        #   ########################################   #
        #                                              #
        ################################################  



              
)";

string sorting3 = R"(



    ########################################################
    #                                                      #
    #   ################################################   #
    #   #                                              #   #
    #   #   ########################################   #   #
    #   #   #                  _   _               #   #   #
    #   #   #   ___  ___  _ __| |_(_)_ __   __ _   #   #   #
    #   #   #  / __|/ _ \| '__| __| | '_ \ / _` |  #   #   #
    #   #   #  \__ \ (_) | |  | |_| | | | | (_| |  #   #   #
    #   #   #  |___/\___/|_|   \__|_|_| |_|\__, |  #   #   #
    #   #   #                              |___/   #   #   #
    #   #   #                                      #   #   #
    #   #   ########################################   #   #
    #   #                                              #   #
    #   ################################################   #
    #                                                      #
    ########################################################  

              
)";

string sorting4 = R"(

################################################################
#                                                              #
#   ########################################################   #
#   #                                                      #   #
#   #   ################################################   #   #
#   #   #                                              #   #   #
#   #   #   ########################################   #   #   #
#   #   #   #                  _   _               #   #   #   #
#   #   #   #   ___  ___  _ __| |_(_)_ __   __ _   #   #   #   #
#   #   #   #  / __|/ _ \| '__| __| | '_ \ / _` |  #   #   #   #
#   #   #   #  \__ \ (_) | |  | |_| | | | | (_| |  #   #   #   #
#   #   #   #  |___/\___/|_|   \__|_|_| |_|\__, |  #   #   #   #
#   #   #   #                              |___/   #   #   #   #
#   #   #   #                                      #   #   #   #
#   #   #   ########################################   #   #   #
#   #   #                                              #   #   #
#   #   ################################################   #   #
#   #                                                      #   #
#   ########################################################   #
#                                                              #
################################################################  
              
)";


vector<float> numList;
string input;
int i = 0;

void animation() {
    cout << sorting1;
    sleep_for(250ms);
    system("cls");
    cout << sorting2;
    sleep_for(250ms);
    system("cls");
    cout << sorting3;
    sleep_for(250ms);
    system("cls");
    cout << sorting4;
    sleep_for(250ms);
    system("cls");
    cout << sorting1;
    sleep_for(250ms);
    system("cls");
    cout << sorting2;
    sleep_for(250ms);
    system("cls");
    cout << sorting3;
    sleep_for(250ms);
    system("cls");
    cout << sorting4;
    sleep_for(250ms);
    system("cls");
    cout << sorting1;
    sleep_for(250ms);
    system("cls");
    cout << sorting2;
    sleep_for(250ms);
    system("cls");
    cout << sorting3;
    sleep_for(250ms);
    system("cls");
    cout << sorting4;
    sleep_for(250ms);
    system("cls");
    cout << sorting1;
    sleep_for(250ms);
    system("cls");
    cout << sorting2;
    sleep_for(250ms);
    system("cls");
    cout << sorting3;
    sleep_for(250ms);
    system("cls");
    cout << sorting4;
    sleep_for(250ms);
    system("cls");
    cout << sorting1;
    sleep_for(250ms);
    system("cls");
    cout << sorting2;
    sleep_for(250ms);
    system("cls");
    cout << sorting3;
    sleep_for(250ms);
    system("cls");
    cout << sorting4;
    sleep_for(250ms);
    system("cls");
}

void bubblesort() {
    int n = numList.size();
    for(i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(numList[j] > numList[j + 1]) {
                float temp = numList[j];
                numList[j] = numList[j + 1];
                numList[j + 1] = temp;
            }
        }
    }
}

int main()
{
    system("cls");
    cout << titlescreen;
    sleep_for(3500ms);
    system("cls");
    cout << "Welcome to Bubble Sort! Please, input the numbers you would like to sort." << endl;
    cout << "You can add as many numbers as you want. Add one by one, pressing ENTER after each." << endl;
    cout << "Type" << R"( "start" )";
    cout << "and press ENTER when all numbers have been added." << endl;
    cout << endl;
    cout << "Add a number: ";
    while(cin >> input && input != "start") {
        numList.push_back(stof(input));
        cout << "Add a number: ";
    }
    system("cls");
    cout << "You entered " << numList.size() << " numbers." << endl;
    cout << "The numbers are: ";
    for(i = 0; i < numList.size() - 1; i++) {
        cout << numList[i] << ", ";
    }
    cout << "and " << numList[i] << ".";
    sleep_for(4s);
    system("cls");
    animation();
    bubblesort();
    system("cls");
    cout << "The numbers in ascending order are: ";
    for(i = 0; i < numList.size() - 1; i++) {
        cout << numList[i] << ", ";
    }
    cout << "and " << numList[i] << ".";
    sleep_for(5500ms);
    system("cls");
    cout << bye;
    sleep_for(6s); // exit timeout
    
}
