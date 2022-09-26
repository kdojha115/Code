
#include<iostream>
#include<unordered_set>

using namespace std;

void printDistinct(int arr[],int n)
{
	
	unordered_set<int> s;

	for (int i=0; i<n; i++)
	{
		
		if (!s.count(arr[i])) 
		{
			s.insert(arr[i]);
			//cout << arr[i] << " ";
		}
	}
    int m = s.size();
    cout<< s[m-3] <<endl;
}


int main ()
{
	int arr[] = {10, 5, 3, 4, 3, 5, 6};
	int n=7;
	printDistinct(arr,n);
	return 0;
}
