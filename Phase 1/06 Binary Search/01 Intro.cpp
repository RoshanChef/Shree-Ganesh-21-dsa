#include <iostream>

using namespace std;

int Binary_search(int ar[], int len, int key)
{
    int st = 0, end = len - 1;
    while (st <= end)
    {
        int mid = (st - end) / 2 + end;
        // equal
        if (ar[mid] == key)
            return mid;

        else if (ar[mid] > key)
            end = mid - 1;

        else
            st = mid + 1;
    }

    return -1;
}

int binary_recursive(int arr[], int key, int st, int end)
{
    if (st > end)
        return -1;

    int mid = (st - end) / 2 + end;
    // ans
    if (arr[mid] == key)
        return mid;

    if (arr[mid] > key)
        end = mid - 1;
        
    else if (arr[mid] < key)
        st = mid + 1;

    return binary_recursive(arr, key, st, end);
}

int main()
{
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 12, 14, 17};

    // even
    int inx = Binary_search(even, 6, 12); // 4
    cout << "index is " << inx << endl;

    // odd
    inx = Binary_search(odd, 5, 8); // 1
    cout << "index is " << inx << endl;

    cout << endl;

    cout << "Recursive option" << endl;
    // even
    inx = binary_recursive(even, 12, 0, 6); // 4
    cout << "index is " << inx << endl;

    // odd
    inx = binary_recursive(odd, 8, 0, 5); // 1
    cout << "index is " << inx << endl;

    return 0;
}