#include<iostream>
using namespace std; 

/*
OUTPUT :
1
22
333
4444
55555

*/
int main()
{
    //USING FOR LOOP
    /*
    int n, i, j;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
    */

   //USING WHILE LOOP
    int n;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}