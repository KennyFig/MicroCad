#include "../headers/Figure.h"
#include "../headers/Circle.h"
#include "../headers/Rectangle.h"
#include "../headers/Triangle.h"
#include <iostream>
#include <string>     // std::string, std::stod
#include <cctype>

using namespace std;

//Variables for all shapes init
double x,y,z = -1.0;
bool valid = true;
string userInput = "";

//Checks to see if the user put in an exit command
int takeUserInput(){
    cin >> userInput;
    for(int i = 0; i < userInput.length(); i++){
        userInput[i] = tolower(userInput[i]);
    }
    if(userInput == "exit"){
        cout << "Exiting Program..." << endl;
        return 0;
    }
    return 1;
}

//Checking to see if the input is valid
int isValid(){
    if(!takeUserInput()){
        return 2;
    }
    try{
        stod(userInput);
    } catch(exception e){
        cout << "Please enter enter a valid number. Try again... " << endl;
        return 1;
    }
    if (stod(userInput) <= 0.0){
            cout << "Please enter enter a valid number. Try again... " << endl;
            return 1;
    }
    return 0;
}

//Checking to see if the triangle is valid since it has a special use case to check validity
int isValidTriangle(){
    if((x + y <= z) || (y + z <= x) || (z + x <= y)){
        cout << "This triangle is invalid. Try again..." << endl;
        return 1;
    }
    return 0;
}

int main(){
    int triangleValid = 1;
    cout << "Start of MicroCad. If you wish to exit the program, please type 'exit' in the terminal and hit enter." << endl;
    //Starting the creation of shapes. This also contains all of the checks for valid shapes
    cout << "=============CREATING SHAPES START===============" << endl;
    cout << "Please enter the radius for the first Circle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    x = stod(userInput);
    Circle circleOne(x);
    cout << "Number of shapes created: " << Figure::numCreated << endl;

    cout << "Please enter the radius for the second Circle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    x = stod(userInput);
    Circle circleTwo(x);
    cout << "Number of shapes created: " << Figure::numCreated << endl;

    cout << "Please enter the length for the first Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    x = stod(userInput);

    cout << "Please enter the width for the first Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    y = stod(userInput);

    Rectangle rectangleOne(x, y);

    cout << "Please enter the length for the second Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    x = stod(userInput);

    cout << "Please enter the width for the second Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    y = stod(userInput);

    Rectangle rectangleTwo(x, y);

    cout << "Please enter the length for the third Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    x = stod(userInput);

    cout << "Please enter the width for the third Rectangle: " << endl;
    while(int i = isValid()){
        if(i == 2){
            return 0;
        }
    }
    y = stod(userInput);

    Rectangle rectangleThree(x, y);

    while(triangleValid){
        cout << "Please enter side 1 for the first triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        x = stod(userInput);

        cout << "Please enter side 2 for the first triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        y = stod(userInput);
        cout << "Please enter side 3 for the first triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        z = stod(userInput);
        triangleValid = isValidTriangle();
    }
    Triangle triangleOne(x, y, z);
    cout << "Number of shapes created: " << Figure::numCreated << endl;

    triangleValid = 1;
    while(triangleValid){
        cout << "Please enter side 1 for the second triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        x = stod(userInput);

        cout << "Please enter side 2 for the second triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        y = stod(userInput);
        cout << "Please enter side 3 for the second triangle: " << endl;
        while(int i = isValid()){
            if(i == 2){
                return 0;
            }
        }
        z = stod(userInput);
        triangleValid = isValidTriangle();
    }
    Triangle triangleTwo(x, y, z);

    cout << "Number of shapes created: " << Figure::numCreated << endl;
    cout << "=============CREATING SHAPES END===============" << endl;

    //Calls to the area and perimeter through the toString() calls
    cout << "=============CALCULATING AREA AND PERIMETER START===============" << endl;
    cout << "Circle One: ";
    circleOne.toString();
    cout << "Circle Two: ";
    circleTwo.toString();
    cout << "Rectangle One: ";
    rectangleOne.toString();
    cout << "Rectangle Two: ";
    rectangleTwo.toString();
    cout << "Rectangle Three: ";
    rectangleThree.toString();
    cout << "Triangle One: ";
    triangleOne.toString();
    cout << "Triangle Two: ";
    triangleTwo.toString();
    cout << "=============CALCULATING AREA AND PERIMETER END===============" << endl;

    //Utilizing the assignment operators to set a shape to another shape. Note here there's an assignment operator for each of the shapes
    cout << "=============SETTING ONE FIGURE EQUAL TO ANOTHER FIGURE START===============" << endl;
    cout << "Setting Circle One equal to Circle Two... " << endl;
    circleOne = circleTwo;
    cout << "Circle One: ";
    circleOne.toString();
    cout << "Setting Rectangle One equal to Rectangle Three... " << endl;
    rectangleOne=rectangleThree;
    cout << "Rectangle One: ";
    rectangleOne.toString();
    cout << "Setting Triangle One equal to Triangle Two... " << endl;
    triangleOne = triangleTwo;
    cout << "Rectangle One: ";
    triangleOne.toString();
    cout << "=============SETTING ONE FIGURE EQUAL TO ANOTHER FIGURE END===============" << endl;

    //Automatic deletion of shapes due to them going out of scope. There is no need to delete these manually
    return 0;
}