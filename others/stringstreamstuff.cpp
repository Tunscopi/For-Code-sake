#include <iostream>
#include <sstream>

int main()
{
    std::stringstream concat;
    std::stringstream convert; // stringstream used for the conversion

    std::string text = "456";
    std::string inttoStringResult;
    int number = 123;
    int stringtoIntResult;

    //concat << b << a;

    // convert int to string
    convert << number;  // Add the value of text to characters in the stream
    inttoStringResult = convert.str(); // set result to the contents of the stream 

    // convert string to int
    std::stringstream convert2(text);   // initialize stringstream with string value
    if (!(convert2 >> stringtoIntResult))
        stringtoIntResult = 0;
   
   
    // concatenate two streams




    // Results
    std::cout << "inttoStringResult: " << inttoStringResult << std::endl;
    std::cout << "stringtoIntResult: " << stringtoIntResult << std::endl;
    
   

    //std::cout << concat.str() << std::endl;
    //std::cout << j << std::endl;


    return 0;
}
