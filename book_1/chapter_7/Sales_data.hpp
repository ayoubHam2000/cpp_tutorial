#ifndef SALES_DATA_HPP
#define SALES_DATA_HPP

#include <iostream>

class	Sales_data
{
private:
	std::string	bookNo;
	std::string	isbn;
	unsigned int units_sold = 1956;
	double	revenue = 0.0;

public:
	Sales_data() = default;
	Sales_data(std::string &isbn, unsigned int n, double p);
	Sales_data(std::string &isbn);
	Sales_data(std::istream &);

	std::string	get_isbn() const;
	Sales_data	&combine(const Sales_data &);
	double	avg_price() const;

friend std::ostream	&print(std::ostream &os, Sales_data &item);
friend std::istream	&read(std::istream &is, Sales_data &item);
friend Sales_data	add(const Sales_data &lhs, const Sales_data &rhs);

};

std::ostream	&print(std::ostream &out, Sales_data &obj);
std::istream	&read(std::ostream &in, Sales_data &obj);

#endif
