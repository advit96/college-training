#include <iostream>
using namespace std;

int binary(int arr[], int l, int r, int x)
{
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binary(arr, l, mid - 1, x);
        return binary(arr, mid + 1, r, x);
    }
    return -1;
} 

int main(){
    int a;
    cout<<"Enter the number of integers in array:- ";cin>>a;
    int arr[a];
    cout<<"Enter "<<a<<" integers:- ";
    for(int i=0; i<a; ++i){
        cin>>arr[i];
    }
    int x;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Enter the element you want to search for:- ";cin>>x;
    int result = binary(arr, 0, n-1, x);
    if(result==-1){
        cout<<"Element is not present in array";
    }
    else{
        cout<<"Element is present at index "<<result;
    }
    return 0;
}
