#include<iostream>
using namespace std;

void bubblesort(int arr[], int n){
    
    for(int i=1; i<n; i++){
        for(int j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return;
}

int main() {
    int arr[5] = {2, 4, 1, 3, 5};
    int n = 5;
    bubblesort(arr, n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array sorted successfully!" << endl;
    return 0;
}