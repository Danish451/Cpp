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

    cout << "First occurance of " << key << " is at Index " << firstOcc(arr, n, key) << endl;
    cout << "Last occurance of " << key << " is at Index " << lastOcc(arr, n, key);
}