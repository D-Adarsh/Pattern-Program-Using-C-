#include<iostream>
using namespace std; 

/*

OUTPUT :
21
321
4321
54321 

*/

int main()
{
    //USING FOR LOOP :
    /*
    int i, j, n;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<i-j+1;
        }
        cout<<endl;
    }
    */

    //USING WHILE LOOP :
    int n;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}