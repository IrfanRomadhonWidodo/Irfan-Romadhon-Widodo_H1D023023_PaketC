#include<iostream>
using namespace std;

void bubble_sort(int arr[], int size){
    int hold = 0;
    size-=1;
    
    for(int k = 0;k < size;k++){
        for(int i = 0;i < size-k;i++)
        if(arr[i]>arr[i+1]) {
            hold=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=hold;
        }
    }
}
int main() {
    int a;
    cout<<"Masukan banyak nominal uang yang akan diurutkan : ";
    cin >> a;

    int array[a];
    for(int i= 0; i < a;i++) {
        cin >> array[i];
    }

    bubble_sort(array, a);

    cout << "Setelah :\n";

    for(int j= 0; j < a; j++) {
        cout << array[j] << "\n";
    }
}