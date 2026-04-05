
      #include <iostream>
      #include <algorithm>     
      using namespace std;
     
      void reverseArray(int arr[], int size) {
         int start = 0, end = size - 1;

         while(start < end ) {
            swap( arr[end], arr[start]);
            start++;
            end--;
         }
      }

      int main() {
         int arr[] = {1, 2, 3, 4, 5, 6, 7};
         int size = 7;

         reverseArray(arr, size);
         for(int i = 0; i<size; i++){
            cout << arr[i] << " ";
         }
         cout<< endl; 
         return 0; 

      }