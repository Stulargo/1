
#include <iostream> 
#include <stdlib.h> 
#include <time.h> 
using namespace std;
void sort(int tab[], int n) { 
  for (int i=0;i<n-1;i++){ 
    for (int j=0;j<n-i-1;i++){ 
      if(tab[j] tab[j+1]){ int temp tab[j]; tab[j]=tab[j+1];
tab[j+1]=temp;
}
}
חירח
}
}
int main()
{
cout<<"podaj długośc tablicy"<<endl;
int n; cin>>n;
cout<<"tablica przed posortowaniem "<<endl; int tab[n];
srand(time(NULL)); for (int i=0;i<n;i++){
}
tab[i]=rand()%40+20;
cout<<tab[i]<<"
cout<<"po posortowaniu "<<endl;
}
}
sort(tab,n);
for (int i=0;i<n;i++){
cout<<tab[i] <<" ";
return 0;
