#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,a;
   set<int> cache;
   cin>>n;
   int max=n;
   for(int i=0;i<n;i++){
       cin>>a;
       auto it=cache.find(a);
       if(it==cache.end() && a!=max){
           cout<<endl;
           cache.insert(a);
       }
        
        else if (a==max){
            cout<<a <<" ";
            max=a-1;
            while(cache.find(max)!=cache.end()){
                cout<<max<< " ";
                cache.erase(max);
                max--;
            }
            cout<<endl;
        }
            
   }
   return 0;
}
