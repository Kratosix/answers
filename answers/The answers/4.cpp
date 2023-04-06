#include <iostream>


int main(){
    int n,f,i;
    std::cout<<"Enter any number"<<std::endl;
    std::cin>>n;
    for(i=n;i>=1;i-=1){
        f=f*i;
    }
    std::cout<<"Factorial of "<<n<<"="<<f<<std::endl;
    return 0;
}