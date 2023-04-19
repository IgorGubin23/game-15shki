// 15shki.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <conio.h>
#include <Windows.h>

using namespace std;

const int width = 4;
const int height = 4;
int x, y;
char symbol;
enum eDirection { STOP, LEFT, RIGHT, UP, DOWN };
eDirection dir;

//timer setup
struct time {

    int hr, min, sec;
};
//

void Setup()
{
	dir = STOP;
	x = 1;
	y = 1;
	symbol = rand() % width;
	symbol = rand() % height;

}

void shuffle(int* a, int sz)
{

    while (sz > 1) {
        int r = rand() % sz--;
        int t = a[r];
        a[r] = a[sz];
        a[sz] = t;
    }

}

void Input()
{
    system("cls");
    
}

    void Initialize(int array[][4]) {
        int* a = &array[0][0];
        for (int i = 0; i < 16; i++)
            a[i] = i + 1;
        shuffle(a, 16);
    }
void Logic()
{
    switch (dir)
        case LEFT
        x--;
        break;
        case RIGHT
        x++;
        break;
        case UP
        y--;
        break;
        case DOWN
        y++;
        break;

}
int main()
{
    
    time a;
    a.hr = 0;
    a.min = 0;
    a.sec = 0;

    for (int i = 0; i < 24; i++)
    {
        if (a.hr == 23)
        {
            a.hr = 0;
        }

        for (int j = 0; j < 60; j++)
        {
            if (a.min == 59)
            {
                a.min = 0;

            for (int k = 0; k < 60; k++)
            {
            }
                if (a.sec == 59)
                {
                    a.sec = 0;
                }

                cout << a.hr << " : " << a.min << " : " << a.sec << endl;
                a.sec++;
                Sleep(1000);
                system("Cls");
            }
            a.min++;

        }

        a.hr++;
    }

}
		
		
	

