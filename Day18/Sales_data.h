//Sales_data.h
#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

/**
 * @brief 销售数据
 */
struct Sales_data {
    std::string bookNo; //书名
    unsigned units_sold = 0;
    double revenue = 0.0;
};



#endif