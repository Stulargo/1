#include <iostream> 
#include <fstream> 
using namespace std; 
string toBin(int n) { if(n==0){
}
return"0";
string bin="";
while(n>0){
bin (n%2==0?"0":"1")+bin;
n/=2;
}
return bin;
}
int main()
{
ifstream odczyt("dane.txt");
int n;
while(odczyt>>n){
}
cout<<toBin(n)<<endl;
return 0;
}
