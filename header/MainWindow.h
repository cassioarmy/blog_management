/* 
 * File:   MainWindow.h
 * Author: cassio
 *
 * Created on July 11, 2014, 9:55 PM
 */

#ifndef MAINWINDOW_H
#define	MAINWINDOW_H

#include <gtkmm-3.0/gtkmm.h>
#include <iostream>
#include "Utils.h"
#include "PreferencesWindow.h"
#include "TreeModelSelectedBlog.h"
#include "BlogUtil.h"

using namespace std;

class MainWindow {
public:
    MainWindow(Glib::RefPtr<Gtk::Application> app);    
    virtual ~MainWindow();
    
    
    
protected:
    void on_quit();
    void onPreferences();
    
private:
    void createUI(Glib::RefPtr<Gtk::Application> app);
    void loadComboBlogs();
    
    Glib::RefPtr<Gtk::Application> applicationWindow;
    
    Gtk::ComboBox comboBlogs;
    
    Glib::RefPtr<Gtk::Builder> refBuilder;
    
    Gtk::ApplicationWindow* appWindow ;
    
    Glib::RefPtr<Gtk::ListStore>  m_refTreeModel;
    
    TreeModelSelectedBlog selectedBlogModel;    
    
    Gtk::ToolItem* itemCombo;
    
    string blogUrl;
    
    string user;
    
    string password;
};

#endif	/* MAINWINDOW_H */

