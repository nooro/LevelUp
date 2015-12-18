#ifndef LU_CREATETEXTURE_H_INCLUDED
#define LU_CREATETEXTURE_H_INCLUDED

SDL_Texture* LU_CreateTexture(std::string filePath, SDL_Renderer* textureRenderer){
    SDL_Texture* texture = NULL;
    SDL_Surface* temp_surface = IMG_Load(filePath.c_str());

    texture = SDL_CreateTextureFromSurface(textureRenderer, temp_surface);

    std::cout << "LU_CreateTexture error: " << SDL_GetError() << std::endl;
    SDL_FreeSurface(temp_surface);
    return texture;
}

#endif // LU_CREATETEXTURE_H_INCLUDED
