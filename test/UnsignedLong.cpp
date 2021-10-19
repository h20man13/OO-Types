#include "UnsignedLong.h"
#include "Object.h"
#include "TypeOpUtils.h"
#include "TestUtils.h"

bool addition_unsigned_long_test(){
    UnsignedLong i1(30);
    UnsignedLong i2(10);

    return (i1 + i2) == 40;
}

bool boolean_unsigned_long_test(){
    UnsignedLong i1(25);
    
   return i1;
}

bool string_unsigned_long_test(){
    UnsignedLong i2(33);

    return i2.to_string() == "33";
}

bool class_unsigned_long_test(){

    UnsignedLong i2(33);

    return i2.get_class() == "Unsigned Long";
}

int main(){
    run_test(addition_unsigned_long_test);
    run_test(boolean_unsigned_long_test);
    run_test(string_unsigned_long_test);
    run_test(class_unsigned_long_test);
    return 0;
}