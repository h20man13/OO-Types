#include "Long.h"
#include "Object.h"
#include "TestUtils.h"

bool binary_operation_long_test(){
    Long i1(30);
    Long i2(10);

    return (i1 + i2) == 40;
}

bool unary_operation_long_test(){
    Long i1(30);

    return -i1 == -30;
}

bool boolean_long_test(){
    Long i1(25);
    
   return i1;
}

bool string_long_test(){
    Long i2(33);

    return i2.to_string() == "33";
}

bool class_long_test(){

    Long i2(33);

    return i2.get_class() == "Long";
}

int main(){
    run_test(binary_operation_long_test);
    run_test(unary_operation_long_test);
    run_test(boolean_long_test);
    run_test(string_long_test);
    run_test(class_long_test);
    return 0;
}