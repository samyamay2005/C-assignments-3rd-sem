/*Write a C++ Program to implement Linear Search.+*/

#include<iostream>
using namespace std;

void linearSearch(int* arr, int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            cout<<"Element found at index "<<i;
            
        }       
    }
    
}

void display(int* arr, int size){
    cout<<"Elements of the array are as follows: "<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

}
int main(){
    int size,key;
    cout<<"Enter the size of your array:";
    cin>>size;
    int* arr= new int[size];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<size;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    display(arr, size);
    cout<<"Enter your element which you want to search:";
    cin>>key;
    
    linearSearch(arr,size,key);
    return 0;
}