#include<iostream>
//#include "all_includes"
#include<bits/stdc++.h>
//#include "user.cpp"
#include "customer.cpp"
#include "database.cpp"
//#include "item.cpp"
#include "moderator.cpp"
#include "shop.cpp"
#include "shopkeeper.cpp"
#include "terminal.cpp"
#include "utilities.cpp"
#include "deliveryboy.cpp"
using namespace std;
// always use this in place of int or long long will be easy to handle
typedef unsigned long long int ulli;
int main()
{
    Customer nivedit;
    string email="nivedit";
    nivedit=get_customer(email);
    cout<<nivedit.name;
}