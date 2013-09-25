//
//  main.cpp
//  dos
//
/*
 
    Filsystem, ett seriöst försök att en ren kod.
    Misslyckades dock med polymorfismen eftersom
    File och folder inte kommer från samma basklass
    Hanteringen av komandon kunde ha skjöts på ett mer 
    OO vis.
 
    Överlag är jag nöjd med koden.
 
 
 */
//  Created by Alexander Bladh on 2013-09-18.
//  Copyright (c) 2013 ab. All rights reserved.
//


#include "filesystem.h"



int main(int argc, const char * argv[])
{
    
    dos filesystem;
    
    filesystem.start();
    
    while (true) {
        filesystem.run(); // kör filsystemet kolla efter komandon
    }
    
    
    return 0;
}

