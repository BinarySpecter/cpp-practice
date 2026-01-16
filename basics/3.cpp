#include<bits/stdc++.h>
using namespace std;

// int y = 6; // globe variable
int main(){
    // int a = 2; 
    // int b = 3;
    // cout << ( a!= b) <<endl; // ans is (true)

    // int a1 = 2; 
    // int b1 = 3;
    // cout << ( a1== b1) ; // ans is - (false)

    // int a = 2;
    // int b = 3;
    // int c = 4;

    // cout<< ((b> a) && (b>c)) << endl; // and operator ( both sould be true than ans is 1 else than the ans is 0)

    // cout << ((b>a)) || ((b>c)); // or operator ( only one condition should be true than the ans is 1 else 0)


    // int n; 
    // cin>> n;
    // if(n%2==0){ // if condition (in this that if a number is even (when we n by 2 and the remainder is 0) then it will print yes)
    //     cout<< "YES" << endl;
    //     int x = 2; // x is declared in local scope
    // }
    // else if(n%3==0){ //that if does not satisy the if condition it check it it divisble by three if yes then will display divisible by 3
    //     cout << "divisible by 3"<< endl;
    // } 
    // else{ // if does not satify any condition than it will print no at last 
    //     cout<< "NO" << endl;
    // }
    // // cout << x; // will get compilation error as it is in local scope in if condition
    // {
    //    int x = 3; // local variable (when ever we use angular bracket this new scope) 
    // }
    // // cout<< x ; // getting compilation error because it was decalred in local scope can use it out of that scope

    // cout << y ; // can use anywhere as it is globle variable 
    // int i = 1;
    // while(i<=10){ // if the condition is true we will go first on 44 line then 45 then again 43 line , and if we get false for first time then exit)
    // cout << i << endl;
    // i++;

    // }
       
    // int i = 1;
    // // for (intiailisation ; condition ; iteration){

    // // }

    // for (int i=1; i<=10; ++i){
    //     cout<< i << endl;
    // } 

    // // // nested loop

    // int n;
    // cin >> n;        
    // for(int i = 1; i<=n; i++){                                          
    //     for(int j=1; j<=i; j++){
    //         cout<< "*";
    //     }   
    //     cout << endl;
                                                                 
    // }             // star pattern
    
    
    // test cases ( how write for test cases)
//     int t;
//     cin >> t;
//     while(t--){
//         int n;
//         cin >> n;        
//         for(int i = 1; i<=n; i++){                                          
//             for(int j=1; j<=i; j++){
//                 cout<< "*";
//             }   
//             cout << endl;                                                     
//          }      
//     }
// }



// // infinte loop
// // while(1){

// // }

// for(;;){

// }

    // //jump statements
    // // break;
    // // continue
    // for(int i=1; i<=10; i++){
    //     if(i==8){
    //         // break; // when we encounter break condition goes to last for loop 
    //         continue ; // skips and goes to last loop
    //     }
    //     cout<< i << endl;
    // }

//Q
//     while(true){
//         int x;
//         cin>> x;
//         if(x==42){
//             break;
//         }
//         cout << x << endl;
//     }

// }

   int n;
   cin >> n;
   int digit_sum = 0;
   while(n>0){
    int last_digit= n%10;
    digit_sum = digit_sum + last_digit ;
    n = n/10;
   }
   cout << digit_sum << endl;


}