#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int main(){
    int arr[]= {12,11,10,17,15};
    sort(arr, arr+5);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i];
        cout<<" "<<endl;
    }
    if(binary_search(arr, arr+5 , 17))
    {
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Present ";
    }
    return 0;
}
