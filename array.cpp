#include <iostream>
 using namespace std;

 int main () {
    /*int mask[5] = {90, 58, 95, 89, 78};
    int size = 5;
    
    
    for(int i = 0; i<size; i++){
        cout<< mask[i] <<endl;
    }*/

     int size = 5;
     int mask[size];

     for(int i = 0; i<size; i++) {
        cin >> mask[i]; 
     }


     for(int i = 0; i<size; i++) {
        cout << mask[i] <<endl;
     }

    return 0;
 }

