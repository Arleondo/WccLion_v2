#include <iostream>
using namespace std;

int main() {

    int a=3;
    a=a+1;
    int* p;
    *p=7;

    int &r=a;
    int* &q=p;
    r++;
    *q=13;


    return 0;
}