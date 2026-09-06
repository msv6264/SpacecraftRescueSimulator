#include <iostream>
#include <string>
using namespace std;

bool viewOpns(){
    cout << "Hello, welcome to space rescue command line game 😊 " << endl;
    cout << "Press 1 - to view about game" << endl << "Press 2 to play the game" << endl << "Press 3 to exit" << endl << "Your choice: ";
    
    int option = 0;
    cin >> option;

    if (option < 1 || option > 3) {
        cout << "Invalid option !!" << endl;
        return true;
    } else if (option == 3){
        return false;
    } else {
        return true;
    }
}

int main(){
    while (viewOpns()){
        viewOpns();
    }
}