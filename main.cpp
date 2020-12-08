#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
int f(int p)
{
    return 100;
};

template <typename T>
int f(T p)
{
    return 200;
}

int main()
{
    printf("%d", f(42));
}
}
