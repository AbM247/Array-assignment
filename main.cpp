#include "array.h"
#include "array.cpp"
#include <stdexcept>

int main(){
    //Entire code below opens the A1 input file and puts it into the A1 array
    string myfileN = "A1input.txt"; 
    ifstream myfile;
    myfile.open(myfileN.c_str());
    
    if ( myfile.is_open() ) { 
        for (int i = 0; i < 100; i++) 
        {
            myfile >> A1[i];
        }
        myfile.close();
    }
    else {
        cout << "File not found \n";
    } 

    check();
    

    try {
        add();
    } catch(const exception& e) {
        cerr << "Error occurred: " << e.what() << endl;
    }


    try {
        modify();
        cout << "Modification successful!  " << endl;
    } catch(const exception& e) {
        cerr << "Error occurred: " << e.what() << endl;
    }

    remove();

    return 0;
}

