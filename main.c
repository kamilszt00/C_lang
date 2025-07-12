#include<stdio.h>
// Variables and standards of naming them
// no numbers at first, and no spaces -> use underscores, also no special characters like ! and ?
// also no keywords as name of the variable
// also variables are declared like: type variable_name
int main() {
    int number = 3;
    int test_value;
    int example;
    float int_score;
    char foo = 'a'; // char needs a single quotes
    printf("Hello World %drd!\n",number); // format of printf is prinft("string to displaty", [list of optional parameters])
    // the parameters lets you add values dynamically into a string such as variables
    // the symbols are %d or $i for int
    // %f for float or double
    // %c for char
    //Symbols for string formatting
    // \n new line
    // \r carriage return
    // \t tab


    // types of variables
    // most common
    // int - whole numbers
    //float - numbers with POSSIBLE decimals (6 decimal places)
    //double - numbers with POSSIBLE decimals (15 decimal places)
    //char - stores one character (letter or number)

    // Why two different type for decimals???
    int numOfLoops = 145120;
    float x = 0; // float is less precise (6 decimals) and takes a lot less memory (4 bytes)
    double y = 0; // double has (15 decimals) and takes 8 bytes of memory, but runs faster
    // also systems rounds up either of those so when comes to float you can get weird results
    float a = 0.1;
    double b = 0.1;
    // to test this
    for(int i = 0; i < numOfLoops; i++)
    {
        x += a;
        y += b;
    }
    printf("float is %f\n",x);
    printf("double is %f\n",y);
    // variables can be updated
    int numberos;
    numberos = 1; // also can have assigned value later, this was probably common in older version of C
    printf("this varaible is now %d\n",numberos);

    numberos = number;

    printf("but now its %d\n",numberos);

    // variables that cannot  have updated values are constants
    const int DAYSINWEEK = 7; // best practise with consts are using uppercase for variable name

    //Casting types
    // sometimes we need to change value type of a variable and use for something else, np if you have double with percent score on a test
    // that says 0.95, you'll probably want to display it as 95%, we are not changing the type of variable nor the value stored in the source variable
    int first;
    double second = 3.0;
    first = second;
    // Two types of conversions, implicit and explicit
    // doing this above is implicit conversion because the data types dont match with each other. The compiler will try to convert them automatically
    // but this can be dangerous because some data types are not convertible to each other so it can cause problems.
    // explicit conversion - you tell the compiler to what data type change the variable.
    // same example but with explicit conversion
    /*
    int first;
    double second = 3.0;
    first = (int)second
    this way if second was something else like 3.2, we are explicitly telling the compiler to change it to 3 and make it work
    to be fair even doing this inplicitly would work but with other datatypes it may not
    */
    // other casting types
    // things get interesting when it comes to converting char to number types, look at the example
    int targetInt;
    char sourceChar = 'a';
    targetInt = (int)sourceChar;

    printf("Target int is %d\n",targetInt); // the output will be 97, char doesn't store letter a it stores 97 for lowercase and 65 for upper.
    // it also work the other way around if you would set value of targetInt to 65 and cast it into a char you'll get 'A'
}
