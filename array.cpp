#include "array.h"


using namespace std;

int A1[100]; //Array of size 100


int check(){
    int findX; 
    cout << "Enter the number you wish to find: ";
    cin >> findX; // User input for variable findX to find the number that they want the postion for
    for(int v; v < 100; v++){ //For loop going through the array
        if (findX == A1[v]){ //If the loop finds the number prints out the postion
            cout << "Postion is: " << v << endl;
        }

    }
    return 0;
}

int modify(){
    int index; 
    int oldX;
    int NewN;
    
    cout << "Postion of number you wish to change: ";
    cin >> index; //User input for the postion of what they want to change
    cout << "New number you would like in the postion: ";
    cin >> NewN; // User input for the new number they want at the postion
    oldX = A1[index]; //oldX saves the number at the postion 
    
    A1[index] = NewN; //Overwrites the number at the postion with the new number
    
    cout << "New number: " << NewN<< endl;
    cout << "Old Number: " << oldX<< endl;
    return 0; 
}

void add(){
    int addX;
    cout << "New number you would like to add: ";
    cin >> addX ; //User input for new number to add
    A1[100] = addX; //Adds new number at the end
    
    for(int m; m < 100; m++){ //Prints entire array
        cout << A1[m]<<','<< endl;
 }

}

void remove(){
    int index;
    cout << "Postion of the number you wish to remove: ";
    cin >> index; //User in put for postion they want to "remove"
    A1[index] = 0; //Changes postion to 0
    for(int m; m < 100; m++){ //Prints entire array
        cout << A1[m]<<',';
 }
}



