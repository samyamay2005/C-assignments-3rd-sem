/*Write a C++ Program To Find Sum of Even Positive / Even Negative / Odd Positive / Odd Negative
of An Array.*/
#include <iostream>

using namespace std;

int sumOfEvenPositive(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0 && arr[i] % 2 == 0) {  
            sum += arr[i];
        }
    }
    return sum;
}

int sumOfOddPositive(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0 && arr[i] % 2 != 0) {  
            sum += arr[i];
        }
    }
    return sum;
}

int sumOfEvenNegative(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0 && arr[i] % 2 == 0) {  
            sum += arr[i];
        }
    }
    return sum;
}

int sumOfOddNegative(int* arr, int size) {
    int sum = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] < 0 && arr[i] % 2 != 0) {  
            sum += arr[i];
        }
    }
    return sum;
}

int main(){
    int size, choice;
    cout<<"Enter the size of you array: ";
    cin>>size;
    int* arr=new int[size];
    cout<<"Enter the elements of your array:";
    for(int i=0;i<size;i++){
        int num;
        cout<<"Enter element: ";
        cin>>num;
        arr[i]=num;
    }
    cout<<"-Menu-"<<endl;
    cout<<"1.For Sum of even positive"<<endl;
    cout<<"2.For Sum of odd positive"<<endl;
    cout<<"3.For Sum of even negative"<<endl;
    cout<<"4.For Sum of odd negative"<<endl;
    cout<<"5.To print the entire array."<<endl;
    cout<<"6.To exit the loop."<<endl;
    
    do{
        cout<<endl<<"Enter your choice: "<<endl;
        cin>>choice;
    switch (choice)
    {
    case 1:
        cout<<"Sum of even positives of the array is: "<<sumOfEvenPositive(arr,size)<<endl;
        break;
    case 2:
        cout<<"Sum of odd positives of the array is: "<<sumOfOddPositive(arr,size)<<endl;
        break;
    case 3:
        cout<<"Sum of even negatives of the array is: "<<sumOfEvenNegative(arr,size)<<endl;
        break;
    case 4:
        cout<<"Sum of odd negatives of the array is: "<<sumOfOddNegative(arr,size)<<endl;
        break;
    case 5:
        cout<<"Here's your array: "<<endl;
        for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        }
        break;
    case 6:
        cout<<"Exiting...";
        break;
    default:
        cout<<"Wrong choice";
        break;

    }
    }while(choice!=6);
    return 0;
}