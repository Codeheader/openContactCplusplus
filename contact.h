//
// Created by jawid on 5/9/20.
//

#ifndef CLICONTACT_CONTACT_H
#define CLICONTACT_CONTACT_H


#include <string>

class contact {
private:
    std::string mv_first_name;          //first name
    std::string mv_last_name;           //last name
    std::string mv_email = "default";   //email
    std::string mv_address = "default"; //address
    double mv_mobile_number;            //contact number

public:
    //constructors
    contact(std::string fname,double mobile);
    contact(std::string fname,std::string lname, std::string email,std::string add,double mobile);
    //dtor
    ~contact();
    //setters and getters
    void mf_set_first_name(std::string);
    std::string mf_get_first_name()const;
    void mf_set_last_name(std::string);
    std::string mf_get_last_name()const;
    void mf_set_email(std::string);
    std::string mf_get_email()const;
    void mf_set_address(std::string);
    std::string mf_get_address()const;
    void mf_set_mobile_number(double);
    double mf_get_mobile_number()const;

    //display contacts
    void mf_list_contacts();

    //impletment standard input and output istream and ostream
};


#endif //CLICONTACT_CONTACT_H
