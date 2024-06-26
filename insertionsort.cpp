#include<iostream>
using namespace std;

void insertionsort(int arr[], int n){

    for(int i=1; i<n; i++){

        int team = arr[i];
        int j=i-1;

        for(; j>=0; j--){

            if(arr[j] > team){
                // shift the element
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        // insert the team at the correct position
        arr[j+1] = team;
    }
    return;
}

int main() {

    int arr[5] = {2, 4, 1, 3, 5};
    int n = 5;

    insertionsort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array sorted successfully!" << endl;
    return 0;
}