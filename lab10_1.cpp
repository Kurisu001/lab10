#include <iostream>
using namespace std;

int main()
{
    int count[5] = {},roud=1; // Declare array count for counting A,B,C,D,F and initialize all element = 0
    cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
    char grade;
    do
    {
        cout << "Student ["<< roud <<"]: ";
        cin >> grade;

        if (grade == '0')
        {
            break;
        } // The loop must be terminated when grade = '0'
        if (grade == 'A')
        { // if grade is A
            count[0]++;
        }
        else if (grade == 'B')
        {
            count[1]++;
        }
        else if (grade == 'C')
        {
            count[2]++;
        }
        else if (grade == 'D')
        {
            count[3]++;
        }
        else if (grade == 'F')
        {
            count[4]++;
        }
        else
        {
            cout << "Wrong input. Please input again.\n";
            continue;
        }
        roud++;
    } while (true);

    cout << "In total "<< (roud-1) << "students.\n";
    cout << "A = " << count[0] << ", ";
    cout << "B = " << count[1] << ", ";
    cout << "C = " << count[2] << ", ";
    cout << "D = " << count[3] << ", ";
    cout << "F = " << count[4];

    return 0;
}