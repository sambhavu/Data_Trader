#include<algorithm> 
#include<iostream> 
#include<cmath>
using namespace std;


int main(){ 

bool prime=0;

for(int i=1; i<=100; i++) {

     for(int j=2;j<i;j++){
      prime=1;

         if(i%j==0) {
             prime=0; 
         } 
      }

     if(prime){
        cout<<"\n"<<i;
     }
     prime=0; 
} 

     


return 0; 
} 
