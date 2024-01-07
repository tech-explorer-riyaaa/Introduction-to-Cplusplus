#include <iostream>
using namespace std;
# include <cstring>

void printAllPrefixes (char input[]){
    for (int i=0; input[i]!='\0'; i++){
        // i is representing the end index of our prefix
        // j  represents start index of our prefix
        for (int j=0; j<=i; j++) {
            cout << input[j];
        }
        cout<<endl;
    }    
}

int main(){

    // printing prefixes
    char input1[100]="abcd";
    printAllPrefixes(input1);




    /*
    // to copy string
    char input1[100]="abcd";
    char input2[100]="xy";

    cout << "Before copying : ";
    cout << "input1 : " << input1 << endl;
    cout << "input2 : " << input2 <<endl;
    //strcpy(input1, input2);
    //strcpy(input1, "hello");

    //strncpy(input1, input2 ,3 );
    strncpy(input1, input2, 4);
    cout << "After copying : ";
    cout << "input1 : " << input1 << endl;
    cout << "input2 : " << input2 << endl;
    */
    /*
    char input1[100], input2[100];
    cin>>input1;
    cin>>input2;
    //to compare strings
    if(strcmp(input1,input2)==0){
        cout << "true" << endl;
    }
    else {
        cout << "false" << endl;
    }
    */

    /*
    // string length
    int len = strlen(input);
    cout<<"length : "<<len<<endl;
    // hello ki 5 
    // hello world ki bhi 5
    // this is because of cin i think 
    */
}