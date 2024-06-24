#include <iostream>
using namespace std;

int BinarySearch(int arr[], int size, int target){
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;

    while (start <= end)
    {
        if (arr[mid] == target )
        {
            return mid;
        }
        // if targer is bigger than the middle element than we will search in the right half
        if (target > arr[mid])
        {
            start = mid + 1;
        }
        // if targer is smaller than the middle element than we will search in the left half
        else 
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;   
    }
    
    return -1;

}
int main(){

    int even[6] = {2, 4, 6, 8, 10, 12};
    int odd[5] = {1, 3, 5, 7, 9};

    int indexeven = BinarySearch(even, 6, 11);
    
    cout << "Element found at index: " << indexeven << endl;

    int indexodd = BinarySearch(odd, 5, 3);

    cout << "Element found at index: " << indexodd << endl;
}