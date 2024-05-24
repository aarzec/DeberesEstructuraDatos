#include "Mat.h"
#include <iostream>

int Mat::minimoComunMultiplo(int n1, int n2)
{
    int max_num;

    if (n1 > n2) {
        max_num = n1;
    } else {
        max_num = n2;
    }

    while (true) {  
        if (max_num % n1 == 0 && max_num % n2 == 0) {  
            return max_num;  
            break;  
        }  
        ++max_num;
    }  

    return 0;
}

int Mat::maximoComunDivisor(int n1, int n2)
{
    int a, b, res;

    a = std::max(n1, n2);
    b = std::min(n1, n2);

    do {
        res = b;
        b = a%b;
        a = res;
    } while (b != 0);

    return res;
}
