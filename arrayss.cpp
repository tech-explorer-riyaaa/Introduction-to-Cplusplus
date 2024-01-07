# include <iostream>
using namespace std;

void printArray(int input[],int n){
    for (int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

void reverse(int input[],int n ){
    int i=0 , j= n-1;
    while (i<j){
        int temp = input[i];
        input[i]=input[j];
        input[j]=temp;
        i++;
        j--;
    }
}

void increment (int a , int b[] , int n){
    a++;
    b[0]++;
}
int main(){
    // take array input from the user
    /*int input[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>input[i];
    }*/
    //int input[100]={1,2,3};
    //printArray(input,100);
    int a=10;
    int b[10]={1,2,3,4,5,6};
    /*increment (a,b,10);

    cout<<"a : "<<a<<endl;
    cout<<"b[0] : "<<b[0]<<endl;*/
    reverse(b,6); // sirf 5 tak bakiyo mei 0 pada hoga , valid number of elements 5 hi hai yaha
    printArray(b,6);
    
}