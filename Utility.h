#pragma once
#include<iostream>
#include<Windows.h>
#include"AllCards.h"
#include"Club.h"
#include"Diamond.h"
#include"Spades.h"
#include"Heart.h"
#include"Allvector.h"
#include"Utilities.h"
#include<deque>
#include<iostream>

void SetClr(int clr)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), clr);
}
void HEART_A(string rank, int clr)
{
    int rows = 7;
    int column = 10;
    int val = 3;
    SetClr(clr);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << char(-37);
            }
            else if (i == rows / 2 && j == (column / 2) - 1)
                cout << rank;
            else if (i == 1 && j == 2)
            {

                cout << char(val);

            }
            else if (i == rows - 2 && j == column - 3)
            {

                cout << char(val);

            }
            else
            {
                if (j == 0 || j == column - 1)
                {

                    cout << char(-37);

                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void DIAMOND(string rank, int clr)
{
    int rows = 7;
    int column = 10;
    int val = 4;
    SetClr(clr);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << char(-37);
            }
            else if (i == rows / 2 && j == (column / 2) - 1)
                cout << rank;
            else if (i == 1 && j == 2)
            {

                cout << char(val);

            }
            else if (i == rows - 2 && j == column - 3)
            {

                cout << char(val);

            }
            else
            {
                if (j == 0 || j == column - 1)
                {

                    cout << char(-37);

                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void PALM(string rank, int clr)
{
    int rows = 7;
    int column = 10;
    int val = 5;
    SetClr(clr);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << char(-37);
            }
            else if (i == rows / 2 && j == (column / 2) - 1)
                cout << rank;
            else if (i == 1 && j == 2)
            {

                cout << char(val);

            }
            else if (i == rows - 2 && j == column - 3)
            {

                cout << char(val);

            }
            else
            {
                if (j == 0 || j == column - 1)
                {

                    cout << char(-37);

                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void TREE(string rank, int clr)
{
    int rows = 7;
    int column = 10;
    int val = 6;
    SetClr(clr);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == 0 || i == rows - 1)
            {
                cout << char(-37);
            }
            else if (i == rows / 2 && j == (column / 2) - 1)
                cout << rank;
            else if (i == 1 && j == 2)
            {

                cout << char(val);

            }
            else if (i == rows - 2 && j == column - 3)
            {

                cout << char(val);

            }
            else
            {
                if (j == 0 || j == column - 1)
                {

                    cout << char(-37);

                }
                else
                    cout << " ";
            }
        }
        cout << endl;
    }
}
void getRowColbyLeftClick1(int& rpos, int& cpos)
{
    HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
    DWORD Events;
    INPUT_RECORD InputRecord;
    SetConsoleMode(hInput, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
    do
    {
        ReadConsoleInput(hInput, &InputRecord, 1, &Events);
        if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
        {
            cpos = InputRecord.Event.MouseEvent.dwMousePosition.X;
            rpos = InputRecord.Event.MouseEvent.dwMousePosition.Y;
            break;
        }
    } while (true);
}
void gotoRowCol(int rpos, int cpos)
{
    COORD scrn;
    HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
    scrn.X = cpos;
    scrn.Y = rpos;
    SetConsoleCursorPosition(hOuput, scrn);
}