#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your number ";
    int num, total = 1;
    cin >> num;
                                        //FACTORIAL
    /*
        for (int i = 1; i <= num; i++)
        {
            total = i*total;
        }
        cout<<"The factorial is "<< total;
    */


/*

                                        // PRIME NUMBER
    if (num < 2){
        cout << "not prime";
        return 0;
    }
    else{
        for (int i = 2; i < num; i++){
            if (num % i == 0){
                cout << "not prime";
                return 0;
            }
        }
        cout << "prime";
    }

*/



                                        //FIBONACCI
    int last=0, previous =1, current=0;
    for (int i = 0; i < num; i++)
    {
        current = previous+last;            //SWAPPING WITH THE PREVIOUS.
        last = previous;
        previous = current;
        cout<<current<< " ";
    }
    
}
