#include <iostream>
using namespace std;
/*
//function define 
int sum(int a, int b) {
  int s = a + b;
  return s;
}

//function call
int main(){
  cout << sum(10, 5) <<endl;

  return 0;
}*/

//function define 

/*int minOfTwonumber(int a, int b) {
     
  int min = a - b ;

  return min; 

}

//function call 
 int main() {
    cout << min(10, 5) <<endl;

    return 0;
 }*/

 /*int minOfTwo(int a, int b){ // these are known as parameters these are the input 
  if(a<b) {
    return a;
  } else {
    return b;
  }
 }


int main()  {
  cout << "min = " << minOfTwo(5, 3) << endl; // these are known as arguments these are the actual values 

  return 0;
}*/


/*int sumOfN(int n ) {.           
  int sum = 0;

  for(int i = 1; i <= n; i++) {
     sum += 1;
  }

  return sum;
}

int main() {
  cout <<sumOfN(10) << endl;
  cout <<sumOfN(15) << endl;
  cout <<sumOfN(20) << endl;
  cout <<sumOfN(25) << endl;
  cout <<sumOfN(30) << endl;
  return 0;
}*/

//function define 
/*int factorialN(int n){
   
   int fact = 1;

  for (int i = 1; i <=n; i++ ){

    fact *= i;

  }
   return fact;


}
// functiom call
int main() {
  cout << factorialN(4)<<endl;
   cout << factorialN(10) <<endl;
}*/

/*void changeX(int x) {()
  x = 2*x;
  cout << "x = " << x <<endl;
}

int main() {
  int x = 5;

  changeX(x);

  cout << "x = " << x <<endl;
  return 0;
}*/


//function define 

/*int factorial(int n) {
   int fact = 1;

   for(int i = 1; i <= n; i++){

    fact *= i;
   }

  return fact;

}


int nCr(int n, int r){
  int fact_n = factorial(n);
  int fact_r = factorial(r);
  int fact_nmr = factorial(n-r);

   return fact_n / (fact_r * fact_nmr);
}

int main() {

  int n = 8, r = 2;
  nCr(n, r);
  
}*/

/*int decToBinary(int decNum) {
  int ans = 0,  pow = 1;

  while(decNum > 0) {
    int rem = decNum % 2;
    decNum /= 2; 

    ans += (rem * pow);
    pow *= 10;
  }

  return ans;
}


int main() {
  int decNum = 50;
  
  for(int i = 1; i <= 10; i++)
  cout << decToBinary(i) << endl;
  return 0; 
}*/

int binToDec(int binNum) {

  int ans = 0, pow = 1; 

   while(binNum > 0){
    int rem = binNum % 10;

    ans += binNum * pow;

    binNum /= 10;

    pow *= 2;
   }

   return  ans;
}


int main() {

  cout<<binToDec(1010101100) <<endl;
  return 0;
}














