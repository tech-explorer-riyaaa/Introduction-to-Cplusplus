#include <iostream>
using namespace std;

int main(){
    // ye sahi chlega
    /*while(true){
        int i = 10;
    }/*
    /* ye tagda error dega
    while (true){
        int* pd = new int;
    }*/

    int *p = new int;
    delete p;
    // pointer del nahi hua jise wo point krra tha won del ho gya hai

    p = new int;
    delete p; // single element deletion

    // Array deletion
    p = new int[100];
    delete [] p;

    // new use krke banega, delete se del ho jayega
    // deallocate krna is very important
    // If you delete dynamic memory using the delete operator and you do not modify the pointer value afterward, the pointer itself will still hold the same memory address, but the memory that it previously pointed to is no longer valid. In other words, the pointer becomes a dangling pointer.

    // A dangling pointer is a pointer that points to a deallocated or freed memory.
    // Accessing or using such a pointer can lead to undefined behavior, as the memory it points to may 
    // have been reused or modified by other parts of the program.
}   
