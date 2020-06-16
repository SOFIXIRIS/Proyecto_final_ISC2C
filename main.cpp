//
//  main.cpp
//  Proyect_Final_ISC2C
//
//  Created by Brayan Ulises Basher on 6/16/20.
//  Copyright © 2020 Brayan Ulises Vázquez Heredia. All rights reserved.
//

#include <iostream>
#include <windows.h>  
 void gotoxy(int x,int y){  //desplazarse con el teclado
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 }  

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Yepa que pasa gente!\n";
    return 0;
}
