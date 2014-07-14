/* 
 * File:   BlogUtil.cpp
 * Author: cassio
 * 
 * Created on July 12, 2014, 9:43 PM
 */

#include "../header/BlogUtil.h"

BlogUtil::BlogUtil(string blogUrl, string username, string password) {
    this->blogUrl = blogUrl;
    this->username = username;
    this->password = password;
}

BlogUtil::~BlogUtil() {
}

map<int, string> BlogUtil::getBlogs() {
    
    xmlrpc_c::paramList parametros;
      
    parametros.add(xmlrpc_c::value_string(this->username));
    parametros.add(xmlrpc_c::value_string(this->password));
    
    xmlrpc_c::value resultado = call(parametros, "wp.getUsersBlogs");
    
    
    
    //delete resultado;
}

//http://www.cassiosousa.com.br/blog/xmlrpc.php
xmlrpc_c::value BlogUtil::call(xmlrpc_c::paramList param, string operation){
    
    xmlrpc_c::clientSimple myClient;
     
    xmlrpc_c::value result;
    myClient.call(this->blogUrl, operation ,param, &result);
    // Assume the method returned an integer; throws error if not
    xmlrpc_c::carray arr = xmlrpc_c::value_array(result).cvalue();
    cout << arr.at(0).type();
    xmlrpc_c::cstruct str = xmlrpc_c::value_struct( arr.at(0) ).cvalue();


     string s = xmlrpc_c::value_string( str.at("blogName"));
    //string str = string( xmlrpc_c::value_string( arr[0] ) );
    cout << "Result of RPC (sum of 5 and 7): " << s << endl;
    return result;
}


