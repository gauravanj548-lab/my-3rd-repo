#include <iostream>
using namespace std;
void displayNum(int n1,float n2){
    cout<<"The Int number is"<<n1;
    cout<<"The Double number is "<<n2;
}
int main (){
    int num=5;
    float num2=5.5;
    displayNum(num,num2);
    return 0;
}