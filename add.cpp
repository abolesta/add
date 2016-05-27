#include<iostream>

float input();
float sum(float c, float d);
void sumOutput(float e, float f, float g);

int main(){
    float x = input(), y = input();
    float z = sum(x, y);
    sumOutput(x, y, z);
    
    std::cin.get();
    return 0;
}

float input(){
    float addend;
    std::cout << "Please enter a number: "; std::cin >> addend;
    
    return addend;
}

float sum(float c, float d){
    float result = (c + d);
    return result;
}

void sumOutput(float e, float f, float g){
     std::cout << e << " + " << f << " = " << g << std::endl;
}