#include<iostream>
#include<algorithm>

using namespace std;

int findTheClosestElementFromArray(int *array, int arraySize, int number) {
    
    sort(array,array+arraySize);
    int resultIndex = array[0];
    int difference = abs(array[0] - number);
    for(int index = 1;index < arraySize;index++)
    {
        if(abs(array[index] - number) < difference)
        {
            resultIndex = array[index];
            difference = abs(array[index]- number);
        }
    }
    return resultIndex;
}

int main() {
    int arraySize;
    cin>>arraySize;
    int array[arraySize];
    int number, i, result;
    
    for(i=0; i<arraySize; i++) {
        cin>>array[i];
    }
 
    cin>>number;
    result = findTheClosestElementFromArray(array, arraySize, number);
    cout<<result;
    
}