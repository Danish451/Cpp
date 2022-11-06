// Sorted Array
#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int s = 0, e = n - 1, mid = s + (e - s) / 2, ans = -1;
    while (s <= e)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > key)
            e = mid - 1;
        else
            s = mid + 1;

        mid = s + (e - s) / 2;
    }
    return ans;
}
// 1 3 3 3 3 5 6
int main()
{
    int n, key;
    cout << "Enter size of array" << endl;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter key element" << endl;
    cin >> key;

    int a1 = firstOcc(arr, n, key);
    int a2 = lastOcc(arr, n, key);

    cout << "Total No. of Occurance is " << (a2 - a1) + 1 << endl;
}