//
//  main.cpp
//  random
//
//  Created by René Descartes Domingos Muala on 24/05/22.
//  Copyright © 2022 René Descartes Domingos Muala. All rights reserved.
//

#include <iostream>
#define MS_PRINTABLE_KEYS
#include "MappedStack.hpp"

int main(){

    MappedStack<std::string_view, std::string> ms;
    
    ms.insert("hello", "world");
    
    std::cout << *ms.at("hello") << std::endl; // world

    ms.insert("hello", "sara");

    std::cout << *ms.rat("hello") << std::endl; // sara

    std::cout << ms.count("hello") << std::endl; // 2

}
