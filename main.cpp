#include <iostream>
#include <string>
#include <cstdlib> // for exit(0) to work
#include <windows.h>

using namespace std;

int viewOpns();
void processOpns(int opnNum);
void showInstns();

void showInstns()
{
    cout << "\nHello! The instructions and information about the game are below.\n";
    cout << "Please enjoy playing! :)\n\n";

    cout << "You are on a mission to rescue a spacecraft 🛰️ using a rocket 🚀.\n";
    cout << "You are shown the location where the spacecraft is, \n The symbol of space craft is 🛰️\n";
    cout << "There will be obstacles, such as asteroids, in your path. \n The obstracles are represented using 🪨\n";
    cout << "You will be out of the game if you run out of fuel or if your rocket's health reaches zero.\n";
    cout << "Whenever you hit an asteroid, you will lose energy, but you can continue after hitting it to go through that path\n";
    cout << "Some batteries are also given \n Batteries are represented using 🔋\n ";

    cout << "Now enjoy the game. Rescue the spacecraft!\n\n";

    viewOpns();
}

int viewOpns()
{
    int option = 0;

    while (true)
    {
        cout << "\n===== SPACE RESCUE =====\n";
        cout << "1. About the game\n";
        cout << "2. Play the game\n";
        cout << "3. Exit\n";
        cout << "Your choice: ";

        cin >> option;

        if (option >= 1 && option <= 3)
        {
            return option;
        }

        cout << "Invalid option!! Please try again.\n";
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    SetConsoleCP(CP_UTF8);

    int selectedOpn = viewOpns();

    if (selectedOpn == 1)
    {
        showInstns();
    }
    else if (selectedOpn == 2)
    {
        cout << "Loading game .... 🚀";
        exit(0);
    }
    else
    {
        exit(0);
    }

    return 0;
}