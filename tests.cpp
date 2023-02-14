#include <iostream> 
#include <fstream> 
#include "bar.h" 
#include "barchart.h"  
#include <sstream>
#include "barchartanimate.h"

using namespace std; 

//This .cpp file contains UNIT TESTS that test each public member function from 
// bar.h, barchart.h, and barchartanimate.h header files. The way that each test 
// is executed is by using a boolean function to test the expected outputs for each 
//function. 

bool BarPublicDefaultConstructor() 
{ 
    Bar bc;  

    if(bc.getName() != "") { 
        cout << "Default bar constructor test case failed." << endl; 
        return false; 
    } else if (bc.getValue() != 0) {  
        cout << "Default bar constructor test case failed." << endl; 
        return false;
    } else if (bc.getCategory() != "") { 
        cout << "Default bar constructor test case failed." << endl;
        return false; 
    }
    cout << "UNIT TEST 1: ALL DEFAULT CONSTRUCTORS TEST CASES PASSED!" << endl;
    return true;
    

    
} 

bool BarPublicParameterizedConstructor() 
{ 
    
    Bar bc("Chicago", 7734519, "US"); 

     if(bc.getName() != "Chicago") { 
        cout << "Parameterized bar constructor test case getName() failed." << endl; 
         
    } else if (bc.getValue() != 7734519) {  
        cout << "Parameterized bar constructor test case getValue() failed." << endl; 
    } else if (bc.getCategory() != "US") { 
        cout << "Default bar constructor test case getValue() failed." << endl;
        return false; 
    }
    cout << "UNIT TEST 2A: ALL PARAMETERIZED CONSTRUCTORS TEST CASES PASSED!" << endl;
    return true;
    

    
}   

bool BarPublicParameterizedConstructor2() 
{ 
    Bar bc2("Atlanta", 19822, "Georgia"); 

    if(bc2.getName() != "Atlanta") { 
        cout << "Parameterized Bar Constructor Test Case 1 Failed!" << endl; 
        return false;
    } 
    
   else if(bc2.getValue() != 19822) { 
        cout << "Parameterized Bar Constructor Test Case 2 Failed!" << endl; 
        return false;
         
    } 
    else if(bc2.getCategory() != "Georgia") { 
        cout << "Parameterized Bar Constructor Test Case 3 Failed!" << endl; 
        return false; 
    } 
    cout << "UNIT TEST 2B: ALL PARAMETERIZED TEST CASES PASSED!" << endl; 
    return true;

}

bool BarOperatorTest1A() 
{ 
    Bar Naperville("Naperville", 147734, "Illinois"); 
    Bar Skokie("Skokie", 63000, "Illinois");  
    Bar Niles("Niles", 29198, "Illinois"); 

    //
    if(Skokie < Naperville != true) { 
        cout << "< Bar Operator Test Case 1 failed" << endl; 
        return false; 
    }  else if(Niles < Skokie != true) { 
        cout << "< Bar Operator Test Case 2 failed." << endl;
        return false;
    } 

    cout << "UNIT TEST 3A: ALL OPERATOR 1 < TEST CASES PASSED!" << endl; 
    return true;


} 

bool BarOperatorTest1B()
{ 
    Bar Nike("Nike", 123000111, "Shoes"); 
    Bar UA("Under Armour", 879966, "Shoes"); 
    Bar Adidas("Adidas", 765434, "Shoes"); 

    if(UA < Nike != true) { 
        cout << "Bar Operator Test Case 3 Failed" << endl; 
        return false;
    } else if (Adidas < UA != true) { 
        cout << "Bar Operator Test Case 4 Failed" << endl; 
    }  
    cout << "UNIT TEST 3B: All OPERATOR < TEST CASES PASSED!" << endl; 
    return true; 
}

bool BarOperatorTest2() 
{ 
    Bar Naperville("Naperville", 147734, "Illinois"); 
    Bar Skokie("Skokie", 63000, "Illinois");  
    Bar Niles("Niles", 29198, "Illinois"); 

    //
    if(Naperville > Skokie != true) { 
        cout << "> Bar Operator Test Case 1 failed" << endl; 
        return false; 
    }  else if(Skokie > Niles != true) { 
        cout << "> Bar Operator Test Case 2 failed." << endl;
        return false;
    } 

    cout << "UNIT TEST 4: ALL OPERATOR 2 > TEST CASES PASSED!" << endl; 
    return true;


}
bool BarOperatorTest3() 
{ 
    Bar Naperville("Naperville", 147734, "Illinois"); 
    Bar Lisle("Lisle", 147734, "Illinois");  
    Bar Niles("Niles", 29198, "Illinois"); 

    //
    if(Naperville >= Lisle != true) { 
        cout << ">= Bar Operator Test Case 1 failed" << endl; 
        return false; 
    }  else if(Lisle > Niles != true) { 
        cout << ">= Bar Operator Test Case 2 failed." << endl;
        return false;
    } 

    cout << "UNIT TEST 5: ALL OPERATOR 3 >= TEST CASES PASSED!" << endl; 
    return true;


}
bool BarOperatorTest4() 
{ 
    Bar Naperville("Naperville", 147734, "Illinois"); 
    Bar Skokie("Skokie", 63000, "Illinois");  
    Bar Niles("Niles", 29198, "Illinois"); 

    //
    if(Skokie <= Skokie != true) { 
        cout << "> Bar Operator Test Case 1 failed" << endl; 
        return false; 
    }  else if(Niles <= Skokie != true) { 
        cout << "> Bar Operator Test Case 2 failed." << endl;
        return false;
    } 

    cout << "UNIT TEST 6: ALL OPERATOR 4 <= TEST CASES PASSED!" << endl; 
    return true;


} 

bool BarChartDefaultConstructor() 
{ 
    BarChart bc; 

    if(bc.getSize() != 0) { 
        cout << "BarChartDefaultConstructor Test Case 1 Failed." << endl;  
        return false;
    } else if(bc.getFrame() != "") { 
        cout << "BarChartDefaultConstructor Test Case 2 Failed." << endl; 
        return false; 
    } 
    cout << "UNIT TEST 7: ALL BarChart Default Constructor Test Cases Passed!" << endl; 
    return true;
} 

bool BarChartParamConstructor() 
{ 
    BarChart bc(15);  

    if(bc.getSize() != 0) { 
        cout << "BarChartDefaultConstructor Test Case 1 Failed." << endl;  
        return false;
    } else if(bc.getFrame() != "") { 
        cout << "BarChartDefaultConstructor Test Case 2 Failed." << endl; 
        return false; 
    } 
    cout << "UNIT TEST 8: ALL BarChart Parameterized Constructor Test Cases Passed!" << endl; 
    return true;


} 

bool BarChartAddBar() 
{ 
    BarChart bc(12); 

    bc.addBar("Little Italy", 23972, "Chicago");
    bc.addBar("Gold Coast", 14793, "Chicago");
    bc.addBar("Austin", 97643, "Chicago"); 

    if(bc.getSize() != 3) { 
        cout << "AddBar Test Case 1 Failed." << endl;
        return false;
    }  
    else if(bc[0].getName() != "Little Italy") 
    { 
        cout << "AddBar Test Case 2 Failed." << endl; 
        return false; 
    } else if(bc[0].getValue() != 23972) { 
        cout << "AddBar Test Case 3 Failed." << endl; 
        return false;
    } else if(bc[0].getCategory() != "Chicago") {  
        cout << "Addbar Test Case 4 Failed. " << endl; 
        return false; 
    } else if(bc[1].getName() != "Gold Coast") 
    { 
        cout << "AddBar Test Case 5 Failed." << endl; 
        return false; 
    } else if(bc[1].getValue() != 14793) { 
        cout << "AddBar Test Case 6 Failed." << endl; 
        return false;
    } else if(bc[1].getCategory() != "Chicago") {  
        cout << "Addbar Test Case 7 Failed. " << endl; 
        return false; 
    } else if(bc[2].getName() != "Austin") 
    { 
        cout << "AddBar Test Case 8 Failed." << endl; 
        return false; 
    } else if(bc[2].getValue() != 97643) { 
        cout << "AddBar Test Case 9 Failed." << endl; 
        return false;
    } else if(bc[2].getCategory() != "Chicago") {  
        cout << "Addbar Test Case 10 Failed. " << endl; 
        return false; 
    } else 
    cout << "UNIT TEST 9: ALL BarChart AddBar Test Cases Passed!" << endl; 
    return true; 
}  

bool BarChartCopyConstructor() 
{ 
    BarChart bc(12); 

    bc.addBar("Little Italy", 23972, "Chicago");
    bc.addBar("Gold Coast", 14793, "Chicago");
    bc.addBar("Austin", 97643, "Chicago");  

    BarChart copyOfbc(bc);

    if(copyOfbc.getSize() != 3) { 
        cout << "BarChart Copy Constructor Test Case 1 Failed." << endl;
        return false;
    }  else if(copyOfbc[0].getName() != "Little Italy") 
    { 
        cout << "BarChart Copy Constructor Test Case 2 Failed." << endl; 
        return false; 
    } else if(copyOfbc[0].getValue() != 23972) { 
        cout << "BarChart Copy Constructor Test Case 3 Failed." << endl; 
        return false;
    } else if(copyOfbc[0].getCategory() != "Chicago") {  
        cout << "BarChart Copy Constructor Test Case 4 Failed. " << endl; 
        return false; 
    } else if(copyOfbc[1].getName() != "Gold Coast") 
    { 
        cout << "BarChart Copy Constructor Test Case 5 Failed." << endl; 
        return false; 
    } else if(copyOfbc[1].getValue() != 14793) { 
        cout << "BarChart Copy Constructor Test Case 6 Failed." << endl; 
        return false;
    } else if(copyOfbc[1].getCategory() != "Chicago") {  
        cout << "BarChart Copy Constructor Test Case 7 Failed. " << endl; 
        return false; 
    } else if(copyOfbc[2].getName() != "Austin") 
    { 
        cout << "BarChart Copy Constructor Test Case 8 Failed." << endl; 
        return false; 
    } else if(copyOfbc[2].getValue() != 97643) { 
        cout << "BarChart Copy Constructor Test Case 9 Failed." << endl; 
        return false;
    } else if(copyOfbc[2].getCategory() != "Chicago") {  
        cout << "BarChart Copy Constructor Test Case 10 Failed. " << endl; 
        return false; 
    } else 
    cout << "UNIT TEST 10: ALL BarChart Copy Constructor Test Cases Passed!" << endl; 
    return true; 
} 

bool BarChartCopyOperator() 
{ 
    BarChart bc1(12); 
    bc1.addBar("Little Italy", 23972, "Chicago");
    bc1.addBar("Gold Coast", 14793, "Chicago");
    bc1.addBar("Austin", 97643, "Chicago");  
    
    BarChart bc2; 
    bc2 = bc1;  

    if(bc2.getSize() != 3) { 
        cout << "BarChart Copy Operator Test Case 1 Failed." << endl;
        return false;
    }  
    else if(bc2[0].getName() != "Little Italy") 
    { 
        cout << "BarChart Copy Operator Test Case 2 Failed." << endl; 
        return false; 
    } else if(bc2[0].getValue() != 23972) { 
        cout << "BarChart Copy Operator Test Case 3 Failed." << endl; 
        return false;
    } else if(bc2[0].getCategory() != "Chicago") {  
        cout << "BarChart Copy Operator Test Case 4 Failed. " << endl; 
        return false; 
    } else if(bc2[1].getName() != "Gold Coast") 
    { 
        cout << "BarChart Copy Operator Test Case 5 Failed." << endl; 
        return false; 
    } else if(bc2[1].getValue() != 14793) { 
        cout << "ABarChart Copy Operator Test Case 6 Failed." << endl; 
        return false;
    } else if(bc2[1].getCategory() != "Chicago") {  
        cout << "BarChart Copy Operator Test Case 7 Failed. " << endl; 
        return false; 
    } else if(bc2[2].getName() != "Austin") 
    { 
        cout << "ABarChart Copy Operator Test Case 8 Failed." << endl; 
        return false; 
    } else if(bc2[2].getValue() != 97643) { 
        cout << "BarChart Copy Operator Test Case 9 Failed." << endl; 
        return false;
    } else if(bc2[2].getCategory() != "Chicago") {  
        cout << "BarChart Copy Operator Test Case 10 Failed. " << endl; 
        return false; 
    } else 
    cout << "UNIT TEST 11: ALL BarChart Copy Operator Test Cases Passed!" << endl; 
    return true; 
} 

bool BarChartClear() 
{ 
    BarChart bc1(12); 
    bc1.addBar("Little Italy", 23972, "Chicago");
    bc1.addBar("Gold Coast", 14793, "Chicago");
    bc1.addBar("Austin", 97643, "Chicago");   

    bc1.clear();  

    if(bc1.getSize() != 0) { 
        cout << "BarChart Clear Test Case 1 Failed." << endl; 
        return false; 
    } 
    cout << "UNIT TEST 12: ALL BarChart Clear Test Cases Passed!" << endl; 
    return true;


} 

bool BarChartSetGetFrame() 
{ 
    BarChart bc;  
    bc.setFrame("2000");  

    if(bc.getFrame() != "2000") { 
        cout << "BarChartSetGetFrame Test Case 1 Failed." << endl; 
        return false;
    } 

    bc.setFrame("Back in the Middle Ages...");  

    if(bc.getFrame() != "Back in the Middle Ages...") { 
        cout << "BarChartSetGetFrame Test Case 2 Failed." << endl; 
        return false;
    } 
    cout << "UNIT TEST 13: ALL BarChart SetGetFrame Test Cases Passed!" << endl; 
    return true;

} 

bool BarChartDump() 
{ 
    //TEST CASE 1
    BarChart bc(10); 

    bc.addBar("Chicago", 1020, "US");
    bc.setFrame("");
    stringstream ss("");
    bc.dump(ss);   

   
    //TEST CASE 2
    BarChart newbc(2); 
    newbc.addBar("Chicago", 1020, "US"); 
    newbc.addBar("NYC", 2020, "US"); 
    newbc.setFrame("1950"); 

    stringstream ss1(""); 
    newbc.dump(ss1);  
     if(ss.str() != "frame: \nChicago 1020 US\n"){ 
        cout << "BarChart Dump Test Case 1 Failed." << endl;
        cout << ss.str() << endl;
        return false;
    } else if(ss1.str() != "frame: 1950\nNYC 2020 US\nChicago 1020 US\n") { 
        cout << "BarChart Dump Test Case 2 Failed." << endl; 
        cout << ss1.str() << endl;

        return false;

    } 
    cout << "UNIT TEST 14: ALL BarChart Dump Test Cases Passed!" << endl; 
    return true;

} 

//barchartanimate.h tests  

//Test for getting all of the data in a text file and creating frames for each
//set of data in the file
bool addFrameFullFile() { 
    string filename = "cities.txt"; 
    ifstream inFile(filename); 
    string title; 
    getline(inFile, title); 
    string xlabel; 
    getline(inFile, xlabel); 
    string source; 
    getline(inFile, source); 
    
    BarChartAnimate bca(title, xlabel, source);
    while(!inFile.eof()) { 
        bca.addFrame(inFile);
    }
    if(bca.getSize() != 519){ 
        cout << "Test Case for adding full file of frame failed!" << endl; 
        return false;
    } 
   // bca.animate(cout , 12 , -1);//apply in case for visual test
    cout << "UNIT TEST 15: TEST CASE PASSED!" << endl;
    return true;

}
//Tests for if addFrame is capable of only getting a margin of given text file 
//and still storing the range as frames
bool addFrameIterations() { 
    string filename = "cities.txt"; 
    ifstream inFile(filename); 
    string title; 
    getline(inFile, title); 
    string xlabel; 
    getline(inFile, xlabel); 
    string source; 
    getline(inFile, source); 
    
    BarChartAnimate bca(title, xlabel, source);
    int count = 0; 
    while(count < 55) { 
        bca.addFrame(inFile); 
        count++;
    }
    if(bca.getSize() != 55){ 
        cout << "Test Case for adding file of fixed size in frame failed!" << endl;
        return false;
    }
    cout << "UNIT TEST 16: TEST CASE PASSED!" << endl; 
    return true;

}






int main() 
{ 
    //Bar.h tests  
    BarPublicDefaultConstructor();  
    BarPublicParameterizedConstructor(); 
    BarPublicParameterizedConstructor2();
    BarOperatorTest1A(); // <
    BarOperatorTest1B(); // <
    BarOperatorTest2(); // >
    BarOperatorTest3(); // >=
    BarOperatorTest4(); // <= 

    //barchart.h tests  
    BarChartDefaultConstructor();  
    BarChartParamConstructor(); 
    BarChartAddBar(); 
    BarChartCopyConstructor(); 
    BarChartCopyOperator();
    BarChartClear();   
    BarChartSetGetFrame();
    BarChartDump();  


    //barchartanimate.h tests 
    addFrameFullFile();
    addFrameIterations();

}