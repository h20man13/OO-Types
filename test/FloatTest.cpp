#include "Float.h"
#include "Object.h"
#include "TestUtils.h"

bool binary_operation_float_test(){
    Float i1(30);
    Float i2(10);

    return (i1 + i2) == 40;
}

bool unary_operation_float_test(){
    Float i1(30);

    return -i1 == -30;
}

bool boolean_float_test(){
    Float i1(25);
    
   return i1;
}

bool string_float_test(){
    Float i2(33);
    return i2.to_string() == "33.000000";
}

bool class_float_test(){

    Float i2(33);

    return i2.get_class() == "Float";
}

int main(){
    run_test(binary_operation_float_test);
    run_test(unary_operation_float_test);
    run_test(boolean_float_test);
    run_test(string_float_test);
    run_test(class_float_test);
    return 0;
}