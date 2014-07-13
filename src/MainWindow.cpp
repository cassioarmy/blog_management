/* 
 * File:   MainWindow.cpp
 * Author: cassio
 * 
 * Created on July 11, 2014, 9:55 PM
 */

#include "../header/MainWindow.h"


MainWindow::MainWindow(Glib::RefPtr<Gtk::Application> app) {
    this->applicationWindow = app;
    createUI(app);
    loadComboBlogs();
}

MainWindow::~MainWindow() { 
    delete selectedBlog;
    delete appWindow;
}

void MainWindow::createUI(Glib::RefPtr<Gtk::Application> app) {

    string directoryUI = Utils::getExecutableDirectory();
    this->refBuilder = Gtk::Builder::create();
    try {
        string file = directoryUI + "/ui/main.glade";

        refBuilder->add_from_file(file);

    } catch (const Gtk::BuilderError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    } catch (const Glib::FileError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    }

    refBuilder->get_widget("mainWindow", appWindow);
    cout << app->register_application();

    try {

        Glib::RefPtr<Gtk::Builder> builderAppMenu = Gtk::Builder::create();
        builderAppMenu->add_from_file(directoryUI + "/ui/appmenu.ui");

        Glib::RefPtr<Gio::MenuModel> appMenu = Glib::RefPtr<Gio::MenuModel>::cast_static(builderAppMenu->get_object("appmenu"));
        app->set_app_menu(appMenu);

        app->add_action("quit", sigc::mem_fun(*this, &MainWindow::on_quit));
        app->add_action("preferences", sigc::mem_fun(*this, &MainWindow::onPreferences));

    } catch (const Gtk::BuilderError& ex) {
        std::cerr << "FileError: " << ex.what() << std::endl;
    } catch (const Glib::FileError& ex) {
        cerr << "FileError: " << ex.what() << std::endl;
    }


    //load css
    Glib::RefPtr<Gtk::CssProvider> cssProvider = Gtk::CssProvider::create();
    cssProvider->load_from_path(directoryUI + "/ui/style.css");


    Glib::RefPtr<Gtk::StyleContext> styleContext = Gtk::StyleContext::create();


    Glib::RefPtr<Gdk::Screen> screen = Gdk::Screen::get_default();

    styleContext->add_provider_for_screen(screen, cssProvider, GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
    app->run(*appWindow);

}

void MainWindow::loadComboBlogs() {
    
    this->refBuilder->get_widget("selectedBlog",selectedBlog) ;
    
    //this->comboBlogs = Glib::RefPtr<Gtk::ComboBox>::cast_static( this->refBuilder->get_object("cbxSelectedBlog") );
    
    this->m_refTreeModel = Gtk::ListStore::create(this->selectedBlogModel);
    this->comboBlogs.set_model(m_refTreeModel); 
    
    //Glib::RefPtr<Gtk::TreeModel> modelCombo = Gtk::TreeStore::create(selectedBlogModel);
    Gtk::TreeModel::Row row = *(m_refTreeModel->append());
    row[selectedBlogModel.id] = 1;
    row[selectedBlogModel.label] = "Teste";
    
   this->comboBlogs.set_active(row);
   
   this->comboBlogs.pack_start(selectedBlogModel.id);
   this->comboBlogs.pack_start(selectedBlogModel.label);
   
   
   //selectedBlog->add(this->comboBlogs);
   
   //selectedBlog->show_all_children();
   
   /*Glib::RefPtr<Gtk::ScrolledWindow> scrool = Glib::RefPtr<Gtk::ScrolledWindow>::cast_static( this->refBuilder->get_object("scrolledwindow") );
   scrool->add(this->comboBlogs);
   scrool->show_all();
   */
}


void MainWindow::on_quit() {
    this->applicationWindow->quit();
}

void MainWindow::onPreferences() {
    PreferencesWindow preference;
}


