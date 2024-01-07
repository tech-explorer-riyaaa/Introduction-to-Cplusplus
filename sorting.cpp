# include <iostream>
using namespace std;

void selectionSort(int input[],int n){
    for (int i=0;i<n-1;i++){ // working from round 0 to round n-2
        // find min element in the array
        int min=input[i], minIndex=i;
        for (int j=i+1;j<n;j++){
            if (input[j]<min){
                min=input[j];
                minIndex=j;
            }
        }
        // swap
        int temp = input[i];
        input[i] = input[minIndex];
        input[minIndex]=temp;
    }
}

int main(){
    int input[]={3,1,6,9,0,4};
    selectionSort(input , 6);
    for (int i=0;i<6;i++){
        cout<<input[i]<<" ";
    }
    cout<<endl;
}