#include <iostream>

int main()
{
    int a=0;
    for(a=1;a<30;a++){
        if(a%3==0){
            std::cout<<"fizz"<<std::endl;
        }
        else if(a%5==0){
            std::cout<<"buzz"<<std::endl;
        }
        else{
            std::cout<<a<<std::endl;
        }
    }
    return 0;       
}