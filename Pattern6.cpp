#include<iostream>
using namespace std; 

/*

OUTPUT :
* 
* * 
* * * 
* * * * 
* * * * *

*/

int main()
{
    //USING FOR LOOP
    /*
    int i, j, n;
    cout<<"Enter the number of rows :"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            cout<<'*'<<" ";
        }
        cout<<endl;
    }
    */

   //USIMG WHILE LOOP
    int n;
    cout<<"Enter the value of the n : "<<endl;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=i)
        {
            cout<<'*'<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}