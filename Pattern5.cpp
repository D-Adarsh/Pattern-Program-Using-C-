#include<iostream>
using namespace std; 

/*

OUTPUT :
123
456
789

*/
int main()
{
    //USING FOR LOOP
    /*
    int i, j, n;
    int count = 1;
    cout<<"Enter the value of the n:"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 1; j <= n; j++)
        {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    */

    //USING WHILE LOOP
    int n;
    cout<<"Enter the value of the n :"<<endl;
    cin>>n;
    int count = 1;
    int i = 1;
    while (i<=n)
    {
        int j = 1;
        while (j<=n)
        {
            cout<<count;
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}