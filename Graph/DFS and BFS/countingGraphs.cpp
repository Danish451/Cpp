#include<bits/stdc++.h>
using namespace std;
int countingGraphs(int N)
{
    // Write your code here.
    int e = N*(N-1)/2;
    return pow(2, e);
}
int main()
{
    int N;
    cin >> N;
    
    //Self edges and multi-edges are ignored
    cout << "Total Number of Undirected Graphs = " << countingGraphs(N);

}