#include <iostream>


int main(){
   int a,b,c,i;
   a=0;
   b=1;
   std::cout<<a<<"\t"<<b;
   for (i=1;i<=6;i=i+1){
    c=a+b;
    a=b;
    b=c;
    std::cout<<"\t"<<c;
   } 
   return 0;
}

// if you want to display the fibonacci series up to infinity just use while(true) loop