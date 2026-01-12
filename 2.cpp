#include<bits/stdc++.h>
using namespace std;

int main(){
    // cout<<7/2<<endl;  //ans-3
    // int a = 6/4;
    // cout<<a<<endl;
    // cout<<7/2.0<<endl; // ans - 3.5 ( calculation happens in higer datatype)
    // cout<< 'c' + 1<<endl; // answer- c(99)+1 = 100 (precendence of datatypes -double>float>long long int>long int>int>characters)
    // double  b = 3/2.0; // first calculation then it stores in b
    // cout<<b;

    // cout<< 7/2 * 3<<endl;
    // cout<< 3 * 7/2; //excution left to right )



    //oveeflow

    //  ranges of int,char,long int , long long int , float , double 
    //  -10^9<int< 10^9
    //  -10^12<long int <10^12
    //  -10^18<long long int <10^18


    // long long int a = 100000;
    // long long int b = 100000;
    // long long int c = a*b; // without long it was only printing till 10^9 values-1410065408(ans), now 10000000000
    // cout<< c << endl;

    // int mx =INT_MAX  + 1  ;
    // cout<<mx +1;

    
    // int a = 100000;
    // int b = 100000;
    // long long int c = a *1LL* b; // we put 1LL that is treated as long long integer , now calculation happen in long long int before it was happneing in int
    // cout<< c << endl;


    // double a = 100000;
    // double b = 100000;
    // double c = a * b; // we put 1LL that is treated as long long integer , now calculation happen in long long int before it was happneing in int
    // c = 1e24;
    // cout<< fixed << c << endl; // altough we store large no in double but we cannot store accurate no (precesion errors)
    // // cout<< fixed << setprecision(0)<<c << endl; //using fexied and setprecision(0)- that says that do not print 0 after 0


//  // question simple

//  Given a rectangle of length l and breadth b, print the area of the rectangle.

// Constraints:
// 1 ≤ l ≤ 10^9
// 1 ≤ b ≤ 10^9

// Input Format:
// Two space-separated integers l and b.

// Output Format:
// Single number which is the area of the rectangle.

// Sample Input:
// 3 4

// Sample Output:
// 12

// ans 1 -
    
//     long long int l, b;
//     cin >> l >> b ;
//     cout<< l * b <<endl ;
// ans 2 -

    int l, b;
    cin >> l >> b ;
    cout << l * 1LL * b << endl;





} 
