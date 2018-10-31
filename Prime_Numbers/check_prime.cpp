// Check Prime Number Complexity O(sqrt(n))

#include<iostream>
#include <math.h>

using namespace std;

int main(){
    int number, i, sqrtNumber;
    cout<<"Enter the number: ";
    cin>>number;

    sqrtNumber = sqrt(number);

    for(i=2;i<=sqrtNumber;i++)  // Only need to check up to sqrt of number
        if((number%i)==0)
            break; // cout<<number<<" is not Prime Number";

    if(--i==(number/2))                       // as value of i after for loop will be 1+
        cout<<number<<" is a Prime Number" << endl;
    else                                      
        cout<<number<<" is not a Prime Number" << endl;
    return 0;
}