//
//  filesystem.cpp
//  dos
//
//  Created by Alexander Bladh on 2013-09-25.
//  Copyright (c) 2013 ab. All rights reserved.
//

#include "filesystem.h"

using namespace std;


void dos::start()
{
    
    //add start folders here
    
    cout<<"###################################################\n";
    cout<<"#----Welcome to filesystem by Alexander Bladh-----#\n";
    cout<<"#Use list for commandlist and help for comand help#\n\n\n";
}


void dos::run()
{
    std::string s, func, pram, pram2;
    
    current->path();
    
    cin >> func;
    
    
    if (func == "del") {
        cin >> pram;
        current->remove(pram);
        
    } else if(func == "ls")
    {
        current->show();
    } else if (func == "mkdir")
    {
        cin >> pram;
        current->addfolder(pram);
    }else if(func == "cd")
    {
        cin >> pram;
        if(pram == ".." && current->parent != NULL)
        {
            current = current->parent;
        }else if(current->folderexists(pram))
        {
            if(current->findfolder(pram) != current->folders.end())
                current = &*current->findfolder(pram);
        }
        
    }else if(func == "delf")
    {
        cin >> pram;
        current->removefile(pram);
    }else if(func == "cf")
    {
        cin >> pram;
        cin >> pram2;
        
        
        current->createfile(pram, pram2);
        
    }else if(func == "cat")
    {
        cin >> pram;
        
        current->catfile(pram);
    }else if(func == "list")
    {
        list();
    }else if (func == "help")
    {
        cin >> pram;
        
        help(pram);
        
    }else if(func == "exit")
    {
        
        
        
    }
    
    
}


void dos::help(string s)
{
    
    
    if (s == "del") {
      
        cout<<"del {folder} "<< "delets a folder in the current folder \n";
        
    } else if(s == "ls")
    {
        cout<<"ls"<< "lists all directories in the current folder\n";
    } else if (s == "mkdir")
    {
        cout<<"mkdir {name} "<< "creates a file with name\n";

    }else if(s == "cd")
    {
        cout<<"cd {folder}"<< "moves to folder\n";

    }else if(s == "delf")
    {
        
        cout<<"del {file} "<< "delets a file in the current folder\n";
        
    }else if(s == "cf")
    {
        
        cout<<"cf {name} [content] "<< "creates a file with content\n";

    }else if(s == "cat")
    {
        cout<<"cat {file} "<< "Displays the contet of a file\n";

    }else{
        
        cout<<"Filesystem help menu \n";
        
        cout<<"del {folder} "<< "delets a folder in the current folder \n";
        cout<<"ls"<< "lists all directories in the current folder\n";
        cout<<"mkdir {name} "<< "creates a file with name\n";
        cout<<"cd {folder}"<< "moves to folder\n";
        cout<<"delf {file} "<< "delets a file in the current folder\n";
        cout<<"cf {name} [content] "<< "creates a file with content\n";
        cout<<"cat {file} "<< "Displays the contet of a file\n";
        
    }
}


void dos::list()
{
    
    cout<<"del {folder} \n";
    cout<<"ls\n";
    cout<<"mkdir {name} \n";
    cout<<"cd {folder} \n";
    cout<<"delf {file} \n";
    cout<<"cf {name} [content] \n";
    cout<<"cat {file} \n";
    
}