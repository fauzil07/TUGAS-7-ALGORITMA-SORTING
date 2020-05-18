#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Arr[50];
    int tmp;
cout << "\nInputkan banyak data yg akan diurutkan: ";
cin >> n;
cout << "\n";
for(i=1; i<=n; i++)
{
       cout<<"Inputkan data ke "<<i<<" = ";
       cin>>Arr[i];
}

for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(Arr[i] < Arr[j])
              {
                     tmp = Arr[j];
                     Arr[j] = Arr[i];
                     Arr[i] = tmp;
              }
       }
}

cout << "Hasil Pengurutan data Secara Descending\n";

for(i=1;i<=n;i++)
{
       cout<<" "<<Arr[i]<<endl;
}

getch();
}
