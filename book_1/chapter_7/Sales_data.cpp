#include "Sales_data.hpp"




Sales_data::Sales_data(std::string &isbn, unsigned int n, double p) : isbn(isbn), units_sold(n), revenue(p * n)
{
}

Sales_data::Sales_data(std::string &isbn): isbn(isbn)
{
}

Sales_data::Sales_data(std::istream &is)
{
	read(is, *this);
}


//!!!!!!!!!!!!!


std::string	Sales_data::get_isbn() const{
	return (isbn);
}

Sales_data	&Sales_data::combine(const Sales_data &item)
{
	units_sold	+= item.units_sold;
	revenue		+= item.revenue;
	return (*this);
}

double	Sales_data::avg_price() const
{
	return (revenue / units_sold);
}

std::ostream	&print(std::ostream &os, Sales_data &item)
{
	os << item.get_isbn() << " " << item.units_sold << " "
	<< item.revenue << " " << item.avg_price();
	return os;
}

std::istream	&read(std::istream &is, Sales_data &item)
{
	double price = 0;

	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

Sales_data	add(const Sales_data &lhs, const Sales_data &rhs)
{
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}
