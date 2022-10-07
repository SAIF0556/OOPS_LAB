#include <bits/stdc++.h>
#include <string.h>
using namespace std;
template <typename T>
class Swap
{
public:
    void swap(T &a, T &b)
    {
        T temp = a;
        a = b;
        b = temp;
    }
};

int main()
{
    system("cls");

    cout << "What do you want to do?\n";
    int choice = 0;

    while (choice != 5)
    {
        cout << endl
             << "*********MENU**********\n";
        cout << "1.To swap integers\n";
        cout << "2.To swap floats\n";
        cout << "3.To swap characters\n";
        cout << "4.To swap strings\n";
        cout << "5.To exit\n";
        cout << "Enter your choice\n";
        cin >> choice;
        cout << endl;
        switch (choice)
        {
        case 1:
            cout << "Enter two integers" << endl;
            int a;
            int b;
            cin >> a >> b;
            Swap<int> swapInt;
            cout << "Integers before swap : " << a << " " << b << endl;
            swapInt.swap(a, b);
            cout << "Integers after swap : " << a << " " << b << endl;
            break;
        case 2:
            cout << "Enter two floating numbers\n";
            float c, d;
            cin >> c >> d;
            cout << "floats before swapping :" << c << " : " << d << endl;
            Swap<float> swapFloat;
            swapFloat.swap(c, d);
            cout << "floats after swapping :" << c << " : " << d << endl;
            break;
        case 3:
            cout << "Enter two characters to swap\n";
            char e, f;
            cin >> e >> f;
            cout << "Characters before swapping : " << e << " : " << f << endl;
            Swap<char> swapChar;
            swapChar.swap(e, f);
            cout << "Characters after swapping : " << e << " : " << f << endl;
            break;
        case 4:
        {
            cout << "Enter two string to swap\n";
            string str1;
            string str2;
            cin >> str1 >> str2;
            cout << "string before swapping : " << str1 << " : " << str2 << endl;
            Swap<string> swapString;
            swapString.swap(str1, str2);
            cout << "string after swapping : " << str1 << " : " << str2 << endl;
            break;
        }

        case 5:
            cout << "Exitting.....\n";
            exit(0);
        default:
            cout << "You enter wrong choice...try again!\n";
            break;
        }
    }
    return 0;
}