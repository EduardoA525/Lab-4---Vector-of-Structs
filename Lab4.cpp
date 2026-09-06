//Eduardo Avila
//COMSC - 210 - 5293
//Lab 4 - Vector of Structs

//Milestone 3: your code runs up to this point
//outputs in any format the vector data for confirmation.

#include <iostream>
#include <vector>
#include <cstdlib> //for random numbers
#include <ctime>

using namespace std;

//For random range of 25-50 colors
const int MIN = 25, MAX = 50;

//Struct with three color values
struct Color{
    int red;
    int green;
    int blue;
};

int main(){

    srand(time(0));
    int n = rand() % (MAX - MIN + 1) + MIN; //determines how many colors between 25-50

    //Object for testing to console
    Color testColor = {192, 182, 96};

    //Vector creation and putting testColor in it
    vector<Color> colorList;

    colorList.push_back(testColor);

    //Outputting the vector this time
    //cout << "Vector Red Value: " << colorList[0].red << endl;
    //cout << "Vector Green Value: " << colorList[0].green << endl;
    //cout << "Vector Blue Value: " << colorList[0].blue << endl;

    //cout << "TEST COMPLETE! :)" << endl;

    //Loop for creating colors with random values n times
    for(int i = 0; i < n; i++){

        Color randColor;

        randColor.red = rand() % 256;
        randCOlor.blue = rand() % 256;
        randColor.green = rand() % 256;

        colorList.push_back(randColor);
    }

    return 0;
}