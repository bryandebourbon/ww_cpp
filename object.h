#ifndef OBJECT_H
#define OBJECT_H

#include <iostream>
using namespace std;

#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>


class Object{

private:
    SDL_Rect dest;
    SDL_Rect src;
    SDL_Texture* tex;

public:
    Object(){}
    SDL_Rect getDest() const {return dest;}
    SDL_Rect getSource() const{return src;}
    SDL_Texture *getTex() const { return tex;}
    void setDest(int x, int y, int w, int h){
        
        dest.x = x;
        dest.y = y;
        dest.w = w;
        dest.h = h;
        cout << "test\n";
        }
    void setSource(int x, int y, int w, int h){
        
        src.x = x;
        src.y = y;
        src.w = w;
        src.h = h;
        cout << "test\n";
    }
    void setImage(string filename, SDL_Renderer* ren){

        SDL_Surface *surf = IMG_Load(filename.c_str());
        tex = SDL_CreateTextureFromSurface(ren, surf);
        cout << "test\n";
    }
    
};

#endif //OBJECT_H