#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int gotoxy(int x, int y);

int main()
{
    int left=5, top=5 , width, height;
    char c;

    cout << "Enter the width rectangle: ";
    cin >> width;
    cout << "Enter the height of the rectangle: ";
    cin >> height;

    // Draw top border
    gotoxy(left, top);
    cout << (char)218;
    for(int i=0; i<width; i++)
        cout << (char)196;


    // Draw bottom border
    gotoxy(left, top+height);
    cout << (char)217;
    for(int i=0; i<width; i++)
        cout << (char)196;


    // Draw left border
    for(int i=top; i<top+height; i++)
    {
        gotoxy(left, i);
        cout << (char)179;
    }

    // Draw right border
    for(int i=top; i<top+height; i++)
    {
        gotoxy(left+width, i);
        cout << (char)179;
    }

    // Draw corners
    gotoxy(left, top);
    cout << (char)218;

    gotoxy(left+width, top);
    cout << (char)191;

    gotoxy(left, top+height);
    cout << (char)192;

    gotoxy(left+width, top+height);
    cout << (char)217;

    getch();
    return 0;
}

int gotoxy(int x, int y)
{
    COORD c;
    c.X = x;
    c.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
    return 0;
}
