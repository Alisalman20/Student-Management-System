#pragma once
#include "SignIn.h"
#include<string>
using namespace System;


//**************************  Sign In Definations ***************************
SignIn::SignIn(String^ userName, String^ password): userName(userName), password(password) {}
SignIn::SignIn():userName(""),password(""){}
bool SignIn::Authenticate(String^ userName, String^ password)
{
    return (this->userName->Equals(userName) && this->password->Equals(password));
}
String^ SignIn::getUserName() { return userName; }
String^ SignIn::getPassword() { return password; }
void SignIn::setUserName(String^ x) { userName = x; }
void SignIn::setPassword(String^ x) { password = x; }

//************************ Personal Info Definations ****************************

PersonalInfo::PersonalInfo(String^ _name, String^ _email, String^ _gender, String^ _phone,  String^ _address, String^ _cnic) 
    : name(_name), email(_email),gender(_gender), phone(_phone), address(_address), cnic(_cnic) {}
PersonalInfo::PersonalInfo() : name(""), email(""), gender(""), phone(""), address(""), cnic("") {}
String^ PersonalInfo::getName() { return name; }
String^ PersonalInfo::getEmail()  { return email; }
String^ PersonalInfo::getPhone()  { return phone; }
String^ PersonalInfo::getGender()  { return gender; }
String^ PersonalInfo::getAddress()  { return address; }
String^ PersonalInfo::getCnic()  { return cnic; }

void PersonalInfo::setName(String^ _name) { name = _name; }
void PersonalInfo::setEmail(String^ _email) { email = _email; }
void PersonalInfo::setPhone(String^ _phone) { phone = _phone; }
void PersonalInfo::setGender(String^ _gender) { gender = _gender; }
void PersonalInfo::setAddress(String^ _address) { address = _address; }
void PersonalInfo::setCnic(String^ _cnic) { cnic = _cnic; }
