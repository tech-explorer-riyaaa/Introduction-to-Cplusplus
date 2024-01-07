# include <iostream>
using namespace std;

void increment1(int**p){
    p = p+1;
}

void increment2(int **p){
    *p=*p+1;
}

void increment3(int**p){
    **p=**p+1;
}

void swap (char *x, char *y) 
{
  char *t = x;
  x = y;
  y = t;
}

void Q(int z)
{
  z += z;
  cout<<z << " ";
}

void P(int *y) 
{
  int x = *y + 2;
  Q(x);
  *y = x - 1; 
  cout<<x << " ";
}

int main(){
    /*int i = 10;
    int * p = &i;

    int ** p2 = &p;
    cout<<p2<<endl;
    cout<<&p<<endl;

    cout<<p<<endl;
    cout<<*p2<<endl;
    cout<<&i<<endl;

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    // Question

    char *x = "ninjasquiz";
    char *y = "codingninjas";
    char *t;
    swap(x, y);
    cout<<x << " "<<y;
    t = x;
    x = y;
    y = t; 
    cout<<" "<<x<< " "<<y;
    //return 0;

    cout<<endl;

    //Question

    float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    float *ptr1 = &arr[0];
    float *ptr2 = ptr1 + 3;
    cout<<*ptr2<<" ";
    cout<<ptr1;
    cout<<endl;
    cout<<ptr2<<endl;
    cout<< ptr2 - ptr1;
    //return 0;

    cout<<endl;

    // Question

    char st[] = "ABCD";
  for(int i = 0; st[i] != '\0'; i++) {
     cout << st[i] << *(st)+i << *(i+st) << i[st];
  }
  //return 0;

  cout<<endl;
  */

  //Question

  int x = 5;
  P(&x);
  cout<<x;
  return 0;
}