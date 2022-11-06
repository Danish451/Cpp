#include<bits/stdc++.h>
using namespace std;

int pivotIndex(vector<int>& arr) {
        int s = 0, e = arr.size()-1;
        int mid = s + (e-s)/2;

        while(s < e)
        {
            if(arr[mid] >= arr[0])
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
    // 7 9 1 2 3    (rotated array of 1 2 3 7 9)
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
    cout << "Pivot index is " << pivotIndex(v);
}