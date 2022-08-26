#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int s;
    cout << "Enter s" << endl;
    cin >> s;
    int i=0, j=0, st = -1 ,en = -1, sum=0;         //st-start      en-end
    
    while (j<n && sum+a[j] <= s)
    {
        sum += a[j];
        j++;
    }

    if(sum==s)
    cout << i+1 <<" "<< j <<endl;    //if found then start index = i+1 and end = j

    while (j<n)
    {
        sum += a[j];
        while(sum>s){
            sum -= a[i];
            i++;
        }
        if(sum==s)
        {
            st = i+1;
            en = j+1;
            break;
        }
        j++;
    }
    cout << st << " "<< en;
    
}