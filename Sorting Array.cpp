#include<iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int arr[] = {10,40,20,30};
    sort (arr , arr + 4 );
    for(int i=0;i<4;i++)
    {
        cout<<arr[i]<<" ";
        
        
    }
    
}
