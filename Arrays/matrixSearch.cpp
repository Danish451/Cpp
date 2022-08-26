#include <iostream>
using namespace std; 
int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int x;
    cin >> x;
    //searching
    bool flag=false;
    int r=0, c=m-1;
    while (r<n and c>=0)
    {
        if(a[r][c]==x){
        flag++;
        break;
    }
        if(a[r][c]>x)
        c--;
        else
        r++;
    }
    if(flag)
    cout << "Element found";
    else
    cout << "Element not found";
    
    return 0;
}