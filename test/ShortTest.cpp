#include "Short.h"
#include "Object.h"
#include "TestUtils.h"

bool binary_operation_short_test(){
    Short i1(30);
    Short i2(10);

    return (i1 + i2) == 40;
}

bool unary_operation_short_test(){
    Short i1(30);

    return -i1 == -30;
}

bool boolean_short_test(){
    Short i1(25);
    
   return i1;
}

bool string_short_test(){
    Short i2(33);

    return i2.to_string() == "33";
}

bool class_short_test(){

    Short i2(33);

    return i2.get_class() == "Short";
}

int main(){
    run_test(binary_operation_short_test);
    run_test(unary_operation_short_test);
    run_test(boolean_short_test);
    run_test(string_short_test);
    run_test(class_short_test);
    return 0;
}