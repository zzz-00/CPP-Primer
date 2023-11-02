#ifndef SALESITEM_H
// we're here only if SALESITEM_H has not yet been defined
#define SALESITEM_H

// Definition of Sales_item class and related functions goes here
#include <iostream>
#include <string>

class Sales_item
{
    // these declarations are explained section 7.2.1, p. 270
    // and in chapter 14, pages 557, 558, 561
    friend std::istream &operator>>(std::istream &, Sales_item &);
    friend std::ostream &operator<<(std::ostream &, const Sales_item &);
    friend bool operator<(const Sales_item &, const Sales_item &);
    friend bool operator==(const Sales_item &, const Sales_item &);

public:
    // constructors are explained in section 7.1.4, pages 262 - 265
    // default constructor needed to initialize members of built-in type
    Sales_item() = default;
    Sales_item(const std::string &book) : bookNo(book) {}
    Sales_item(std::istream &is) { is >> *this; }

public:
    // operations on Sales_item objects
    // member binary operator: left-hand operand bound to implicit this pointer
    Sales_item &operator+=(const Sales_item &);

    // operations on Sales_item objects
    std::string isbn() const { return bookNo; }
    double avg_price() const;
    // private members as before
private:
    std::string bookNo;      // implicitly initialized to the empty string
    unsigned units_sold = 0; // explicitly initialized
    double revenue = 0.0;
};

#endif
