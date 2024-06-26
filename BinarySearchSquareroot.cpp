#include<iostream>
using namespace std;

int binarySearchSquareInteger(int n){

    int s = 0;
    int e = n;
    int mid = (s+e)/2;
    int ans = -1;

    while(s<=e){

        int sq = mid*mid;

        if(sq == n){
            return mid;
        }
        if(sq < n){
            ans = mid;
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = (s+e)/2;
    }
    return ans;
}

double morePricision(int n, int pricision, int teamsol){
    
    double factor = 1;
    double ans = teamsol;

    for(int i=0; i<pricision; i++){
        factor = factor/10;
        for(double j=ans; j*j<n; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int n;
    cout << "Enter the number: ";
    cin >> n;

    int teamsol = binarySearchSquareInteger(n);
    cout << "The square root of " << n << " is: " << teamsol << endl;
    cout << "The square root of " << n << " is: " << morePricision(n, 3, teamsol) << endl;

}
