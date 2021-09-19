#include <iostream>
using namespace std;        /*     1
                                   21
                                   321
                            */

int main()
{
int i =1,k; 
int n,j;
cin>>n;
while (i<=n){
    j=1;
    k=i;
    while(j<=i){
        cout<<k;
        k--;
        
        j++;
    }
    cout<<endl;
    i++;
}
    
}

