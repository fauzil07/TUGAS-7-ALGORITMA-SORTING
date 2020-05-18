#include <iostream>
using namespace std;
 
int main()
{
    int i,j,n,temp;
    n =8;
   int a[]={6,5,3,1,8,7,2,4};
   cout<<"angka sebelum diurutkan"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }
 
    for(i=1;i<=n-1;i++)
    {
        temp=a[i];
        j=i-1;
 
        while((temp<a[j])&&(j>=0))
        {
            a[j+1]=a[j];    
            j=j-1;
        }
 
        a[j+1]=temp; 
    }
 
    cout<<"\nsetalah inserting sort\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" , ";
    }
 
    return 0;
}

