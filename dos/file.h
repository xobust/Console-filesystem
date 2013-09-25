//
//  file.h
//  dos
/*
    
    Hjälp klass för att hantera filer
    
    
    Todo:
    * Lägg till en liten texteditor
 
 
*/
//  Created by Alexander Bladh on 2013-09-25.
//  Copyright (c) 2013 ab. All rights reserved.
//

#ifndef dos_file_h
#define dos_file_h

#include <string>
#include <iostream.h>

class file
{
    
    // filens data som en string
    std::string data;
    
public:
    
    std::string name;
    
    file(std::string n, std::string c):name(n),data(c)
    {
    }
    
    //Krävs för find
    bool operator==(std::string n)
    {
        return name==n;
    }
    
    //Visa filens inehåll
    void show() const
    {
        cout << data << endl;
    }
    
};

#endif
