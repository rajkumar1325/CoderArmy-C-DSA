#include<iostream>
using namespace std;
int main(){
    cout<<"Printing the ASCII value of the Alphabet \n";
    
/*

                                            //printing a to z
    for (char name = 'a'; name <= 'z'; name++) //a is assigned to 98(ASCII) and then see data-type(float), therefore, again convert the ASCII to character
    {
        cout<<name<<" ";
    }
    
*/

/*
                                    //printing a sequence
    for (int i = 1; i < 100; i = i+3)
    {
        cout<<i<<" ";
    }
*/
    

/*
                                    //PRINTING TABLE
*/
    cout<<"Enter your number";
    int number;
    cin>>number;

    // for (int i = 1; i <= 10; i++)
    //     cout<< number<< "*" << i <<"= "<< number*i <<endl;
    

    // for (int i = number; i <= 10 *number; i= i+number)
    //     cout<<i << " ";
    
    
    //HARD CODING: BRUTE-FORCE
    for (int i = 5; i <= 50; i= i+5)
        cout<<i << " ";





}
