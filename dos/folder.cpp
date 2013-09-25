//
//  folder.cpp
//  dos
//
//  Created by Alexander Bladh on 2013-09-25.
//  Copyright (c) 2013 ab. All rights reserved.
//

#include "folder.h"


using namespace std;



void folder::path()
{
    if(parent != NULL) // om det finns en övre mapp
    {
        parent->path(); // visa den först
    }
    
    cout<< name << "/";
    
}


void folder::show() 
{
    for (vector<folder>::const_iterator iter = folders.begin(); iter != folders.end(); iter++)
    {
        cout << iter->name << "  ";
    }
    
    for (vector<file>::const_iterator iter = filer.begin(); iter != filer.end(); iter++)
    {
        cout << iter->name << "  ";
    }
    
    cout<<"\n";
    
}


void folder::remove(string path)
{
    vector<folder>::iterator it = find(folders.begin(), folders.end(), path);
    if(it != folders.end())
    {
        folders.erase(it);
    }else
        cout<<"Folder not found \n";
}

void folder::removefile(string path)
{
    vector<file>::iterator it = find(filer.begin(), filer.end(), path);
    if(it != filer.end())
    {
        filer.erase(it);
    }else
        cout<<"File not found \n";
    
}

void folder::addfolder(folder f)
{
    folders.push_back(f);
}

void folder::addfolder(string name)
{
    folder f(this, name);
    folders.push_back(f);
}


bool folder::folderexists(string path)
{
    vector<folder>::iterator it = find(folders.begin(), folders.end(), path);
    return it!=folders.end();
}

vector<folder>::iterator folder::findfolder(string path)
{
    return find(folders.begin(), folders.end(), path);
}


void folder::createfile(std::string name, std::string content)
{
    
    file f(name,content);
    
    filer.push_back(f);
    
    
}


void folder::catfile(string f)
{
    
    vector<file>::iterator it = find(filer.begin(), filer.end(), f);
    if(it != filer.end())
    {
        it->show();
    }else
        cout<<"File not found \n";
    
}
