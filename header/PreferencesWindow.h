/* 
 * File:   PreferencesWindow.h
 * Author: cassio
 *
 * Created on July 12, 2014, 9:15 PM
 */

#ifndef PREFERENCESWINDOW_H
#define	PREFERENCESWINDOW_H
#include <gtkmm-3.0/gtkmm.h>

class PreferencesWindow {
public:
    PreferencesWindow();
    virtual ~PreferencesWindow();
private:
    /*
     Create Preferences Window UI
     */
    void createUI();

};

#endif	/* PREFERENCESWINDOW_H */

