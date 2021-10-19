# OO-Types
OO Types for C++ programming. These are similar to Java's types like Integer and Byte ... etc. These were made specifically to help assist in making the compiler for verilog so I didnt have to use void pointers. The advantage of having these obect types too is that my instance of operator in the Object works on these types.

Also, since I thought this was something that could be used elsewhere outside of my Verilog Compiler project I decided to make this its own standalone library. 

# Differences from Java
This object oriented type hiearchy also handles unsigned types which are not included in Java. The Object class in this library isnt part of the C++ stl either so classes dont automatically inherit the Object classes methods. This has to be done manually.
