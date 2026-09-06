//Eduardo Avila
//COMSC - 210 - 5293
//Lab 4 - Vector of Structs

//Milestone 4: your code is ready for submission.

#include <iostream>
#include <vector>
#include <cstdlib> //for random numbers
#include <ctime>
#include <iomanip> //for epic formatting

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

    //Vector creation for the list of colors
    vector<Color> colorList;

    //Loop for creating colors with random values n times
    for(int i = 0; i < n; i++){

        Color randColor;

        randColor.red = rand() % 256;
        randColor.green = rand() % 256;
        randColor.blue = rand() % 256;

        colorList.push_back(randColor);
    }

    //Time to make output look pretty
    //Top Row
    cout << " Color # " << setw(10) << "R Value" << setw(10) 
         << "G Value" << setw(10) << "B Value" << endl; 

    cout << " ------" << setw(12) << "------ " << setw(10)
         << "------ " << setw(10) << "------ " << endl;


    

    return 0;
}