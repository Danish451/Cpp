#include <iostream>
using namespace std ;
int array_sum(int *arr,int n)
{
    if(n == 0)
        return 0;

    if(n==1)
    return arr[0];

    int remainingPart = array_sum(arr+1, n-1);
    int sum = arr[0] + remainingPart;
    return sum;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int sum = array_sum(arr,n); // n-1
    cout<<"The sum is: " << sum << endl;
}
