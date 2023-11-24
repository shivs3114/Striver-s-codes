#include <iostream>
using namespace std;
void pascal(int n)
{
int arr[n][n];
for(int line=0;line<n;line++)
  {for(int i=0;i<=line;i++)
    {if(line==i||i==0)
    {arr[line][i]=1;}
    else{arr[line][i]=arr[line-1][i]+arr[line-1][i-1];}
    cout<<arr[line][i]<<" ";
  }
 cout<<"\n";  
}
  
}


int main() {
  cout<<"Enter no of lines\n";
  int n;cin>>n;
  pascal(n);
}
