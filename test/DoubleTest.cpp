#include "Double.h"
#include "Object.h"
#include "TestUtils.h"

bool binary_operation_double_test(){
    Double i1(30);
    Double i2(10);

    return (i1 + i2) == 40;
}

bool unary_operation_double_test(){
    Double i1(30);

    return -i1 == -30;
}

bool boolean_double_test(){
    Double i1(25);
    
   return i1;
}

bool string_double_test(){
    Double i2(33);
    return i2.to_string() == "33.000000";
}

bool class_double_test(){

    Double i2(33);

    return i2.get_class() == "Double";
}

int main(){
    run_test(binary_operation_double_test);
    run_test(unary_operation_double_test);
    run_test(boolean_double_test);
    run_test(string_double_test);
    run_test(class_double_test);
    return 0;
}