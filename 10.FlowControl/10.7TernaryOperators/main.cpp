#include <iostream>


int main(){

	int max{};
    
    int a{35};
    int b{200};
	
    std::cout << std::endl;
	std::cout << "using regular if " << std::endl;
	
    /*
    if(a >  b){
        max = a;
    }else{
        max = b;
    }
    */

    max = (a > b)? a : b; // Ternary operator
	
    std::cout << "max : " << max << std::endl;
    
    std::cout << std::endl;
    std::cout << "speed" << std::endl;
    bool fast = false;

    int speed{fast ? 300:150};
    std::cout << " The speed is : " << speed << std::endl;
   
    return 0;
}