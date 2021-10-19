#include "Integer.h"
#include "Object.h"
#include "TypeOpUtils.h"
#include "TestUtils.h"

bool addition_integer_test(){
    Integer i1(30);
    Integer i2(10);

    return (i1 + i2) == 40;
}

bool boolean_integer_test(){
    Integer i1(25);
    
   return i1;
}

bool string_integer_test(){
    Integer i2(33);

    return i2.to_string() == "33";
}

bool class_integer_test(){

    Integer i2(33);

    return i2.get_class() == "Integer";
}

int main(){
    run_test(addition_integer_test);
    run_test(boolean_integer_test);
    run_test(string_integer_test);
    run_test(class_integer_test);
    return 0;
}