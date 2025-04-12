//include libs SDL
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

//include .h ...


int main(){
//init SDL
    SDL_Init(SDL_INIT_VIDEO | SDL_INIT_AUDIO);

    if (Mix_OpenAudio(44100, MIX_DEFAULT_FORMAT, 2, 8192) < 0) {
        printf("SDL_mixer could not initialize! SDL_mixer Error: %s\n", Mix_GetError());
        exit(1); //tnajem ta3mel nafes el verification lel kol
    }

    TTF_Init();

//init game

    SDL_Surface *ecran;
    ecran = SDL_SetVideoMode(1920,1080,32,SDL_HWSURFACE | SDL_DOUBLEBUF);

    int quitter = 0;
    SDL_Event event;

    int indice_ecran=0; //menu Principal


    while(quitter == 0){

        switch (indice_ecran)
        {
        case 0:
                //code Menu Principal ala 3 partie (1Afficher 2gestion event 3mise a jour)
                //afficher:

                //gestion event:

                //mise a jour:
            
            break;
        
        default:
            break;
        }

    }

    
    
    //Liberer memoire (RAM)

    SDL_FreeSurface(ecran);   
    SDL_Quit();

}