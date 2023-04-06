#include <iostream>


int main(){
    int n,i,s=0;
    std::cout<<"Enter any number"<<std::endl;
    std::cin>>n;
    for(i=1;i<=n;i=i+1){
        if (n%i==0){
            s=s+1;
        }
    }
    if (s==2){
        std::cout<<"The number is Prime"<<std::endl;
    }
    else{
        std::cout<<"The number is not prime"<<std::endl;
    }

    return 0;
}