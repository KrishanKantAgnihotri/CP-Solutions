#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
int main(){
 int t,l,n;t=l=n=0;
        
        scanf("%d",&t);
        
        char st[100];
        for(int i=0;i<t;i++)
        {
                int c=0;
        int d=0;
        scanf("%d %d",&n,&l);
        for(int j=0; j<n;j++)
        {
        scanf("%s",st);
        char p;
        for(int m=0;m<l;m++)
        {
        p=st[m];
        if((m+j)%2==0)
        {
        if(p=='G')
        c=c+3;
        else 
        d=d+5;
        }
        else
        {
        if(p=='G')
        d=d+3;
        else 
        c=c+5;
        }
        }
        }
        if(c<d)
        printf("%d\n",c);
        else
        printf("%d\n",d);
        }
        return 0;
        } 
