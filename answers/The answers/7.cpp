#include <iostream>

int main(){
    float n, s=0;
    float i;
    std::cout<<"Enter any number"<<std::endl;
    std::cin>>n;
    for (i=1;i<=n;i++){
        s=s+1/i;
    }
    std::cout<<"their sum = "<<s<<std::endl;
    return 0;
}