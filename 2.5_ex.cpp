#include <iostream>
using namespace std;

int main()
{
    int Timetable[9][9];

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            Timetable[i][j] = (i + 1) * (j + 1);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout.width(4);
            cout << Timetable[i][j];
        }
        cout << endl;
    }
    return 0;
}
