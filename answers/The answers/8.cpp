#include <iostream>


int main(){
    int a,b,GCD, i;
    std::cout<<"Enter any 2 numbers "<<std::endl;
    std::cin>>a>>b;
    for (i=1;i<=a;i++){
        if (a%i==0 && b%i==0){
            GCD = i;
        }
    }

    std::cout<<"GCD of "<<a<<" and "<<b<<" = "<<GCD<<std::endl;
    return 0;
}