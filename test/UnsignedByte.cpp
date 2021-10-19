#include "UnsignedByte.h"
#include "Object.h"
#include "TypeOpUtils.h"
#include "TestUtils.h"

bool addition_unsigned_byte_test(){
    UnsignedByte i1(30);
    UnsignedByte i2(10);

    return (i1 + i2) == 40;
}

bool boolean_unsigned_byte_test(){
    UnsignedByte i1(25);
    
   return i1;
}

bool string_unsigned_byte_test(){
    UnsignedByte i2(33);

    return i2.to_string() == "33";
}

bool class_unsigned_byte_test(){

    UnsignedByte i2(33);

    return i2.get_class() == "Unsigned Byte";
}

int main(){
    run_test(addition_unsigned_byte_test);
    run_test(boolean_unsigned_byte_test);
    run_test(string_unsigned_byte_test);
    run_test(class_unsigned_byte_test);
    return 0;
}