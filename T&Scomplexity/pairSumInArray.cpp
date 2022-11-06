#include<iostream>
using namespace std;

 void merge(int *array, int l, int m, int r) {
   int i, j, k, nl, nr;
   //size of left and right sub-arrays
   nl = m-l+1; nr = r-m;
 int larr[nl], rarr[nr];
   //fill left and right sub-arrays
   for(i = 0; i<nl; i++)
      larr[i] = array[l+i];
   for(j = 0; j<nr; j++)
      rarr[j] = array[m+1+j];
   i = 0; j = 0; k = l;
   //marge temp arrays to real array
   while(i < nl && j<nr) {
      if(larr[i] <= rarr[j]) {
         array[k] = larr[i];
         i++;
      }else{
         array[k] = rarr[j];
         j++;
      }
      k++;
   }
   while(i<nl) {       //extra element in left array
      array[k] = larr[i];
      i++; k++;
   }
   while(j<nr) {     //extra element in right array
      array[k] = rarr[j];
      j++; k++;
   }
}
void mergeSort(int *array, int l, int r) {
   int m;
   if(l < r) {
      int m = l+(r-l)/2;
      // Sort first and second arrays
      mergeSort(array, l, m);
      mergeSort(array, m+1, r);
      merge(array, l, m, r);
   }
}

int pairSum(int input[], int n, int num) {
   mergeSort(input,0,n-1);
    int i=0,j=n-1,counti=1,countj=1,elei,elej;
    int pair=0;
    while(i<j)
    {
        if(input[i]+input[j]==num)
        {
            while(input[i]==input[i+1])
            {
                counti++;
                i++;
            }
            if(input[i]==input[j]){
                int a=(counti-1)*(counti)/2;
                for(int p=0;p<a;p++){
                    pair++;
                }
                i++;
                j--;
                counti=1;
                countj=1;
            }
            
            else {
            while((input[j]==input[j-1]))
            {
                countj++;
                j--;
            }
        for(int p=0;p<counti*countj;p++)
            pair++;
            i++;
            j--;
            counti=1,countj=1;
        }
        }
        else if(input[i]+input[j]>num)
        {
            j--;
        }
        else
            i++;
    }
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}