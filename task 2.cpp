#include<iostream>
using namespace std;

int main()
{
    int choice, count, b;
    cout << "PRIME NUMBER CHECKER";
    cout << "\n\nChoose one option:";
    cout << " 1. Range";
    cout << " 2. Specific Number";
    cout << "\nYour option number = ";
    int opt;
    cin >> opt;
    if (opt == 1)
    {
        cout << "Select Range" << endl;
        cout << "Start of Range = ";
        int start_R;
        cin >> start_R;
        cout << "End of Range = ";
        int end_R;
        cin >> end_R;

        cout << "The Prime Numbe rpresent in the given Range Are = ";

        for (int a = start_R; a <= end_R; a++)
        {
            count = 0;
            for (b = 1; b <= a; b++)
            {
                if (a % b == 0)
                {
                    count++;
                }
            }
            if (count == 2)
            {
                cout << a << " ";
            }
        }
    }
    if (opt == 2)
    {
        cout << "Specific Number";
        cout << "\nEnter your Number = ";
        int num;
        cin >> num;
        count = 0;
        for (b = 1; b <= num; b++)
        {
            if (num % b == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            cout << num << " is a Prime Number";
        }
        else
        {
            cout << num << " is not a Prime Number";
        }
    }

    return 0;
}
