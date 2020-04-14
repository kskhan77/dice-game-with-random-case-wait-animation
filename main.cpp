#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <thread>
using namespace std;
#include <ctime>
#include <unistd.h> // for sleep()


void flush( )
{
    for (int i=0; i<40; i++)
    {
        std::this_thread::sleep_for(10000000ns);
        cout<< "\b*+" << flush;
        std::this_thread::sleep_for(10000000ns);
        cout<< "\b|" << flush;
        std::this_thread::sleep_for(10000000ns);
        cout<< "\b/" <<flush;
        std::this_thread::sleep_for(10000000ns);;
        cout<< "\b-" <<flush;
    }
}

int Result()
{
    srand((unsigned) time(0));
    int result = 1 + (rand() % 6);
    return result;
}

void DiceChange( )
{

    for (int i=0; i<1; i++)
    {
        std::this_thread::sleep_for(1000000ns);
        cout<< "\bWait.....  " << flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b1" << flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b3" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b4" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b6" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b2" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b1" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b5" <<flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b1" << flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b3" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b4" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b6" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b2" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b1" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b5" <<flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b1" << flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b3" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b4" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b6" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b2" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b1" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b5" <<flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b1" << flush;
        std::this_thread::sleep_for(100000000ns);
        cout<< "\b3" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b4" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b6" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b2" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\b1" <<flush;
        std::this_thread::sleep_for(100000000ns);;
        cout<< "\nYour dice number \t"<<".....  "<<flush;
    }
}

int main()
{
    srand((unsigned) time(0));
    cout<<"\n\n\n\n";
    flush();
    printf("\nYour dice has been rolled! You got: \n ");
    flush();
    cout<<endl;
    DiceChange( );
    cout<<Result();
    cout<<endl;
    flush();
    cout<<endl;
    switch (Result())
    {
    case 1:
        printf("Your prize is our original T-shirt!");
        break;
    case 2:
        printf("Your prize is our original Cap!");
        break;
    case 3:
        printf("Your prize is our original Necklace!");
        break;
    case 4:
        printf("Your prize is our original Keychain!");
        break;
    case 5:
        printf("Your prize is our original Cup set!");
        break;
    case 6:
        printf("Your prize is a set of original Keychains!");
        break;
    default:
        printf("Error");
        break;
    }
    cout<<endl;
    flush();

}




