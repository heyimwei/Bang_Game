#pragma once
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>



typedef struct _sMemInfo
{
    int32_t	number; // 1 ~ 16
    int32_t	role; // 1 ~ 16 default init 0
    int32_t	identity; // 1 ~ 4 default init 0
    int32_t	HP;
    int32_t	HP_MAX;
    int32_t	card[20]; // default init -1
    int32_t card_num;
    int32_t equip[10];
        // if the equipment is not equiped, the value is -1, if equiped 0 ~ 79
        // #0 : barlie
        // #1 : dinamite
        // #2 : mirino
        // #3 : mustang
        // #4 : jail
        // #5 : remington
        // #6 : rev.carabine
        // #7 : schofield
        // #8 : volcanic
        // #9 : winchester
}__attribute__((__packed__))sMemInfo;

#define SPADE 1
#define HEART 2
#define DIAMOND 3
#define CLUB 4

#define IN_DECK 0
#define NOT_IN_DECK 1
#define HELDED 2


typedef struct _sCardInfo
{
    int32_t	NumCard;
    int32_t	suit;
    int32_t	point;
    int32_t status;
    // 0 : IN_DECK
    // 1 : NOT_IN_DECK
    // 2 : HELDED
}__attribute__ ((__packed__))sCardInfo;



#define SHERIFF 1
#define VICE 2
#define OUTLAW 3
#define RENEGADE 4


void card_init(sCardInfo a[]);
int32_t member_init(sMemInfo *member_list,int32_t player_number, sCardInfo card_list[80]);
int32_t draw_a_card(sMemInfo *member , sCardInfo card_list[80], int32_t *deck_top_ptr, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number );
void help();
void print_line();
void display_the_table(sMemInfo member_list[] ,int32_t player_num ,sCardInfo card_list[80]);
void print_a_hand_card_with_number(int i ,int j ,sCardInfo card_list[80] ,sMemInfo member_list[]);
int32_t fold_a_card(int i ,int j ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number);
int32_t sort_the_hand_card(int i, sMemInfo member_list[]);
int32_t equipment_effect( int i, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t *deck_top_ptr ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number);
void print_a_card(int32_t card_number , sCardInfo card_list[80]);
void lucky_duke_judgement_display(int32_t card_number_1 , int32_t card_number_2, sCardInfo card_list[80]);
int32_t Somebody_Die(int i, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number);
int32_t Judge_Winner(int player_number, sMemInfo member_list[]);
void drawing_stage(int i ,sCardInfo card_list[80] ,sMemInfo member_list[], int32_t *deck_top_ptr, int32_t player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number );
int32_t action_stage(int *used_bang ,int i ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t *deck_top_ptr, int32_t *player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number );
int32_t sid_condition(int i ,sMemInfo member_list[] ,sCardInfo card_list[80] , int drinkable , int32_t Discard_DECK[80], int32_t *Discard_DECK_number);
void if_Suzy( int32_t i, sMemInfo member_list[], sCardInfo card_list[80], int32_t *deck_top_ptr, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number );
int32_t after_n_damage( int32_t atk_i, int32_t def_i, int32_t n, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t *deck_top_ptr ,int32_t Discard_DECK[80] ,int32_t *pDiscard_DECK_number);
int abs(int a);

int32_t test(int *used_bang ,int i ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t *deck_top_ptr, int32_t *player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number );