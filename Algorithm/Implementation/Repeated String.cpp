#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;





int main()
{
  
long long int k,count=0,i,l,c1=0;
char string[100];
scanf("%s",string);
scanf("%lld",&k);
l=strlen(string);
for(i=0;i<=l-1;i++)
{
  if(string[i]==97) count=count+1;    
}    

for(i=0;i<=k%l-1;i++)
{
  if(string[i]==97) c1=c1+1;  
}
printf("%lld\n",(k/l)*count +c1);  
return 0;
}

