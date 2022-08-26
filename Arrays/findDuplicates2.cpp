
using namespace std;

// More optimise approach

int DuplicateNumber(int arr[], int size){
   
    int sum=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
    }

    // Array size is [0, size-2]
    int sumnatural=((size-1)*(size-2))/2;       // sum of n natural no = ((n)*(n-1))/2
    int duplicate=sum-sumnatural;
    return duplicate;
}

int main() {
	int size;
	cin >> size;
	int *input = new int[1 + size];
	
	for(int i = 0; i < size; i++)
		cin >> input[i];
	
	cout << DuplicateNumber(input, size);	
	
	delete [] input;

	return 0;
}