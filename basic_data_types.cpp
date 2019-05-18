#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int int_input;
    long long_input;
    char char_input;
    float float_input;
    double double_input;
    scanf("%d %ld %c %f %lf", &int_input, &long_input, &char_input, &float_input, &double_input);
    printf("%d\n%ld\n%c\n%.3f\n%.9lf\n", int_input, long_input, char_input, float_input, double_input);
    return 0;
}
