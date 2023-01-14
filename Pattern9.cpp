#include<iostream>
using namespace std; 

/*

OUTPUT :
1 
2 3 
3 4 5 
4 5 6 7 

*/

int main()
{
    //USING FOR LOOP
    /*
    int n, i ,j;
    cout<<"Enter the value of the row ;"<<endl;
    cin>>n;
    for ( i = 1; i <= n; i++)
    {
        for ( j = 0; j < i; j++)
        {
            cout<<i+j<<" ";
        }
        cout<<endl;
    }
    */

    //USING WHILE LOOP
    /*
    int n;
    cout<<"Enter the value of the row : "<<endl;
    cin>>n;
    int i = 1;
    while (i<=n)
    {
        int j = 0;
        while (j<i)
        {
            cout<<i+j<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
    */

   /*
NOTE : you can also use a method in whilch declare int value = i;
by doing so you have stored the value of the row in the value
now in a particular row print value and the increment the value ie. value++
This will print the same above pattern 
*/
    //Using while loop to do this ...same can be done using for loop also
    int n;
    cout<<"Enter the value of the row ;"<<endl;
    cin>>n;
    int i = 1;
    while (i<=n)
    {        
        int value = i;
        int j = 1;
        while (j<=i)
        {
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    

    return 0;
}


