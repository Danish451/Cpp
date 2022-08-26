#include <bits/stdc++.h> 

using namespace std;

vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
 vector<vector<int>> ans;
    //sort first so it becomes easy
   sort(arr.begin() , arr.end());
    
    //2ptr approach
   int left , right ;

   for(int i = 0 ; i<n ; i++)

   {

       left = i+1 ;

       right = n-1;
        
        //terminary condn
       while(left<right)

       {
//check for sum, here we fix arr[i], and then form 2 pair sum over remaining elements of array
           if(arr[left]+arr[right]+arr[i] == K)
              //we got it, push it back
           {

                ans.push_back({arr[i], arr[left], arr[right]});

               int x = arr[left] ;

               int y = arr[right] ;

//skipping the same returned elements of left and right if they are present in duplicate form

               while(left<right && arr[left]==x){

                   left++ ;

               }

                  while(left<right && arr[right]==y){

                   right-- ;

               }

           }    //if end
//if not match then in else cases move left/right pointer as per condition

           else if(arr[left]+arr[right]+arr[i] < K){

               left++;

           }

           else{

               right--;

           }

       }//while end
        //we need to skip duplicates of arr[i], ith element if present

     
        while(i+1<n && arr[i]==arr[i+1]){

           i++ ;

       }

   }

   return ans;

}
    

int main(){

    return 0;
}