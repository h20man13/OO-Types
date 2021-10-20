#include "Byte.h"
#include "Object.h"
#include "TestUtils.h"

bool binary_operation_byte_test(){
    Byte i1(30);
    Byte i2(10);

    return (i1 + i2) == 40;
}

bool unary_operation_byte_test(){
    Byte i1(30);

    return -i1 == -30;
}

bool boolean_byte_test(){
    Byte i1(25);
    
   return i1;
}

bool string_byte_test(){
    Byte i2(33);

    return i2.to_string() == "33";
}

bool class_byte_test(){

    Byte i2(33);

    return i2.get_class() == "Byte";
}

int main(){
    run_test(binary_operation_byte_test);
    run_test(unary_operation_byte_test);
    run_test(boolean_byte_test);
    run_test(string_byte_test);
    run_test(class_byte_test);
    return 0;
}