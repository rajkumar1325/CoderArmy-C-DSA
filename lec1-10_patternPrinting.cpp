#include<iostream>
using namespace std;

/*
                     *
                    **
                   ***
                  ****
                 *****
*/
int main(){


    int n =5;

  //Outer loop is always for column-wise traversing and Inner loop is for row-wise traversing
  //i.e,     OuterLoop = Top-->bottom        
  //         Inner Loop = Left-->Right

  
    for (int  row = 1; row <= n; row++)
    {
        // space+number must be == n 
        for (int space =0 ; space <= n-row; space++)    //printing space 
        {
            cout<<" ";
        }
        for (int i = row; i >=1; i--)      //row1-->1 , row2-->2    so on...
        {
            cout<<i;
        }
        
        cout<<endl;
        
    }
    
}
