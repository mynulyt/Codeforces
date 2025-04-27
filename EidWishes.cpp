#include <iostream>
#include <windows.h>
#include <thread>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void typeText(const string& text, int delay = 50) {
    for (char c : text) {
        cout << c << flush;
        Sleep(delay);
        if (rand() % 5 == 0) {
            Sleep(delay * 2);
        }
    }
}

void printStarBorder(int length) {
    cout << "        ";
    for (int i = 0; i < length; i++) {
        cout << "*";
    }
    cout << endl;
}

void printCenteredLine(const string& text, int width) {
    int spaces = (width - text.length()) / 2;
    cout << "        *";
    for (int i = 0; i < spaces; i++) cout << " ";
    typeText(text);
    for (int i = 0; i < (width - text.length() - spaces); i++) cout << " ";
    cout << "*" << endl;
}

void clearScreenAnimated() {
    for (int i = 0; i < 30; i++) {
        cout << endl;
        Sleep(30);
    }
    system("cls");
}

void printMessage() {
    srand(time(0));
    const int BOX_WIDTH = 46;

    string message = "Eid Mubarak 2025";
    string fromMessage = "From: Mynul Alam";
    string wishes = "May Allah bless you with happiness, peace, and prosperity!";
    string colors[] = {"0A", "0E", "0C", "09", "0D"};


    for (int i = 1; i <= 5; i++) {
        system("cls");
        cout << "\n\n\n";
        cout << "        ";
        for (int j = 0; j < i; j++) cout << " ";
        cout << "()" << endl;
        Sleep(200);
    }

    clearScreenAnimated();


    string colorCmd = "color " + colors[rand() % 5];
    system(colorCmd.c_str());

    cout << "\n\n\n";
    printStarBorder(BOX_WIDTH);
    cout << "        *                                            *" << endl;
    printCenteredLine(message, BOX_WIDTH - 2);
    cout << "        *                                            *" << endl;
    printStarBorder(BOX_WIDTH);


    for (int i = 0; i < 3; i++) {
        Sleep(300);
        colorCmd = "color " + colors[rand() % 5];
        system(colorCmd.c_str());
        Sleep(300);
    }


    cout << "\n\n        ";
    typeText(wishes, 40);


    Sleep(1000);
    clearScreenAnimated();
    system("color 0A");

    cout << "\n\n\n";
    printStarBorder(BOX_WIDTH);
    cout << "        *                                            *" << endl;
    printCenteredLine(fromMessage, BOX_WIDTH - 2);
    cout << "        *                                            *" << endl;
    printStarBorder(BOX_WIDTH);


    Sleep(1000);
    for (int i = 0; i < 5; i++) {
        system("cls");
        colorCmd = "color " + colors[rand() % 5];
        system(colorCmd.c_str());
        cout << "\n\n\n";
        printStarBorder(BOX_WIDTH);
        cout << "        *                                            *" << endl;
        cout << "        *           E I D   M U B A R A K !          *" << endl;
        cout << "        *                                            *" << endl;
        printStarBorder(BOX_WIDTH);
        Sleep(300);
    }
}

int main() {
    printMessage();
    cout << "\n\nPress any key to exit...";
    cin.get();
    return 0;
}
