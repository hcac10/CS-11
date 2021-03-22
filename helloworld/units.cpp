#include <iostream>
#include <string>
#include "units.h"

using namespace std;

UValue::UValue(){
    value = 0.0;
    units = "";
}
UValue::UValue(double value, string units){
    this->value = value;
    this->units = units;
}

string UValue::get_units(){
    return units;
}

double UValue::get_value(){
    return value;
}

UValue convert_to(UValue input, string to_units){
    UValue final;
    if(input.get_units == "lb" && to_units == "kg"){
        UValue final{input.get_value * 0.45, to_units};
    }
    if(input.get_units == "gal" && to_units == "L"){
        UValue final{input.get_value * 3.79, to_units};
    }
    if(input.get_units == "mi" && to_units == "km"){
        UValue final{input.get_value * 1.6, to_units};
    }
    else{
        return input.get_value;
    }
    return final;
}