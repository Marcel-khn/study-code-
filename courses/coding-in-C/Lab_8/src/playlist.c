/*
 * File: playlist.c
 * Description: Program to create and manage a music playlist
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../include/playlist.h"


/**
 * @brief Initialize a new playlist
 *
 * @param p_playlist pointer the playlist
 */
void init_playlist(Playlist *p_playlist)
{
    p_playlist->p_head = NULL;
    return;
}

/**
 * @brief add a new song to the end of the playlist
 *
 * @param playlist pointer to playlist
 * @param title    title of the new song
 * @param artist   artist of the new song
 */
void add_song(Playlist *playlist, const char *title, const char *artist)
{
    #ifndef ADD_SONG
    static int i = 0;
    static int g = 0;
    if (i < MAX_SONGS && g == 0)
    {
        Song *newSong = malloc(sizeof *newSong);

        if (!newSong)
        {
            printf("Error: Memory could not be allocated.\n");
            return;
        }

        newSong->title = malloc(strlen(title) + 1);
        newSong->artist = malloc(strlen(artist) + 1);

        if (!newSong->title || !newSong->artist)
        {
            printf("Error: Memory could not be allocated.\n");
            free(newSong->title);
            free(newSong->artist);
            free(newSong);
            return;
        }

        strcpy(newSong->title, title);
        strcpy(newSong->artist, artist);

        newSong->p_nextSong = NULL;

        if (playlist->p_head == NULL)
        {
            playlist->p_head = newSong;
            return;
        }

        Song *p_lastSong = playlist->p_head;
        while (p_lastSong->p_nextSong)
        {
            p_lastSong = p_lastSong->p_nextSong;
        }
        p_lastSong->p_nextSong = newSong;

        i++;
    }
    else if (g != 3)
    {
        printf ("Error, Maximale Anzahl an Songs erreicht!\nEs konnte, bis Sie etwas löschen, keine neue Songs hinzugefügt werden\n\n");
        g = 3;
        return; 
    }
    #endif
    return;
}

/**
 * @brief print out all songs of the playlist
 *
 * @param playlist pointer to playlist
 */
void print_playlist(Playlist *playlist)
{

    Song *currentSong = playlist->p_head;

    while (currentSong != NULL)
    {

        printf("Title: %s, Artist: %s\n", currentSong->title, currentSong->artist);
        currentSong = currentSong->p_nextSong;
    }
    printf("\n");
    return;
}

/**
 * @brief delete the first song of the playlist
 *
 * @param playlist pointer to playlist
 */
void delete_firstSong(Playlist *playlist)
{

    if (playlist->p_head == NULL)
    {
        return;
    }

    Song *tmp = playlist->p_head;

    playlist->p_head = playlist->p_head->p_nextSong;

    free(tmp->title);
    free(tmp->artist);
    free(tmp);
    return;
}

/**
 * @brief delete playlist and free up memory
 *
 * @param playlist pointer to playlist
 */
void delete_playlist(Playlist *playlist)
{

    while (playlist->p_head)
    {
        delete_firstSong(playlist);
    }

    return;
}

