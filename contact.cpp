//
// Created by jawid on 5/9/20.
//
#include <iostream>
#include <iomanip>
#include "contact.h"

contact::contact(){}
contact::contact(std::string fname, double mobile) {
    mv_first_name = fname;
    mv_mobile_number = mobile;
}

contact::contact(std::string fname, std::string lname, std::string email, std::string add, double mobile) {
    mv_first_name = fname;
    mv_last_name = lname;
    mv_email = email;
    mv_address = add;
    mv_mobile_number = mobile;
}

contact::~contact() {

}

void contact::mf_list_contacts() {
    std::cout << "first name :"<<std::setw(9) << mv_first_name << '\n'
              << "Last Name :"<<std::setw(12) << mv_last_name << '\n' << "Mobile Number :"<<std::setw(7) << mv_mobile_number << std::endl;
}

void contact::mf_set_first_name(std::string s) {
    mv_first_name = s;
}
std::string contact::mf_get_first_name() const {
    return mv_first_name;
}

void contact::mf_set_last_name(std::string s) {
    mv_last_name = s;
}
std::string contact::mf_get_last_name() const {
    return mv_last_name;
}

void contact::mf_set_email(std::string s) {
    mv_email = s;
}
std::string contact::mf_get_email() const {
    return mv_email;
}

void contact::mf_set_address(std::string s) {
    mv_address = s;
}
std::string contact::mf_get_address() const {
    return mv_address;
}

void contact::mf_set_mobile_number(double d) {
    mv_mobile_number = d;
}
double contact::mf_get_mobile_number() const {
    return mv_mobile_number;
}

//implementatio of std::ostream
std::ostream& operator<<(std::ostream& os, const contact& c){
	os << "first name :"<<c.mv_first_name<<"\n"
		<<"last name :"<<c.mv_last_name << "\n"
		<<"email :"<<c.mv_email<<"\n"
		<<"address :"<< c.mv_address <<"\n"
		<<"mobile :"<<c.mv_mobile_number
		<<std::endl;
	return os;
}

//implementation of std::istream
std::istream& operator>>(std::istream& in, contact& c)
{
	in >> c.mv_first_name >> c.mv_last_name 
		>> c.mv_email >>c.mv_address
		>> c.mv_mobile_number;
	return in;
}

