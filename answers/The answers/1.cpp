#include <iostream>


int main(){
    //declare the variables you're going to use.
    int i;
    for (i=10;i<100;i++){
        if (i%3==0 && i%5==0){
            std::cout<<i<<std::endl;
        }
    }

    return 0;
}
