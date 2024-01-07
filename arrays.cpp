# include <iostream>
# include <climits>
using namespace std;

void printarray(int input[] , int n){
    //cout<<"function : "<<sizeof(input)<<endl;
    cout<<"print"<<endl;
    for (int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}

int main(){ 
    // take array input from the user

    int n;
    cout<<"enter n: ";
    cin>>n;

    int input[100];  // array declare kr diya
    //cout<<input<<endl;
    cout<<"enter array elements: ";
    
    for (int i=0 ; i<n ; i++){
        cin>>input[i];
        // here this i is representing index of current element
    }
    // cout<<"main : "<<sizeof(input)<<endl;
    printarray(input , n); // n is size of my array
    /*
    // print array
    for (int i=0;i<n;i++){ // to print only entered values
    // for (int i=0;i<100;i++){ garbage values are also printed
        cout<<input[i]<<endl;
    }
    // largest element in the array


    // int max=input[0]; fails for n=0
    // int max = 0; fails for n=0
    int max= INT_MIN ;
    // for (int i=1;i<n;i++){ fails for n=0
    for (int i=0;i<n;i++){
        if (input[i]>max){
            max=input[i];
        }
    }
    // after traversing the whole loop
    cout<<"max : "<<max<<endl;
    */
    
}