// main.cpp
#include <iostream>

int main() {
    
	
	int i = 0;
	int *j = &i;
	int *k = j;
	std::cout << k << std::endl;
    
    return 0;
}

