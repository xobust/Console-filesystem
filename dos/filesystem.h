//
//  filesystem.h
//  dos
//
/*
 
    Kontroll/data Klass
 
    Filsystemsklassen inehåller root mapen och 
    skjöter uptagningen av commandon.
 
 
 */
//  Created by Alexander Bladh on 2013-09-25.
//  Copyright (c) 2013 ab. All rights reserved.
//


#ifndef dos_filesystem_h
#define dos_filesystem_h

#include "folder.h"


class dos
{
    // Huvud mapp
    // Alla mappar är sparade i denna mapp
    folder root;
    
    
    // Pekare till den mappen du befiner dig i.
    folder * current;
public:
    
    //skapar mappen root utan någon 
    //överliggande mapp
    dos():root(NULL,"root"),current(&root)
    {
    }
    
    // Fint startmedelande
    void start();
    
    // Kolla efter input
    // och kör valda comandon
    void run();
    
    //Hjälp för alla commandon
    void help(std::string s);
    
    //Lista över alla comandon
    void list();

};


#endif
