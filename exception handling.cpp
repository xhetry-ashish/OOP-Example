#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int a,b;
	unsigned e;
    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    try
    {
        if (b != 0)
        {
            float div = (float)a/b;
            if (div < 0)
                throw e;
            cout << "a/b = " << div;
        }
        else
            throw b;
            
    }
    catch (int b)
    {
        cout << "Exception: Division by zero";
    }
    catch (unsigned int   e)
    {
        cout << "Exception: Division is less than 1";
    }
    catch(...)
    {
        cout << "Exception: Unknown";
    }
    getch();
    return 0;
}
