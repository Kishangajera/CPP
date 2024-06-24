#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            e = mid - 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }

    return ans;
}

int lastOccurence(int arr[], int n, int target){
    int s = 0;
    int e = n-1;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == target){
            ans = mid;
            s = mid + 1;
        }
        else if(target > arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }

    return ans;
}

int main(){

    int even[9] = {2, 4, 6, 8, 10, 10, 10, 16, 18};

    cout << "First Occurence of 10 is at index: " << firstOccurence(even, 9, 10) << endl;
    cout << "Last Occurence of 10 is at index: " << lastOccurence(even, 9, 10) << endl;
}