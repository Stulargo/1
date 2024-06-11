
#include <iostream> 
#include <stdlib.h>
#include <time.h> 
using namespace std;
void sito (int n) { 
  bool czyP[n+1];
for (int i=0;i<=n;i++){ czyp[i]=true;
}
czyP[0]=czyP[1]=false;
for (int i=2;i i<=n;i++){ if(czyp[i]){
}
}
for (int j=i i;j<=n;j+=i){ czyP[j]=false;
}
for (int i=2;i<=n;i++){
if(czyp[i]){
cout<<i<<"
}
}
cout<<endl;
}
int main()
{
}
srand(time(NULL));
int n=rand()%20;
sito (n);
cout<<n; return 0;
