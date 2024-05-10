#pragma once

using namespace System;
using namespace System::Windows::Forms;

//************************* Sign In Screen*********************
ref class SignIn
{
private:
    String^ userName;
    String^ password;
public:
    SignIn(String^ userName, String^ password);
    SignIn();
    String^ getUserName();
    String^ getPassword();
    void  setUserName(String^ x);
    void setPassword(String^ x);

    bool Authenticate(String^ userName, String^ password);
};
//************************* Personal Information *********************
ref class PersonalInfo {
    private:
        String^ name;
        String^ email;
        String^ gender;
        String^ phone;
        String^ address;
        String^ cnic;

    public:
        // Constructor
        PersonalInfo(String^ _name, String^ _email, String^ _gender, String^ _phone,  String^ _address, String^ _cnic) ;
        PersonalInfo();
        // Accessors
        String^ getName();
        String^ getEmail();
        String^ getPhone();
        String^ getGender();
        String^ getAddress();
        String^ getCnic();

        // Modifiers
        void setName(String^ _name);
        void setEmail(String^ _email);
        void setGender(String^ _gender);
        void setPhone(String^ _phone);
        void setAddress(String^ _address);
        void setCnic(String^ _cnic);
};
