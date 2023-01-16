#include<iostream>
using namespace std; 

/*
OUTPUT :
A A A A A 
B B B B B 
C C C C C 
D D D D D 
E E E E E 
*/

int main()
{
    //USING FOR LOOP :
    /*
    int i, j, n;
    char x = 65;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    for ( i = 0; i < n; i++)
    {
        for ( j = 0; j < n; j++)
        {
            cout<<x<<" ";
        }
        cout<<endl;
        x++;
    }
    */

    //USING WHILE LOOP  :
    /*
    int n;
    char x=65;
    cout<<"Enter the value of the n: "<<endl;
    cin>>n;
    int i=0;
    while (i<n)
    {
        int j=0;
        while (j<n)
        {
            cout<<x<<" ";
            j++;
        }
        cout<<endl;
        x++;
        i++;
    }
    */

/*
NOTE :
you can also  use  'A'+i-1  to make the same pattern.
since initially it is A and the as the row increases the value of the character also increases with it by 1 in 
respect to the ASCII value.
*/
    
    int n;
    char x = 'A';
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n)
        {
            x = 'A' + i - 1;
            cout<<x<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}
