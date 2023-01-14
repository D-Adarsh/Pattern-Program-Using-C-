#include<iostream>
using namespace std; 

/*
OUTPUT :
1 
2 3
4 5 6
7 8 9 10

*/
int main()
{
    //USING FOR LOOP
    /*
    int n, i, j;
    int count = 1;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    */

   //USING WHILE LOOP
    int n;
    cout<<"Enter the value of the row :"<<endl;
    cin>>n;
    int count = 1;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}