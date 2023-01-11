#include<iostream>
using namespace std; 

/*

OUTPUT :
54321
54321
54321
54321
54321

*/
int main()
{
    //USING FOR LOOP
    /*
    int i, j, n;
    cout<<"Enter the value of the n:"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
    }
    */

    //USING WHILE LOOP
    int n;
    cout<<"Enter the value of the n :"<<endl;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<n-j+1;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}