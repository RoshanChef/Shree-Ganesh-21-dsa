#include <iostream>
using namespace std;

void insertion(int ar[], int len)
{

    for (int i = 1; i < len; i++)
    {
        int j = i;
        while (j > 0)
        {
            if (ar[j] < ar[j - 1])
                swap(ar[j], ar[j - 1]);
            else
                break;
            j--;
        }
    }
}

int main()
{
    int ar[] = {2, 7, 8, 4, 11, 5};
    int len = sizeof(ar) / sizeof(int);

    insertion(ar, len);

    cout << "Printing element " << endl;
    for (int i = 0; i < len; i++)
        cout << ar[i] << " ";

    return 0;
}