/* 
 * File:   main.cpp
 * Author: cassio
 *
 * Created on July 9, 2014, 10:01 PM
 */

#include <iostream>

#include "../header/Utils.h"
#include "../header/MainWindow.h"
#include "../header/BlogUtil.h"
using namespace std;

int main(int argc, char **argv) {
    
      /*string const serverUrl("http://localhost:8080/RPC2");
      string const methodName("sample.add");

      xmlrpc_c::clientSimple myClient;
      xmlrpc_c::value result;

      myClient.call(serverUrl, methodName, "ii", &result, 5, 7);

      int const sum((xmlrpc_c::value_int(result)));
          // Assume the method returned an integer; throws error if not

      cout << "Result of RPC (sum of 5 and 7): " << sum << endl;*/
    /*
      string const serverUrl("http://www.cassiosousa.com.br/blog/xmlrpc.php");
      string const methodName("wp.getUsersBlogs");

      xmlrpc_c::clientSimple myClient;
      xmlrpc_c::value result;
      
      xmlrpc_c::paramList parametros;
      
      parametros.add(xmlrpc_c::value_string("cassiosousa"));
      parametros.add(xmlrpc_c::value_string("86alexandre"));

      myClient.call(serverUrl, methodName,parametros, &result);

     
          // Assume the method returned an integer; throws error if not
      xmlrpc_c::carray arr = xmlrpc_c::value_array(result).cvalue();
      cout << arr.at(0).type();
      xmlrpc_c::cstruct str = xmlrpc_c::value_struct( arr.at(0) ).cvalue();
    
      
       string s = xmlrpc_c::value_string( str.at("blogName"));
      //string str = string( xmlrpc_c::value_string( arr[0] ) );
      cout << "Result of RPC (sum of 5 and 7): " << s << endl;
      */
      
      Glib::RefPtr<Gtk::Application> app = Gtk::Application::create(argc, argv, "org.gtkmm.pressmanager");
     
      MainWindow* appWindow = new MainWindow(app); 
      
      delete appWindow;
        //Get the GtkBuilder-instantiated Button, and connect a signal handler:
        /*Gtk::Button* pButton = 0;
        refBuilder->get_widget("quit_button", pButton);
        if(pButton)
        {
          pButton->signal_clicked().connect( sigc::ptr_fun(on_button_clicked) );
        }*/
        //cout << appMenu->get_n_items();
        //Glib::RefPtr<Gio::MenuAttributeIter>  att = appMenu->iterate_item_attributes(0);
        //cout << att->get_name();
          
        /*Glib::RefPtr<Gio::SimpleAction> actionQuit =
        Gio::SimpleAction::create("quit");
        //actionQuit->signal_activate()->connect(sigc::mem_fun(*this, &Main::on_quit));
        app->add_action(actionQuit);
        
        
        Glib::RefPtr<Gio::SimpleAction> actionPref =
        Gio::SimpleAction::create("preferences");
        //actionPref->signal_activate()->connect(sigc::mem_fun(*this, &Main::on_quit));
        app->add_action(actionPref);*/
      //cout << Utils::getExecutablePath();
      //cout << Utils::getExecutableDirectory();
      
   // BlogUtil blog("http://www.cassiosousa.com.br/blog/xmlrpc.php","user","pass");
    //blog.getBlogs();
      return 0;
}

