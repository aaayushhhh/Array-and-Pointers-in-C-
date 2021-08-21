#include <iostream>
using namespace std;
int main()
{
    int *p;
    int arr[6];
    cout<<"Enter the elements: \n";
    for (int i = 0 ; i<=5 ; i++)
    {
        cin>>arr[i];
    } 
    p = arr;
 cout<<"\nYou entered:";
 for (int i = 0; i <=5; i++)
 {
     cout<<"\n"<<*p;
     p++;
 }
 return 0;
}
