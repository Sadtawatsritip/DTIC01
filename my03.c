/* 
   multiline comment
   "" double quote, '' single quote, # hash, /slash, \ backslash
   : colon, ; semicolon, () round brackets, [] square brackets, {} curly brackets
   <> angle brackets, | pipe, & ampersand
   ` backtick (Ait+9+6)
/*


#include "stdio.h" //หรือ #include <stdio.h>

int main(){
    //แสดงเฉพาะที่อยู่ใน "" แรกเท่านั้น โดยเขียนอย่างไงแสดงอย่างงั้น
    //แต่หากมีอะไรต่อจาก "" แรก จะต้องมาแสดงผลที่ "" แรกเสมอ โดยใช้ formt spec/format string
    
    printf("Hello....\n");

    printf("AAA  BBB ^-^\n" , 555 , "Wow wow wow" , 100+200);

    printf("Hi\n\n\nHey\tHoo\t\t\tWow\\");

    return 0;
}