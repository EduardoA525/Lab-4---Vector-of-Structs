//Eduardo Avila
//COMSC - 210 - 5293
//Lab 4 - Vector of Structs

//Milestone 1: the struct works and can received initialization data. 
//Output the object's data to the console for confirmation.

#include <iostream>
#include <vector>

using namespace std;

//Struct with three color values
struct Color{
    int red;
    int green;
    int blue;
};

int main(){

    //Object for testing to console
    Color testColor = {192, 182, 96};

    //Outputs each value of object testColor
    cout << "Red Value: " << testColor.red << endl;
    cout << "Green Value: " << testColor.green << endl;
    cout << "Blue Value: " << testColor.blue << endl;

    cout << "TEST COMPLETE! :)" << endl;

    return 0;
}