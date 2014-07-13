/* 
 * File:   TreeModelSelectedBlog.h
 * Author: cassio
 *
 * Created on July 12, 2014, 10:59 PM
 */

#ifndef TREEMODELSELECTEDBLOG_H
#define	TREEMODELSELECTEDBLOG_H

#include <gtkmm-3.0/gtkmm.h>

class TreeModelSelectedBlog : public Gtk::TreeModel::ColumnRecord{
public:
    TreeModelSelectedBlog();
    virtual ~TreeModelSelectedBlog();
    Gtk::TreeModelColumn<int> id;
    Gtk::TreeModelColumn<Glib::ustring> label;
    
};

#endif	/* TREEMODELSELECTEDBLOG_H */

