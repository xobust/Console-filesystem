//
//  folder.h
//  dos
//
/*
 
    Hjärnan i programmet, folder classen 
    hanterar både filer och mappar.
    
    Själva klassen är nästan som en brygga till filsystemt
    Jag hadde förmodligen kunnat löst denna kopling på ett bättre sätt
 
 
 */
//  Created by Alexander Bladh on 2013-09-25.
//  Copyright (c) 2013 ab. All rights reserved.
//

#ifndef dos_folder_h
#define dos_folder_h

#include <string>
#include <vector.h>
#include <iostream>

#include "file.h"

class folder
{
    
public:
    
    // Alla filer i mappen
    std::vector<file> filer;
    // Alla undermappar
    std::vector<folder> folders;
    
    std::string name;
    
    //Överliggande mapp
    folder * parent;
    
    
    folder(folder * p, std::string s):parent(p),name(s) // Sätter namn och förälder
    {
    }
    
    
    // == krävs för att man ska hitta en mapp
    // med find()
    bool operator==(std::string s)
    {
        return s==name;
    }
    
    
    // Denna funktion kommer att visa alla de
    // överliggande Mapparna
    void path(); 

    
    // visa alla filer och mappar
    // i denna map
    void show(); 
    
    
    //Tar bort en undermapp
    //Till denhär mappen
    void remove(std::string path);
    
    //Tar bort en fil
    //i denhär mappen
    void removefile(std::string path);
    
    //Lägger till en existerande mapp
    //Som undermapp till denhär mappen
    void addfolder(folder f);
    
    //Skapar en mapp men namnet {name}
    //
    void addfolder(std::string name);
    
    //
    //Existerar denhär mappen?
    bool folderexists(std::string path); 
    
    // Hittar en undermapp och
    // ger returnerar den i form av en iterator
    std::vector<folder>::iterator findfolder(std::string path);
    
    //
    //Skapar en fil 
    void createfile(std::string name, std::string content);
    
    //Visar en fil
    void catfile(std::string file);
    
};


#endif
