#include <iostream>
using namespace std;

int main() {
   

    /*int arr[5] = {1, 2, 3, 4, 5};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }*/


    /*int arr[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }*/


    /*int arr[5] = {1, 2, 3, 5, 4};
    
    int key = 5;

    for(int i = 0; i < 5; i++){
        if(arr[i] == key) {
            cout << "Founf" << endl;
            break;
        }
    }*/


    /*int arr[6] = {1, 3, 6, 7, 9, 10};

    int key = 12;
     
    bool found = false;

    for(int i = 0;  i < 6; i++) {
        if(arr[i]  == key) {
            cout<<"Found" << endl;
            found = true;
            break;
        
        }
    }
      if(found == true ) {
        cout<< "Found" << endl;
      } else {
        cout << "Not Found" << endl;
      }*/

      // find the occurence of key in the array and print the index of key
      //*int arr[5] = {2, 4, 6, 8, 10};  

      /*int key = 6; 
      bool found = false;

      int i;
      for(i = 0; i < 5; i++) {
        if(arr[i] == key) {
            
            found = true;
            break; 
        }
      }
        if(found == true) {
            cout << "at index " << i  << endl;
        } else {
            cout << "Not Found" << endl;
        }

        return 0;*/




        /*int arr[8] = {2, 3, 4, 5, 5, 3, 3, 1};

        int key = 12;
        int index = -1; 

        for(int i = 0; i < 8; i++) {
            if(arr[i] == key ) {
                index = i;
               
            }
        }
        if(index != -1) {
            cout << "last occurence of key is at index" << " " << index <<endl;
        } else {
            cout << "not found" << endl;
        }*/


        /*int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};

        int sum  = 0;

        for(int i = 0; i<10; i++) {
            sum = sum + arr[i];
        }
        cout << "sum of array is " << sum <<endl;*/


        // sum of two indexws of the array...
       int  arr[5]  = {5, 10, 15, 20, 25};
        int sum = 0; 
        for (int i = 0; i <5; i++) {
            if(i == 2 || i == 4) {}
            sum = sum + arr[i];
            
        }
        cout << "sum of 3rd and 5th element is " << " " << sum << endl;
        return 0;
    } 
      
