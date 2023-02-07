#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                if (j<=(n/2)+1 || j == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else if (i > 1 && i < n / 2 + 1)
            {
                if (j == n / 2 + 1 || j == n)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else if (i == n / 2 + 1)
            {
                cout << "* ";
            }
            else if (i > n / 2 + 1 && i < n)
            {
                if (j == 1 || j == n / 2 + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
            else
            {
                if (j == 1 || j >= n / 2 + 1)
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }

        cout << endl;
    }
}
