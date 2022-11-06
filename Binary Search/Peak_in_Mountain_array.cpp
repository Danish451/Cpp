#include<bits/stdc++.h>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        int mid = s + (e-s)/2;

        while(s < e)
        {
            if(arr[mid] < arr[mid+1])
            {
                s = mid + 1;
            }
            else
            {
                e = mid;
            }
            mid = s + (e-s)/2;
        }
        return s;
    }
int main()
{
    vector<int> v;
    int n,x;
    cout << "Enter size of array" << endl;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "Peak index in mountain Array is " << peakIndexInMountainArray(v);
}