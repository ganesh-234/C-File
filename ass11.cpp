//Name; Ganesh Prasad Jaishi
// Ass 11
// Section: 05
#include <iostream>
#include <time.h>
#include<cstdlib>
using namespace std;

const int ROWS = 8;
const int COLS = 8;
bool game_over = false;
char field[ROWS][COLS];
char secret[ROWS][COLS];
int win_count = 0;

void rules();
void create_field(char arr[][COLS], int rows, int cols);
void print_field(char arr[][COLS], int rows, int cols);
void print_secret(char arr[][COLS], int rows, int cols);
void choose();
char reveal(int row, int col);
void create_gopher();

int main()
{
srand(time(NULL));
rules();
create_field(field, ROWS, COLS);
create_gopher();


do
{
    print_field(field, ROWS, COLS);
    choose();
     win_count += 1;
}

while (game_over != true && win_count < 71);

if (game_over == true)
{
cout << "You chose a gopher! Game over!" << endl;
}

if (win_count > 71)
{
cout << "Congrats, you win!" << endl;
}

cin.ignore();
cout << "Press enter to exit." << endl;
cin.ignore();

return 0;
}

void rules()
{
cout << "Welcome to gopher hunt!.. This is the simple game design to pass the leisure time. In order to play please enter rows and colums. ";
}

void create_field(char arr[][COLS], int rows, int cols)
{
cout << "Generating field...\n\n";
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
arr[i][j] = '+';
}
}
}

void print_field(char arr[][COLS], int rows, int cols)
{
cout << " ";
for (int a = 1; a <= cols; a++)
{
cout << a << " ";
}
cout << endl;


for (int i = 0; i < rows; i++)
{
    cout << i + 1 << " ";
    for (int j = 0; j < cols; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
cout << endl;
}

void print_secret(char arr[][COLS], int rows, int cols)
{
cout << " ";
for (int a = 1; a <= cols; a++)
{
cout << a << " ";
}
cout << endl;


for (int i = 0; i < rows; i++)
{
    cout << i + 1 << " ";
    for (int j = 0; j < cols; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
cout << endl;
}

void choose()
{
    int horizontal = 0, vertical = 0;
    cout << endl;
     cout << "Please enter row and column numbers separated by space: ";
    cin >> horizontal;
    cin >> vertical;

    horizontal -= 1;
    vertical -= 1;

    if (horizontal > 7 || horizontal < 0 || vertical > 7 || vertical < 0)
    {
        cout << "Illegal move. Try again." << endl;
    }
    else if (secret[horizontal][vertical] == 'G')
    {
        game_over = true;
        field[horizontal][vertical] = 'G';
    }
    else
    {
        field[horizontal][vertical] = reveal(horizontal, vertical);
    }
}

char reveal(int horizontal, int vertical)

{
    int revealed_number = 0;
     if (game_over)
    {
        cout << "The game is already over. Please start a new game." << endl;
        return 0;
    }

    if (horizontal + 1 < ROWS && secret[horizontal + 1][vertical] == 'G')
    {
        revealed_number += 1;
    }

    if (horizontal - 1 >= 0 && secret[horizontal - 1][vertical] == 'G')
    {
        revealed_number += 1;
    }

    if (vertical + 1 < COLS && secret[horizontal][vertical + 1] == 'G')
    {
        revealed_number += 1;
    }

    if (vertical - 1 >= 0 && secret[horizontal][vertical - 1] == 'G')
    {
        revealed_number += 1;
    }

    if (revealed_number == 0)
    {
        return '0';
    }

    return char(revealed_number + '0');
}



                                                                                                                       



void create_gopher()
{
int gophers_placed = 0;

while (gophers_placed < 10)
{
    int row = rand() % ROWS;
    int col = rand() % COLS;
    
    if (secret[row][col] != 'G')
    {
        secret[row][col] = 'G';
        gophers_placed++;
    }
}
}
