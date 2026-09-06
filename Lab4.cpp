//Eduardo Avila
//COMSC - 210 - 5293
//Lab 4 - Vector of Structs

//Milestone 2: test your vector by populating it with a Color object
//output it to the console.

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

    //Vector creation and putting testColor in it
    vector<Color> colorList;

    colorList.push_back(testColor);

    //Outputting the vector this time
    cout << "Vector Red Value: " << colorList[0].red << endl;
    cout << "Vector Green Value: " << colorList[0].green << endl;
    cout << "Vector Blue Value: " << colorList[0].blue << endl;

    cout << "TEST COMPLETE! :)" << endl;

    return 0;
}