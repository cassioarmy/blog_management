/* 
 * File:   PreferencesWindow.cpp
 * Author: cassio
 * 
 * Created on July 12, 2014, 9:15 PM
 */



#include "PreferencesWindow.h"
#include "Utils.h"

PreferencesWindow::PreferencesWindow() {
    createUI();
}

PreferencesWindow::~PreferencesWindow() {
}

void PreferencesWindow::createUI() {

    Glib::RefPtr<Gtk::Builder> builderPrefs = Gtk::Builder::create();
    try {
        builderPrefs->add_from_file(Utils::getExecutableDirectory() + "/ui/preferences.glade");

    } catch (const Gtk::BuilderError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    } catch (const Glib::FileError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    }

    Gtk::Dialog* dialogPreferences;

    builderPrefs->get_widget("dialogPreferences", dialogPreferences);

    dialogPreferences->set_modal(true);
    dialogPreferences->run();

    delete dialogPreferences;
}


