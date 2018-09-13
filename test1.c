nclude 
#include 
#include 

using namespace std;
const int maxn = 1e4+100;
int n,m,k;
int a[maxn],b[maxn];
const int inf = 1e9;
int G[maxn];
int main(){
     while(~scanf("%d%d%d",&n,&m,&k)){
           for(int i=1;i<=k;i++){
               scanf("%d %d",&a[i],&b[i]);
                 }
                 
                   int index;
                     double p = 1.0*m/n;
                       double ans = p * a[1] + (1.0-p)*b[1];
                         for(int i=1;i<=k;i++){
                             double curren = p * a[i] + (1.0-p)*b[i];
                             if(curren >= ans){
                                  ans = curren;
                                   index = i;
                             }
                               }
                               
                               
                                 for(int i=1;i<=k;i++){
                                     if(i==index){
                                         
                                          printf("%d%c",n,i==k?'\n':' ');
                                     }
                                     else{
                                          printf("%d%c",0,i==k?'\n':' ');
                                     }
                                       }
                                        }
                                         return 0;
}
