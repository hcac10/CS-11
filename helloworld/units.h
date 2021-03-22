#include <iostream>
#include <string>


using namespace std;

//Classs to create object that represents value with units
class UValue{
    // value represents numeric value
    double value;
    // value represemts units for value
    string units;
    
    public:
    UValue();
    UValue(double value, string units);
    //returns value of UValue
    double get_value();
    //returns units of UValue
    string get_units();
};
//converts UValue to UValue with different units
UValue convert_to(UValue input, string to_units);


