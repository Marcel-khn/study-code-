/*
 * File: main.c
 * Description: Program to create and manage a music playlist
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "include/playlist.h"

/**
 * @brief exemplary usage of playlist
 *
 * @return int status code
 */
int main()
{
    Playlist myPlaylist;
    init_playlist(&myPlaylist);

    add_song(&myPlaylist, "Crawling", "LinkingPark");
    print_playlist(&myPlaylist);

    add_song(&myPlaylist, "Layla", "Eric Clapton");
    add_song(&myPlaylist, "Esperanto", "Max Herre");
    print_playlist(&myPlaylist);

    for (int i = 0; i < (MAX_SONGS+1); i++)
    {
        add_song(&myPlaylist, "Esperanto", "Max Herre");
    }

    delete_firstSong(&myPlaylist);
    print_playlist(&myPlaylist);

    delete_playlist(&myPlaylist);

    return 0;
}
