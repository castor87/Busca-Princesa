#include <cstdlib>
#include <iostream>
#include <graphics.h>
#include <stdio.h> 
#include <conio.h>
#include <windows.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define LEFT         75
#define RIGHT        77
#define UP           72
#define DOWN         80
#define ESC          27
#define ESPACO       32

using namespace std;


//MOVIMENTO PARA A DIREITA
//desenhando espadas     
void ESPADA1D(int X, int Y)
     {
//cabo
     moveto(X, Y+39);
     lineto(X+22, Y+39);
     lineto(X+22, Y+32);
     lineto(X+7,  Y+32);
//base     
     moveto(X+22, Y+33);
     lineto(X+22, Y+25);
     lineto(X+28, Y+25);
     lineto(X+28, Y+46);
     lineto(X+22, Y+46);
     lineto(X+22, Y+38);
//fio da espada
     moveto(X+28, Y+31);
     lineto(X+80, Y+31);
     lineto(X+85, Y+36);
     lineto(X+80, Y+41);
     lineto(X+28, Y+41);
     }
     
void ESPADA2D(int X, int Y)
     {
//cabo
     moveto(X, Y+39);
     lineto(X+22, Y+39);
     lineto(X+22, Y+32);
     lineto(X+7,  Y+32);
//base     
     moveto(X+22, Y+33);
     lineto(X+22, Y+20);
     lineto(X+28, Y+17);
     lineto(X+28, Y+54);
     lineto(X+22, Y+51);
     lineto(X+22, Y+38);
//fio da espada
     moveto(X+28, Y+31);
     lineto(X+56, Y+31);
     lineto(X+60, Y+35);
     lineto(X+64, Y+31);
     lineto(X+68, Y+35);
     lineto(X+72, Y+31);
     lineto(X+76, Y+35);
     lineto(X+80, Y+31);
     lineto(X+84, Y+35);
     lineto(X+86, Y+31);
     lineto(X+90, Y+31);
     arc   (X+89, Y+71, 47, 85, 40);
     moveto(X+113, Y+41);
     lineto(X+28, Y+41);
     }


void ESPADA3D(int X, int Y)
     {
//cabo
     moveto(X,    Y+39);
     arc   (X+7,  Y+40, 180, 270, 7);
     lineto(X+22, Y+39);
     lineto(X+22, Y+33);
     lineto(X+7,  Y+33);
     moveto(X+7,  Y+46);
     lineto(X+22, Y+46);
//base
     arc   (X+22, Y+36, 280, 90, 10);
     moveto(X+22, Y+26);
     lineto(X+22, Y+46);
//fio da espada
     moveto(X+30,  Y+34);
     lineto(X+120, Y+36);
     lineto(X+30,  Y+38);
     moveto(X+120, Y+36);
     lineto(X+30,  Y+36);
     moveto(X+120, Y+36);
     lineto(X+30,  Y+35);
     moveto(X+120, Y+36);
     lineto(X+30,  Y+37);
     }


void ESPADA4D(int X, int Y)
     {
//cabo
     moveto(X,    Y+39);
     lineto(X+22, Y+39);
     lineto(X+22, Y+31);
     lineto(X+7,  Y+31);
     lineto(X+10,  Y+39);
     moveto(X+13,  Y+31);
     lineto(X+16,  Y+39);
     moveto(X+19,  Y+31);
     lineto(X+22,  Y+39);
//base     
     moveto(X+22, Y+33);
     lineto(X+22, Y+18);
     lineto(X+38, Y+18);
     arc   (X+35, Y+18, 270, 0, 5);
     moveto(X+33, Y+23);
     lineto(X+27, Y+23);
     lineto(X+27, Y+48);
     lineto(X+35, Y+48);
     arc   (X+35, Y+53, 0, 90, 5);
     moveto(X+38, Y+53);
     lineto(X+22, Y+53);
     lineto(X+22, Y+38);
//fio da espada
     moveto(X+28,  Y+30);
     lineto(X+110, Y+30);
     lineto(X+120, Y+36);
     lineto(X+110, Y+42);
     lineto(X+28,  Y+42);
     moveto(X+114, Y+32);
     lineto(X+28,  Y+32);
     }



//desenhando escudo    
void ESCUDO1D(int X, int Y)
     {
     moveto(X,    Y-40);
     lineto(X+22, Y-40);          
     lineto(X+22, Y-45); 
     lineto(X+28, Y-45); 
     lineto(X+28, Y-9);
     lineto(X+22, Y-9); 
     lineto(X+22, Y-40);
     moveto(X+22, Y-33);
     lineto(X+7,  Y-33); 
     }

void ESCUDO2D(int X, int Y)
     {
     moveto(X,    Y-40);
     lineto(X+22, Y-40);          
     moveto(X+22, Y-47); 
     lineto(X+22, Y-10); 
     moveto(X+22, Y-33);
     lineto(X+7,  Y-33);
     ellipse(X+22,Y-28,280,90,8,20);
     moveto(X+30, Y-32);
     lineto(X+37, Y-28);
     lineto(X+30, Y-24);   
     }
     
     
     
//HEROÍ
void HEROIDIR(int X, int Y)
     {
//cabeça
     moveto(X, Y);
     circle(X,Y,9);
     moveto(X+8, Y+5);
     lineto(X+11, Y);
     lineto(X+8, Y-5);
//braço esquerdo-escudo
     arc(X, Y-33, 0, 180, 7);
     moveto(X+7, Y-27);
     lineto(X+7, Y-33);
     moveto(X-7, Y-27);
     lineto(X-7, Y-33);
//braço direito-espada
     arc(X, Y+33, 180, 0, 7);
     moveto(X+7, Y+27);
     lineto(X+7, Y+33);
     moveto(X-7, Y+27);
     lineto(X-7, Y+33);
     }
//pé esquerdo
void PEESQUERDOD (int X, int Y)
     {
     moveto(X+10,  Y-22);
     lineto(X+15, Y-22);
     arc(X+15, Y-17, 270, 90, 5);
     }
//pé direito
void PEDIREITOD (int X, int Y)
     {
     moveto(X+10,  Y+22);
     lineto(X+15, Y+22);
     arc(X+15, Y+17, 270, 90, 5);
     }






//MOVIMENTO PARA A ESQUERDA
//desenhando espadas     
void ESPADA1E(int X, int Y)
     {
//cabo
     moveto(X, Y-39);
     lineto(X-22, Y-39);
     lineto(X-22, Y-32);
     lineto(X-7,  Y-32);
//base     
     moveto(X-22, Y-33);
     lineto(X-22, Y-25);
     lineto(X-28, Y-25);
     lineto(X-28, Y-46);
     lineto(X-22, Y-46);
     lineto(X-22, Y-38);
//fio da espada
     moveto(X-28, Y-31);
     lineto(X-80, Y-31);
     lineto(X-85, Y-36);
     lineto(X-80, Y-41);
     lineto(X-28, Y-41);
     }
     
void ESPADA2E(int X, int Y)
     {
//cabo
     moveto(X, Y-39);
     lineto(X-22, Y-39);
     lineto(X-22, Y-32);
     lineto(X-7,  Y-32);
//base     
     moveto(X-22, Y-33);
     lineto(X-22, Y-20);
     lineto(X-28, Y-17);
     lineto(X-28, Y-54);
     lineto(X-22, Y-51);
     lineto(X-22, Y-38);
//fio da espada
     moveto(X-28, Y-31);
     lineto(X-56, Y-31);
     lineto(X-60, Y-35);
     lineto(X-64, Y-31);
     lineto(X-68, Y-35);
     lineto(X-72, Y-31);
     lineto(X-76, Y-35);
     lineto(X-80, Y-31);
     lineto(X-84, Y-35);
     lineto(X-86, Y-31);
     lineto(X-90, Y-31);
     arc   (X-89, Y-71, 230, 268, 40);
     moveto(X-113,Y-41);
     lineto(X-28, Y-41);
     }


void ESPADA3E(int X, int Y)
     {
//cabo
     moveto(X,    Y-39);
     arc   (X-7,  Y-40, 0, 90, 6);
     lineto(X-22, Y-39);
     lineto(X-22, Y-33);
     lineto(X-7,  Y-33);
     moveto(X-7,  Y-46);
     lineto(X-22, Y-46);
//base
     arc   (X-22, Y-36, 90, 280, 10);
     moveto(X-22, Y-26);
     lineto(X-22, Y-46);
//fio da espada
     moveto(X-30,  Y-34);
     lineto(X-120, Y-36);
     lineto(X-30,  Y-38);
     moveto(X-120, Y-36);
     lineto(X-30,  Y-36);
     moveto(X-120, Y-36);
     lineto(X-30,  Y-35);
     moveto(X-120, Y-36);
     lineto(X-30,  Y-37);
     }


void ESPADA4E(int X, int Y)
     {
//cabo
     moveto(X,    Y-39);
     lineto(X-22, Y-39);
     lineto(X-22, Y-31);
     lineto(X-7,  Y-31);
     lineto(X-10,  Y-39);
     moveto(X-13,  Y-31);
     lineto(X-16,  Y-39);
     moveto(X-19,  Y-31);
     lineto(X-22,  Y-39);
//base     
     moveto(X-22, Y-33);
     lineto(X-22, Y-18);
     lineto(X-40, Y-18);
     arc   (X-35, Y-18, 90, 180, 5);
     moveto(X-35, Y-23);
     lineto(X-27, Y-23);
     lineto(X-27, Y-48);
     lineto(X-35, Y-48);
     arc   (X-35, Y-53, 200, 270, 5);
     moveto(X-40, Y-53);
     lineto(X-22, Y-53);
     lineto(X-22, Y-38);
//fio da espada
     moveto(X-28,  Y-30);
     lineto(X-110, Y-30);
     lineto(X-120, Y-36);
     lineto(X-110, Y-42);
     lineto(X-28,  Y-42);
     moveto(X-114, Y-32);
     lineto(X-28,  Y-32);
     }



//desenhando escudo    
void ESCUDO1E(int X, int Y)
     {
     moveto(X,    Y+40);
     lineto(X-22, Y+40);          
     lineto(X-22, Y+45); 
     lineto(X-28, Y+45); 
     lineto(X-28, Y+9);
     lineto(X-22, Y+9); 
     lineto(X-22, Y+40);
     moveto(X-22, Y+33);
     lineto(X-7,  Y+33); 
     }

void ESCUDO2E(int X, int Y)
     {
     moveto(X,    Y+40);
     lineto(X-22, Y+40);          
     moveto(X-22, Y+47); 
     lineto(X-22, Y+8); 
     moveto(X-22, Y+33);
     lineto(X-7,  Y+33);
     ellipse(X-22,Y+28,90,280,8,20);
     moveto(X-30, Y+32);
     lineto(X-37, Y+28);
     lineto(X-30, Y+24);   
     }
     
     
     
//HEROÍ
void HEROIESQ(int X, int Y)
     {
//cabeça
     moveto(X, Y);
     circle(X,Y,9);
     moveto(X-8, Y-5);
     lineto(X-11, Y);
     lineto(X-8, Y+5);
//braço esquerdo-escudo
     arc(X, Y+33, 180, 0, 7);
     moveto(X-7, Y+27);
     lineto(X-7, Y+33);
     moveto(X+7, Y+27);
     lineto(X+7, Y+33);
//braço direito-espada
     arc(X, Y-33, 0, 180, 7);
     moveto(X-7, Y-27);
     lineto(X-7, Y-33);
     moveto(X+7, Y-27);
     lineto(X+7, Y-33);
     }
//pé esquerdo
void PEESQUERDOE (int X, int Y)
     {
     moveto(X-10, Y+22);
     lineto(X-15, Y+22);
     arc(X-15, Y+17, 90, 270, 5);
     }
//pé direito
void PEDIREITOE (int X, int Y)
     {
     moveto(X-10, Y-22);
     lineto(X-15, Y-22);
     arc(X-15, Y-17, 90, 270, 5);
     }












//MOVIMENTO PARA CIMA
//desenhando espadas     
void ESPADA1C(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+32, Y-22);
     lineto(X+32,  Y-7);
//base     
     moveto(X+33, Y-22);
     lineto(X+25, Y-22);
     lineto(X+25, Y-28);
     lineto(X+46, Y-28);
     lineto(X+46, Y-22);
     lineto(X+38, Y-22);
//fio da espad
     moveto(X+31, Y-28);
     lineto(X+31, Y-80);
     lineto(X+36, Y-85);
     lineto(X+41, Y-80);
     lineto(X+41, Y-28);
     }
     
void ESPADA2C(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+32, Y-22);
     lineto(X+32, Y-7);
//base     
     moveto(X+33, Y-22);
     lineto(X+20, Y-22);
     lineto(X+17, Y-28);
     lineto(X+54, Y-28);
     lineto(X+51, Y-22);
     lineto(X+38, Y-22);
//fio da espada
     moveto(X+31, Y-28);
     lineto(X+31, Y-56);
     lineto(X+35, Y-60);
     lineto(X+31, Y-64);
     lineto(X+35, Y-68);
     lineto(X+31, Y-72);
     lineto(X+35, Y-76);
     lineto(X+31, Y-80);
     lineto(X+35, Y-84);
     lineto(X+31, Y-86);
     lineto(X+31, Y-90);
     arc   (X+71, Y-89, 140, 178, 40);
     moveto(X+41,Y-113);
     lineto(X+41, Y-28);
     }


void ESPADA3C(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     arc   (X+40, Y-7, 270, 0, 6);
     lineto(X+39, Y-22);
     lineto(X+33, Y-22);
     lineto(X+33, Y-7);
     moveto(X+46, Y-7);
     lineto(X+46, Y-22);
//base
     arc   (X+36, Y-22, 0, 180, 10);
     moveto(X+26, Y-22);
     lineto(X+46, Y-22);
//fio da espada
     moveto(X+34,  Y-30);
     lineto(X+36,  Y-120);
     lineto(X+38,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+36,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+35,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+37,  Y-30);
     }


void ESPADA4C(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+31, Y-22);
     lineto(X+31,  Y-7);
     lineto(X+39,  Y-10);
     moveto(X+31,  Y-13);
     lineto(X+39,  Y-16);
     moveto(X+31,  Y-19);
     lineto(X+39,  Y-22);
//base     
     moveto(X+33, Y-22);
     lineto(X+18, Y-22);
     lineto(X+18, Y-40);
     arc   (X+18, Y-35, 0, 90, 5);
     moveto(X+23, Y-35);
     lineto(X+23, Y-27);
     lineto(X+48, Y-27);
     lineto(X+48, Y-35);
     arc   (X+53, Y-35, 90, 180, 5);
     moveto(X+53, Y-40);
     lineto(X+53, Y-22);
     lineto(X+38, Y-22);
//fio da espada
     moveto(X+30,  Y-28);
     lineto(X+30,  Y-110);
     lineto(X+36,  Y-120);
     lineto(X+42,  Y-110);
     lineto(X+42,  Y-28);
     moveto(X+32,  Y-114);
     lineto(X+32,  Y-28);
     }



//desenhando escudo    
void ESCUDO1C(int X, int Y)
     {
     moveto(X-40, Y);
     lineto(X-40, Y-22);          
     lineto(X-45, Y-22); 
     lineto(X-45, Y-28); 
     lineto(X-9,  Y-28);
     lineto(X-9,  Y-22); 
     lineto(X-40, Y-22);
     moveto(X-33, Y-22);
     lineto(X-33, Y-7); 
     }

void ESCUDO2C(int X, int Y)
     {
     moveto(X-40, Y);
     lineto(X-40, Y-22);          
     moveto(X-47, Y-22); 
     lineto(X-8,  Y-22); 
     moveto(X-33, Y-22);
     lineto(X-33,  Y-7);
     ellipse(X-28,Y-22,0,180,20,8);
     moveto(X-32, Y-30);
     lineto(X-28, Y-37);
     lineto(X-24, Y-30);   
     }
     
     
     
//HEROÍ
void HEROICIMA(int X, int Y)
     {
//cabeça
     moveto(X, Y);
     circle(X,Y,9);
     moveto(X-5, Y-8);
     lineto(X,   Y-11);
     lineto(X+5, Y-8);
//braço esquerdo-escudo
     arc(X-33, Y, 90, 270, 7);
     moveto(X-27, Y-7);
     lineto(X-33, Y-7);
     moveto(X-27, Y+7);
     lineto(X-33, Y+7);
//braço direito-espada
     arc(X+33, Y, 270, 90, 7);
     moveto(X+27, Y-7);
     lineto(X+33, Y-7);
     moveto(X+27, Y+7);
     lineto(X+33, Y+7);
     }
//pé esquerdo
void PEESQUERDOC (int X, int Y)
     {
     moveto(X-22, Y-10);
     lineto(X-22, Y-15);
     arc(X-17, Y-15, 0, 180, 5);
     }
//pé direito
void PEDIREITOC (int X, int Y)
     {
     moveto(X+22, Y-10);
     lineto(X+22, Y-15);
     arc(X+17, Y-15, 0, 180, 5);
     }
        
        
        
        
        



     
//MOVIMENTO PARA BAIXO
//desenhando espadas     
void ESPADA1B(int X, int Y)
     {
//cabo
     moveto(X-39, Y);
     lineto(X-39, Y+22);
     lineto(X-32, Y+22);
     lineto(X-32, Y+7);
//base     
     moveto(X-33, Y+22);
     lineto(X-25, Y+22);
     lineto(X-25, Y+28);
     lineto(X-46, Y+28);
     lineto(X-46, Y+22);
     lineto(X-38, Y+22);
//fio da espad
     moveto(X-31, Y+28);
     lineto(X-31, Y+80);
     lineto(X-36, Y+85);
     lineto(X-41, Y+80);
     lineto(X-41, Y+28);
     }
     
void ESPADA2B(int X, int Y)
     {
//cabo
     moveto(X-39, Y);
     lineto(X-39, Y+22);
     lineto(X-32, Y+22);
     lineto(X-32, Y+7);
//base     
     moveto(X-33, Y+22);
     lineto(X-20, Y+22);
     lineto(X-17, Y+28);
     lineto(X-54, Y+28);
     lineto(X-51, Y+22);
     lineto(X-38, Y+22);
//fio da espada
     moveto(X-31, Y+28);
     lineto(X-31, Y+56);
     lineto(X-35, Y+60);
     lineto(X-31, Y+64);
     lineto(X-35, Y+68);
     lineto(X-31, Y+72);
     lineto(X-35, Y+76);
     lineto(X-31, Y+80);
     lineto(X-35, Y+84);
     lineto(X-31, Y+86);
     lineto(X-31, Y+90);
     arc   (X-71, Y+89, 320, 358, 40);
     moveto(X-41, Y+113);
     lineto(X-41, Y+28);
     }


void ESPADA3B(int X, int Y)
     {
//cabo
     moveto(X-39, Y);
     arc   (X-40, Y+7, 90, 180, 6);
     lineto(X-39, Y+22);
     lineto(X-33, Y+22);
     lineto(X-33, Y+7);
     moveto(X-46, Y+7);
     lineto(X-46, Y+22);
//base
     arc   (X-36, Y+22, 180, 0, 10);
     moveto(X-26, Y+22);
     lineto(X-46, Y+22);
//fio da espada
     moveto(X-34,  Y+30);
     lineto(X-36,  Y+120);
     lineto(X-38,  Y+30);
     moveto(X-36,  Y+120);
     lineto(X-36,  Y+30);
     moveto(X-36,  Y+120);
     lineto(X-35,  Y+30);
     moveto(X-36,  Y+120);
     lineto(X-37,  Y+30);
     }


void ESPADA4B(int X, int Y)
     {
//cabo
     moveto(X-39,  Y);
     lineto(X-39,  Y+22);
     lineto(X-31,  Y+22);
     lineto(X-31,  Y+7);
     lineto(X-39,  Y+10);
     moveto(X-31,  Y+13);
     lineto(X-39,  Y+16);
     moveto(X-31,  Y+19);
     lineto(X-39,  Y+22);
//base     
     moveto(X-33, Y+22);
     lineto(X-18, Y+22);
     lineto(X-18, Y+40);
     arc   (X-18, Y+35, 180, 270, 5);
     moveto(X-23, Y+35);
     lineto(X-23, Y+27);
     lineto(X-48, Y+27);
     lineto(X-48, Y+35);
     arc   (X-53, Y+35, 290, 0, 5);
     moveto(X-53, Y+40);
     lineto(X-53, Y+22);
     lineto(X-38, Y+22);
//fio da espada
     moveto(X-30,  Y+28);
     lineto(X-30,  Y+110);
     lineto(X-36,  Y+120);
     lineto(X-42,  Y+110);
     lineto(X-42,  Y+28);
     moveto(X-32,  Y+114);
     lineto(X-32,  Y+28);
     }



//desenhando escudo    
void ESCUDO1B(int X, int Y)
     {
     moveto(X+40, Y);
     lineto(X+40, Y+22);          
     lineto(X+45, Y+22); 
     lineto(X+45, Y+28); 
     lineto(X+9,  Y+28);
     lineto(X+9,  Y+22); 
     lineto(X+40, Y+22);
     moveto(X+33, Y+22);
     lineto(X+33, Y+7); 
     }

void ESCUDO2B(int X, int Y)
     {
     moveto(X+40, Y);
     lineto(X+40, Y+22);          
     moveto(X+47, Y+22); 
     lineto(X+8,  Y+22); 
     moveto(X+33, Y+22);
     lineto(X+33, Y+7);
     ellipse(X+28,Y+22,180,0,20,8);
     moveto(X+32, Y+30);
     lineto(X+28, Y+37);
     lineto(X+24, Y+30);   
     }
     
     
     
//HEROÍ
void HEROIBAIXO(int X, int Y)
     {
//cabeça
     moveto(X, Y);
     circle(X,Y,9);
     moveto(X+5, Y+8);
     lineto(X,   Y+11);
     lineto(X-5, Y+8);
//braço esquerdo-escudo
     arc(X+33, Y, 270, 90, 7);
     moveto(X+27, Y+7);
     lineto(X+33, Y+7);
     moveto(X+27, Y-7);
     lineto(X+33, Y-7);
//braço direito-espada
     arc(X-33, Y, 90, 270, 7);
     moveto(X-27, Y+7);
     lineto(X-33, Y+7);
     moveto(X-27, Y-7);
     lineto(X-33, Y-7);
     }
//pé esquerdo
void PEESQUERDOB (int X, int Y)
     {
     moveto(X+22, Y+10);
     lineto(X+22, Y+15);
     arc(X+17, Y+15, 180, 0, 5);
     }
//pé direito
void PEDIREITOB (int X, int Y)
     {
     moveto(X-22, Y+10);
     lineto(X-22, Y+15);
     arc(X-17, Y+15, 180, 0, 5);
     }







//definição para onde ocorrerá o movimento
void MOVIMENTO (int X , int Y, char C, int CONTADOR, int LVLESPADA, int LVLESCUDO, int LVLARMADURA)
     {
     if (C=='s' || C=='S')
           {
           setcolor(15);
           HEROIBAIXO (X, Y);
           //corpo
           if (LVLARMADURA==1)
              setcolor (8);
           if (LVLARMADURA==2)
              setcolor (1469101028);
           if (LVLARMADURA==3)
              setcolor (14);
           ellipse(X,Y,0,0,30,16);
           //espada
           setcolor (7);
           if (LVLESPADA==1)
              ESPADA1B (X, Y);
           if (LVLESPADA==2)
              ESPADA2B (X, Y);
           if (LVLESPADA==3)
              ESPADA3B (X, Y);
           if (LVLESPADA==4)
              ESPADA4B (X, Y);
           //escudo
           setcolor (7);
           if (LVLESCUDO==1)
              ESCUDO1B (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2B (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOB (X, Y);
           else //pé direito
              PEDIREITOB (X, Y);
           }
     if (C=='w' || C=='W')
           {
           setcolor(15);
           HEROICIMA (X, Y);
           //corpo
           if (LVLARMADURA==1)
              setcolor (8);
           if (LVLARMADURA==2)
              setcolor (1469101028);
           if (LVLARMADURA==3)
              setcolor (14);
           ellipse(X,Y,0,0,30,16);
           //espada
           setcolor (7);
           if (LVLESPADA==1)
              ESPADA1C (X, Y);
           if (LVLESPADA==2)
              ESPADA2C (X, Y);
           if (LVLESPADA==3)
              ESPADA3C (X, Y);
           if (LVLESPADA==4)
              ESPADA4C (X, Y);
           //escudo
           setcolor (7);
           if (LVLESCUDO==1)
              ESCUDO1C (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2C (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOC (X, Y);
           else //pé direito
              PEDIREITOC (X, Y);
           }
     if (C=='a' || C=='A')
           {
           setcolor(15);
           HEROIESQ (X, Y);
           //corpo
           if (LVLARMADURA==1)
              setcolor (8);
           if (LVLARMADURA==2)
              setcolor (1469101028);
           if (LVLARMADURA==3)
              setcolor (14);
           ellipse(X,Y,0,0,16,30);
           //espada
           setcolor (7);
           if (LVLESPADA==1)
              ESPADA1E (X, Y);
           if (LVLESPADA==2)
              ESPADA2E (X, Y);
           if (LVLESPADA==3)
              ESPADA3E (X, Y);
           if (LVLESPADA==4)
              ESPADA4E (X, Y);
           //escudo
           setcolor (7);
           if (LVLESCUDO==1)
              ESCUDO1E (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2E (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOE (X, Y);
           else //pé direito
              PEDIREITOE (X, Y);
           }
     if (C=='d' || C=='D')
           {
           setcolor(15);
           HEROIDIR (X, Y);
           //corpo
           if (LVLARMADURA==1)
              setcolor (8);
           if (LVLARMADURA==2)
              setcolor (1469101028);
           if (LVLARMADURA==3)
              setcolor (14);
           ellipse(X,Y,0,0,16,30);
           //espada
           setcolor (7);
           if (LVLESPADA==1)
              ESPADA1D (X, Y);
           if (LVLESPADA==2)
              ESPADA2D (X, Y);
           if (LVLESPADA==3)
              ESPADA3D (X, Y);
           if (LVLESPADA==4)
              ESPADA4D (X, Y);
           //escudo
           setcolor (7);
           if (LVLESCUDO==1)
              ESCUDO1D (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2D (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOD (X, Y);
           else //pé direito
              PEDIREITOD (X, Y);
           }
     }






//apagando o heroí
void APAGAHEROI (int X, int Y, char ULTMOV,int CONTADOR, int LVLESPADA, int LVLESCUDO, int LVLARMADURA)
     {
     if (ULTMOV=='s' || ULTMOV=='S')
           {
           setcolor(0);
           HEROIBAIXO (X, Y);
           //corpo
           ellipse(X,Y,0,0,30,16);
           //espada
           if (LVLESPADA==1)
              ESPADA1B (X, Y);
           if (LVLESPADA==2)
              ESPADA2B (X, Y);
           if (LVLESPADA==3)
              ESPADA3B (X, Y);
           if (LVLESPADA==4)
              ESPADA4B (X, Y);
           //escudo
           if (LVLESCUDO==1)
              ESCUDO1B (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2B (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOB (X, Y);
           else //pé direito
              PEDIREITOB (X, Y);
           }
     if (ULTMOV=='w' || ULTMOV=='W')
           {
           setcolor(0);
           HEROICIMA (X, Y);
           //corpo
           ellipse(X,Y,0,0,30,16);
           //espada
           if (LVLESPADA==1)
              ESPADA1C (X, Y);
           if (LVLESPADA==2)
              ESPADA2C (X, Y);
           if (LVLESPADA==3)
              ESPADA3C (X, Y);
           if (LVLESPADA==4)
              ESPADA4C (X, Y);
           //escudo
           if (LVLESCUDO==1)
              ESCUDO1C (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2C (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOC (X, Y);
           else //pé direito
              PEDIREITOC (X, Y);
           }
     if (ULTMOV=='a' || ULTMOV=='A')
           {
           setcolor(0);
           HEROIESQ (X, Y);
           //corpo
           ellipse(X,Y,0,0,16,30);
           //espada
           if (LVLESPADA==1)
              ESPADA1E (X, Y);
           if (LVLESPADA==2)
              ESPADA2E (X, Y);
           if (LVLESPADA==3)
              ESPADA3E (X, Y);
           if (LVLESPADA==4)
              ESPADA4E (X, Y);
           //escudo
           if (LVLESCUDO==1)
              ESCUDO1E (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2E (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOE (X, Y);
           else //pé direito
              PEDIREITOE (X, Y);
           }
     if (ULTMOV=='d' || ULTMOV=='D')
           {
           setcolor(0);
           HEROIDIR (X, Y);
           //corpo
           ellipse(X,Y,0,0,16,30);
           //espada
           if (LVLESPADA==1)
              ESPADA1D (X, Y);
           if (LVLESPADA==2)
              ESPADA2D (X, Y);
           if (LVLESPADA==3)
              ESPADA3D (X, Y);
           if (LVLESPADA==4)
              ESPADA4D (X, Y);
           //escudo
           if (LVLESCUDO==1)
              ESCUDO1D (X, Y);
           if (LVLESCUDO==2)
              ESCUDO2D (X, Y);
           //pés
           if (CONTADOR%2==0) //pé esquerdo
              PEESQUERDOD (X, Y);
           else //pé direito
              PEDIREITOD (X, Y);
           }
     }






//DESENHANDO TODO O INTENTÁRIO
//desenhando espadas     
void ESPADA1IN(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+32, Y-22);
     lineto(X+32, Y);
     lineto(X+39, Y);
//base     
     moveto(X+33, Y-22);
     lineto(X+25, Y-22);
     lineto(X+25, Y-28);
     lineto(X+46, Y-28);
     lineto(X+46, Y-22);
     lineto(X+38, Y-22);
//fio da espad
     moveto(X+31, Y-28);
     lineto(X+31, Y-80);
     lineto(X+36, Y-85);
     lineto(X+41, Y-80);
     lineto(X+41, Y-28);
     setcolor(7);
     settextstyle(8,0,1);
     outtextxy(X-40, Y+20, "ESPADA DE TREINO");
     outtextxy(X-39, Y+40, "FEITA DE MADEIRA");
     }
     
void ESPADA2IN(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+32, Y-22);
     lineto(X+32, Y);
     lineto(X+39, Y);
//base     
     moveto(X+33, Y-22);
     lineto(X+20, Y-22);
     lineto(X+17, Y-28);
     lineto(X+54, Y-28);
     lineto(X+51, Y-22);
     lineto(X+38, Y-22);
//fio da espada
     moveto(X+31, Y-28);
     lineto(X+31, Y-56);
     lineto(X+35, Y-60);
     lineto(X+31, Y-64);
     lineto(X+35, Y-68);
     lineto(X+31, Y-72);
     lineto(X+35, Y-76);
     lineto(X+31, Y-80);
     lineto(X+35, Y-84);
     lineto(X+31, Y-86);
     lineto(X+31, Y-90);
     arc   (X+71, Y-89, 140, 178, 40);
     moveto(X+41,Y-113);
     lineto(X+41, Y-28);
     setcolor(7);
     settextstyle(8,0,1);
     outtextxy(X-70, Y+20, "ESPADA MEDIEVAL DE AÇO");
     }


void ESPADA3IN(int X, int Y)
     {
//cabo
     moveto(X+39, Y-2);
     lineto(X+39, Y-22);
     lineto(X+33, Y-22);
     lineto(X+33, Y-2);
     lineto(X+39, Y-2);
     moveto(X+46, Y-7);
     lineto(X+46, Y-22);
     arc   (X+40, Y-7, 270, 0, 6);
//base
     arc   (X+36, Y-22, 0, 180, 10);
     moveto(X+26, Y-22);
     lineto(X+46, Y-22);
//fio da espada
     moveto(X+34,  Y-30);
     lineto(X+36,  Y-120);
     lineto(X+38,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+36,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+35,  Y-30);
     moveto(X+36,  Y-120);
     lineto(X+37,  Y-30);
     setcolor(7);
     settextstyle(8,0,1);
     outtextxy(X-70, Y+20, "ESPADA DE MOSQUETEIRO");
     outtextxy(X-40, Y+40, "FEITA DE OURO");
     }


void ESPADA4IN(int X, int Y)
     {
//cabo
     moveto(X+39, Y);
     lineto(X+39, Y-22);
     lineto(X+31, Y-22);
     lineto(X+31, Y-0);
     lineto(X+39, Y-0);
     moveto(X+31, Y-1);
     lineto(X+39, Y-4);
     moveto(X+31, Y-7);
     lineto(X+39, Y-10);
     moveto(X+31, Y-13);
     lineto(X+39, Y-16);
     moveto(X+31, Y-19);
     lineto(X+39, Y-22);
//base     
     moveto(X+33, Y-22);
     lineto(X+18, Y-22);
     lineto(X+18, Y-40);
     arc   (X+18, Y-35, 0, 90, 5);
     moveto(X+23, Y-35);
     lineto(X+23, Y-27);
     lineto(X+48, Y-27);
     lineto(X+48, Y-35);
     arc   (X+53, Y-35, 90, 180, 5);
     moveto(X+53, Y-40);
     lineto(X+53, Y-22);
     lineto(X+38, Y-22);
//fio da espada
     moveto(X+30,  Y-28);
     lineto(X+30,  Y-110);
     lineto(X+36,  Y-120);
     lineto(X+42,  Y-110);
     lineto(X+42,  Y-28);
     moveto(X+32,  Y-114);
     lineto(X+32,  Y-28);
     setcolor(7);
     settextstyle(8,0,1);
     outtextxy(X-40, Y+20, "ESPADA CLAYMORE");
     outtextxy(X-15, Y+40, "DE DIAMANTE");
     }


//desenhando escudo    
void ESCUDO1IN(int X, int Y)
     {
     moveto(X-45, Y-22);        
     lineto(X-45, Y-22); 
     lineto(X-45, Y-28); 
     lineto(X-9,  Y-28);
     lineto(X-9,  Y-22); 
     lineto(X-45, Y-22);
     ellipse(X+70,Y-22,0,0,20,20);
     ellipse(X+70,Y-22,0,0,17,17);
     ellipse(X+70,Y-22,0,0,7,7);
     setcolor(7);
     settextstyle(8,0,1);
     outtextxy(X-60, Y+20, "ESCUDO BÁSICO DE");
     outtextxy(X-15, Y+40, "MADEIRA");
     }

void ESCUDO2IN(int X, int Y)
     {
     moveto(X-40, Y-22);        
     moveto(X-47, Y-22); 
     lineto(X-8,  Y-22); 
     ellipse(X-28,Y-22,0,180,20,8);
     moveto(X-32, Y-30);
     lineto(X-28, Y-37);
     lineto(X-24, Y-30);
     ellipse(X+70,Y-22,0,180,20,20);
     ellipse(X+70,Y-22,0,0,5,5);
     moveto(X+89, Y-22);
     lineto(X+85, Y+12);
     lineto(X+55, Y+12);
     lineto(X+50, Y-22);
     }

//acesso ao inventário
void INVENTARIO (int FORCA, int DEFESA, int ARMADURA, int VIDA, int LVLESPADA, int LVLESCUDO, int LVLARMADURA, int POCAO)        
     {       
          char FOR[10], DEF[10], ARM[10], VID[10], POC[10];
          itoa(FORCA, FOR, 10);
          itoa(DEFESA, DEF, 10);
          itoa(ARMADURA, ARM, 10);
          itoa(VIDA, VID, 10);
          itoa(POCAO, POC, 10);
          cleardevice();      
          // Escrevendo texto na tela
          setcolor(2);
          settextstyle(1,0,3);
          outtextxy(10, 0, "DADOS DO PERSONAGEM");
          setcolor(4);
          settextstyle(1,0,2);
          outtextxy(10, 100, "FORÇA: ");
          outtextxy(250, 100, FOR);
          outtextxy(10, 200, "DEFESA: ");
          outtextxy(250, 200, DEF);
          outtextxy(10, 300, "ARMADURA: ");
          outtextxy(250, 300, ARM);
          outtextxy(10, 400, "VIDA: ");
          outtextxy(250, 400, VID);
          outtextxy(10, 500, "POÇÕES: ");
          outtextxy(250, 500, POC);
          setcolor(7);
          settextstyle(12,0,1);
          outtextxy(10, 580, "PRESSIONE QUALQUER TECLA PARA CONTINUAR...");
          // Desenhando armas na tela
          if (LVLESPADA==1)
             ESPADA1IN (400, 150);
          if (LVLESPADA==2)
             ESPADA2IN (400, 150);
          if (LVLESPADA==3)
             ESPADA3IN (400, 150);
          if (LVLESPADA==4)
             ESPADA4IN (400, 150);
          if (LVLESCUDO==1)
             ESCUDO1IN (420, 300);
          if (LVLESCUDO==2)
             ESCUDO2IN (420, 300);
          getch ();
          cleardevice();
     }
        
     
     
     
//construção do cenário

//LEVEL 1

// SALA 1

// PARTE 1
void L1S1P1(int X, int Y)     
     {
     moveto(X+470, Y);
     lineto(X+470, Y+570); 
     lineto(X+600, Y+570); 
     moveto(X+570, Y);
     lineto(X+570, Y+250);
     lineto(X+600, Y+250);
     moveto(X+600, Y+350);
     lineto(X+570, Y+350); 
     lineto(X+570, Y+470); 
     lineto(X+600, Y+470);
     }
     
// PARTE 2
void L1S1P2(int X, int Y)     
     {
     moveto(X,     Y+250);
     lineto(X+460, Y+250); 
     lineto(X+460, Y+350); 
     lineto(X,     Y+350); 
     moveto(X,     Y+470);
     lineto(X+600, Y+470);
     moveto(X,     Y+570);
     lineto(X+600, Y+570); 
     }
     
// PARTE 3
void L1S1P3(int X, int Y)     
     {
     moveto(X,     Y+470);
     lineto(X+30,  Y+470); 
     lineto(X+30,  Y); 
     moveto(X,     Y+570);
     lineto(X+130, Y+570);
     lineto(X+130, Y); 
     }
     
// PARTE 4  
void L1S1P4(int X, int Y)     
     {
     moveto(X, Y+250);
     lineto(X+250, Y+250); 
     lineto(X+250, Y); 
     moveto(X+350, Y);
     lineto(X+350, Y+360);
     lineto(X+600, Y+360);
     moveto(X, Y+350);
     lineto(X+250, Y+350); 
     lineto(X+250, Y+460); 
     lineto(X+600, Y+460);
     moveto(X+470, Y+600);   
     lineto(X+470, Y+470);
     lineto(X+600, Y+470);
     moveto(X+570, Y+600);   
     lineto(X+570, Y+570);
     lineto(X+600, Y+570);
     }

// PARTE 5  
void L1S1P5(int X, int Y)     
     {
     moveto(X,     Y+360);
     lineto(X+30,  Y+360); 
     lineto(X+30,  Y+30); 
     lineto(X+240, Y+30);
     lineto(X+240, Y+130);
     lineto(X+130, Y+130); 
     lineto(X+130, Y+460); 
     lineto(X,     Y+460);
     moveto(X,     Y+470);   
     lineto(X+470, Y+470);
     lineto(X+470, Y);
     moveto(X,     Y+570);   
     lineto(X+570, Y+570);
     lineto(X+570, Y);
     }
     
// PARTE 6
void L1S1P6(int X, int Y)     
     {
     moveto(X+30,  Y+600);
     lineto(X+30,  Y+250); 
     lineto(X+600, Y+250); 
     moveto(X+130, Y+600);   
     lineto(X+130, Y+350);
     lineto(X+600, Y+350);
     moveto(X+360, Y);   
     lineto(X+360, Y+240);
     lineto(X+460, Y+240);
     lineto(X+460, Y);
     }
     
// PARTE 7
void L1S1P7(int X, int Y)     
     {
     moveto(X+250, Y+600);
     lineto(X+250, Y+360); 
     lineto(X+600, Y+360); 
     moveto(X+350, Y+600);   
     lineto(X+350, Y+460);
     lineto(X+600, Y+460);
     }
     
// PARTE 8
void L1S1P8(int X, int Y)     
     {
     moveto(X,      Y+360);
     lineto(X+470,  Y+360); 
     lineto(X+470,  Y+30);
     lineto(X+600,  Y+30);
     moveto(X,      Y+460);
     lineto(X+470,  Y+460);
     lineto(X+470,  Y+600);
     moveto(X+570,  Y+600);
     lineto(X+570,  Y+130);
     lineto(X+600,  Y+130);
     }
     
// PARTE 9
void L1S1P9(int X, int Y)     
     {
     moveto(X,     Y+30);
     lineto(X+460, Y+30); 
     lineto(X+460, Y+600); 
     moveto(X,     Y+130);   
     lineto(X+360, Y+130);
     lineto(X+360, Y+470); 
     lineto(X+30,  Y+470);
     lineto(X+30,  Y+570);
     lineto(X+360, Y+570);
     lineto(X+360, Y+600);
     }

     
// Sala 2

//Parte 1
void L1S2P1(int X, int Y) 
     {
    moveto (X+250, Y);
    lineto (X+250, Y+250);
    lineto (X+140, Y+250);
    lineto (X+140, Y+570);
    lineto (X+600, Y+570);
    moveto (X+350, Y);
    lineto (X+350, Y+250);
    lineto (X+600, Y+250);
    moveto (X+600, Y+350);
    lineto (X+240, Y+350);
    lineto (X+240, Y+470);
    lineto (X+600, Y+470);
    }


//Parte 2
void L1S2P2(int X, int Y) 
     {
     moveto (X+30,  Y);
     lineto (X+30,  Y+250);
     lineto (X,     Y+250);
     moveto (X+130, Y);
     lineto (X+130, Y+140);
     lineto (X+600, Y+140);
     moveto (X,     Y+350);
     lineto (X+130, Y+350);
     lineto (X+130, Y+240);
     lineto (X+600, Y+240);
     moveto (X,     Y+470);
     lineto (X+600, Y+470);
     moveto (X,     Y+570);
     lineto (X+600, Y+570);
     }


//Parte 3
void L1S2P3(int X, int Y) 
     {
     moveto (X,     Y+140);
     lineto (X+140, Y+140);
     lineto (X+140, Y);
     moveto (X,     Y+240);
     lineto (X+240, Y+240);
     lineto (X+240, Y);
     moveto (X,     Y+470);
     lineto (X+360, Y+470);
     lineto (X+360, Y);
     moveto (X,     Y+570);
     lineto (X+460, Y+570);
     lineto (X+460, Y);
     }


//Parte 4
void L1S2P4(int X, int Y) 
{
moveto (X,     Y+250);
lineto (X+250, Y+250);
lineto (X+250, Y);
moveto (X,     Y+350);
lineto (X+250, Y+350);
lineto (X+250, Y+600);
moveto (X+350, Y);
lineto (X+350, Y+600);
}


//Parte 5
void L1S2P5(int X, int Y) 
{
moveto (X+30,  Y);
lineto (X+30,  Y+600);
moveto (X+130, Y);
lineto (X+130, Y+250);
lineto (X+360, Y+250);
lineto (X+360, Y);
moveto (X+130, Y+600);
lineto (X+130, Y+350);
lineto (X+460, Y+350);
lineto (X+460, Y);
}


//Parte 6
void L1S2P6(int X, int Y) 
{
moveto (X+140,  Y);
lineto (X+140,  Y+600);
moveto (X+240,  Y);
lineto (X+240,  Y+600);
moveto (X+360,  Y);
lineto (X+360,  Y+600);
moveto (X+460,  Y);
lineto (X+460,  Y+140);
lineto (X+470,  Y+140);
lineto (X+470,  Y);
moveto (X+570,  Y);
lineto (X+570,  Y+240);
lineto (X+460,  Y+240);
lineto (X+460,  Y+600);
}


//Parte 7
void L1S2P7(int X, int Y) 
{
moveto (X+250,  Y+600);
lineto (X+250,  Y+140);
lineto (X+600,  Y+140);
moveto (X+350,  Y+600);
lineto (X+350,  Y+240);
lineto (X+600,  Y+240);
}


//Parte 8
void L1S2P8(int X, int Y) 
{
moveto (X,     Y+140);
lineto (X+130, Y+140);
lineto (X+130, Y+600);
moveto (X,     Y+240);
lineto (X+30,  Y+240);
lineto (X+30,  Y+600);
moveto (X+360, Y+600);
lineto (X+360, Y+360);
lineto (X+600, Y+360);
moveto (X+460, Y+600);
lineto (X+460, Y+460);
lineto (X+600, Y+460);
moveto (X+250, Y);
lineto (X+250, Y+240);
lineto (X+600, Y+240);
moveto (X+350, Y);
lineto (X+350, Y+140);
lineto (X+600, Y+140);
moveto (X+600, Y+30);
lineto (X+360, Y+30);
lineto (X+360, Y+130);
lineto (X+600, Y+130);
}


//Parte 9
void L1S2P9(int X, int Y) 
{
moveto (X,     Y+30);
lineto (X+570, Y+30);
lineto (X+570, Y+600);
moveto (X,     Y+130);
lineto (X+470, Y+130);
lineto (X+470, Y+600);
moveto (X,     Y+140);
lineto (X+460, Y+140);
lineto (X+460, Y+600);
moveto (X,     Y+240);
lineto (X+360, Y+240);
lineto (X+360, Y+600);
moveto (X,     Y+360);
lineto (X+240, Y+360);
lineto (X+240, Y+600);
moveto (X,     Y+460);
lineto (X+140, Y+460);
lineto (X+140, Y+600);
}



// Sala 3

//Parte 1
void L1S3P1(int X, int Y) 
{
moveto (X+600, Y+460);
lineto (X+30,  Y+460);
lineto (X+30,  Y+30);
lineto (X+130, Y+30);
lineto (X+130, Y+360);
lineto (X+600, Y+360);
}


//Parte 2
void L1S3P2(int X, int Y) 
{
moveto (X+250, Y);
lineto (X+250, Y+360);
lineto (X,     Y+360);
moveto (X+250, Y+600);
lineto (X+250, Y+460);
lineto (X,     Y+460);
moveto (X+350, Y);
lineto (X+350, Y+360);
lineto (X+600, Y+360);
moveto (X+350, Y+600);
lineto (X+350, Y+460);
lineto (X+600, Y+460);
}


//Parte 3
void L1S3P3(int X, int Y) 
{
moveto (X,     Y+360);
lineto (X+460, Y+360);
lineto (X+460, Y+460);
lineto (X,     Y+460);
moveto (X+140, Y);
lineto (X+140, Y+350);
lineto (X+240, Y+350);
lineto (X+240, Y);
moveto (X+360, Y);
lineto (X+360, Y+350);
lineto (X+460, Y+350);
lineto (X+460, Y);
}


//Parte 4
void L1S3P4(int X, int Y) 
{
moveto (X+30,  Y);
lineto (X+30,  Y+130);
lineto (X+130, Y+130);
lineto (X+130, Y);
moveto (X,     Y+250);
lineto (X+140, Y+250);
lineto (X+140, Y+140);
lineto (X+250, Y+140);
lineto (X+250, Y);
moveto (X,     Y+350);
lineto (X+240, Y+350);
lineto (X+240, Y+240);
lineto (X+350, Y+240);
lineto (X+350, Y);
moveto (X+600, Y+250);
lineto (X+470, Y+250);
lineto (X+470, Y+350);
lineto (X+600, Y+350);
}


//Parte 5
void L1S3P5(int X, int Y) 
{
moveto (X,     Y+250);
lineto (X+250, Y+250);
lineto (X+250, Y);
moveto (X,     Y+350);
lineto (X+250, Y+350);
lineto (X+250, Y+600);
moveto (X+350, Y);
lineto (X+350, Y+600);
}


//Parte 6
void L1S3P6(int X, int Y) 
{
moveto (X+140, Y);
lineto (X+140, Y+600);
moveto (X+240, Y);
lineto (X+240, Y+600);
moveto (X+360, Y);
lineto (X+360, Y+600);
moveto (X+460, Y);
lineto (X+460, Y+600);
}


//Parte 7
void L1S3P7(int X, int Y) 
{
moveto (X+30,  Y+600);
lineto (X+30,  Y+470);
lineto (X+140, Y+470);
lineto (X+140, Y+250);
lineto (X+600, Y+250);
moveto (X+130, Y+600);
lineto (X+130, Y+570);
lineto (X+250, Y+570);
lineto (X+250, Y+600);
moveto (X+350, Y+600);
lineto (X+350, Y+470);
lineto (X+240, Y+470);
lineto (X+240, Y+350);
lineto (X+600, Y+350);
moveto (X+600, Y+30);
lineto (X+30,  Y+30);
lineto (X+30,  Y+130);
lineto (X+600, Y+130);
}

//Parte 8
void L1S3P8(int X, int Y) 
{
moveto (X,     Y+30);
lineto (X+600, Y+30);
moveto (X,     Y+130);
lineto (X+600, Y+130);
moveto (X,     Y+250);
lineto (X+600, Y+250);
moveto (X,     Y+350);
lineto (X+250, Y+350);
lineto (X+250, Y+600);
moveto (X+600, Y+350);
lineto (X+350, Y+350);
lineto (X+350, Y+600);
}


//Parte 9
void L1S3P9(int X, int Y) 
{
moveto (X,     Y+30);
lineto (X+460, Y+30);
lineto (X+460, Y+600);
moveto (X,     Y+130);
lineto (X+360, Y+130);
lineto (X+360, Y+600);
moveto (X,     Y+250);
lineto (X+240, Y+250);
lineto (X+240, Y+600);
moveto (X,     Y+350);
lineto (X+140, Y+350);
lineto (X+140, Y+600);
}





// Sala 4

//Parte 1
void L1S4P1(int X, int Y) 
{
moveto (X+30,  Y);
lineto (X+30,  Y+460);
lineto (X+600, Y+460);
moveto (X+130, Y);
lineto (X+130, Y+360);
lineto (X+600, Y+360);
moveto (X+250,  Y);
lineto (X+250, Y+350);
lineto (X+600, Y+350);
moveto (X+350,  Y);
lineto (X+350, Y+250);
lineto (X+600, Y+250);
}


//Parte 2
void L1S4P2(int X, int Y) 
{
moveto (X+30,  Y);
lineto (X+30,  Y+240);
lineto (X+570, Y+240);
lineto (X+570, Y);
moveto (X+130, Y);
lineto (X+130, Y+140);
lineto (X+470, Y+140);
lineto (X+470, Y);
moveto (X,      Y+250);
lineto (X+600,  Y+250);
moveto (X,      Y+350);
lineto (X+600,  Y+350);
moveto (X,      Y+360);
lineto (X+600,  Y+360);
moveto (X,      Y+460);
lineto (X+600,  Y+460);
}


//Parte 3
void L1S4P3(int X, int Y) 
{
moveto (X,     Y+250);
lineto (X+140, Y+250);
lineto (X+140, Y);
moveto (X,     Y+350);
lineto (X+240, Y+350);
lineto (X+240, Y);
moveto (X,     Y+360);
lineto (X+360, Y+360);
lineto (X+360, Y);
moveto (X,     Y+460);
lineto (X+460, Y+460);
lineto (X+460, Y);
}


//Parte 4
void L1S4P4(int X, int Y) 
{
moveto (X+30, Y+600);
lineto (X+30,  Y+30);
lineto (X+350,  Y+30);
lineto (X+350, Y+600);
moveto (X+130, Y+600);
lineto (X+130, Y+130);
lineto (X+250, Y+130);
lineto (X+250, Y+600);
moveto (X+470, Y);
lineto (X+470, Y+130);
lineto (X+600, Y+130);
moveto (X+570, Y);
lineto (X+570, Y+30);
lineto (X+600, Y+30);
}


//Parte 5
void L1S4P5(int X, int Y) 
{
moveto (X,     Y+30);
lineto (X+140, Y+30);
lineto (X+140, Y);
moveto (X,     Y+130);
lineto (X+240, Y+130);
lineto (X+240, Y);
moveto (X+30,  Y+600);
lineto (X+30,  Y+140);
lineto (X+250, Y+140);
lineto (X+250, Y);
moveto (X+130, Y+600);
lineto (X+130, Y+240);
lineto (X+350, Y+240);
lineto (X+350, Y);
moveto (X+470, Y);
lineto (X+470, Y+130);
lineto (X+570, Y+130);
lineto (X+570, Y);
moveto (X+470, Y+600);
lineto (X+470, Y+140);
lineto (X+600, Y+140);
moveto (X+570, Y+600);
lineto (X+570, Y+240);
lineto (X+600, Y+240);
}


//Parte 6
void L1S4P6(int X, int Y) 
{
moveto (X,     Y+140);
lineto (X+240, Y+140);
lineto (X+240, Y+600);
moveto (X,     Y+240);
lineto (X+140, Y+240);
lineto (X+140, Y+600);
moveto (X+360, Y);
lineto (X+360, Y+600);
moveto (X+460, Y+600);
lineto (X+460, Y+350);
lineto (X+600, Y+350);
moveto (X+460, Y);
lineto (X+460, Y+250);
lineto (X+600, Y+250);
}


//Parte 7
void L1S4P7(int X, int Y) 
{
moveto (X+470, Y+600);
lineto (X+470, Y+570);
lineto (X+30,  Y+570);
lineto (X+30,  Y+140);
lineto (X+600, Y+140);
moveto (X+570, Y+600);
lineto (X+570, Y+470);
lineto (X+130, Y+470);
lineto (X+130, Y+240);
lineto (X+600, Y+240);
}


//Parte 8
void L1S4P8(int X, int Y) 
{
moveto (X,     Y+140);
lineto (X+250, Y+140);
lineto (X+250, Y);
moveto (X+600, Y+140);
lineto (X+350, Y+140);
lineto (X+350, Y);
moveto (X,     Y+240);
lineto (X+470, Y+240);
lineto (X+470, Y+600);
moveto (X+600, Y+240);
lineto (X+570, Y+240);
lineto (X+570, Y+600);
moveto (X+130, Y+600);
lineto (X+130, Y+250);
lineto (X+350, Y+250);
lineto (X+350, Y+600);
moveto (X+230, Y+600);
lineto (X+230, Y+350);
lineto (X+250, Y+350);
lineto (X+250, Y+600);
}


//Parte 9
void L1S4P9(int X, int Y)
{
moveto (X,     Y+140);
lineto (X+460, Y+140);
lineto (X+460, Y+600);
moveto (X,     Y+240);
lineto (X+360, Y+240);
lineto (X+360, Y+600);
}




// Sala 5

//Parte 1
void L1S5P1(int X, int Y) 
{
moveto (X+30,  Y);
lineto (X+30,  Y+460);
lineto (X+600, Y+460);
moveto (X+130, Y);
lineto (X+130, Y+360);
lineto (X+600, Y+360);
}


//Parte 2
void L1S5P2(int X, int Y) 
{
moveto (X,     Y+360);
lineto (X+250, Y+360);
lineto (X+250, Y);
moveto (X+600, Y+360);
lineto (X+350, Y+360);
lineto (X+350, Y);
moveto (X,     Y+460);
lineto (X+250, Y+460);
lineto (X+250, Y+600);
moveto (X+600, Y+460);
lineto (X+350, Y+460);
lineto (X+350, Y+600);
}


//Parte 3
void L1S5P3(int X, int Y) 
{
moveto (X,      Y+360);
lineto (X+470,  Y+360);
lineto (X+470,  Y);
moveto (X,      Y+460);
lineto (X+570,  Y+460);
lineto (X+570,  Y);
}


//Parte 4
void L1S5P4(int X, int Y) 
{
moveto (X+30,   Y);
lineto (X+30,   Y+350);
lineto (X+600,  Y+350);
moveto (X+130,  Y);
lineto (X+130,  Y+250);
lineto (X+600,  Y+250);
moveto (X+30,   Y+600);
lineto (X+30,   Y+360);
lineto (X+130,  Y+360);
lineto (X+130,  Y+600);
}


//Parte 5
void L1S5P5(int X, int Y) 
{
moveto (X,      Y+250);
lineto (X+240,  Y+250);
lineto (X+240,  Y+350);
lineto (X,      Y+350);
moveto (X+600,  Y+250);
lineto (X+360,  Y+250);
lineto (X+360,  Y+350);
lineto (X+600,  Y+350);
moveto (X+250,  Y);
lineto (X+250,  Y+600);
moveto (X+350,  Y);
lineto (X+350,  Y+600);
}


//Parte 6
void L1S5P6(int X, int Y) 
{
moveto (X,      Y+350);
lineto (X+470,  Y+350);
lineto (X+470,  Y+600);
moveto (X,      Y+250);
lineto (X+570,  Y+250);
lineto (X+570,  Y+600);
moveto (X+470,  Y);
lineto (X+470,  Y+240);
lineto (X+570,  Y+240);
lineto (X+570,  Y);
}


//Parte 7
void L1S5P7(int X, int Y) 
{
moveto (X+30,   Y+600);
lineto (X+30,   Y+140);
lineto (X+600,  Y+140);
moveto (X+130,  Y+600);
lineto (X+130,  Y+240);
lineto (X+600,  Y+240);
}


//Parte 8
void L1S5P8(int X, int Y) 
{
moveto (X,     Y+140);
lineto (X+250, Y+140);
lineto (X+250, Y);
moveto (X+600, Y+140);
lineto (X+350, Y+140);
lineto (X+350, Y);
moveto (X,     Y+240);
lineto (X+250, Y+240);
lineto (X+250, Y+600);
moveto (X+600, Y+240);
lineto (X+350, Y+240);
lineto (X+350, Y+600);
}


//Parte 9
void L1S5P9(int X, int Y) 
{
moveto (X,      Y+140);
lineto (X+570,  Y+140);
lineto (X+570,  Y+600);
moveto (X,      Y+240);
lineto (X+470,  Y+240);
lineto (X+470,  Y+600);
}


// Sala 6

//Parte 1
void L1S6P1(int X, int Y) 
{
moveto (X+30,   Y);
lineto (X+30,   Y+460);
lineto (X+600,  Y+460);
moveto (X+130,  Y);
lineto (X+130,  Y+360);
lineto (X+600,  Y+360);
}


//Parte 2
void L1S6P2(int X, int Y) 
{
moveto (X,      Y+360);
lineto (X+30,   Y+360);
lineto (X+30,   Y+30);
lineto (X+130,  Y+30);
lineto (X+130,  Y+360);
lineto (X+140,  Y+360);
lineto (X+140,  Y+30);
lineto (X+240,  Y+30);
lineto (X+240,  Y+360);
lineto (X+360,  Y+360);
lineto (X+360,  Y+30);
lineto (X+460,  Y+30);
lineto (X+460,  Y+360);
lineto (X+470,  Y+360);
lineto (X+470,  Y+30);
lineto (X+570,  Y+30);
lineto (X+570,  Y+360);
lineto (X+600,  Y+360);
moveto (X,      Y+460);
lineto (X+250,  Y+460);
lineto (X+250,  Y+600);
moveto (X+600,  Y+460);
lineto (X+350,  Y+460);
lineto (X+350,  Y+600);
}


//Parte 3
void L1S6P3(int X, int Y) 
{
moveto (X,      Y+360);
lineto (X+470,  Y+360);
lineto (X+470,  Y);
moveto (X,      Y+460);
lineto (X+570,  Y+460);
lineto (X+570,  Y);
}


//Parte 4
void L1S6P4(int X, int Y) 
{
moveto (X+30,   Y+600);
lineto (X+30,   Y+250);
lineto (X+600,  Y+250);
moveto (X+130,  Y+600);
lineto (X+130,  Y+350);
lineto (X+600,  Y+350);
}


//Parte 5
void L1S6P5(int X, int Y) 
{
moveto (X,      Y+250);
lineto (X+140,  Y+250);
lineto (X+140,  Y);
moveto (X,      Y+350);
lineto (X+240,  Y+350);
lineto (X+240,  Y);
moveto (X+600,  Y+250);
lineto (X+460,  Y+250);
lineto (X+460,  Y);
moveto (X+600,  Y+350);
lineto (X+360,  Y+350);
lineto (X+360,  Y);
}


//Parte 6
void L1S6P6(int X, int Y) 
{
moveto (X,      Y+250);
lineto (X+570,  Y+250);
lineto (X+570,  Y+600);
moveto (X,      Y+350);
lineto (X+470,  Y+350);
lineto (X+470,  Y+600);
}


//Parte 7
void L1S6P7(int X, int Y) 
{
moveto (X+600,  Y+140);
lineto (X+30,   Y+140);
lineto (X+30,   Y+460);
lineto (X+600,  Y+460);
moveto (X+600,  Y+240);
lineto (X+130,  Y+240);
lineto (X+130,  Y+360);
lineto (X+600,  Y+360);
}


//Parte 8
void L1S6P8(int X, int Y) 
{
moveto (X,      Y+140);
lineto (X+250,  Y+140);
lineto (X+250,  Y);
moveto (X+600,  Y+140);
lineto (X+350,  Y+140);
lineto (X+350,  Y);
moveto (X,      Y+240);
lineto (X+600,  Y+240);
moveto (X,      Y+360);
lineto (X+240,  Y+360);
lineto (X+240,  Y+600);
moveto (X,      Y+460);
lineto (X+140,  Y+460);
lineto (X+140,  Y+600);
moveto (X+600,  Y+360);
lineto (X+360,  Y+360);
lineto (X+360,  Y+600);
moveto (X+600,  Y+460);
lineto (X+460,  Y+460);
lineto (X+460,  Y+600);
}


//Parte 9
void L1S6P9(int X, int Y) 
{
moveto (X,      Y+140);
lineto (X+570,  Y+140);
lineto (X+570,  Y+460);
lineto (X,      Y+460);
moveto (X,      Y+240);
lineto (X+470,  Y+240);
lineto (X+470,  Y+360);
lineto (X,      Y+360);
}
     



void MAPA (int MATRIZX, int MATRIZY, int SALA)
     {
     if (SALA==1)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S1P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S1P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S1P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S1P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S1P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S1P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S1P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S1P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S1P3 (0,0);
         }
     if (SALA==2)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S2P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S2P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S2P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S2P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S2P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S2P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S2P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S2P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S2P3 (0,0);
         }
     if (SALA==3)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S3P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S3P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S3P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S3P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S3P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S3P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S3P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S3P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S3P3 (0,0);
         }
     if (SALA==4)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S4P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S4P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S4P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S4P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S4P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S4P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S4P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S4P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S4P3 (0,0);
         }
     if (SALA==5)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S5P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S5P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S5P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S5P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S5P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S5P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S5P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S5P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S5P3 (0,0);
         }
      if (SALA==6)
        {
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5)
              L1S6P7 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5)
              L1S6P8 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5)
              L1S6P9 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10)
              L1S6P4 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10)
              L1S6P5 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10)
              L1S6P6 (0,0);
         if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 10 && MATRIZY < 15)
              L1S6P1 (0,0);
         if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15)
              L1S6P2 (0,0);
         if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 10 && MATRIZY < 15)
              L1S6P3 (0,0);
         }
     }




//desenhando inimigos
void LAGARTO(int X, int Y)
     {
     setcolor (7);
     moveto(X, Y);
     lineto(X+15, Y);
     lineto(X+14, Y+10);
     lineto(X+18, Y+10);
     lineto(X+19, Y+3);
     lineto(X+20, Y+10);
     lineto(X+24, Y+10);
     lineto(X+22, Y);
     lineto(X+26, Y-1);
     lineto(X+30, Y+4);
     lineto(X+32, Y);
     lineto(X+40, Y+4);
     lineto(X+34, Y-12);
     lineto(X+30, Y-18);
     lineto(X+29, Y-10);
     lineto(X,    Y-7);
     lineto(X-5,  Y-8);
     lineto(X-10, Y-9);
     lineto(X-25, Y-12);
     lineto(X-30, Y-15);
     lineto(X-20, Y-5);
     lineto(X-10, Y);
     lineto(X-11, Y+10);
     lineto(X-7,  Y+10);
     lineto(X-6,  Y+3);
     lineto(X-3,  Y+11);
     lineto(X+1,  Y+10);
     lineto(X, Y);
     moveto(X+20,  Y-9);
     lineto(X+12,  Y-12);
     lineto(X+12,  Y-9);
     moveto(X+11,  Y-8);
     lineto(X+3,   Y-12);
     lineto(X+3,   Y-8);
     moveto(X+2,   Y-8);
     lineto(X-6,   Y-13);
     lineto(X-6,   Y-9);
     moveto(X-7,   Y-9);
     lineto(X-13,  Y-15);
     lineto(X-13,  Y-11);
     moveto(X+28,  Y-13);
     lineto(X+25,  Y-18);
     lineto(X+25,  Y-11);
     circle(X+33,  Y-6, 1);
     }


void ARANHA(int X, int Y)
     {
     setcolor (7);
     //corpo
     ellipse(X,Y+15,0,0,9,10);
     ellipse(X,Y,300,240,7,6);
     //pernas traseiras
     moveto(X+5,  Y+7);
     lineto(X+15, Y+14);         
     lineto(X+18, Y+30);
     moveto(X-5,  Y+7);
     lineto(X-15, Y+14);         
     lineto(X-18, Y+30);
     //pernas do meio
     moveto(X+6,  Y+2);
     lineto(X+15, Y+5);
     lineto(X+22, Y+8);
     moveto(X-6,  Y+2);
     lineto(X-15, Y+5);
     lineto(X-22, Y+8);
     moveto(X+6,  Y-2);
     lineto(X+15, Y-5);
     lineto(X+22, Y-10);
     moveto(X-6,  Y-2);
     lineto(X-15, Y-5);
     lineto(X-22, Y-10);
    //pernas dianteiras
     moveto(X+3,  Y-6);
     lineto(X+15, Y-14);         
     lineto(X+18, Y-30);
     moveto(X-3,  Y-6);
     lineto(X-15, Y-14);         
     lineto(X-18, Y-30);
     //presas
     moveto(X+2,  Y-6);
     lineto(X+3,  Y-10);
     lineto(X+2,  Y-14);
     moveto(X-2,  Y-6);
     lineto(X-3,  Y-10);
     lineto(X-2,  Y-14);
     }


void FANTASMA (int X, int Y)
     {
     setcolor (7);
     moveto(X, Y+38);
     lineto(X+12, Y+48);
     lineto(X+30, Y+48);
     lineto(X+22, Y+40);
     lineto(X+22, Y+10);
     lineto(X+35, Y-3);
     lineto(X+39, Y-2);
     lineto(X+38, Y-6);
     lineto(X+42, Y-9);
     lineto(X+37, Y-10);
     lineto(X+36, Y-14);
     lineto(X+34, Y-11);
     lineto(X+31, Y-14);
     lineto(X+30, Y-9);
     lineto(X+18, Y+2);
     lineto(X+17, Y-17);
     lineto(X+19, Y-27);
     lineto(X+12, Y-21);
     lineto(X, Y-21);
     moveto(X, Y+38);
     lineto(X-12, Y+48);
     lineto(X-30, Y+48);
     lineto(X-22, Y+40);
     lineto(X-22, Y+10);
     lineto(X-35, Y-3);
     lineto(X-39, Y-2);
     lineto(X-38, Y-6);
     lineto(X-42, Y-9);
     lineto(X-37, Y-10);
     lineto(X-36, Y-14);
     lineto(X-34, Y-11);
     lineto(X-31, Y-14);
     lineto(X-30, Y-9);
     lineto(X-18, Y+2);
     lineto(X-17, Y-17);
     lineto(X-19, Y-27);
     lineto(X-12, Y-21);
     lineto(X, Y-21);
     ellipse(X+7,Y-10,0,0,1,4);
     ellipse(X-7,Y-10,0,0,1,4);
     }
     
     
     
void SANGUESSUGA (int X, int Y)
     {
     setcolor (7);
     moveto (X+32, Y-7);
     lineto (X+39, Y-9);
     ellipse(X+38, Y-13,290,120,6,6);
     moveto (X+30, Y-19);
     lineto (X+35, Y-19);
     moveto (X-32, Y-7);
     lineto (X-39, Y-9);
     ellipse(X-38, Y-13,60,260,6,6);
     moveto (X-30, Y-19);
     lineto (X-35, Y-19);
     ellipse(X,    Y,30,150,35,40);
     ellipse(X-20, Y-5,325,0,53,70);
     ellipse(X+20, Y-5,180,215,53,70);
     moveto (X,    Y+22);
     lineto (X+5,  Y+45);
     lineto (X+38, Y+45);
     lineto (X+39, Y+40);
     lineto (X+24, Y+34);
     moveto (X,    Y+22);
     lineto (X-5,  Y+45);
     lineto (X-38, Y+45);
     lineto (X-39, Y+40);
     lineto (X-24, Y+34);
     moveto (X+9,  Y-11);
     lineto (X+2,  Y-9);
     lineto (X+9,  Y-7);
     moveto (X+9,  Y-5);
     lineto (X+2,  Y-3);
     lineto (X+9,  Y-1);
     moveto (X+9,  Y+1);
     lineto (X+2,  Y+3);
     lineto (X+9,  Y+5);
     moveto (X+9,  Y+7);
     lineto (X+2,  Y+9);
     lineto (X+9,  Y+11);
     moveto (X-2,  Y+15);
     lineto (X,    Y+10);
     lineto (X+2,  Y+15);
     moveto (X-2,  Y-15);
     lineto (X,    Y-10);
     lineto (X+2,  Y-15);
     moveto (X-9,  Y-11);
     lineto (X-2,  Y-9);
     lineto (X-9,  Y-7);
     moveto (X-9,  Y-5);
     lineto (X-2,  Y-3);
     lineto (X-9,  Y-1);
     moveto (X-9,  Y+1);
     lineto (X-2,  Y+3);
     lineto (X-9,  Y+5);
     moveto (X-9,  Y+7);
     lineto (X-2,  Y+9);
     lineto (X-9,  Y+11);
     moveto (X-17, Y-23);
     lineto (X-10, Y-23);
     moveto (X+17, Y-23);
     lineto (X+10, Y-23);
     }
     
     
     




//desenhando baú e chave
void BAUC (int X, int Y)
     {
     //CAIXA    
     moveto(X-30, Y-20);
     lineto(X-30, Y+20);
     lineto(X+30, Y+20);
     lineto(X+30, Y-20);
     lineto(X-30, Y-20);
     //FECHADURA
     moveto(X-8, Y-20);
     lineto(X-8, Y-25);
     lineto(X-2, Y-25);
     lineto(X-2, Y-23);
     lineto(X+2, Y-23);
     lineto(X+2, Y-25);
     lineto(X+8, Y-25);
     lineto(X+8, Y-20);
     //ALÇA
     moveto(X-30, Y-10);
     lineto(X-40, Y-10);
     lineto(X-40, Y+10);
     lineto(X-30, Y+10);
     moveto(X-30, Y-8);
     lineto(X-38, Y-8);
     lineto(X-38, Y+8);
     lineto(X-30, Y+8);
     moveto(X+30, Y-10);
     lineto(X+40, Y-10);
     lineto(X+40, Y+10);
     lineto(X+30, Y+10);
     moveto(X+30, Y-8);
     lineto(X+38, Y-8);
     lineto(X+38, Y+8);
     lineto(X+30, Y+8);
     //DESENHOS NO BÁU
     ellipse(X,Y-5,0,0,5,5);
     moveto(X+10,  Y);
     lineto(X-10, Y+10);
     moveto(X-10, Y);
     lineto(X+10,  Y+10);
     }

void BAUB (int X, int Y)
     {
     //CAIXA    
     moveto(X-30, Y-20);
     lineto(X-30, Y+20);
     lineto(X+30, Y+20);
     lineto(X+30, Y-20);
     lineto(X-30, Y-20);
     //FECHADURA
     moveto(X-8, Y+20);
     lineto(X-8, Y+25);
     lineto(X-2, Y+25);
     lineto(X-2, Y+23);
     lineto(X+2, Y+23);
     lineto(X+2, Y+25);
     lineto(X+8, Y+25);
     lineto(X+8, Y+20);
     //ALÇA
     moveto(X-30, Y-10);
     lineto(X-40, Y-10);
     lineto(X-40, Y+10);
     lineto(X-30, Y+10);
     moveto(X-30, Y-8);
     lineto(X-38, Y-8);
     lineto(X-38, Y+8);
     lineto(X-30, Y+8);
     moveto(X+30, Y-10);
     lineto(X+40, Y-10);
     lineto(X+40, Y+10);
     lineto(X+30, Y+10);
     moveto(X+30, Y-8);
     lineto(X+38, Y-8);
     lineto(X+38, Y+8);
     lineto(X+30, Y+8);
     //DESENHOS NO BÁU
     ellipse(X,Y-5,0,0,5,5);
     moveto(X-10,  Y);
     lineto(X+10, Y+10);
     moveto(X+10, Y);
     lineto(X-10,  Y+10);
     }

void BAUD (int X, int Y)
     {
     //CAIXA    
     moveto(X-20, Y-30);
     lineto(X-20, Y+30);
     lineto(X+20, Y+30);
     lineto(X+20, Y-30);
     lineto(X-20, Y-30);
     //FECHADURA
     moveto(X+20, Y-8);
     lineto(X+25, Y-8);
     lineto(X+25, Y-2);
     lineto(X+23, Y-2);
     lineto(X+23, Y+2);
     lineto(X+25, Y+2);
     lineto(X+25, Y+8);
     lineto(X+20, Y+8);
     //ALÇA
     moveto(X-10, Y-30);
     lineto(X-10, Y-40);
     lineto(X+10, Y-40);
     lineto(X+10, Y-30);
     moveto(X-8, Y-30);
     lineto(X-8, Y-38);
     lineto(X+8, Y-38);
     lineto(X+8, Y-30);
     moveto(X-10, Y+30);
     lineto(X-10, Y+40);
     lineto(X+10, Y+40);
     lineto(X+10, Y+30);
     moveto(X-8, Y+30);
     lineto(X-8, Y+38);
     lineto(X+8, Y+38);
     lineto(X+8, Y+30);
     //DESENHOS NO BÁU
     ellipse(X-5,Y,0,0,5,5);
     moveto(X,    Y-10);
     lineto(X+10, Y+10);
     moveto(X,    Y+10);
     lineto(X+10, Y-10);
     }

void BAUE (int X, int Y)
     {
     //CAIXA    
     moveto(X-20, Y-30);
     lineto(X-20, Y+30);
     lineto(X+20, Y+30);
     lineto(X+20, Y-30);
     lineto(X-20, Y-30);
     //FECHADURA
     moveto(X-20, Y-8);
     lineto(X-25, Y-8);
     lineto(X-25, Y-2);
     lineto(X-23, Y-2);
     lineto(X-23, Y+2);
     lineto(X-25, Y+2);
     lineto(X-25, Y+8);
     lineto(X-20, Y+8);
     //ALÇA
     moveto(X-10, Y-30);
     lineto(X-10, Y-40);
     lineto(X+10, Y-40);
     lineto(X+10, Y-30);
     moveto(X-8, Y-30);
     lineto(X-8, Y-38);
     lineto(X+8, Y-38);
     lineto(X+8, Y-30);
     moveto(X-10, Y+30);
     lineto(X-10, Y+40);
     lineto(X+10, Y+40);
     lineto(X+10, Y+30);
     moveto(X-8, Y+30);
     lineto(X-8, Y+38);
     lineto(X+8, Y+38);
     lineto(X+8, Y+30);
     //DESENHOS NO BÁU
     ellipse(X+5,Y,0,0,5,5);
     moveto(X,    Y-10);
     lineto(X-10, Y+10);
     moveto(X,    Y+10);
     lineto(X-10, Y-10);
     }

void CHAVE (int X, int Y)
     {
     ellipse(X-20,Y,0,0,8,10);
     ellipse(X-20,Y,0,0,4,5);
     moveto(X-14, Y-3);
     lineto(X+20, Y-3);
     lineto(X+20, Y+11);
     lineto(X+15, Y+11);
     lineto(X+15, Y+7);
     lineto(X+10, Y+7);
     lineto(X+10, Y+11);
     lineto(X+5,  Y+11);
     lineto(X+5,  Y+3);
     lineto(X-14, Y+3);
     }




int VERIFICADOR_MOVIMENTO (int VER_MOVIMENTO, char C)
{
int ESQUERDA=0, DIREITA=0, CIMA=0, BAIXO=0;
if (VER_MOVIMENTO==1)
	{
	ESQUERDA=1;
	DIREITA=0;
	CIMA=0;
	BAIXO=0;
	}
if (VER_MOVIMENTO==2)
	{
	ESQUERDA=0;
	DIREITA=1;
	CIMA=0;
	BAIXO=0;
	}
if (VER_MOVIMENTO==3)
	{
	ESQUERDA=1;
	DIREITA=1;
	CIMA=0;
	BAIXO=0;
	}
if (VER_MOVIMENTO==4)
	{
	ESQUERDA=0;
	DIREITA=0;
	CIMA=1;
	BAIXO=0;
	}
if (VER_MOVIMENTO==5)
	{
	ESQUERDA=1;
	DIREITA=0;
	CIMA=1;
	BAIXO=0;
	}
if (VER_MOVIMENTO==6)
	{
	ESQUERDA=0;
	DIREITA=1;
	CIMA=1;
	BAIXO=0;
	}
if (VER_MOVIMENTO==7)
	{
	ESQUERDA=1;
	DIREITA=1;
	CIMA=1;
	BAIXO=0;
	}
if (VER_MOVIMENTO==8)
	{
	ESQUERDA=0;
	DIREITA=0;
	CIMA=0;
	BAIXO=1;
	}
if (VER_MOVIMENTO==9)
	{
	ESQUERDA=1;
	DIREITA=0;
	CIMA=0;
	BAIXO=1;
	}
if (VER_MOVIMENTO==10)
	{
	ESQUERDA=0;
	DIREITA=1;
	CIMA=0;
	BAIXO=1;
	}
if (VER_MOVIMENTO==11)
	{
	ESQUERDA=1;
	DIREITA=1;
	CIMA=0;
	BAIXO=1;
	}
if (VER_MOVIMENTO==12)
	{
	ESQUERDA=0;
	DIREITA=0;
	CIMA=1;
	BAIXO=1;
	}
if (VER_MOVIMENTO==13)
	{
	ESQUERDA=1;
	DIREITA=0;
	CIMA=1;
	BAIXO=1;
	}
if (VER_MOVIMENTO==14)
	{
	ESQUERDA=0;
	DIREITA=1;
	CIMA=1;
	BAIXO=1;
	}
if (VER_MOVIMENTO==15)
	{
	ESQUERDA=1;
	DIREITA=1;
	CIMA=1;
	BAIXO=1;
	}
if ((C=='s' || C=='S') && BAIXO==1)
	return 1;
if ((C=='w' || C=='W') && CIMA==1)
	return 1;
if ((C=='a' || C=='A') && ESQUERDA==1)
	return 1;
if ((C=='d' || C=='D') && DIREITA==1)
	return 1;
else
    return 0;
}




void COMOJOGAR ()
     {
     int SAIR=0;
     char D;
     cleardevice();
     setcolor(3);
     settextstyle(6,0,5);
     outtextxy(10, 0, "COMO JOGAR?");
     setcolor(6);
     settextstyle(6,0,1);
     outtextxy(10,50, "SEU OBJETIVO É ENCONTRAR NO FINAL DO");
     outtextxy(10,80, "LABIRINTO, UMA LINDA PRINCESA PARA");
     outtextxy(10,110, "REINAR COM VOCÊ...");
     setcolor(7);
     settextstyle(6,0,2);
     outtextxy(10,150, "COMANDOS NO LABIRINTO:");
     setcolor(6);
     settextstyle(6,0,1);
     outtextxy(10,180, "A-");
     outtextxy(60,180, "MOVIMENTAÇÃO PARA ESQUERDA");
     outtextxy(10,210, "D-");
     outtextxy(60,210, "MOVIMENTAÇÃO PARA DIREITA");
     outtextxy(10,240, "W-");
     outtextxy(60,240, "MOVIMENTAÇÃO PARA CIMA");
     outtextxy(10,270, "S-");
     outtextxy(60,270, "MOVIMENTAÇÃO PARA BAIXO");
     outtextxy(10,300, "I-");
     outtextxy(60,300, "ACESSO AOS DADOS DO HEROÍ");
     setcolor(7);
     settextstyle(6,0,2);
     outtextxy(10,340, "COMANDOS NO MODO DE BATALHA:");
     setcolor(6);
     settextstyle(6,0,1);
     outtextxy(10,370, "SETA PARA CIMA:");
     outtextxy(260,370, "ESCOLHE AÇÃO ACIMA");
     outtextxy(10,400, "SETA PARA BAIXO:");
     outtextxy(260,400, "ESCOLHE AÇÃO ABAIXO");
     outtextxy(10,430, "BARRA DE ESPAÇO:");
     outtextxy(260,430, "ATIVA A ESCOLHA");
     setcolor(7);
     settextstyle(6,0,4);
     outtextxy(145,530, "SAIR");
     setcolor(4);
     HEROIDIR (40,540);
     ESPADA1D (40,540);
     ESCUDO1D (40,540);
     ellipse  (40,540,0,0,16,30);
     while (SAIR==0)
        {   
        D=getch();
        if (D==ESPACO)
            SAIR=1;
        }
     }
     
     
     
void PROGRAMADOR ()
     {
     int SAIR=0;
     char D;
     cleardevice();
     setcolor(3);
     settextstyle(6,0,5);
     outtextxy(10, 50, "PROGRAMADOR");
     setcolor(7);
     settextstyle(6,0,3);
     outtextxy(10, 450, "PAULO FERNANDES COUTO");
     setcolor(7);
     settextstyle(6,0,4);
     outtextxy(145,530, "SAIR");
     setcolor(4);
     HEROIDIR (40,540);
     ESPADA1D (40,540);
     ESCUDO1D (40,540);
     ellipse  (40,540,0,0,16,30);
     while (SAIR==0)
        {   
        D=getch();
        if (D==ESPACO)
            SAIR=1;
        }
     }
     
     
void MENUINICIAL ()
     {
     int INDICADOR=310, VERIFICADOR=0, INICIAR=0;
     char D;
     while (INICIAR==0)
           {
           cleardevice();
           setcolor(3);
           settextstyle(6,0,5);
           outtextxy(45, 50, "BUSCA PRINCESA");
           setcolor(7);
           settextstyle(6,0,4);
           outtextxy(145,300, "INICIAR");
           outtextxy(145,400, "COMO JOGAR");
           outtextxy(145,500, "PROGRAMADOR");
           if (VERIFICADOR==0)
              INDICADOR=310;
           if (VERIFICADOR==1)
              INDICADOR=410;
           if (VERIFICADOR==2)
              INDICADOR=510;
           setcolor(4);
           HEROIDIR (40,INDICADOR);
           ESPADA1D (40,INDICADOR);
           ESCUDO1D (40,INDICADOR);
           ellipse  (40,INDICADOR,0,0,16,30);
           D=getch();
           if (D==DOWN && VERIFICADOR==0)
              VERIFICADOR=1;
              else if (D==DOWN && VERIFICADOR==1)
                 VERIFICADOR=2;
                    else if (D==UP && VERIFICADOR==2)
                       VERIFICADOR=1;
                          else if (D==UP && VERIFICADOR==1)
                             VERIFICADOR=0;
           if (D==ESPACO && VERIFICADOR==0)
              INICIAR=1;
           if (D==ESPACO && VERIFICADOR==1)
              COMOJOGAR();
           if (D==ESPACO && VERIFICADOR==2)
              PROGRAMADOR();  
           }
     }



int VERIFICACAOSAIDA ()
    {
    char D='I';
    setcolor(5);
    settextstyle(6,0,4);
    outtextxy(145,300, "DESEJA SAIR?");
    outtextxy(195,350, "'S' OU 'N'");
    while (D!='S' && D!='s' && D!='N' && D!='n')
       D=getch();
    if (D=='S' || D=='s')
       return 1;
    if (D=='N' || D=='n')
       return 0;
    }   


void TELASAIDA()
     {
     cleardevice ();
     setcolor(500);
     settextstyle(6,0,6);
     outtextxy(5,50, "VOCÊ MORREU...");
     settextstyle(6,1,4);
     outtextxy(45,500, "YOU DIED...");
     settextstyle(6,3,4);
     outtextxy(555,250, "MORISTE...");
     settextstyle(6,0,4);
     outtextxy(170,550, "SIE STARB...");
     settextstyle(6,0,4);
     outtextxy(50,150, "SI ERGO MORTUI ESTIS...");
     Sleep(10000);
     }

int TELACOMBATE(int FORCA, int DEFESA, int ARMADURA, int VIDA, int POCAO, int ACUMULADOR)
    {
    char FOR[10], DEF[10], ARM[10], VID[10], POC[10], AE[10];
    itoa(FORCA, FOR, 10);
    itoa(DEFESA, DEF, 10);
    itoa(ARMADURA, ARM, 10);
    itoa(VIDA, VID, 10);
    itoa(POCAO, POC, 10);
    itoa(ACUMULADOR, AE, 10);
    cleardevice ();
    setcolor(2);
    settextstyle(1,0,3);
    outtextxy(10, 0, "DADOS DO PERSONAGEM");
    setcolor(4);
    settextstyle(1,0,2);
    outtextxy(10, 100, "FORÇA: ");
    outtextxy(250, 100, FOR);
    outtextxy(10, 150, "DEFESA: ");
    outtextxy(250, 150, DEF);
    outtextxy(10, 200, "ARMADURA: ");
    outtextxy(250, 200, ARM);
    outtextxy(10, 250, "VIDA: ");
    outtextxy(250, 250, VID);
    outtextxy(10, 300, "POÇÕES: ");
    outtextxy(250, 300, POC);
    setcolor(5);
    moveto (0,400);
    lineto (600,400);
    setcolor(500);
    settextstyle(6,0,2);
    outtextxy(100,440, "ATACAR");
    outtextxy(100,490, "ATAQUE ESPECIAL");
    outtextxy(500,490, AE);
    outtextxy(100,540, "USAR POÇÃO");
    }
    
    
    
    
int MODODECOMBATE(int FH, int DH, int AH, int POCAO, int FI, int DI, int AI, int ESPECIAL)
    {
    setcolor(8);
    settextstyle(6,0,5);
    outtextxy(100,250, "COMBATE!!!!!!!");
    Sleep (1000);
    //DADOS PARA COMBATE
    int VH, FAH, RESH, DESH, VI, FAI, RESI, DESI, DESVIO;
    int ACUMULADOR=0, DOBRO;
    int ATACAR, USARPOCAO;
    int ESCOLHA=1, JOGADAVALIDA=0;
    char F='I';
    char VID[10];
    if (ESPECIAL==2)
       DOBRO=2;
       else
           DOBRO=1;
    //ATRIBUINDO VALORES AO HEROI
    VH=FH*2+DH*15+AH*1;
    FAH=FH*10+DH*2;
    RESH=AH*5;
    DESH=DH;
    
    //ATRIBUINDO VALORES AO INIMIGO    
    VI=FI*2+DI*20+AI*1;
    FAI=FI*10+DI*2;
    RESI=AI*5;
    DESI=DI*DOBRO;
    
    TELACOMBATE(FH, DH, AH, VH, POCAO, ACUMULADOR);
    
    while (VH>0 && VI>0)
          {
          //TURNO DO HEROI
          while (JOGADAVALIDA==0)
          {
          setcolor(2);
          if (ESCOLHA==1)
             ellipse(50,450,0,0,25,25);
          if (ESCOLHA==2)
             ellipse(50,500,0,0,5,5);
          if (ESCOLHA==3)
             ellipse(50,550,0,0,5,5);
          F = getch();
          while (F!=UP && F!=DOWN && F!=ESPACO) 
                F = getch();
          if (ESCOLHA==1 && F==DOWN)
             ESCOLHA=2;
             else if (ESCOLHA==2 && F==DOWN)
                  ESCOLHA=3;
                  else if (ESCOLHA==3 && F==UP)
                       ESCOLHA=2;
                       else if (ESCOLHA==2 && F==UP)
                            ESCOLHA=1;
                            else if (ESCOLHA==1 && F==ESPACO)
                                 {
                                 srand(time(NULL));          
                                 DESVIO=rand()%101;
                                 if (DESI<DESVIO)
                                    {
                                    VI=VI-FAH+RESI;
                                    ACUMULADOR=ACUMULADOR+1;
                                    JOGADAVALIDA=1;
                                    itoa(+FAH-RESI, VID, 10);
                                    setcolor(7);
                                    settextstyle(6,0,1);
                                    outtextxy(10,350, "ACERTOU, O INIMIGO PERDE:");
                                    Sleep (2500);
                                    outtextxy(370,350, VID);
                                    Sleep (2500);
                                    }
                                   else
                                         {
                                         setcolor(7);
                                         settextstyle(6,0,1);
                                         outtextxy(10,350, "O INIMIGO DESVIOU DO SEU ATAQUE");
                                         Sleep (2500);
                                         JOGADAVALIDA=1;
                                         }
                                 }
                                 else if (ESCOLHA==2 && F==ESPACO && ACUMULADOR>0)
                                      {
                                      srand(time(NULL));          
                                      DESVIO=rand()%101;
                                      if (DESI<DESVIO)
                                         {
                                         VI=VI-(FAH*ACUMULADOR)+RESI;
                                         JOGADAVALIDA=1;
                                         itoa(+FAH*ACUMULADOR-RESI, VID, 10);
                                         setcolor(7);
                                         settextstyle(6,0,1);
                                         outtextxy(10,350, "ACERTOU, O INIMIGO PERDE:");
                                         Sleep (2500);
                                         outtextxy(370,350, VID);
                                         Sleep (2500);
                                         }
                                         else
                                             {
                                             setcolor(7);
                                             settextstyle(6,0,1);
                                             outtextxy(10,350, "O INIMIGO DESVIOU DO SEU ATAQUE");
                                             Sleep (2500);
                                             JOGADAVALIDA=1;
                                             }
                                         ACUMULADOR=0;
                                      }
                                      else if (ESCOLHA==3 && F==ESPACO && POCAO>0)
                                           {
                                           POCAO=POCAO-1;
                                           VH=FH*2+DH*15+AH*1;
                                           setcolor(7);
                                           settextstyle(6,0,1);
                                           outtextxy(10,350, "VOCÊ RECUPEROU SUA VIDA");
                                           Sleep (2500);
                                           JOGADAVALIDA=1;
                                           }
          TELACOMBATE(FH, DH, AH, VH, POCAO, ACUMULADOR);
          }
          JOGADAVALIDA=0;
          
          //TURNO DO INIMIGO
          if (VI>0)
          {
          srand(time(NULL));          
          DESVIO=rand()%101;
          if (DESH<DESVIO)
             {
             VH=VH-FAI+RESH;
             itoa(+FAI-RESH, VID, 10);
             setcolor(7);
             settextstyle(6,0,1);
             outtextxy(10,350, "O INIMIGO TE ATACOU, ");
             Sleep (2500);
             settextstyle(6,0,1);
             outtextxy(300,350, "VOCÊ PERDEU: ");
             outtextxy(485,350, VID);
             Sleep (2500);
             }
             else
                {
                setcolor(7);
                settextstyle(6,0,1);
                outtextxy(10,350, "VOCÊ DESVIOU DO ATAQUE INIMIGO");
                Sleep (2500);
                }
             if (ESPECIAL==1)
                {
                setcolor(7);
                settextstyle(6,0,1);
                outtextxy(10,350, "O INIMIGO DRENOU 10 DA SUA ENERGIA");
                VH=VH-10;
                VI=VI+10;
                Sleep (2500);
                }
          TELACOMBATE(FH, DH, AH, VH, POCAO, ACUMULADOR);
          }
          }
    if (VH<=0)
       return 0;
    if (VI<=0)
       {
       setcolor(6);
       settextstyle(6,0,5);
       outtextxy(140,250, "PARABÉNS");
       outtextxy(90,350, "VOCÊ VENCEU");
       Sleep (2500);
       return 1;
       }
    }



int main()
    {
     //PARAMETROS DO JOGO
     int X=0,Y=0, PASSO=110, DESTRUIDO=0, CENX=0, CENY=0, CONTADOR=0, MATRIZX=0, MATRIZY=0, SALA=0, SAIR=0, RESULTADOCOMBATE=5;  
     int TEMPOA = time(NULL), TEMPOB = time(NULL);
     int MATRIZS1 [15][15], MATRIZS2 [15][15], MATRIZS3 [15][15], MATRIZS4 [15][15], MATRIZS5 [15][15], MATRIZS6 [15][15];
     int IND_MOV=0, CONFMOV=0;
     //CARACTERÍSTICAS DO PERSONAGEM
     int FORCA=5,  DEFESA=5,  ARMADURA=9,  VIDA=0,  FORCAATAQUE=0,  DESVIO=0,  RESISTENCIA=0;
     int LVLESPADA=1, LVLESCUDO=1, LVLARMADURA=1, POCAO=1;
     //CARACTERÍSTICAS DO LAGARTO
     int FORCAL=5, DEFESAL=10, ARMADURAL=4;
     //CARACTERÍSTICAS DA ARANHA
     int FORCAA=9, DEFESAA=12, ARMADURAA=2;
     //CARACTERÍSTICAS DA SANGUESSUGA
     int FORCAS=6, DEFESAS=18, ARMADURAS=5;
     //CARACTERÍSTICAS DO FANTASMA
     int FORCAF=6, DEFESAF=25, ARMADURAF=10;
     //CHAVES
     int CHAVEAZUL=0, CHAVEROXO=0, CHAVELARANJA=0;
     //BAÚS
     int BAUROXO=0, BAULARANJA=0, BAUAZUL1=0, BAUAZUL2=0, BAUAZUL3=0, BAUAZUL4=0, BAUAZUL5=0;
     //INIMIGOS
     int LAGARTO1=0, LAGARTO2=0, LAGARTO3=0, LAGARTO4=0, LAGARTO5=0, LAGARTO6=0, LAGARTO7=0, LAGARTO8=0, LAGARTO9=0, LAGARTO10=0, LAGARTO11=0, LAGARTO12=0;
     int ARANHA1=0, ARANHA2=0, ARANHA3=0;
     int SANGUESSUGA1=0, SANGUESSUGA2=0, SANGUESSUGA3=0;
     int FANTASMA1=0;
     //CARACTERES DE CONTROLE
     char C, ULTMOV, DESN;
     //PREENCHENDO MATRIZ SALA 1
     MATRIZS1 [0][7] =2;
     MATRIZS1 [1][7] =3;
     MATRIZS1 [2][3] =10; MATRIZS1 [2][4]=12; MATRIZS1 [2][5] =12; MATRIZS1 [2][6] =12; MATRIZS1 [2][7] =13; MATRIZS1 [2][8] =6;
     MATRIZS1 [3][3] =3; MATRIZS1 [3][8]=3;
     MATRIZS1 [4][3] =3; MATRIZS1 [4][8]=3; MATRIZS1 [4][9] =10; MATRIZS1 [4][10]=12; MATRIZS1 [4][11]=12; MATRIZS1 [4][12]=14; MATRIZS1 [4][13]=12; MATRIZS1 [4][14]=6;
     MATRIZS1 [5][3] =3; MATRIZS1 [5][5]=10; MATRIZS1 [5][6] =12; MATRIZS1 [5][7] =12; MATRIZS1 [5][8] =5; MATRIZS1 [5][9] =3; MATRIZS1 [5][12]=3; MATRIZS1 [5][14]=3;
     MATRIZS1 [6][3] =3; MATRIZS1 [6][5]=1; MATRIZS1 [6][9]=3; MATRIZS1 [6][12]=3; MATRIZS1 [6][14]=3;
     MATRIZS1 [7][3] =3; MATRIZS1 [7][9]=3; MATRIZS1 [7][12]=3; MATRIZS1 [7][14]=3;
     MATRIZS1 [8][3] =3; MATRIZS1 [8][9]=3; MATRIZS1 [8][12]=1; MATRIZS1 [8][14]=3;
     MATRIZS1 [9][0] =10; MATRIZS1 [9][1]=12; MATRIZS1 [9][2]=12; MATRIZS1 [9][3]=13; MATRIZS1 [9][4]=12; MATRIZS1 [9][5]=12; MATRIZS1 [9][6] =12; MATRIZS1 [9][7] =12; MATRIZS1 [9][8] =12; MATRIZS1 [9][9] =5; MATRIZS1 [9][14]=3;
     MATRIZS1 [10][0]=3; MATRIZS1 [10][4]=2; MATRIZS1 [10][7]=10; MATRIZS1 [10][8]=12; MATRIZS1 [10][9]=12; MATRIZS1 [10][10]=12; MATRIZS1 [10][11]=12; MATRIZS1 [10][12]=12; MATRIZS1 [10][13]=12; MATRIZS1 [10][14]=5;
     MATRIZS1 [11][0]=3; MATRIZS1 [11][4]=3; MATRIZS1 [11][7]=3;
     MATRIZS1 [12][0]=3; MATRIZS1 [12][4]=3; MATRIZS1 [12][7]=3;
     MATRIZS1 [13][0]=9; MATRIZS1 [13][1]=12; MATRIZS1 [13][2]=12; MATRIZS1 [13][3]=12; MATRIZS1 [13][4]=13; MATRIZS1 [13][5]=12; MATRIZS1 [13][6]=4; MATRIZS1 [13][7]=3;
     MATRIZS1 [14][7]=3;
     //PREENCHENDO MATRIZ SALA 2
     MATRIZS2 [0][7] =2;
     MATRIZS2 [1][7] =3; MATRIZS2 [1][12]=10; MATRIZS2 [1][13]=12; MATRIZS2 [1][14]=6;
     MATRIZS2 [2][1] =10; MATRIZS2 [2][2] =12; MATRIZS2 [2][3] =12; MATRIZS2 [2][4] =12; MATRIZS2 [2][5] =12; MATRIZS2 [2][6] =12; MATRIZS2 [2][7] =13; MATRIZS2 [2][8] =12; MATRIZS2 [2][9] =12; MATRIZS2 [2][10]=12; MATRIZS2 [2][11]=12; MATRIZS2 [2][12]=7; MATRIZS2 [2][14]=3;
     MATRIZS2 [3][1] =3; MATRIZS2 [3][12]=3; MATRIZS2 [3][14]=3;
     MATRIZS2 [4][1] =3; MATRIZS2 [4][12]=3; MATRIZS2 [4][14]=3;
     MATRIZS2 [5][1] =9; MATRIZS2 [5][2] =12; MATRIZS2 [5][3] =12; MATRIZS2 [5][4] =12; MATRIZS2 [5][5] =12; MATRIZS2 [5][6] =12; MATRIZS2 [5][7] =14; MATRIZS2 [5][8] =12; MATRIZS2 [5][9] =12; MATRIZS2 [5][10]=12; MATRIZS2 [5][11]=14; MATRIZS2 [5][12]=5; MATRIZS2 [5][14]=3;
     MATRIZS2 [6][7] =3; MATRIZS2 [6][11]=3; MATRIZS2 [6][14]=3;
     MATRIZS2 [7][0] =12; MATRIZS2 [7][1] =6; MATRIZS2 [7][7] =3; MATRIZS2 [7][11]=3; MATRIZS2 [7][14]=3;
     MATRIZS2 [8][0] =2; MATRIZS2 [8][1] =3; MATRIZS2 [8][3] =10; MATRIZS2 [8][4] =12; MATRIZS2 [8][5] =12; MATRIZS2 [8][6] =12; MATRIZS2 [8][7] =5; MATRIZS2 [8][11]=3; MATRIZS2 [8][14]=3;
     MATRIZS2 [9][0] =3; MATRIZS2 [9][1] =3; MATRIZS2 [9][3] =3; MATRIZS2 [9][11]=3; MATRIZS2 [9][14]=3;
     MATRIZS2 [10][0]=3; MATRIZS2 [10][1] =3; MATRIZS2 [10][3] =3; MATRIZS2 [10][11]=3; MATRIZS2 [10][14]=3;
     MATRIZS2 [11][0]=3; MATRIZS2 [11][1]=3; MATRIZS2 [11][3]=9; MATRIZS2 [11][4]=12; MATRIZS2 [11][5]=12; MATRIZS2 [11][6]=12; MATRIZS2 [11][7]=12; MATRIZS2 [11][8]=12; MATRIZS2 [11][9]=12; MATRIZS2 [11][10]=12; MATRIZS2 [11][11]=5; MATRIZS2 [11][14]=3;
     MATRIZS2 [12][0]=3; MATRIZS2 [12][1] =3; MATRIZS2 [12][14]=3;
     MATRIZS2 [13][0]=3; MATRIZS2 [13][1]=9; MATRIZS2 [13][2]=12; MATRIZS2 [13][3]=12; MATRIZS2 [13][4]=12; MATRIZS2 [13][5]=12; MATRIZS2 [13][6]=14; MATRIZS2 [13][7]=12; MATRIZS2 [13][8]=12; MATRIZS2 [13][9]=12; MATRIZS2 [13][10]=12; MATRIZS2 [13][11]=12; MATRIZS2 [13][12]=12; MATRIZS2 [13][13]=12; MATRIZS2 [13][14]=5;
     MATRIZS2 [14][0]=9; MATRIZS2 [14][1]=12; MATRIZS2 [14][2]=12; MATRIZS2 [14][3]=12; MATRIZS2 [14][4]=12; MATRIZS2 [14][5]=12; MATRIZS2 [14][6]=5;
     //PREENCHENDO MATRIZ SALA 3
     MATRIZS3 [0][4] =10; MATRIZS3 [0][5] =4; MATRIZS3 [0][7] =3; MATRIZS3 [0][10]=8; MATRIZS3 [0][11]=12; MATRIZS3 [0][12]=12; MATRIZS3 [0][13]=6; 
     MATRIZS3 [1][2] =10; MATRIZS3 [1][3] =12; MATRIZS3 [1][4] =7; MATRIZS3 [1][6] =10; MATRIZS3 [1][7] =5; MATRIZS3 [1][13]=3;
     MATRIZS3 [2][2] =3; MATRIZS3 [2][4] =9; MATRIZS3 [2][5] =12; MATRIZS3 [2][6] =5; MATRIZS3 [2][13]=3;   
     MATRIZS3 [3][2] =3; MATRIZS3 [3][13]=3;     
     MATRIZS3 [4][2] =3; MATRIZS3 [4][7] =2; MATRIZS3 [4][13]=3;     
     MATRIZS3 [5][2] =3; MATRIZS3 [5][7] =3; MATRIZS3 [5][13]=3;     
     MATRIZS3 [6][2] =3; MATRIZS3 [6][7] =3; MATRIZS3 [6][13]=3;     
     MATRIZS3 [7][2] =11; MATRIZS3 [7][3] =12; MATRIZS3 [7][4] =12; MATRIZS3 [7][5] =12; MATRIZS3 [7][6] =12; MATRIZS3 [7][7] =13; MATRIZS3 [7][8] =12; MATRIZS3 [7][9] =12; MATRIZS3 [7][10] =12; MATRIZS3 [7][11] =12; MATRIZS3 [7][12] =12; MATRIZS3 [7][13] =15; MATRIZS3 [7][14] =4;     
     MATRIZS3 [8][2] =3; MATRIZS3 [8][7] =3; MATRIZS3 [8][13]=3;     
     MATRIZS3 [9][2] =3; MATRIZS3 [9][7] =3; MATRIZS3 [9][13]=3;
     MATRIZS3 [10][2] =3; MATRIZS3 [10][7] =3; MATRIZS3 [10][13]=3;     
     MATRIZS3 [11][2] =9; MATRIZS3 [11][3] =12; MATRIZS3 [11][4] =12; MATRIZS3 [11][5] =12; MATRIZS3 [11][6] =12; MATRIZS3 [11][7] =13; MATRIZS3 [11][8] =12; MATRIZS3 [11][9] =12; MATRIZS3 [11][10]=12; MATRIZS3 [11][11]=12; MATRIZS3 [11][12]=4; MATRIZS3 [11][13]=3;
     MATRIZS3 [12][13]=3;
     MATRIZS3 [13][13]=1;
     //PREENCHENDO MATRIZ SALA 4
     MATRIZS4 [0][1] =10; MATRIZS4 [0][2] =12; MATRIZS4 [0][3] =12; MATRIZS4 [0][4] =6; MATRIZS4 [0][5] =10; MATRIZS4 [0][6] =12; MATRIZS4 [0][7] =12; MATRIZS4 [0][8] =12; MATRIZS4 [0][9] =12; MATRIZS4 [0][10]=12; MATRIZS4 [0][11]=12; MATRIZS4 [0][12]=12; MATRIZS4 [0][13]=6;
     MATRIZS4 [1][1] =3; MATRIZS4 [1][4] =3; MATRIZS4 [1][5] =3; MATRIZS4 [1][13]=3;     
     MATRIZS4 [2][1] =3; MATRIZS4 [2][4] =3; MATRIZS4 [2][5] =9; MATRIZS4 [2][6] =12; MATRIZS4 [2][7] =12; MATRIZS4 [2][8] =12; MATRIZS4 [2][9] =12; MATRIZS4 [2][10]=12; MATRIZS4 [2][11]=12; MATRIZS4 [2][12]=6; MATRIZS4 [2][13]=3;
     MATRIZS4 [3][1] =3; MATRIZS4 [3][4] =3; MATRIZS4 [3][12]=3; MATRIZS4 [3][13]=3;
     MATRIZS4 [4][1] =3; MATRIZS4 [4][4] =9; MATRIZS4 [4][5] =6; MATRIZS4 [4][12]=3; MATRIZS4 [4][13]=3;    
     MATRIZS4 [5][1] =3; MATRIZS4 [5][5] =3; MATRIZS4 [5][6] =10; MATRIZS4 [5][7] =12; MATRIZS4 [5][8] =12; MATRIZS4 [5][9] =12; MATRIZS4 [5][10]=12; MATRIZS4 [5][11]=6; MATRIZS4 [5][12]=3; MATRIZS4 [5][13]=3;
     MATRIZS4 [6][1] =3; MATRIZS4 [6][2] =10; MATRIZS4 [6][3] =12; MATRIZS4 [6][4] =12; MATRIZS4 [6][5] =5; MATRIZS4 [6][6] =3; MATRIZS4 [6][11]=3; MATRIZS4 [6][12]=3; MATRIZS4 [6][13]=3; 
     MATRIZS4 [7][0] =12; MATRIZS4 [7][1] =7; MATRIZS4 [7][2] =9; MATRIZS4 [7][3] =12; MATRIZS4 [7][4] =12; MATRIZS4 [7][5] =12; MATRIZS4 [7][6] =5; MATRIZS4 [7][11]=3; MATRIZS4 [7][12]=3; MATRIZS4 [7][13]=3;
     MATRIZS4 [8][1] =3; MATRIZS4 [8][11]=3; MATRIZS4 [8][12]=3; MATRIZS4 [8][13]=3;
     MATRIZS4 [9][1] =11; MATRIZS4 [9][2] =12; MATRIZS4 [9][3] =12; MATRIZS4 [9][4] =12; MATRIZS4 [9][5] =12; MATRIZS4 [9][6] =10; MATRIZS4 [9][7] =12; MATRIZS4 [9][8] =12; MATRIZS4 [9][9] =12; MATRIZS4 [9][10]=12; MATRIZS4 [9][11]=5; MATRIZS4 [9][12]=3; MATRIZS4 [9][13]=3;   
     MATRIZS4 [10][1] =3; MATRIZS4 [10][6]=3; MATRIZS4 [10][12]=3; MATRIZS4 [10][13]=3;
     MATRIZS4 [11][1] =3;  MATRIZS4 [11][6] =9; MATRIZS4 [11][7] =12; MATRIZS4 [11][8] =12; MATRIZS4 [11][9] =12; MATRIZS4 [11][10]=12; MATRIZS4 [11][11]=12; MATRIZS4 [11][12]=5; MATRIZS4 [11][13]=3;   
     MATRIZS4 [12][1] =3; MATRIZS4 [12][13]=3;
     MATRIZS4 [13][1] =9; MATRIZS4 [13][2] =12; MATRIZS4 [13][3] =12; MATRIZS4 [13][4] =12; MATRIZS4 [13][5] =12; MATRIZS4 [13][6] =12; MATRIZS4 [13][7] =14; MATRIZS4 [13][8] =12; MATRIZS4 [13][9] =12; MATRIZS4 [13][10]=12; MATRIZS4 [13][11]=12; MATRIZS4 [13][12]=12; MATRIZS4 [13][13]=5;  
     MATRIZS4 [14][7] =1;
     
     //PREENCHENDO MATRIZ SALA 5
     MATRIZS5 [0][1] =10; MATRIZS5 [0][2] =12; MATRIZS5 [0][3] =12; MATRIZS5 [0][4] =12; MATRIZS5 [0][5] =12; MATRIZS5 [0][6] =12; MATRIZS5 [0][7] =14; MATRIZS5 [0][8] =8; MATRIZS5 [0][9] =12; MATRIZS5 [0][10]=12; MATRIZS5 [0][11]=12; MATRIZS5 [0][12]=12; MATRIZS5 [0][13]=6;
     MATRIZS5 [1][1] =3; MATRIZS5 [1][7] =3; MATRIZS5 [1][13]=3;
     MATRIZS5 [2][1] =3; MATRIZS5 [2][7] =3; MATRIZS5 [2][13]=3;
     MATRIZS5 [3][1] =3; MATRIZS5 [3][7] =3; MATRIZS5 [3][13]=3;
     MATRIZS5 [4][1] =3; MATRIZS5 [4][7] =3; MATRIZS5 [4][13]=3;
     MATRIZS5 [5][1] =3; MATRIZS5 [5][7] =3; MATRIZS5 [5][13]=3;
     MATRIZS5 [6][1] =3; MATRIZS5 [6][7] =1; MATRIZS5 [6][13]=3;
     MATRIZS5 [7][0] =12; MATRIZS5 [7][1] =15; MATRIZS5 [7][2] =12; MATRIZS5 [7][3] =12; MATRIZS5 [7][4] =12; MATRIZS5 [7][5] =12; MATRIZS5 [7][6] =12; MATRIZS5 [7][7] =12; MATRIZS5 [7][8] =12; MATRIZS5 [7][9] =12; MATRIZS5 [7][10]=12; MATRIZS5 [7][11]=12; MATRIZS5 [7][12]=12; MATRIZS5 [7][13]=15; MATRIZS5 [7][14]=4;     
     MATRIZS5 [8][1] =3; MATRIZS5 [8][7] =2; MATRIZS5 [8][13]=3;
     MATRIZS5 [9][1] =3; MATRIZS5 [9][7] =3; MATRIZS5 [9][13]=3;
     MATRIZS5 [10][1] =3; MATRIZS5 [10][7] =3; MATRIZS5 [10][13]=3;
     MATRIZS5 [11][1] =3; MATRIZS5 [11][7] =3; MATRIZS5 [11][13]=3;
     MATRIZS5 [12][1] =3; MATRIZS5 [12][7] =3; MATRIZS5 [12][13]=3;
     MATRIZS5 [13][1] =3; MATRIZS5 [13][7] =3; MATRIZS5 [13][13]=3;
     MATRIZS5 [14][1] =9; MATRIZS5 [14][2] =12; MATRIZS5 [14][3] =12; MATRIZS5 [14][4] =12; MATRIZS5 [14][5] =12; MATRIZS5 [14][6] =4; MATRIZS5 [14][7] =13; MATRIZS5 [14][8] =12; MATRIZS5 [14][9] =12; MATRIZS5 [14][10]=12; MATRIZS5 [14][11]=12; MATRIZS5 [14][12]=12; MATRIZS5 [14][13]=5;
        
     //PREENCHENDO MATRIZ SALA 6
     MATRIZS6 [0][1] =10; MATRIZS6 [0][2] =12; MATRIZS6 [0][3] =6; MATRIZS6 [0][7] =10; MATRIZS6 [0][8] =12; MATRIZS6 [0][9] =12; MATRIZS6 [0][10]=12; MATRIZS6 [0][11]=12; MATRIZS6 [0][12]=12; MATRIZS6 [0][13]=6;
     MATRIZS6 [1][1] =3; MATRIZS6 [1][3] =3; MATRIZS6 [1][7] =3; MATRIZS6 [1][13]=3;
     MATRIZS6 [2][1] =3; MATRIZS6 [2][3] =3; MATRIZS6 [2][7] =3; MATRIZS6 [2][13]=3;
     MATRIZS6 [3][1] =3; MATRIZS6 [3][3] =3; MATRIZS6 [3][7] =3; MATRIZS6 [3][13]=3;
     MATRIZS6 [4][1] =3; MATRIZS6 [4][3] =3; MATRIZS6 [4][7] =3; MATRIZS6 [4][13]=3;
     MATRIZS6 [5][1] =3; MATRIZS6 [5][3] =3; MATRIZS6 [5][7] =3; MATRIZS6 [5][10]=8; MATRIZS6 [5][11]=12; MATRIZS6 [5][12]=12; MATRIZS6 [5][13]=7;
     MATRIZS6 [6][1] =3; MATRIZS6 [6][3] =9; MATRIZS6 [6][4] =12; MATRIZS6 [6][5] =12; MATRIZS6 [6][6] =12; MATRIZS6 [6][7] =5; MATRIZS6 [6][10]=8; MATRIZS6 [6][11]=12; MATRIZS6 [6][12]=12; MATRIZS6 [6][13]=7;
     MATRIZS6 [7][0] =12; MATRIZS6 [7][1] =7; MATRIZS6 [7][13]=11; MATRIZS6 [7][14]=4;
     MATRIZS6 [8][1] =3; MATRIZS6 [8][3] =10; MATRIZS6 [8][4] =12; MATRIZS6 [8][5] =12; MATRIZS6 [8][6] =12; MATRIZS6 [8][7] =6; MATRIZS6 [8][10]=8; MATRIZS6 [8][11]=12; MATRIZS6 [8][12]=12; MATRIZS6 [8][13]=7;
     MATRIZS6 [9][1] =3; MATRIZS6 [9][3] =3; MATRIZS6 [9][7] =3; MATRIZS6 [9][10]=8; MATRIZS6 [9][11]=12; MATRIZS6 [9][12]=12; MATRIZS6 [9][13]=7;
     MATRIZS6 [10][1] =3; MATRIZS6 [10][3] =3; MATRIZS6 [10][7] =3; MATRIZS6 [10][13]=3;
     MATRIZS6 [11][1] =3; MATRIZS6 [11][3] =3; MATRIZS6 [11][7] =3; MATRIZS6 [11][13]=3;
     MATRIZS6 [12][1] =3; MATRIZS6 [12][3] =3; MATRIZS6 [12][7] =3; MATRIZS6 [12][13]=3;
     MATRIZS6 [13][1] =3; MATRIZS6 [13][3] =3; MATRIZS6 [13][7] =3; MATRIZS6 [13][13]=3;
     MATRIZS6 [14][1] =9; MATRIZS6 [14][2] =12; MATRIZS6 [14][3] =5; MATRIZS6 [14][7] =9; MATRIZS6 [14][8] =12; MATRIZS6 [14][9] =12; MATRIZS6 [14][10]=12; MATRIZS6 [14][11]=12; MATRIZS6 [14][12]=12; MATRIZS6 [14][13]=5;

     initwindow(600, 600, "BUSCA PRINCESA");
     //Parametros para iniciar o jogo no LEVEL 1 -> SALA 1 -> PARTE 4
     MENUINICIAL ();
     cleardevice();
     VIDA=FORCA*2+DEFESA*10+ARMADURA*1;
     MATRIZX=0; 
     MATRIZY=7;
     SALA=1;
     C = 'd';
     ULTMOV = C;
     while (SAIR==0 && VIDA>0)
     {
     cleardevice ();
     //acesso as informações do heroi
     if (C=='i' || C=='I')
        {
        INVENTARIO (FORCA, DEFESA, ARMADURA, VIDA, LVLESPADA, LVLESCUDO, LVLARMADURA, POCAO); 
        C=ULTMOV;
        }
     //ALTERAÇÃO DE SALA
     if (SALA==1 && MATRIZY==7 && MATRIZX==15)
        {
        SALA=2;
        MATRIZY=7;
        MATRIZX=0;
        }
     if (SALA==2 && MATRIZY==-1 && MATRIZX==7)
        {
        SALA=3;
        MATRIZY=14;
        MATRIZX=7;
        }
     if (SALA==3 && MATRIZY==7 && MATRIZX==-1)
        {
        SALA=4;
        MATRIZY=7;
        MATRIZX=14;
        }
     if (SALA==4 && MATRIZY==-1 && MATRIZX==7)
        {
        SALA=5;
        MATRIZY=14;
        MATRIZX=7;
        }
     if (SALA==5 && MATRIZY==-1 && MATRIZX==7)
        {
        SALA=6;
        MATRIZY=14;
        MATRIZX=7;
        }
     if (SALA==6 && MATRIZY==-1 && MATRIZX==7)
        {
        setcolor(4);
        settextstyle(6,0,4);
        outtextxy(60, 100, "VOCÊ CHEGOU AO");
        outtextxy(50, 150,"FINAL DO LABIRINTO");
        outtextxy(40, 200, "MAS NÃO ENCONTROU");
        outtextxy(50, 250, "NENHUMA PRINCESA");
        setcolor(2);
        settextstyle(1,0,2);
        outtextxy(150, 350, "NÃO DESISTA,");
        outtextxy(80, 380, "CONTINUE SUA BUSCA.");
        setcolor(7);
        settextstyle(6,0,1);
        outtextxy(0, 580, "CONTINUA NA VERSÃO COMPLETA DO JOGO...");
        Sleep (10000);
        SAIR=1;
        }
           
     //INSERÇÃO DE ITENS NO CENÁRIO
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15 && CHAVEAZUL==0 && SALA==1)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==1)
        CHAVE (410, 300);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && CHAVEROXO==0 && SALA==2)
        setcolor (5);
        else
        setcolor (0);
     if (SALA==2)
        CHAVE (410, 80);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10 && CHAVELARANJA==0 && SALA==5)
        setcolor (37978080);
        else
        setcolor (0);
     if (SALA==5)
        CHAVE (410, 300);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10 && BAUAZUL1==0 && SALA==1)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==1)
     BAUC (410, 190);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15 && BAUAZUL2==0 && SALA==6)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==6)
     BAUB (80, 80);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15 && BAUAZUL3==0 && SALA==6)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==6)
     BAUB (190, 80);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15 && BAUAZUL4==0 && SALA==6)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==6)
     BAUB (410, 80);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 10 && MATRIZY < 15 && BAUAZUL5==0 && SALA==6)
        setcolor (1);
        else
        setcolor (0);
     if (SALA==6)
     BAUB (520, 80);
     if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5 && BAUROXO==0 && SALA==4)
        setcolor (5);
        else
        setcolor (0);
     if (SALA==4)
     BAUD (80, 520);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10 && BAULARANJA==0 && SALA==5)
        setcolor (37978080);
        else
        setcolor (0);
     if (SALA==5)
     BAUE (190, 300);
     
     //CONTROLE DE COLETA DE ITENS
     if (SALA==1 && MATRIZX==8 && MATRIZY==12)
	    CHAVEAZUL=1;
     if (SALA==2 && MATRIZX==8 && MATRIZY==0)
	    CHAVEROXO=1;
	 if (SALA==5 && MATRIZX==8 && MATRIZY==7)
	    CHAVELARANJA=1;
     if (SALA==1 && MATRIZX==13 && MATRIZY==6 && BAUAZUL1==0 && CHAVEAZUL==1)
	    {
        BAUAZUL1=1;
        LVLESPADA=LVLESPADA+1;
	    }
	 if (SALA==4 && MATRIZX==0 && MATRIZY==4 && BAUROXO==0 && CHAVEROXO==1)
	    {
	    BAUROXO=1;
	    LVLESPADA=LVLESPADA+1;
	    }
	 if (SALA==5 && MATRIZX==6 && MATRIZY==7 && BAULARANJA==0 && CHAVELARANJA==1)
	    {
	    BAULARANJA=1;
	    LVLARMADURA=LVLARMADURA+1;
	    }
	 if (SALA==6 && MATRIZX==5 && MATRIZY==10 && BAUAZUL2==0 && CHAVEAZUL==1)
	    {
	    BAUAZUL2=1;
	    LVLESPADA=LVLESPADA+1;
	    }
	 if (SALA==6 && MATRIZX==6 && MATRIZY==10 && BAUAZUL3==0 && CHAVEAZUL==1)
	    {
	    BAUAZUL3=1;
	    LVLESCUDO=LVLESCUDO+1;
	    }
	 if (SALA==6 && MATRIZX==8 && MATRIZY==10 && BAUAZUL4==0 && CHAVEAZUL==1)
	    {
	    BAUAZUL4=1;
	    LVLARMADURA=LVLARMADURA+1;
        }
	 if (SALA==6 && MATRIZX==9 && MATRIZY==10 && BAUAZUL5==0 && CHAVEAZUL==1)
	    {
	    BAUAZUL5=1;
	    POCAO=POCAO+1;
	    }
  	  
  	  //Bônus das Armas
  	  if (LVLESPADA==2)
  	     FORCA=7;
  	  if (LVLESPADA==3)  	     
  	     FORCA=8;
      if (LVLESPADA==4)  	     
  	     FORCA=11;
      if (LVLESCUDO==2)  	     
  	     ARMADURA=12;
      if (LVLARMADURA==2)  	     
  	     DEFESA=6;
      if (LVLARMADURA==3)  	     
  	     DEFESA=8;
      
  
     //INSERÇÃO DE INIMIGOS NO CENÁRIO
     //SALA 1
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10 && LAGARTO1==0 && SALA==1)
        LAGARTO (520, 300);
     //SALA 2
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO2==0 && SALA==2)
        LAGARTO (520, 80);
     //SALA 3
     if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO3==0 && SALA==3)
        LAGARTO (80, 520);
     //SALA 4
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO4==0 && SALA==4)
        LAGARTO (410, 190);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO5==0 && SALA==4)
        LAGARTO (520, 190);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO6==0 && SALA==4)
        LAGARTO (80, 190);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO7==0 && SALA==4)
        LAGARTO (410, 190);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO8==0 && SALA==4)
        LAGARTO (410, 520);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10 && LAGARTO9==0 && SALA==4)
        LAGARTO (520, 80);      
     //SALA 5
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && LAGARTO10==0 && SALA==5)
        LAGARTO (300, 80);    
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10 && LAGARTO11==0 && SALA==5)
        LAGARTO (80, 300);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 5 && MATRIZY < 10 && LAGARTO12==0 && SALA==5)
        LAGARTO (520, 300);    
     //SALA 6
     if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 5 && MATRIZY < 10 && ARANHA1==0 && SALA==6)
        ARANHA (80, 300);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && ARANHA2==0 && SALA==6)
        ARANHA (190, 190);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 0 && MATRIZY < 5 && ARANHA3==0 && SALA==6)
        ARANHA (410, 410);
    
     if (MATRIZX >= 0 && MATRIZX < 5 && MATRIZY >= 0 && MATRIZY < 5 && SANGUESSUGA1==0 && SALA==6)
        SANGUESSUGA (190, 410);
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && SANGUESSUGA2==0 && SALA==6)
        SANGUESSUGA (410, 190);
     if (MATRIZX >= 10 && MATRIZX < 15 && MATRIZY >= 5 && MATRIZY < 10 && SANGUESSUGA3==0 && SALA==6)
        SANGUESSUGA (520, 300);
     
     if (MATRIZX >= 5 && MATRIZX < 10 && MATRIZY >= 0 && MATRIZY < 5 && FANTASMA1==0 && SALA==6)
        FANTASMA (300, 80);      

        
	 //Verificação de definição de inserção do heroi na tela
        if (MATRIZX==0)        X=80;
        if (MATRIZX==1)        X=190;
        if (MATRIZX==2)        X=300;                   
        if (MATRIZX==3)        X=410;      
        if (MATRIZX==4)        X=520;
        if (MATRIZX==5)        X=80;
        if (MATRIZX==6)        X=190;
        if (MATRIZX==7)        X=300;                   
        if (MATRIZX==8)        X=410;      
        if (MATRIZX==9)        X=520;
        if (MATRIZX==10)       X=80;
        if (MATRIZX==11)       X=190;
        if (MATRIZX==12)       X=300;                   
        if (MATRIZX==13)       X=410;      
        if (MATRIZX==14)       X=520;
        if (MATRIZY==0)        Y=80;
        if (MATRIZY==1)        Y=190;
        if (MATRIZY==2)        Y=300;                   
        if (MATRIZY==3)        Y=410;      
        if (MATRIZY==4)        Y=520;
        if (MATRIZY==5)        Y=80;
        if (MATRIZY==6)        Y=190;
        if (MATRIZY==7)        Y=300;                   
        if (MATRIZY==8)        Y=410;      
        if (MATRIZY==9)        Y=520;
        if (MATRIZY==10)       Y=80;
        if (MATRIZY==11)       Y=190;
        if (MATRIZY==12)       Y=300;                   
        if (MATRIZY==13)       Y=410;      
        if (MATRIZY==14)       Y=520;   
	 
     //PROGRAMAÇÃO PARA MOVIMENTAÇÃO
     if (C=='s' || C=='S' || C=='w' || C=='W' || C=='a' || C=='A' || C=='d' || C=='D')
        {
        MOVIMENTO (X, Y, C, CONTADOR, LVLESPADA, LVLESCUDO, LVLARMADURA);
        setcolor (250);
        MAPA (MATRIZX, MATRIZY, SALA);
        }        
     ULTMOV = C;
     C = getch();
     while (CONFMOV==0)
	 {
     	while (C!='s' && C!='S' && C!='w' && C!='W' && C!='a' && C!='A' && C!='d' && C!='D' && C!='i' && C!='I' && C!= ESC)
        	C = getch();
		if (SALA==1)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS1[MATRIZX][MATRIZY], C);
        if (SALA==2)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS2[MATRIZX][MATRIZY], C);
        if (SALA==3)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS3[MATRIZX][MATRIZY], C);
        if (SALA==4)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS4[MATRIZX][MATRIZY], C);
        if (SALA==5)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS5[MATRIZX][MATRIZY], C);
        if (SALA==6)
           IND_MOV = VERIFICADOR_MOVIMENTO (MATRIZS6[MATRIZX][MATRIZY], C);   
		if (IND_MOV==1 || C=='i' || C=='I' || C==ESC)	
           CONFMOV=1;
		else
		   C='p';
	 }
     	CONFMOV=0;
     if (C=='s' || C=='S' || C=='w' || C=='W' || C=='a' || C=='A' || C=='d' || C=='D')
        CONTADOR=CONTADOR+1;
     if (C=='s' || C=='S')
        MATRIZY++;
     if (C=='w' || C=='W')
        MATRIZY--;
     if (C=='a' || C=='A')
        MATRIZX--;
     if (C=='d' || C=='D')
        MATRIZX++;
     if (C == ESC)
        {
        SAIR=VERIFICACAOSAIDA ();
        C = ULTMOV;
        }
        
        
        //CONTROLE DE DERROTA DE INIMIGOS
     if (MATRIZX==14 && MATRIZY==7 && LAGARTO1==0 && SALA==1)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO1=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
     
     if (MATRIZX==9 && MATRIZY==0 && LAGARTO2==0 && SALA==2)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO2=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==0 && MATRIZY==4 && LAGARTO3==0 && SALA==3)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO3=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==8 && MATRIZY==1 && LAGARTO4==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO4=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==9 && MATRIZY==1 && LAGARTO5==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO5=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==10 && MATRIZY==1 && LAGARTO6==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO6=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==13 && MATRIZY==1 && LAGARTO7==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO7=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==13 && MATRIZY==4 && LAGARTO8==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO8=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==9 && MATRIZY==5 && LAGARTO9==0 && SALA==4)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO9=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==7 && MATRIZY==0 && LAGARTO10==0 && SALA==5)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO10=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==5 && MATRIZY==7 && LAGARTO11==0 && SALA==5)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO11=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==9 && MATRIZY==7 && LAGARTO12==0 && SALA==5)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAL, DEFESAL, ARMADURAL, 0);
        if (RESULTADOCOMBATE==1)
           LAGARTO12=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==0 && MATRIZY==7 && ARANHA1==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAA, DEFESAA, ARMADURAA, 0);
        if (RESULTADOCOMBATE==1)
           ARANHA1=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==6 && MATRIZY==1 && ARANHA2==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAA, DEFESAA, ARMADURAA, 0);
        if (RESULTADOCOMBATE==1)
           ARANHA2=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==13 && MATRIZY==3 && ARANHA3==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAA, DEFESAA, ARMADURAA, 0);
        if (RESULTADOCOMBATE==1)
           ARANHA3=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==1 && MATRIZY==3 && SANGUESSUGA1==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAS, DEFESAS, ARMADURAS, 1);
        if (RESULTADOCOMBATE==1)
           SANGUESSUGA1=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
             
     if (MATRIZX==8 && MATRIZY==1 && SANGUESSUGA2==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAS, DEFESAS, ARMADURAS, 1);
        if (RESULTADOCOMBATE==1)
           SANGUESSUGA2=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
        }
        }
        
     if (MATRIZX==14 && MATRIZY==7 && SANGUESSUGA3==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAS, DEFESAS, ARMADURAS, 1);
        if (RESULTADOCOMBATE==1)
           SANGUESSUGA3=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }
        
     if (MATRIZX==7 && MATRIZY==0 && FANTASMA1==0 && SALA==6)
        {
        RESULTADOCOMBATE=MODODECOMBATE (FORCA, DEFESA, ARMADURA, POCAO, FORCAF, DEFESAF, ARMADURAF, 2);
        if (RESULTADOCOMBATE==1)
           FANTASMA1=1;
        if (RESULTADOCOMBATE==0)
           {
           TELASAIDA ();
           SAIR=1;
           }
        }  
     VIDA=FORCA*2+DEFESA*10+ARMADURA*1;   
     } //FIM DO CLICLO DE WHILE PRINCIPAL
     closegraph(); // FECHA JANELA GRÁFICA
     return 0;
}



