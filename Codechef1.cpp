#include <iostream>
using namespace std;

int main()
{

            int a,b,ans;

            cin>>a>>b;

            ans = a-b;

            int lastdigit = ans%10; 

            if(lastdigit == 9)
                        ans = ans-1;
            else
                        ans = ans+1;

            cout<<ans;

            return 0;
}
