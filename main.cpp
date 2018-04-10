#include <iostream>
#include <ctime>   
#include <cstdlib>  

using namespace std;

int main()
{
    int number;
    int random;
    
    srand(time(0));  
    random = (rand() % 5) + 1;
    
    cout << "I'm thinking of a random number between 1-5, enter your number: ";
    cin >> number;
    
    if (number <= 5) {
        if (random == number) {
        cout << "Congratulations, you guessed correctly!..." << endl;
        }
        else {
        cout << "Better luck next time the number was " << random << "..." << endl;
        }
    }
    else {
        cout << "Please put in a valid input... " << endl;
    }
    
    return 0;
}
