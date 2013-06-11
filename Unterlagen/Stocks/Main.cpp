/*
Header Infos
*/


#include <iostream>
#include <string>
#include "Stock.h"

using namespace std;

bool TestGetName(){
    string name = "SuperAktie";
    
    Stock<double> stock(name);
    return ( stock.getName() == name );
}

bool TestSetName(){
    string name = "SuperAktie";
    
    Stock<double> stock;
    stock.setName(name);
    return ( stock.getName() == name );
}

bool TestGetActualValue(){
    double actualValue = 1.0;

    Stock<double> stock;
    stock.setActualValue(actualValue);
    return ( stock.getActualValue() == actualValue );
}

bool TestSimulate(){
    double actualValue = 1.0;
    double changeRate = 2.0;
    double result = 1.0 * 2.0;

    Stock<double> stock("Hans");
    stock.setActualValue(actualValue);
    stock.simualteStockDay(changeRate);

    return ( stock.getActualValue() == result );

}

int main(){

    cout << std::boolalpha << "TestGetName() =" << TestGetName() << endl;
    cout << "TestGetActualValue() =" << TestGetActualValue() << endl;
    cout << "TestSetName() =" << TestSetName() << endl;
    cout << "TestSimulate() =" << TestSimulate() << endl;

    cin.get();
    return 0;
}