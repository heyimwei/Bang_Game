#include <stdio.h>
#include <stdint.h>
#include "func.h"

int32_t Discard_DECK[80] = {-1};  //棄牌堆
int32_t Discard_DECK_number = 0;

int32_t main()
{
    int32_t chose_menu = 0;
    int32_t player_number = 0;
//---------manual--------
    while( 1 )
    {
        printf( "What are you gonna do?\n" );
        printf( "    1. start game\n" );
        printf( "    2. help\n" );
        printf( "    3. exit\n" );
        printf( "Your choice: ");
        scanf( "%d", &chose_menu );
        if( chose_menu == 1 ) break;
        else if( chose_menu == 2 ) help();
        else if( chose_menu == 3 ) return 0;
        else printf( "No such option!!!\n" );
    }
    while(1)
    {
        printf( "Please enter the number of players(4~7)?\n" );
        printf( "Your choice: ");
        scanf( "%d", &player_number );
        if( player_number >= 4 && player_number <= 7) break;
    }

//----------initialize-------
    sCardInfo card_list[80];
    card_init(card_list);
    sMemInfo member_list[player_number];
    int32_t start_round = member_init( member_list, player_number ,card_list);
//----------game start-------

    int32_t deck_top = -1; //排堆最上面的卡被決定：卡牌編號, 未決定: -1 
    for( int32_t i = start_round;; i++ )
    {
        int32_t t = 0;
        //test( &t, i, card_list, member_list, &deck_top, &player_number, Discard_DECK, &Discard_DECK_number );
    //------equipment effect--------
        if( equipment_effect(i, &player_number, member_list, card_list , &deck_top,Discard_DECK ,&Discard_DECK_number) ) continue; // if doesn't escape

    //-----------judge--------------
        for(size_t j = 0 ; j < player_number ; j++)
        {
            if( member_list[j].HP <= 0 )      //if somebody die due to equipment effect
            {
                Somebody_Die(j, &player_number, member_list, card_list ,Discard_DECK ,&Discard_DECK_number);
            }
        }
        if( Judge_Winner(player_number, member_list) )
        {
            printf("GAME OVER\n");
            break;
        }
    //---------draw cards---------
        printf("\033[1;32;40m============= Drawing Stage ================\033[0m\n");
        drawing_stage( i, card_list, member_list, &deck_top, player_number, Discard_DECK, &Discard_DECK_number );
    //-----------action-----------
        display_the_table(member_list,player_number,card_list);
        printf("\033[1;32;40m============= Player %d's Turn ==============\033[0m\n",i + 1);
        int32_t used_bang = 0;
        int32_t whether_end = 0; // 0: 回合結束 1: 繼續行動 2: 有人死亡，且分得出勝負             <=======================
        while(1)
        {
            if_Suzy( i, member_list, card_list, &deck_top, Discard_DECK, &Discard_DECK_number );
            whether_end = action_stage(&used_bang, i, card_list, member_list, &deck_top, &player_number, Discard_DECK, &Discard_DECK_number );
            sort_the_hand_card(i, member_list);
            if( whether_end == 0 || whether_end == 2 ) break;
        }
    //----------judge-------------
        for(size_t j = 0 ; j < player_number ; j++)
        {
            if( member_list[j].HP <= 0 )      //if somebody die due to equipment effect
            {
                Somebody_Die(j, &player_number, member_list, card_list ,Discard_DECK ,&Discard_DECK_number);
            }
        }
        if( Judge_Winner(player_number, member_list) )
        {
            printf("GAME OVER\n");
            break;
        }
    //----------------------------
        if( i + 1 == player_number ) i = -1;
    }

    return 0;
}