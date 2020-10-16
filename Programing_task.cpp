//
//  main.cpp
//  Space Concordia programming task
//
//  Created by Timothy Morvan on 09/09/2020.
//  Copyright © 2020 Timothy Morvan. All rights reserved.
//

#include <iostream>

int analogread ();

int vbattread() {

    float vsense, vbatt;
    
    vsense = analogread() * (3.3/1023);
    
    vbatt = vsense * (10+2)/2;
    
    std::cout << vbatt << "\n";
    
    if (vbatt < 12) {
        
        std::cout << "The voltage is too low";
    }
    else if (vbatt > 16.8){
        
        std::cout << "The voltage is too high\n";
    }
    
    return 0;
}

