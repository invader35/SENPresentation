/*
HEADER INFOS
*/

#pragma once

#include <string>
#include <vector>

template <typename T>
class Stock{

    std::string mName;
    T mActualValue;
    std::vector<T> mSharePrice;

public:

    Stock() : mName(), mActualValue(0), mSharePrice(){}
    Stock(std::string name) : mName(name), mActualValue(0), mSharePrice(){}

    void setActualValue(T const & actualValue);
    void setName(std::string const &name);
    
    std::string const &getName() const;
    T const &getActualValue() const;

    void simualteStockDay(T const &changeRate);

};

#include "Stock.impl"