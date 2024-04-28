#include "func.h"

const int32_t role_list[16]   = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
const char role_name_list[16][100] = {"Bart Cassidy"    , "Black Jack"     , "Calamity Janet" , "El Gringo",
                                      "Jesse Jones"     , "Jourdonnais"    , "Kit Carlson"    , "Lucky Duke",
                                      "Paul Regret"     , "Padro Ramirez"  , "Rose Doolan"    , "Sid Ketchum",
                                      "Slab the Killer" , "Suzy Lafayette" , "Vulture Sam"    , "Willy the Kid"};
const int32_t HP_MAX_list[16] = {4,4,4,3,4,4,4,4,3,4,4,4,4,4,4,4};
const char identity_name_list[4][100] = {"Sheriff","Vice","Outlaw","Renegade"};
const char card_name_list[80][100] = {  "Barlie","Barlie","Dinamite","Mirino","Mustang","Mustang","Jail","Jail","Jail",
                                        "Remington","Rev.carabine","Schofield","Schofield","Schofield","Volcanic","Volcanic","Winchester",
                                        "Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!","Bang!",
                                        "Beer","Beer","Beer","Beer","Beer","Beer",
                                        "Cat Balou","Cat Balou","Cat Balou","Cat Balou",
                                        "Diligenza","Diligenza","Duel","Duel","Duel","General Store","General Store","Gatling","Indians!","Indians!",
                                        "Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!","Missed!",
                                        "Panic!","Panic!","Panic!","Panic!","Saloon","Wells Farco"  };
const char suit_name_list[4][100] = {"Spade","Heart","Diamond","Club"};

int min(int a ,int b)
{
    if(a < b) return a;
    return b;
}

void card_init(sCardInfo card_list[80])
{
    for(int i = 0 ; i < 80 ; i++) card_list[i].NumCard = i;
    for(int i = 0 ; i < 80 ; i++) card_list[i].status = 0;
    // 0 : 在牌堆
    // 1 : 在棄牌堆
    // 2 : 在玩家手上
    card_list[0].point = 12,card_list[0].suit = SPADE; //barlie
    card_list[1].point = 13,card_list[1].suit = SPADE;
    card_list[2].point = 2,card_list[2].suit = HEART; //dinamite
    card_list[3].point = 1,card_list[3].suit = SPADE; //mirino
    card_list[4].point = 8,card_list[4].suit = HEART; //mustang
    card_list[5].point = 9,card_list[5].suit = HEART;
    card_list[6].point = 11,card_list[6].suit = SPADE; //jail
    card_list[7].point = 4,card_list[7].suit = HEART;
    card_list[8].point = 10,card_list[8].suit = SPADE;
    card_list[9].point = 13,card_list[9].suit = CLUB; //remington
    card_list[10].point = 1,card_list[10].suit = CLUB; //rev.carabine
    card_list[11].point = 11,card_list[11].suit = CLUB; //schofield
    card_list[12].point = 12,card_list[12].suit = CLUB;
    card_list[13].point = 13,card_list[13].suit = SPADE;
    card_list[14].point = 10,card_list[14].suit = SPADE; //volcanic
    card_list[15].point = 10,card_list[15].suit = CLUB;
    card_list[16].point = 8,card_list[16].suit = SPADE; //winchester
    card_list[17].point = 1,card_list[17].suit = SPADE; //bang!
    card_list[18].point = 2,card_list[18].suit = DIAMOND;
    card_list[19].point = 3,card_list[19].suit = DIAMOND;
    card_list[20].point = 4,card_list[20].suit = DIAMOND;
    card_list[21].point = 5,card_list[21].suit = DIAMOND;
    card_list[22].point = 6,card_list[22].suit = DIAMOND;
    card_list[23].point = 7,card_list[23].suit = DIAMOND;
    card_list[24].point = 8,card_list[24].suit = DIAMOND;
    card_list[25].point = 9,card_list[25].suit = DIAMOND;
    card_list[26].point = 10,card_list[26].suit = DIAMOND;
    card_list[27].point = 11,card_list[27].suit = DIAMOND;
    card_list[28].point = 12,card_list[28].suit = DIAMOND;
    card_list[29].point = 13,card_list[29].suit = DIAMOND;
    card_list[30].point = 1,card_list[30].suit = DIAMOND;
    card_list[31].point = 2,card_list[31].suit = CLUB;
    card_list[32].point = 3,card_list[32].suit = CLUB;
    card_list[33].point = 4,card_list[33].suit = CLUB;
    card_list[34].point = 5,card_list[34].suit = CLUB;
    card_list[35].point = 6,card_list[35].suit = CLUB;
    card_list[36].point = 7,card_list[36].suit = CLUB;
    card_list[37].point = 8,card_list[37].suit = CLUB;
    card_list[38].point = 9,card_list[38].suit = CLUB;
    card_list[39].point = 12,card_list[39].suit = HEART;
    card_list[40].point = 13,card_list[40].suit = HEART;
    card_list[41].point = 1,card_list[41].suit = HEART;
    card_list[42].point = 6,card_list[42].suit = HEART; //beer
    card_list[43].point = 7,card_list[43].suit = HEART;
    card_list[44].point = 8,card_list[44].suit = HEART;
    card_list[45].point = 9,card_list[45].suit = HEART;
    card_list[46].point = 10,card_list[46].suit = HEART;
    card_list[47].point = 11,card_list[47].suit = HEART;
    card_list[48].point = 13,card_list[48].suit = HEART; //cat balou
    card_list[49].point = 9,card_list[49].suit = DIAMOND;
    card_list[50].point = 10,card_list[50].suit = DIAMOND;
    card_list[51].point = 11,card_list[51].suit = DIAMOND;
    card_list[52].point = 9,card_list[52].suit = SPADE; //diligenza
    card_list[53].point = 9,card_list[53].suit = SPADE;
    card_list[54].point = 12,card_list[54].suit = DIAMOND; //duel
    card_list[55].point = 11,card_list[55].suit = SPADE;
    card_list[56].point = 8,card_list[56].suit = CLUB;
    card_list[57].point = 9,card_list[57].suit = CLUB; //general store
    card_list[58].point = 12,card_list[58].suit = SPADE;
    card_list[59].point = 10,card_list[59].suit = HEART; //gatling
    card_list[60].point = 13,card_list[60].suit = DIAMOND; //indians!
    card_list[61].point = 1,card_list[61].suit = DIAMOND;
    card_list[62].point = 10,card_list[62].suit = CLUB; //missed!
    card_list[63].point = 11,card_list[63].suit = CLUB;
    card_list[64].point = 12,card_list[64].suit = CLUB;
    card_list[65].point = 13,card_list[65].suit = CLUB;
    card_list[66].point = 1,card_list[66].suit = CLUB;
    card_list[67].point = 2,card_list[67].suit = SPADE;
    card_list[68].point = 3,card_list[68].suit = SPADE;
    card_list[69].point = 4,card_list[69].suit = SPADE;
    card_list[70].point = 5,card_list[70].suit = SPADE;
    card_list[71].point = 6,card_list[71].suit = SPADE;
    card_list[72].point = 7,card_list[72].suit = SPADE;
    card_list[73].point = 8,card_list[73].suit = SPADE;
    card_list[74].point = 11,card_list[74].suit = HEART; //panic!
    card_list[75].point = 12,card_list[75].suit = HEART;
    card_list[76].point = 1,card_list[76].suit = HEART;
    card_list[77].point = 8,card_list[77].suit = DIAMOND;
    card_list[78].point = 5,card_list[78].suit = HEART; //saloon
    card_list[79].point = 3,card_list[79].suit = HEART; //wells farco
}

int32_t member_init(sMemInfo *member_list,int32_t player_number, sCardInfo card_list[80])
{
    srand(time(NULL));

    for(size_t i=0;i<player_number;i++)
    {
        member_list[i].number = i + 1;
        member_list[i].role = 0;
        member_list[i].identity = 0;
        member_list[i].HP = 0;
        member_list[i].HP_MAX = 0;
        member_list[i].card_num = 0;
        for(int j = 0 ; j < 20 ; j++) member_list[i].card[j] = -1;
        for(int j = 0 ; j < 10 ; j++) member_list[i].equip[j] = -1;
    }

    int32_t role_list_tmp[16]   = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    
    int32_t identity_list_4[4]={SHERIFF,RENEGADE,OUTLAW,OUTLAW};
    int32_t identity_list_5[5]={SHERIFF,VICE,RENEGADE,OUTLAW,OUTLAW};
    int32_t identity_list_6[6]={SHERIFF,VICE,RENEGADE,OUTLAW,OUTLAW,OUTLAW};
    int32_t identity_list_7[7]={SHERIFF,VICE,VICE,RENEGADE,OUTLAW,OUTLAW,OUTLAW};

    int32_t pos_sheriff = 0;

    for(size_t index = 0 ; index < player_number ; index++)
    {
        while(member_list[index].role==0)
        {
            int32_t tmp = rand()%16;
            if(role_list_tmp[tmp]!=-1)
            {
                member_list[index].role = role_list_tmp[tmp];
                role_list_tmp[tmp] = -1;
            }
        }
    }

    switch (player_number)
    {
        case 4:
            for(size_t index = 0 ; index < player_number ; index++){
                while(member_list[index].identity==0){
                    int32_t tmp = rand()%4;
                    if(identity_list_4[tmp]!=-1){
                        member_list[index].identity = identity_list_4[tmp];
                        identity_list_4[tmp] = -1;
                        if(member_list[index].identity == 1){pos_sheriff=index;}
                    }
                }
                member_list[index].HP_MAX = HP_MAX_list[member_list[index].role-1];
                if(member_list[index].identity == 1){member_list[index].HP_MAX++;}
                member_list[index].HP = member_list[index].HP_MAX;
            }
            break;
        case 5:
            for(size_t index = 0 ; index < player_number ; index++){
                while(member_list[index].identity==0){
                    int32_t tmp = rand()%5;
                    if(identity_list_5[tmp]!=-1){
                        member_list[index].identity = identity_list_5[tmp];
                        identity_list_5[tmp] = -1;
                        if(member_list[index].identity == 1){pos_sheriff=index;}
                    }
                }
                member_list[index].HP_MAX = HP_MAX_list[member_list[index].role-1];
                if(member_list[index].identity == 1){member_list[index].HP_MAX++;}
                member_list[index].HP = member_list[index].HP_MAX;
            }
            break;
        case 6:
            for(size_t index = 0 ; index < player_number ; index++){
                while(member_list[index].identity==0){
                    int32_t tmp = rand()%6;
                    if(identity_list_6[tmp]!=-1){
                        member_list[index].identity = identity_list_6[tmp];
                        identity_list_6[tmp] = -1;
                        if(member_list[index].identity == 1){pos_sheriff=index;}
                    }
                }
                member_list[index].HP_MAX = HP_MAX_list[member_list[index].role-1];
                if(member_list[index].identity == 1) member_list[index].HP_MAX++;
                member_list[index].HP = member_list[index].HP_MAX;
            }
            break;
        case 7:
            for(size_t index = 0 ; index < player_number ; index++)
            {
                while(member_list[index].identity==0)
                {
                    int32_t tmp = rand()%7;
                    if(identity_list_7[tmp]!=-1)
                    {
                        member_list[index].identity = identity_list_7[tmp];
                        identity_list_7[tmp] = -1;
                        if(member_list[index].identity == 1){pos_sheriff=index;}
                    }
                }
                member_list[index].HP_MAX = HP_MAX_list[member_list[index].role-1];
                if(member_list[index].identity == 1){member_list[index].HP_MAX++;}
                member_list[index].HP = member_list[index].HP_MAX;
            }
            break;
        default:
            break;
    }
    int32_t deck_top = -1, Discard_DECK_number = 0; //<===================================================================
    int32_t Discard_DECK[80] = {0}; //<================================
    for(int i = 0 ; i < player_number ; i++)
        for(int j = 0 ; j < member_list[i].HP ; j++)
            draw_a_card(&member_list[i] ,card_list, &deck_top, Discard_DECK, &Discard_DECK_number );
    return pos_sheriff;
}

int32_t draw_a_card(sMemInfo *member , sCardInfo card_list[80], int32_t *deck_top_ptr, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number )
{   
    int32_t in_deck_num = 0; //先確定牌堆有牌
    for( int32_t i = 0; i < 80; i++ ) if( card_list[i].status == 0 ) in_deck_num++;
    if( in_deck_num == 0 ) //如果牌堆沒牌了要把棄牌移到牌堆
    {
        for( int32_t i = 0; i< 80; i++ )
        {
            if( card_list[i].status == NOT_IN_DECK ) card_list[i].status = IN_DECK;
            Discard_DECK[i] = -1;
        }
        *pDiscard_DECK_number = 0;
    }
    srand(time(0));
    if( *deck_top_ptr != -1 ) //檢查牌堆最上面的牌有沒有被決定
    {
        card_list[*deck_top_ptr].status = HELDED;
        member->card[member->card_num++] = *deck_top_ptr;
        *deck_top_ptr = -1;
        return member->card[member->card_num];
    }
    else
    {
        while(1)
        {
            int32_t tmp = rand()%80;
            if(card_list[tmp].status == IN_DECK)
            {
                card_list[tmp].status = HELDED;
                member->card[member->card_num] = tmp; // 要用card_number - 1, 原本的card_num++會放到後兩格 <=================
                member->card_num++; //<==============================================
                return tmp;
            }
        }
    }
}

void help()
{

}

void print_line()
{
    printf("=============================================\n");
}

void display_the_table(sMemInfo member_list[] ,int32_t player_num ,sCardInfo card_list[80])
{
    for(int i = 0 ; i < player_num ; i++)
    {
        print_line();
        if(i == 0)
        {
            if(member_list[i].identity == SHERIFF) printf("Player 1 (You) : \033[1;34;40mSheriff\033[0m\n");
            else printf("Player 1 (You) ");
            if(member_list[i].identity != SHERIFF) printf("%s\n",identity_name_list[member_list[i].identity - 1]);
            printf("Role : %s\n",role_name_list[member_list[i].role - 1]);
            printf("HP : %d/%d\n",member_list[i].HP,member_list[i].HP_MAX);
            
            // print equiped card
            printf("Equiped cards : ");
            for(int j = 0 ; j < 10 ; j++)
            {
                if( member_list[i].equip[j] != -1 ) // equiped
                {
                    printf("%s ",card_name_list[member_list[i].equip[j]]);
                }
            }
            printf("\nThe number of hand card : %d\n",member_list[i].card_num);
            // print hand card
            for(int j = 0 ; j < member_list[i].card_num ; j++)
            {
                print_a_hand_card_with_number(i ,j ,card_list ,member_list);
            }
        }
        else
        {
            if(member_list[i].identity == SHERIFF) printf("Player%d : \033[1;34;40mSheriff\033[0m\n",i+1);
            else printf("Player %d \n",i+1);
            printf("Role : %s\n",role_name_list[member_list[i].role - 1]);
            printf("HP : %d/%d\n",member_list[i].HP,member_list[i].HP_MAX);
            // print equiped card
            printf("Equiped cards : ");
            for(int j = 0 ; j < 10 ; j++)
            {
                if( member_list[i].equip[j] != -1 ) // equiped
                {
                    printf("%s ",card_name_list[member_list[i].equip[j]]);
                }
            }
            printf("\nThe number of hand card : %d",member_list[i].card_num);
        }
        printf("\n");
    }
}

void print_a_hand_card_with_number(int i ,int j ,sCardInfo card_list[80] ,sMemInfo member_list[])
{
    if(card_list[member_list[i].card[j]].suit == HEART || card_list[member_list[i].card[j]].suit == DIAMOND)
    {
        printf("\033[1;31;40m");
    }
    printf("\t---------------------------\n");
    printf("%d\t|%s",j + 1 ,card_name_list[member_list[i].card[j]]);
    if(strlen(card_name_list[member_list[i].card[j]]) < 7) printf("\t");
    printf("\t%s\t",suit_name_list[card_list[member_list[i].card[j]].suit - 1]);
    if(card_list[member_list[i].card[j]].point > 1 && card_list[member_list[i].card[j]].point < 11)
    {
        printf("%2d|\n",card_list[member_list[i].card[j]].point);
    }
    else if(card_list[member_list[i].card[j]].point == 1) printf(" A|\n");
    else if(card_list[member_list[i].card[j]].point == 11) printf(" J|\n");
    else if(card_list[member_list[i].card[j]].point == 12) printf(" Q|\n");
    else if(card_list[member_list[i].card[j]].point == 13) printf(" K|\n");
    printf("\t---------------------------\n");
    printf("\033[0m");
}

int32_t fold_a_card(int i ,int j ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number)
{
    card_list[member_list[i].card[j]].status = NOT_IN_DECK;
    Discard_DECK[*Discard_DECK_number] = member_list[i].card[j];
    member_list[i].card[j] = -1;
    (*Discard_DECK_number)++;
}

int32_t sort_the_hand_card(int i, sMemInfo member_list[])
{
    for( int32_t j = 0; j < member_list[i].card_num; j++ )
    {
        if( member_list[i].card[j] == -1 )
        {
            for( int32_t k = j; k < member_list[i].card_num; k++ )
            {
                if( k == member_list[i].card_num - 1 ) member_list[i].card[k] = -1;
                else member_list[i].card[k] = member_list[i].card[k+1];
            }
            member_list[i].card_num--;
        }
    }
}

void lucky_duke_judgement_display(int32_t card_number_1 , int32_t card_number_2, sCardInfo card_list[80])
{
    // 1
    if(card_list[card_number_1].suit == HEART || card_list[card_number_1].suit == DIAMOND)
    {
        printf("\033[1;31;40m");
    }
    printf("\t---------------------------\n");
    printf("1\t|%s",card_name_list[card_number_1]);
    if(strlen(card_name_list[card_number_1]) < 7) printf("\t");
    printf("\t%s\t",suit_name_list[card_list[card_number_1].suit - 1]);
    if(card_list[card_number_1].point > 1 && card_list[card_number_1].point < 11)
    {
        printf("%2d|\n",card_list[card_number_1].point);
    }
    else if(card_list[card_number_1].point == 1) printf(" A|\n");
    else if(card_list[card_number_1].point == 11) printf(" J|\n");
    else if(card_list[card_number_1].point == 12) printf(" Q|\n");
    else if(card_list[card_number_1].point == 13) printf(" K|\n");
    printf("\t---------------------------\n");
    printf("\033[0m");
        if(card_list[card_number_1].suit == HEART || card_list[card_number_1].suit == DIAMOND)
    {
        printf("\033[1;31;40m");
    }
    // 2
    printf("\t---------------------------\n");
    printf("2\t|%s",card_name_list[card_number_2]);
    if(strlen(card_name_list[card_number_2]) < 7) printf("\t");
    printf("\t%s\t",suit_name_list[card_list[card_number_2].suit - 1]);
    if(card_list[card_number_2].point > 1 && card_list[card_number_2].point < 11)
    {
        printf("%2d|\n",card_list[card_number_2].point);
    }
    else if(card_list[card_number_2].point == 1) printf(" A|\n");
    else if(card_list[card_number_2].point == 11) printf(" J|\n");
    else if(card_list[card_number_2].point == 12) printf(" Q|\n");
    else if(card_list[card_number_2].point == 13) printf(" K|\n");
    printf("\t---------------------------\n");
    printf("\033[0m");
}

int32_t equipment_effect( int i, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t *deck_top_ptr ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number)
{
    int32_t jail = 1;
    if(member_list[i].equip[1] != -1 ) // dinamite
    {
        int32_t explode = 0; // determine if explode
        int32_t tmp = draw_a_card(&member_list[i] , card_list , deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
        member_list[i].card[member_list[i].card_num] = -1;
        card_list[tmp].status = NOT_IN_DECK;
        Discard_DECK[*Discard_DECK_number] = tmp;
        (*Discard_DECK_number)++;
        if(member_list[i].role == 8 && i == 0) // if you are lucky duke
        {
            int32_t tmp2 = draw_a_card(&member_list[i] , card_list, deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
            member_list[i].card[member_list[i].card_num] = -1;
            card_list[tmp2].status = NOT_IN_DECK;
            Discard_DECK[*Discard_DECK_number] = tmp2;
            (*Discard_DECK_number)++;
            lucky_duke_judgement_display(tmp,tmp2,card_list);
            printf("Choose one of the two cards to use Lucky Duke skill.\n");
            printf("--> ");
            int32_t choice;
            scanf("%d",&choice);
            if(choice == 1)
            {
                if(card_list[tmp].point >= 2 && card_list[tmp].point <= 9 && card_list[tmp].suit == SPADE)
                {
                    explode = 1;
                }
            }
            else if(choice == 2)
            {
                if(card_list[tmp2].point >= 2 && card_list[tmp2].point <= 9 && card_list[tmp2].suit == SPADE)
                {
                    explode = 1;
                }
            }
        }
        else if(member_list[i].role == 8) // if computer is lucky duke
        {
            int32_t tmp2 = draw_a_card(&member_list[i] , card_list, deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
            member_list[i].card[member_list[i].card_num] = -1;
            card_list[tmp2].status = NOT_IN_DECK;
            Discard_DECK[*Discard_DECK_number] = tmp2;
            (*Discard_DECK_number)++;
            if(card_list[tmp2].point >= 2 && card_list[tmp2].point <= 9 && card_list[tmp2].suit == SPADE &&
               card_list[tmp].point >= 2 && card_list[tmp].point <= 9 && card_list[tmp].suit == SPADE) // both explode
            {
                explode = 1;
            }
        }
        else if(card_list[tmp].point >= 2 && card_list[tmp].point <= 9 && card_list[tmp].suit == SPADE)// if not lucky duke and explode
        {
            explode = 1;
        }
        if(explode) // explode condition
        {
            printf("Dynamite exploded.\n");
            member_list[i].HP -= 3;
            Discard_DECK[*Discard_DECK_number] = member_list[i].equip[1];
            (*Discard_DECK_number)++;
            card_list[member_list[i].equip[1]].status = NOT_IN_DECK;
            member_list[i].equip[1] = -1;
            if( after_n_damage( -1, i, 3, player_number, member_list, card_list, deck_top_ptr, Discard_DECK, Discard_DECK_number ) )
            {
                jail = 0;
            }
        }
        else // if doesn't explode, pass dinamite to next player
        {
            member_list[(i+1) % *player_number].equip[1] = member_list[i].equip[1];
            member_list[i].equip[1] = -1;
        }
    }
    //------------------------------------------------------------------------------
    if( member_list[i].equip[4] != -1 && jail) // jail
    {
        int32_t escape = 0;
        int32_t tmp = draw_a_card(&member_list[i] , card_list, deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
        member_list[i].card[member_list[i].card_num] = -1;
        card_list[tmp].status = NOT_IN_DECK;
        Discard_DECK[*Discard_DECK_number] = tmp;
        (*Discard_DECK_number)++;
        if(member_list[i].role == 8 && i == 0) // if you are lucky duke
        {
            int32_t tmp2 = draw_a_card(&member_list[i] , card_list, deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
            member_list[i].card[member_list[i].card_num] = -1;
            card_list[tmp2].status = NOT_IN_DECK;
            Discard_DECK[*Discard_DECK_number] = tmp2;
            (*Discard_DECK_number)++;
            lucky_duke_judgement_display(tmp,tmp2,card_list);
            printf("Choose one of the two cards to use Lucky Duke skill.\n");
            printf("--> ");
            int32_t choice;
            scanf("%d",&choice);
            if(choice == 1)
            {
                if(card_list[tmp].suit == HEART)
                {
                    escape = 1;
                }
            }
            else if(choice == 2)
            {
                if(card_list[tmp2].suit == HEART)
                {
                    escape = 1;
                }
            }
        }
        else if(member_list[i].role == 8) // if computer are lucky duke
        {
            int32_t tmp2 = draw_a_card(&member_list[i] , card_list, deck_top_ptr ,Discard_DECK ,Discard_DECK_number);
            member_list[i].card[member_list[i].card_num] = -1;
            card_list[tmp2].status = NOT_IN_DECK;
            Discard_DECK[*Discard_DECK_number] = tmp2;
            (*Discard_DECK_number)++;
            if(card_list[tmp].suit == HEART || card_list[tmp2].suit == HEART)
            {
                escape = 1;
            }
        }
        if(escape) // if escape
        {
            Discard_DECK[*Discard_DECK_number] = member_list[i].equip[4];
            (*Discard_DECK_number)++;
            card_list[member_list[i].equip[4]].status = NOT_IN_DECK;
            member_list[i].equip[4] = -1;
        }
        else // if not escape
        {
            Discard_DECK[*Discard_DECK_number] = member_list[i].equip[4];
            (*Discard_DECK_number)++;
            card_list[member_list[i].equip[4]].status = NOT_IN_DECK;
            member_list[i].equip[4] = -1;
            return 1; // go to next round
        }
        sort_the_hand_card( i, member_list );
    }
    return 0;
}

int32_t Somebody_Die( int i, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t Discard_DECK[80] ,int32_t *Discard_DECK_number)
{
    int32_t Vulture_Sam_use_ability = 0;     //收屍的
    int32_t pos_Vulture_Sam = 0;
    for (size_t j = 0; j < *player_number; j++)
    {
        if(member_list[j].role == 15 && member_list[j].HP > 0)
        {
            Vulture_Sam_use_ability = 1;
            pos_Vulture_Sam = j;
        }
    }

    if( Vulture_Sam_use_ability == 0 )      //Vulture Sam didn't use ability
    {
        if( i == 0 )    // you die
        {
            printf("You die and need to decide fold-card order\n");
            for(int j = 0 ; j < 10 ; j++) // move equipment cards to hand card
            {
                if(member_list[0].equip[j] != -1)
                {
                    member_list[0].card[member_list[0].card_num++] = member_list[0].equip[j];
                }
            }
            display_the_table(member_list,*player_number,card_list);
            for(size_t j = 1 ; j <= member_list[0].card_num ; j++){
                printf("Which card you want to fold ?\n");
                printf("--> ");
                int32_t choose_fold_card = 0;
                scanf("%d",&choose_fold_card);
                while( choose_fold_card >= 1 && choose_fold_card  <= member_list[0].card_num ){
                    printf("You should choice the card in your hand\n");
                    printf("--> ");
                    scanf("%d",&choose_fold_card);
                }
                card_list[member_list[i].card[choose_fold_card - 1]].status = NOT_IN_DECK;
                member_list[i].card[choose_fold_card - 1] = -1;
                Discard_DECK[*Discard_DECK_number] = member_list[i].card[choose_fold_card - 1];
                (*Discard_DECK_number)++; //每次棄牌後沒有整理
            }
            printf("Your identity is %s\n",identity_name_list[member_list[i].identity - 1]);
        }
        else   //computer die
        {
            for(int j = 0 ; j < 10 ; j++) // move equipment cards to hand card
            {
                if(member_list[i].equip[j] != -1)
                {
                    member_list[i].card[member_list[i].card_num++] = member_list[i].equip[j];
                }
            }
            printf("Player%d die and need to decide fold-card order\n",i+1);
            for(size_t j = 1 ; j <= member_list[i].card_num ; j++)
            {
                card_list[member_list[i].card[j - 1]].status = NOT_IN_DECK;
                member_list[i].card[j - 1] = -1;
                Discard_DECK[*Discard_DECK_number] = member_list[i].card[j - 1];
                (*Discard_DECK_number)++; //每次棄牌後沒有整理
            }
            printf("P%d identity is %s\n",i+1,identity_name_list[member_list[i].identity - 1]);
        }
    }
    else
    {
        if( i == 0  )    // you die and Vulture Sam use ability
        {
            printf("Vulture Sam use ability.\n");
            for(int j = 0 ; j < 10 ; j++) // move equipment cards to hand card
            {
                if(member_list[0].equip[j] != -1)
                {
                    member_list[0].card[member_list[0].card_num++] = member_list[0].equip[j];
                }
            }

            for(size_t j = 0 ; j < member_list[0].card_num ; j++){
                
                member_list[pos_Vulture_Sam].card[member_list[pos_Vulture_Sam].card_num++] = member_list[i].card[j];
                member_list[i].card[j] = -1;
            }
            printf("Your identity is %s\n",identity_name_list[member_list[i].identity - 1]);
        }
        else   //computer die and Vulture Sam use ability
        {
            printf("Vulture Sam use ability.\n");
            for(int j = 0 ; j < 10 ; j++) // move equipment cards to hand card
            {
                if(member_list[i].equip[j] != -1)
                {
                    member_list[i].card[member_list[i].card_num++] = member_list[i].equip[j];
                }
            }
            
            for(size_t j = 0 ; j < member_list[i].card_num ; j++){
                
                member_list[pos_Vulture_Sam].card[member_list[pos_Vulture_Sam].card_num++] = member_list[i].card[j];
                member_list[i].card[j] = -1;
            }
            printf("P%d identity is %s\n",i+1,identity_name_list[member_list[i].identity - 1]);
        }
    }
    
    for( int32_t j = i; j < *player_number; j++ )
    {
        if( j == *player_number - 1 )
        {
            member_list[j].number = 0;
            member_list[j].role = 0;
            member_list[j].identity = 0;
            member_list[j].HP = 0;
            member_list[j].HP_MAX = 0;
            member_list[j].card_num = 0;
            for(int k = 0 ; k < 20 ; k++) member_list[j].card[k] = -1;
            for(int k = 0 ; k < 10 ; k++) member_list[j].equip[k] = -1;
        }
        else 
        {
            member_list[j].number = member_list[j+1].number;
            member_list[j].role = member_list[j+1].role;
            member_list[j].identity = member_list[j+1].identity;
            member_list[j].HP = member_list[j+1].HP;
            member_list[j].HP_MAX = member_list[j+1].HP_MAX;
            member_list[j].card_num = member_list[j+1].card_num;
            for(int k = 0 ; k < 20 ; k++) member_list[j].card[k] = member_list[j+1].card[k];
            for(int k = 0 ; k < 10 ; k++) member_list[j].equip[k] = member_list[j+1].equip[k];
        }
    }
    (*player_number)--;
}

int32_t Judge_Winner(int player_number, sMemInfo member_list[])
{
    int32_t SHERIFF_flag = 0;
    int32_t VICE_flag = 0;
    int32_t OUTLAW_flag = 0;
    int32_t RENEGADE_flag = 0;

    for(size_t i = 0; i < player_number ; i++)
    {
        if( member_list[i].identity == 1 ) SHERIFF_flag = 1;
        if( member_list[i].identity == 2 ) VICE_flag = 1;
        if( member_list[i].identity == 3 ) OUTLAW_flag = 1;
        if( member_list[i].identity == 4 ) RENEGADE_flag = 1;
    }

    if( SHERIFF_flag == 0 && VICE_flag == 0 && OUTLAW_flag == 0)
    {
        printf("RENEGADE WIN!\n");
        return 1;
    }
    else if( SHERIFF_flag == 0 )
    {
        printf("OUTLAW WIN!\n");
        return 1;
    }
    else if( OUTLAW_flag == 0 && RENEGADE_flag == 0 )
    {
        printf("SHERIFF (and VICE) WIN!\n");
        return 1;
    }
    return 0;
}

void drawing_stage(int i ,sCardInfo card_list[80] ,sMemInfo member_list[], int32_t *deck_top_ptr, int32_t player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number )
{
    srand(time(0));
    switch( member_list[i].role )
    {
        case 2: //Black Jack
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            int32_t temp = draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            if( i == 0 )//真人玩家
            {
                printf( "You got a %s ( %s %d )\n", card_name_list[temp], suit_name_list[card_list[temp].suit - 1], card_list[temp].point );
                if( card_list[temp].suit == HEART || card_list[temp].suit == DIAMOND )
                {
                    printf( "So you got one more card.\n");
                    draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                }
                else printf( "You didn't get one more card.\n");
            }
            else //電腦
            {
                printf( "Player%d got a %s ( %s %d )\n", i+1, card_name_list[temp], suit_name_list[card_list[temp].suit - 1], card_list[temp].point );
                if( card_list[temp].suit == HEART || card_list[temp].suit == DIAMOND )
                {
                    printf( "So Player%d got one more card.\n", i + 1 );
                    draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) ;
                }
                else printf( "Player%d didn't get one more card.\n", i + 1 );
            }
            break;
        case 5: //Jesse Jones
            if( i == 0 ) //真人玩家
            {
                printf( "Do you wanna stole a card from other players?\n");
                printf( "--> (0) no ");
                for( int32_t j = 1; j < player_num; j++) //只列出有牌的玩家
                {
                    if( member_list[j].card_num > 0 ) printf( "(%d) player%d", j+1, j+1 );
                }
                int32_t whether_Jesse_Jones = -1;
                while(1)
                {
                    scanf( "%d", &whether_Jesse_Jones );
                    if( whether_Jesse_Jones < 0 || 
                        whether_Jesse_Jones > player_num || 
                        whether_Jesse_Jones - 1 == i || 
                        member_list[whether_Jesse_Jones - 1].card_num == 0 ) printf( "No such option, please choose again.\n");
                    else break;
                }
                if( whether_Jesse_Jones  > 0 )
                {
                    int32_t temp = rand() % member_list[whether_Jesse_Jones - 1].card_num;
                    member_list[i].card[member_list[i].card_num++] = member_list[whether_Jesse_Jones - 1].card[temp];
                    member_list[whether_Jesse_Jones - 1].card[temp] = -1;
                    sort_the_hand_card(whether_Jesse_Jones, member_list);
                    printf( "You stole a %s ( %s %d ) from player%d.\n" , card_name_list[member_list[i].card[member_list[i].card_num]]
                                                                        , suit_name_list[member_list[i].card[member_list[i].card_num]]
                                                                        , card_list[member_list[i].card[member_list[i].card_num]].point
                                                                        , whether_Jesse_Jones );
                }
                else draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            }
            else //電腦設定為固定發動能力
            {
                int32_t have_card = 0; //先確定至少有人有手牌
                for( int32_t j = 0; j < player_num; j++ )
                {
                    if( j == i ) continue;
                    if( member_list[j].card_num > 0 ) have_card++;
                }
                if( have_card == 0 )
                {
                    draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                    break;
                }
                int32_t target_player = i; //確定有人有牌後抽玩家，抽牌
                while( target_player == i || member_list[target_player].card_num == 0) target_player = rand() % player_num;
                int32_t temp = rand() % member_list[target_player].card_num;
                member_list[i].card[member_list[i].card_num++] = member_list[target_player].card[temp];
                member_list[target_player].card[temp] = -1;
                sort_the_hand_card(target_player, member_list);
                printf( "Player%d stole a card from ", i + 1 );
                if( target_player == 0 ) printf( "you.\n" );
                else printf( "player%d.\n", target_player + 1);
            }
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            break;
        case 7: //Kit Carlson
            if( i == 0 ) //真人玩家
            {
                for( int32_t j = 0; j < 3; j++ ) draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                for( int32_t j = member_list[i].card_num - 3; j < member_list[i].card_num; j++ )
                {
                    printf( "(%d) %s ( %s %d ) ", j - member_list[i].card_num  + 4
                                                , card_name_list[member_list[i].card[j]]
                                                , suit_name_list[card_list[member_list[i].card[j]].suit - 1]
                                                , card_list[member_list[i].card[j]].point );
                }
                printf( "\nChoose the cards you DO NOT want.\n" );
                printf( "--> ");
                int32_t not_want = -1;
                scanf( "%d", &not_want );
                while( not_want < 1 || not_want > 3 )
                {
                    printf( "No such option, please choose again.\n" );
                    printf( "--> ");
                    scanf( "%d", &not_want );
                }
                *deck_top_ptr = member_list[i].card[not_want + member_list[i].card_num - 4];
                card_list[member_list[i].card[not_want + member_list[i].card_num - 4]].status = IN_DECK;
                member_list[i].card[not_want + member_list[i].card_num - 4] = -1;
                sort_the_hand_card(i, member_list);
            }
            else //電腦沒差
            {
                draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            }
            break;
        case 10: //Pedro Ramirez
            if( i == 0 ) //真人玩家
            {
                if( *pDiscard_DECK_number == 0 ) //先檢查棄牌堆有沒有牌
                {
                    printf( "There's no card in the discard deck.\n");
                    draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                }
                else
                {
                    printf( "Do you wanna draw the latest discarded card as your first card?\n");
                    printf( "--> (1) yes (2) no\n");
                    int32_t whether_Pedro_Ramirez = 0;
                    while(1)
                    {
                        scanf( "%d", &whether_Pedro_Ramirez );
                        if( whether_Pedro_Ramirez == 1 || whether_Pedro_Ramirez == 2 ) break;
                        else printf( "No such option, please choose again.\n" );
                    }
                    if( whether_Pedro_Ramirez == 1 )
                    {
                        member_list[i].card[member_list[i].card_num] = Discard_DECK[(*pDiscard_DECK_number) - 1];
                        card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].status = HELDED;
                        Discard_DECK[(*pDiscard_DECK_number) - 1] = -1;
                        member_list[i].card_num++;
                        (*pDiscard_DECK_number)--;
                    }
                    else if(whether_Pedro_Ramirez == 2)
                    {
                        draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                    }
                }   
            }
            else //電腦設為固定發動能力
            {   //先檢查棄牌堆有沒有牌
                if( *pDiscard_DECK_number == 0 ) draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                else
                {
                    member_list[i].card[member_list[i].card_num] = Discard_DECK[(*pDiscard_DECK_number) - 1];
                    card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].status = HELDED;
                    Discard_DECK[(*pDiscard_DECK_number) - 1] = -1;
                    member_list[i].card_num++;
                    (*pDiscard_DECK_number)--;
                }
            }
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            break;
        default:
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
    }
}

int32_t action_stage(int *used_bang ,int i ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t *deck_top_ptr, int32_t *player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number )
{
    if(i == 0)  //真人玩家
    {
        printf("What do you want to do ?\n");
        printf("(0) PASS \n");
        for(int j = 0 ; j < member_list[i].card_num ; j++)
        {
            printf("(%d) %s (%s  %d)\n",j+1,card_name_list[member_list[i].card[j]]
                                       ,suit_name_list[card_list[member_list[i].card[j]].suit - 1] 
                                       ,card_list[member_list[i].card[j]].point);
        }
        if(member_list[i].role == 12) printf("(%d) Use ability \n", member_list[i].card_num + 1);
        printf("Your choice : ");
        int32_t action_opt = -1;
        scanf("%d",&action_opt);
        while( action_opt < 0 ||(member_list[i].role == 12 && action_opt > member_list[i].card_num + 1) || (member_list[i].role != 12 && action_opt > member_list[i].card_num) )
        {
            printf("No such option, please choose again.\n");
            scanf("%d",&action_opt);
        }
        if( action_opt == 0 ) return 0;
        else if( action_opt == member_list[i].card_num + 1 )  //席德用技能
        {
            if( member_list[i].card_num < 2 )
            {
                printf("You don't have enough cards.\n");
            }
            else
            {
                printf("Choose two cards you wanna fold.\n");
                for(size_t j = 0 ; j < 2 ; j++)
                {
                    int32_t folded_card = 0;
                    scanf("--> %d",&folded_card);
                    fold_a_card(i,folded_card-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                }
                if(member_list[i].HP < member_list[i].HP_MAX) member_list[i].HP++;
            }
            sort_the_hand_card(i, member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 0 
                && member_list[i].card[action_opt-1] <= 1 ) //barlie
        {
            if(member_list[i].equip[0] != -1) printf("You already have a barlie.\n");
            else
            {
                member_list[i].equip[0] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                sort_the_hand_card(i, member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
        }
        else if(member_list[i].card[action_opt-1] >= 2 
                && member_list[i].card[action_opt-1] <= 2 ) //dinamite
        {
            member_list[i].equip[1] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i, member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 3 
                && member_list[i].card[action_opt-1] <= 3 ) //mirino //
        {
            if(member_list[i].equip[2] != -1)
            {
                printf("You have equiped mirino already.\n");
                return 1;
            }
            member_list[i].equip[2] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i,member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 4 
                && member_list[i].card[action_opt-1] <= 5 ) //mustang //
        {
            if(member_list[i].equip[3] != -1)
            {
                printf("You have equiped mustang already.\n");
                return 1;
            }
            member_list[i].equip[3] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i,member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 6 
                && member_list[i].card[action_opt-1] <= 8 ) //jail 
        {
            printf("Which Player do you wanna use Jail ?\n--> ");
            int32_t jailed_player = 0;
            scanf("%d",&jailed_player);
            if( jailed_player < 2 || jailed_player > *player_num ) return 1;
            if( member_list[jailed_player-1].identity != 1 && member_list[jailed_player-1].equip[4] == -1)
            {
                member_list[jailed_player-1].equip[4] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                sort_the_hand_card(i, member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
            else 
            {
                print_line("You can't use jail at this player.\n");
                return 1;
            }
        }
        else if(member_list[i].card[action_opt-1] >= 9 
                && member_list[i].card[action_opt-1] <= 9 ) //remington //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                printf("Do you want to replace the original gun?\n");
                printf("(1) yes (2) no\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                    member_list[i].equip[already_have_gun] = -1;
                    member_list[i].equip[5] = member_list[i].card[action_opt-1];
                    printf("Remington equiped.\n");
                }
                else if(choice == 2)
                {
                    return 1;
                }
            }
            else
            {
                member_list[i].equip[5] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                printf("Remington equiped.\n");
            }
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 10 
                && member_list[i].card[action_opt-1] <= 10 ) //rev.carabine //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                printf("Do you want to replace the original gun?\n");
                printf("(1) yes (2) no\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                    member_list[i].equip[already_have_gun] = -1;
                    member_list[i].equip[6] = member_list[i].card[action_opt-1];
                    printf("Rev.carabine equiped.\n");
                }
                else if(choice == 2)
                {
                    return 1;
                }
            }
            else
            {
                member_list[i].equip[6] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                printf("Rev.carabine equiped.\n");
            }
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 11 
                && member_list[i].card[action_opt-1] <= 13 ) //schofield //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                printf("Do you want to replace the original gun?\n");
                printf("(1) yes (2) no\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                    member_list[i].equip[already_have_gun] = -1;
                    member_list[i].equip[7] = member_list[i].card[action_opt-1];
                    printf("Schofield equiped.\n");
                }
                else if(choice == 2)
                {
                    return 1;
                }
            }
            else
            {
                member_list[i].equip[7] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                printf("Schofield equiped.\n");
            }
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 14 
                && member_list[i].card[action_opt-1] <= 15 ) //Volcanic //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                printf("Do you want to replace the original gun?\n");
                printf("(1) yes (2) no\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                    member_list[i].equip[already_have_gun] = -1;
                    member_list[i].equip[8] = member_list[i].card[action_opt-1];
                    printf("Volcanic equiped.\n");
                }
                else if(choice == 2)
                {
                    return 1;
                }
            }
            else
            {
                member_list[i].equip[8] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                printf("Volcanic equiped.\n");
            }
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 16 
                && member_list[i].card[action_opt-1] <= 16 ) //Winchester //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                printf("Do you want to replace the original gun?\n");
                printf("(1) yes (2) no\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                    member_list[i].equip[already_have_gun] = -1;
                    member_list[i].equip[9] = member_list[i].card[action_opt-1];
                    printf("Winchester equiped.\n");
                }
                else if(choice == 2)
                {
                    return 1;
                }
            }
            else
            {
                member_list[i].equip[9] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                printf("Winchester equiped.\n");
            }
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if( (member_list[i].card[action_opt-1] >= 17 
                  && member_list[i].card[action_opt-1] <= 41) ||
                 (member_list[i].role == 3 
                  && member_list[i].card[action_opt-1] >= 62
                  && member_list[i].card[action_opt-1] <= 73) ) //bang! //
        {
            // We have to consider role : Calamity Janet , El Gringo , Jourdonnais 
            // , Lucky Duke , Paul Regret , Rose Doolan , Sid Ketchum , Slab the Killer
            // , Suzy Lafayette , Willy the Kid
            // And also consider all equipment except jail and dynamite.
            if(*used_bang == 1)
            {
                printf("You have used bang in this round.\n");
                return 1;
            }
            printf("Choose a player to use BANG!\n");
            printf("(2) ~ (%d) --> ",*player_num);
            int32_t target_player;
            scanf("%d",&target_player);
            // first, consider whether you can bang target player
            int32_t range = 1;
            int32_t distance = min(target_player - 1 , (*player_num) - target_player + 1);
            if(member_list[i].equip[2] != -1)  // mirino
            {
                range++;
            }
            if(member_list[i].role == 11) // Rose Doolan
            {
                distance--;
            }
            if(member_list[target_player-1].equip[3] != -1)  // mustang
            {
                distance++;
            }
            if(member_list[target_player-1].role == 9) // Paul Regret
            {
                distance++;
            }
            if(member_list[i].equip[5] != -1)  // remington
            {
                range += 2;
            }
            else if(member_list[i].equip[6] != -1)  // rev.carabine
            {
                range += 3;
            }
            else if(member_list[i].equip[7] != -1)  // schofield
            {
                range++;
            }
            else if(member_list[i].equip[9] != -1)  // winchester
            {
                range += 4;
            }
            // check the range and distance
            if(range < distance)
            {
                printf("You can't shoot this player.\n");
                return 1;
            }
            else // use bang
            {
                fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                sort_the_hand_card( i, member_list );
            }
            // target is banged
            // determine whether target lost life point
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            int32_t barrel = 0;
            int32_t missed_needed = 1;
            if(member_list[target_player-1].equip[0] != -1)  // barrel 
            {
                barrel++;
            }
            if(member_list[target_player-1].role == 6) // Jourdonnais
            {
                barrel++;
            }
            if(member_list[i].role == 13) // Slab the Killer
            {
                missed_needed++;
            }
            // if barrel works or not (consider lucky duke)
            for(int j = 0 ; j < barrel ; j++)
            {
                int32_t tmp = draw_a_card(&member_list[target_player-1] , card_list , deck_top_ptr , Discard_DECK , pDiscard_DECK_number);
                member_list[i].card[member_list[i].card_num] = -1;
                card_list[tmp].status = NOT_IN_DECK;
                Discard_DECK[*pDiscard_DECK_number] = tmp;
                (*pDiscard_DECK_number)++;
                /*printf("You draw %s (%s  %d)\n",card_name_list[tmp]
                                                ,suit_name_list[card_list[tmp].suit - 1]
                                                ,card_list[tmp].point);*/
                if(member_list[target_player-1].role == 8) // lucky duke
                {
                    int32_t tmp2 = draw_a_card(&member_list[target_player-1] , card_list , deck_top_ptr , Discard_DECK , pDiscard_DECK_number);
                    member_list[i].card[member_list[i].card_num] = -1;
                    card_list[tmp2].status = NOT_IN_DECK;
                    Discard_DECK[*pDiscard_DECK_number] = tmp2;
                    (*pDiscard_DECK_number)++;
                    /*lucky_duke_judgement_display(tmp,tmp2,card_list);
                    printf("Choose one of the two cards to use Lucky Duke skill.\n");
                    printf("--> ");
                    int32_t choice;
                    scanf("%d",&choice);*/
                    if(card_list[tmp].suit == HEART || card_list[tmp2].suit == HEART)
                    {
                        missed_needed--;
                        printf("Barrel successfully works.\n");
                    }
                }
                else // not lucky duke
                {
                    if(card_list[tmp].suit == HEART)
                    {
                        missed_needed--;
                        printf("Barrel successfully works.\n");
                    }
                }
            }
            // 
            int32_t lost_life_point = 1;
            if(missed_needed > 0)
            {
                int32_t missed_num = 0;
                for(int j = 0 ; j < member_list[target_player-1].card_num ; j++)
                {
                    if(member_list[target_player-1].card[j] >= 62 &&
                        member_list[target_player-1].card[j] <= 73) missed_num++;
                }
                if(missed_num > missed_needed)
                {
                    /*printf("You have to use %d missed to avoid bang.\n",missed_needed);
                    printf("(1) Use (2) Not use\n");
                    printf("--> ");
                    int32_t choice;
                    scanf("%d",&choice);*/
                    for(int j = 0 ; j < missed_needed ; )
                    {
                        if(member_list[target_player-1].card[j] >= 62 &&
                           member_list[target_player-1].card[j] <= 73)
                        {
                            fold_a_card(target_player-1,j,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                            if_Suzy(target_player-1,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
                            j++;
                        }
                    }
                    lost_life_point = 0;
                    sort_the_hand_card(i,member_list);
                }
                else // lost a life point
                {
                    member_list[target_player-1].HP--;
                    if( after_n_damage(i, target_player-1, 1, player_num, member_list, card_list ,deck_top_ptr ,Discard_DECK ,pDiscard_DECK_number) )
                    {
                        Somebody_Die( target_player-1, player_num, member_list, card_list, Discard_DECK, pDiscard_DECK_number );
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                }
            }
            if(member_list[i].equip[8] != -1 || member_list[i].role == 16)  // volcanic or Willy the Kid
            {
                *used_bang = 0;
            }
            else *used_bang = 1;
        }
        else if(member_list[i].card[action_opt-1] >= 42 
                && member_list[i].card[action_opt-1] <= 47 ) //beer 
        {
            if( member_list[i].HP < member_list[i].HP_MAX && *player_num != 2 ) member_list[i].HP++;
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i, member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 48 
                && member_list[i].card[action_opt-1] <= 51 ) //cat balou
        {
            printf("Choose a player to use Cat Balou\n");
            printf("(2) ~ (%d) --> ",*player_num);
            int32_t target_player;
            scanf("%d",&target_player);
            int32_t have_equipment = 0;
            for(int j = 0 ; j < 10 ; j++)
            {
                if(member_list[target_player-1].equip[j] != -1) have_equipment++;
            }
            if(member_list[target_player-1].card_num == 0 && !have_equipment)
            {
                printf("No cards can be stolen.\n");
                return 1;
            }
            printf("Throw hand cards or equipment.\n");
            printf("(1) hand cards (2) equipment\n");
            printf("--> ");
            int32_t choice;
            scanf("%d",&choice);
            if(choice == 1)
            {
                if(member_list[target_player-1].card_num == 0)
                {
                    printf("No hand cards can be thrown.\n");
                    return 1;
                }
                int32_t tmp = rand() % member_list[target_player-1].card_num;
                fold_a_card(target_player-1,tmp,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                sort_the_hand_card(target_player-1,member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
                if_Suzy(target_player-1,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
            else if(choice == 2)
            {
                if(have_equipment == 0)
                {
                    printf("No equipment can be thrown.\n");
                    return 1;
                }
                int32_t tmp;
                printf("Choose an equipment\n");
                for(int j = 0 ; j < 10 ; j++)
                {
                    if(member_list[target_player-1].equip[j] != -1)
                    {
                        printf("(%d) %s (%s  %d)\n",j
                                                   ,card_name_list[member_list[target_player-1].equip[j]]
                                                   ,suit_name_list[card_list[member_list[target_player-1].equip[j]].suit - 1]
                                                   ,card_list[member_list[target_player-1].equip[j]].point);                           
                    }
                }
                printf("--> ");
                scanf("%d",&tmp);
                card_list[member_list[target_player-1].equip[tmp]].status = NOT_IN_DECK;
                member_list[target_player-1].equip[tmp] = -1;
                fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                sort_the_hand_card(i,member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
        }
        else if(member_list[i].card[action_opt-1] >= 52 
                && member_list[i].card[action_opt-1] <= 53 ) //diligenza
        {
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i, member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 54 
                && member_list[i].card[action_opt-1] <= 56 ) //duel 
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            //---------選擇決鬥對象---------
            printf( "Choose a player to duel.\n");
            for( int32_t j = 1; j < *player_num; j++ ) printf( "(%d) Player%d ", j + 1, j + 1 );
            int32_t dueled = 0;
            while(1)
            {
                printf( "\nYour choice: " );
                scanf( "%d", &dueled );
                if( dueled >= 1 && dueled <= (*player_num) ) break;
                else printf( "No such option, please choose again." );
            }
            while(1)
            {
                //-----------被決鬥者(電腦)的反應-----------
                int32_t have_bang = 0;
                for( int32_t j = 0; j < member_list[dueled - 1].card_num; j++ )
                {
                    //被決鬥的對象有bang或missed就用
                    //有bang
                    if( member_list[dueled - 1].card[j] >= 17 && member_list[dueled - 1].card[j] <= 41 )
                    {
                        printf( "Player%d use a Bang ( %s %d ) to take over your Duel.\n", dueled
                                                                                         , card_name_list[member_list[dueled - 1].card[j]]
                                                                                         , card_list[member_list[dueled - 1].card[j]].point );
                        fold_a_card( dueled - 1, j, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( dueled - 1, member_list );
                        have_bang = 1;
                        break;
                    }
                    //有missed而且是賈奈特
                    else if( member_list[dueled - 1].role == 3 &&
                             member_list[dueled - 1].card[j] >= 62 && member_list[dueled - 1].card[j] <= 73 )
                    {
                        printf( "Player%d ( Calamity Janet ) use a Missed ( %s %d ) to take over your Duel.\n", dueled
                                                                                                            , suit_name_list[card_list[member_list[dueled - 1].card[j]].suit - 1]
                                                                                                            , card_list[member_list[dueled - 1].card[j]].point );
                        fold_a_card( dueled - 1, j, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( dueled - 1, member_list );
                        have_bang = 1;
                        break;
                    }
                }
                if( have_bang == 0 )
                {
                    member_list[dueled - 1].HP--;
                    printf( "Player%d was hurt by your Duel, now his HP is %d\n", dueled, member_list[dueled - 1].HP );
                    if( after_n_damage( i, dueled - 1 , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(dueled - 1, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                    break;
                }
                //--------------被決鬥回來-------------------
                have_bang = 0;
                for( int32_t j = 0; j < member_list[i].card_num; j++ )
                {
                    //如果有bang,或自己是賈奈特而且有missed
                    if( ( member_list[i].card[j] >= 17 && member_list[i].card[j] <= 41 ) ||
                        ( member_list[i].role == 3 && member_list[i].card[j] >= 62 && member_list[i].card[j] <= 73 ) )
                    {
                        have_bang = 1;
                    } 
                }
                if( have_bang == 0 ) //自己手上沒有牌能回應對決鬥
                {
                    member_list[i].HP--;
                    printf( "You have no card to take over the Duel.\n" );
                    printf( "You were hurt by player%d, now your HP is %d.\n", dueled, member_list[i].HP );
                    if( after_n_damage( dueled - 1, i , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(i, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                    break;
                }
                else
                {
                    printf( "Choose a card you want to use, or reject the Duel.\n" );
                    printf( "(0) reject " );
                    for( int32_t j = 0; j < member_list[i].card_num; j++ )
                    {
                        //印出手上的bang和missed(如果自己是賈奈特)
                        if( ( member_list[i].card[j] >= 17 && member_list[i].card[j] <= 41 ) ||
                            ( member_list[i].role == 3 && member_list[i].card[j] >= 62 && member_list[i].card[j] <= 73 ) )
                        {
                            printf( "(%d) %s ( %s %d ) ", j + 1
                                                        , card_name_list[member_list[i].card[j]]
                                                        , suit_name_list[card_list[member_list[i].card[j]].suit - 1]
                                                        , card_list[member_list[i].card[j]].point );
                        }
                    }
                    int32_t redueled_choice = -1;
                    //檢查選的牌在合法範圍而且是bang或missed(如果自己是賈奈特)
                    while(1)
                    {
                        printf( "\nYour choice: " );
                        scanf( "%d", &redueled_choice );
                        if( redueled_choice >= 0 && redueled_choice <= (member_list[i].card_num) &&
                            ( redueled_choice == 0 ||
                              ( member_list[i].card[redueled_choice - 1] >= 17 && member_list[i].card[redueled_choice - 1] <= 41 ) ||
                              ( member_list[i].role == 3 && member_list[i].card[redueled_choice - 1] >= 62 && member_list[i].card[redueled_choice - 1] <= 73 ) ) )
                                break;
                        else printf( "No such option, please choose again." );
                    }
                    if( redueled_choice == 0 )
                    {
                        member_list[i].HP--;
                        printf( "You were hurt by player%d, now your HP is %d.\n", dueled, member_list[i].HP );
                        if( after_n_damage( dueled - 1, i , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                        {
                            Somebody_Die(dueled - 1, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                            if( Judge_Winner(*player_num, member_list) ) return 2;
                        }
                        break;
                    }
                    else
                    {
                        fold_a_card( i, redueled_choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( i, member_list );
                    }
                }
            }
            if_Suzy(dueled -1,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 57 
                && member_list[i].card[action_opt-1] <= 58 ) //general store
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            //先把牌全部抽到手上，再讓電腦從自己手上拿走
            for( int32_t j = 0; j < ( *player_num ); j++ ) draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            printf( "Please choose a card you want.\n" );
            //手牌的index從store_offset開始是剛剛抽的
            int32_t store_offset = member_list[i].card_num - (*player_num);
            for( int j = store_offset; j < member_list[i].card_num; j++ )
            {
                printf( "(%d) %s ( %s  %d )\n", j - store_offset + 1
                                              , card_name_list[member_list[i].card[j]]
                                              ,suit_name_list[card_list[member_list[i].card[j]].suit - 1] 
                                              ,card_list[member_list[i].card[j]].point );
            }
            int32_t chosen; //自己選的牌的index
            int32_t choice = 0;
            while(1)//自己先選 ( 1 ~ player number )
            {
                printf( "Your choice: " );
                scanf( "%d", &choice );
                if(choice < 1 || choice > (*player_num) ) printf( "No such option, please choose again.\n");
                else break;
            }
            choice--; // 0 ~ card number - 1
            chosen = choice;
            for( int32_t j = 1; j < ( *player_num ); j++ ) //電腦選
            {
                while(1)
                {
                    choice = rand() % ( *player_num );
                    if( choice == chosen || member_list[i].card[choice + store_offset] == -1 );
                    else break;
                }
                choice += store_offset;
                member_list[j].card[member_list[j].card_num++] = member_list[i].card[choice];
                printf( "Player%d chose %s ( %s %d ).\n", j + 1
                                                        , card_name_list[member_list[i].card[choice]]
                                                        , suit_name_list[card_list[member_list[i].card[choice]].suit - 1]
                                                        , card_list[member_list[i].card[choice]].point );
                member_list[i].card[choice] = -1;
            }
            sort_the_hand_card( i, member_list );
        }
        else if(member_list[i].card[action_opt-1] >= 59 
                && member_list[i].card[action_opt-1] <= 59 ) //gatling
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            for( int32_t j = 1; j < *player_num; j++ ) //打其他人
            {
                int32_t have_missed = 0;
                for( int32_t k = 0; k < member_list[j].card_num; k++ )
                {
                    //電腦有missed就用，如果是賈奈特看先找到missed還是bang
                    if( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 ) 
                    {
                        printf( "Player%d use a Missed ( %s %d ) to dodge your Gatling.\n", j + 1
                                                                                        , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                        , card_list[member_list[j].card[k]].point );
                        fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( j, member_list );
                        have_missed = 1;
                        break;
                    }
                    else if( member_list[j].role == 3 && ( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 ) )
                    {
                        printf( "Player%d ( Calamity Janet ) use a Bang ( %s %d ) to dodge your Gatling.\n", j + 1
                                                                                                           , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                                           , card_list[member_list[j].card[k]].point );
                        fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( j, member_list );
                        have_missed = 1;
                        break;
                    }
                    if_Suzy( k, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                }
                if_Suzy( j, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                if( have_missed == 0 )
                {
                    member_list[j].HP--;
                    printf( "Player%d was hit by your Gatling, now his HP is %d.\n", j + 1, member_list[j].HP );
                    if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                        j--;
                    }
                }
            }
        }
        else if(member_list[i].card[action_opt-1] >= 60 
                && member_list[i].card[action_opt-1] <= 61 ) //indians!
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            for( int32_t j = 1; j < *player_num; j++ ) //打其他人
            {
                int32_t have_bang = 0;
                for( int32_t k = 0; k < member_list[j].card_num; k++ )
                {
                    //電腦有bang就用，如果是賈奈特看先找到bang還是missed
                    if( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 )
                    {
                        printf( "Player%d use a Bang ( %s %d ) to dodge your Indians.\n", j + 1
                                                                                        , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                        , card_list[member_list[j].card[k]].point );
                        fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( j, member_list );
                        have_bang = 1;
                        break;
                    }
                    else if( member_list[j].role == 3 && ( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 ) )
                    {
                        printf( "Player%d ( Calamity Janet ) use a Missed ( %s %d ) to dodge your Indians.\n", j + 1
                                                                                                             , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                                             , card_list[member_list[j].card[k]].point );
                            fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                            sort_the_hand_card( j, member_list );
                            have_bang = 1;
                            break;
                    }
                    if_Suzy( j, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                }
                if( have_bang == 0 )
                {
                    member_list[j].HP--;
                    printf( "Player%d was hurt by your Indians, now his HP is %d.\n", j + 1, member_list[j].HP );
                    if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                        j--;
                    }
                }
            }
        }
        else if( member_list[i].card[action_opt-1] >= 62 
                 && member_list[i].card[action_opt-1] <= 73 ) //missed! //
        {
            printf("You can only use missed when you get banged.\n");
        }
        else if(member_list[i].card[action_opt-1] >= 74 
                && member_list[i].card[action_opt-1] <= 77 ) //panic! //
        {
            printf("Choose a player to use PANIC!\n");
            printf("(2) ~ (%d) --> ",*player_num);
            int32_t target_player;
            scanf("%d",&target_player);
            int32_t have_equipment = 0;
            for(int j = 0 ; j < 10 ; j++)
            {
                if(member_list[target_player - 1].equip[j] != -1) have_equipment++;
            }
            if(member_list[target_player - 1].card_num == 0 && !have_equipment)
            {
                printf("No cards can be stolen.\n");
                return 1;
            }
            // first, consider whether you can panic target player
            int32_t range = 1;
            int32_t distance = min(target_player - 1 , (*player_num) - target_player + 1);
            if(member_list[target_player - 1].equip[3] != -1) // mustang
            {
                distance++;
            }
            if(member_list[i].equip[2] != -1) // mirino
            {
                range++;
            }
            if(member_list[target_player - 1].role == 9) // Paul Regret
            {
                distance++;
            }
            if(member_list[i].role == 11) // Rose Doolan
            {
                range++;
            }
            if(range >= distance) // stole hand cards or equipment
            {    
                printf("Stole hand cards or equipment.\n");
                printf("(1) hand cards (2) equipment\n");
                printf("--> ");
                int32_t choice;
                scanf("%d",&choice);
                if(choice == 1)
                {
                    if(member_list[target_player - 1].card_num == 0)
                    {
                        printf("No hand cards can be stolen.\n");
                        return 1;
                    }
                    int32_t tmp = rand() % member_list[target_player - 1].card_num;
                    member_list[i].card[member_list[i].card_num++] = member_list[target_player - 1].card[tmp];
                    fold_a_card( i, action_opt-1 , card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                    sort_the_hand_card(i,member_list);
                    member_list[target_player - 1].card[tmp] = -1;
                    sort_the_hand_card(target_player - 1,member_list);
                    if_Suzy( target_player - 1, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                }
                else if(choice == 2)
                {
                    if(have_equipment == 0)
                    {
                        printf("No equipment can be stolen.\n");
                        return 1;
                    }
                    int32_t tmp;
                    printf("Choose an equipment\n");
                    for(int j = 0 ; j < 10 ; j++)
                    {
                        if(member_list[target_player - 1].equip[j] != -1)
                        {
                            printf("(%d) %s (%s  %d)\n",j
                                                       ,card_name_list[member_list[target_player - 1].equip[j]]
                                                       ,suit_name_list[card_list[member_list[target_player - 1].equip[j]].suit - 1]
                                                       ,card_list[member_list[target_player - 1].equip[j]].point);
                                                     
                        }
                    }
                    printf("--> ");
                    scanf("%d",&tmp);
                    member_list[i].card[member_list[i].card_num++] = member_list[target_player - 1].equip[tmp];
                    fold_a_card( i, action_opt-1 , card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                    sort_the_hand_card(i,member_list);
                    member_list[target_player - 1].equip[tmp] = -1;
                }
            }
            else
            {
                printf("Your launch range is not enough.\n");
            }
        }
        else if(member_list[i].card[action_opt-1] >= 78 
                && member_list[i].card[action_opt-1] <= 78 ) //saloon 
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            for( int32_t j = 0; j < *player_num; j++ )
            {
                if( member_list[j].HP < member_list[j].HP_MAX )
                {
                    member_list[j].HP++;
                    if( j == 0 ) printf( "You were cured by your Saloon, now your HP is %d.\n", member_list[j].HP );
                    else printf( "Player%d was cured by your Saloon, now his HP is %d.\n", j + 1, member_list[j].HP );
                }
            }
        }
        else if(member_list[i].card[action_opt-1] >= 79 
                && member_list[i].card[action_opt-1] <= 79 ) //wells farco
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            for( int32_t j = 0; j < 3; j++ ) draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }    
    }
    else        //電腦
    {
        if( member_list[i].role == 12 && member_list[i].card_num >= 2 && member_list[i].HP < member_list[i].HP_MAX )    //席德用技能
        {
            for(size_t j = 0 ; j < 2 ; j++)
            {
                int32_t folded_card = 0;
                folded_card = rand()%member_list[i].card_num;
                fold_a_card(i,folded_card,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                sort_the_hand_card(i, member_list);
            }
            member_list[i].HP++;
            printf("Player%d use his ability to get 1 HP.\n",i+1);
        }
        int32_t action_opt = -1;
        action_opt = rand()% (member_list[i].card_num + 1);     //隨機出牌或是跳過
        if( action_opt == 0 )
        {
            printf("Player%d end his turn.\n",i+1);
            return 0;
        }
        else if(member_list[i].card[action_opt-1] >= 0 
                && member_list[i].card[action_opt-1] <= 1 ) //barlie
        {
            if(member_list[i].equip[0] != -1) return 1;
            else
            {
                member_list[i].equip[0] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                sort_the_hand_card(i, member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
        }
        else if(member_list[i].card[action_opt-1] >= 2 
                && member_list[i].card[action_opt-1] <= 2 ) //dinamite
        {
            member_list[i].equip[1] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i, member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 3 
                && member_list[i].card[action_opt-1] <= 3 ) //mirino //
        {
            if(member_list[i].equip[2] != -1)
            {
                return 1;
            }
            printf("Player%d use mirino.\n",i+1);
            member_list[i].equip[2] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i,member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 4 
                && member_list[i].card[action_opt-1] <= 5 ) //mustang //
        {
            if(member_list[i].equip[3] != -1)
            {
                return 1;
            }
            printf("Player%d use mustang.\n",i+1);
            member_list[i].equip[3] = member_list[i].card[action_opt-1];
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i,member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 6 
                && member_list[i].card[action_opt-1] <= 8 ) //jail 
        {
            int32_t jailed_player = 0;
            jailed_player = rand()% (*player_num) + 1;
            if( member_list[jailed_player-1].identity != 1 && member_list[jailed_player-1].equip[4] == -1 && jailed_player-1 != i)
            {
                printf("Player%d use Jail at Player%d.\n",i+1,jailed_player);
                member_list[jailed_player-1].equip[4] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
                sort_the_hand_card(i, member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
            else 
            {
                return 1;
            }
        }
        else if(member_list[i].card[action_opt-1] >= 9 
                && member_list[i].card[action_opt-1] <= 9 ) //remington //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                member_list[i].equip[already_have_gun] = -1;
                member_list[i].equip[5] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            else
            {
                member_list[i].equip[5] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            printf("Player%d equip remington.\n",i+1);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 10 
                && member_list[i].card[action_opt-1] <= 10 ) //rev.carabine //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                member_list[i].equip[already_have_gun] = -1;
                member_list[i].equip[6] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            else
            {
                member_list[i].equip[6] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            printf("Player%d equip rev.carabine.\n",i+1);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 11 
                && member_list[i].card[action_opt-1] <= 13 ) //schofield //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                member_list[i].equip[already_have_gun] = -1;
                member_list[i].equip[7] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            else
            {
                member_list[i].equip[7] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            printf("Player%d equip schofield.\n",i+1);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 14 
                && member_list[i].card[action_opt-1] <= 15 ) //Volcanic //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                member_list[i].equip[already_have_gun] = -1;
                member_list[i].equip[8] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            else
            {
                member_list[i].equip[8] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            printf("Player%d equip Volcanic.\n",i+1);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 16 
                && member_list[i].card[action_opt-1] <= 16 ) //Winchester //
        {
            int32_t already_have_gun = 0;
            for(int j = 5 ; j < 10 ; j++)
            {
                if(member_list[i].equip[j] != -1) already_have_gun = j;
            }
            if(already_have_gun)
            {
                card_list[member_list[i].equip[already_have_gun]].status = NOT_IN_DECK;
                member_list[i].equip[already_have_gun] = -1;
                member_list[i].equip[9] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            else
            {
                member_list[i].equip[9] = member_list[i].card[action_opt-1];
                member_list[i].card[action_opt-1] = -1;
            }
            printf("Player%d equip Winchester.\n",i+1);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if( (member_list[i].card[action_opt-1] >= 17 
                  && member_list[i].card[action_opt-1] <= 41) ||
                 (member_list[i].role == 3 
                  && member_list[i].card[action_opt-1] >= 62
                  && member_list[i].card[action_opt-1] <= 73) ) //bang! //
        {
            // We have to consider role : Calamity Janet , El Gringo , Jourdonnais 
            // , Lucky Duke , Paul Regret , Rose Doolan , Sid Ketchum , Slab the Killer
            // , Suzy Lafayette , Willy the Kid
            // And also consider all equipment except jail and dynamite.
            if(*used_bang == 1)
            {
                return 1;
            }
            int32_t target_player;
            while(1)
            {
                while(1)
                {
                    target_player = rand() % (*player_num) + 1;
                    if(target_player - 1 == i) continue;
                    else break;
                }
                // first, consider whether you can bang target player
                int32_t range = 1;
                int32_t distance = min( abs(target_player - (i + 1) ), (*player_num)-(i+1) + (target_player - 1) + 1);
                if(member_list[i].equip[2] != -1)  range++; // mirino
                if(member_list[i].role == 11) distance--; // Rose Doolan
                if(member_list[target_player-1].equip[3] != -1) distance++; // mustang
                if(member_list[target_player-1].role == 9) distance++;// Paul Regret
                if(member_list[i].equip[5] != -1) range += 2; // remington
                else if(member_list[i].equip[6] != -1) range += 3; // rev.carabine
                else if(member_list[i].equip[7] != -1) range++; // schofield
                else if(member_list[i].equip[9] != -1) range += 4; // winchester
                // check range
                if(range < distance) continue;
                else break;
            }
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            // target is banged
            // determine whether target lost life point
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            int32_t barrel = 0;
            int32_t missed_needed = 1;
            if(member_list[target_player-1].equip[0] != -1) barrel++; // barrel 
            if(member_list[target_player-1].role == 6) barrel++;      // Jourdonnais
            if(member_list[i].role == 13) missed_needed++;            // Slab the Killer
            // if barrel works or not (consider lucky duke)
            for(int j = 0 ; j < barrel ; j++)
            {
                int32_t tmp = draw_a_card(&member_list[target_player-1] , card_list , deck_top_ptr , Discard_DECK , pDiscard_DECK_number);
                fold_a_card(target_player-1,tmp,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                printf("Player%d draw %s (%s  %d)\n",target_player , card_name_list[tmp]
                                                    ,suit_name_list[card_list[tmp].suit - 1]
                                                    ,card_list[tmp].point);
                if(member_list[target_player-1].role == 8) // lucky duke
                {
                    int32_t tmp2 = draw_a_card(&member_list[target_player-1] , card_list , deck_top_ptr , Discard_DECK , pDiscard_DECK_number);
                    fold_a_card(target_player-1,tmp2,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                    printf("Player%d draw %s (%s  %d)\n",target_player , card_name_list[tmp2]
                                                    ,suit_name_list[card_list[tmp2].suit - 1]
                                                    ,card_list[tmp2].point);
                    int32_t choice;
                    if(target_player == 1)
                    {
                        lucky_duke_judgement_display(tmp,tmp2,card_list);
                        printf("Choose one of the two cards to use Lucky Duke skill.\n");
                        printf("--> ");
                        scanf("%d",&choice);
                        if(choice == 1)
                        {
                            if(card_list[tmp].suit == HEART)
                            {
                                missed_needed--;
                                printf("Barrel successfully works.\n");
                            }
                            else printf("Barrel fail.\n");
                        }
                        else if(choice == 2)
                        {
                            if(card_list[tmp2].suit == HEART)
                            {
                                missed_needed--;
                                printf("Barrel successfully works.\n");
                            }
                            else printf("Barrel fail.\n");
                        }
                    }
                    else if(card_list[tmp].suit == HEART || card_list[tmp2].suit == HEART)
                    {
                        missed_needed--;
                        printf("Barrel successfully works.\n");
                    }
                    else printf("Barrel fail.\n");
                }
                else // not lucky duke
                {
                    if(card_list[tmp].suit == HEART)
                    {
                        missed_needed--;
                        printf("Barrel successfully works.\n");
                    }
                    else printf("Barrel fail.\n");
                }
            }
            // 
            if(missed_needed > 0)
            {
                int32_t missed_num = 0;
                for(int j = 0 ; j < member_list[target_player-1].card_num ; j++)
                {
                    if(member_list[target_player-1].card[j] >= 62 &&
                        member_list[target_player-1].card[j] <= 73) missed_num++;
                }
                if(missed_num > missed_needed)
                {
                    if(target_player == 1)
                    {
                        while(missed_needed)
                        {
                            printf("You have to use a missed to avoid bang.\n");
                            printf("(1) Use (2) Not use\n");
                            printf("--> ");
                            int32_t choice;
                            scanf("%d",&choice);
                            if(choice == 1)
                            {
                                printf("Choose a missed.\n");
                                printf("--> ");
                                int32_t tmp;
                                scanf("%d",&tmp);
                                fold_a_card(target_player-1,tmp,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                                sort_the_hand_card(target_player-1,member_list);
                                missed_needed--;
                            }
                            else if(choice == 2) break;
                        }
                    }
                    else
                    {
                        while(missed_needed)
                        {
                            for(int j = 0 ; j < member_list[target_player-1].card_num ; j++)
                            {
                                if(member_list[target_player-1].card[j] >= 62 &&
                                member_list[target_player-1].card[j] <= 73)
                                {
                                    fold_a_card(target_player-1,j,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                                    if_Suzy(target_player-1,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
                                    missed_needed--;
                                    break;
                                }
                            }
                        }
                        printf("Player%d use missed.\n",target_player);
                        sort_the_hand_card(i,member_list);
                    }
                }
                if(missed_needed > 0) // lost a life point
                {
                    member_list[target_player-1].HP--;
                    if( after_n_damage(i, target_player-1, 1, player_num, member_list, card_list ,deck_top_ptr ,Discard_DECK ,pDiscard_DECK_number) )
                    {
                        Somebody_Die( target_player-1, player_num, member_list, card_list, Discard_DECK, pDiscard_DECK_number );
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                }
            }
            if(member_list[i].equip[8] != -1 || member_list[i].role == 16)  // volcanic or Willy the Kid
            {
                *used_bang = 0;
            }
            else *used_bang = 1;
        }
        else if(member_list[i].card[action_opt-1] >= 42 
                && member_list[i].card[action_opt-1] <= 47 ) //beer 
        {
            if( member_list[i].role == 12 && member_list[i].HP == member_list[i].HP_MAX) return 1;  //滿血席德可臣不喝酒
            if( member_list[i].HP < member_list[i].HP_MAX && *player_num != 2 ) member_list[i].HP++;
            member_list[i].card[action_opt-1] = -1;
            sort_the_hand_card(i, member_list);
            if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
        }
        else if(member_list[i].card[action_opt-1] >= 48 
                && member_list[i].card[action_opt-1] <= 51 ) //cat balou
        {
            int32_t target_player;
            target_player = rand()% (*player_num)+1;
            int32_t have_equipment = 0;
            for(int j = 0 ; j < 10 ; j++)
            {
                if(member_list[target_player-1].equip[j] != -1) have_equipment++;
            }
            if(member_list[target_player-1].card_num == 0 && !have_equipment) return 1;
            /*printf("Throw hand cards or equipment.\n");
            printf("(1) hand cards (2) equipment\n");
            printf("--> ");*/
            int32_t choice = 1;
            if(have_equipment) choice = 2;
            if(choice == 1)
            {
                int32_t tmp = rand() % member_list[target_player-1].card_num;
                printf("Player%d use Cat Balou at Player%d's hand card.\n",i+1,target_player);
                fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                fold_a_card(target_player-1,tmp,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                sort_the_hand_card(i,member_list);
                sort_the_hand_card(target_player-1,member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
                if_Suzy(target_player-1,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
            else if(choice == 2)
            {
                int32_t tmp = 0;
                /*printf("Choose an equipment\n");
                for(int j = 0 ; j < 10 ; j++)
                {
                    if(member_list[target_player-1].equip[j] != -1)
                    {
                        printf("(%d) %s (%s  %d)\n",j
                                                   ,card_name_list[member_list[target_player-1].equip[j]]
                                                   ,suit_name_list[card_list[member_list[target_player-1].equip[j]].suit - 1]
                                                   ,card_list[member_list[target_player-1].equip[j]].point);                           
                    }
                }*/
                while(!tmp){
                    int32_t N = rand()%10;
                    if(member_list[target_player-1].equip[N] != -1) tmp = N;    //  隨機選一件裝備
                }
                card_list[member_list[target_player-1].equip[tmp]].status = NOT_IN_DECK;
                Discard_DECK[*pDiscard_DECK_number] = member_list[target_player-1].equip[tmp];
                member_list[target_player-1].equip[tmp] = -1;
                (*pDiscard_DECK_number)++;
                fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
                sort_the_hand_card(i,member_list);
                if_Suzy(i,member_list,card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
            }
        }
        else if(member_list[i].card[action_opt-1] >= 52 
                && member_list[i].card[action_opt-1] <= 53 ) //diligenza
        {
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            draw_a_card(&member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i, member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 54 
                && member_list[i].card[action_opt-1] <= 56 ) //duel 
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            //---------抽決鬥對象(電腦或玩家)---------
            int32_t dueled = i;
            while( dueled == i ) dueled = rand() % *player_num;
            printf( "Player%d use a %s ( %s %d ) to ", i + 1
                                                     , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                     , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                     , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            if( dueled == 0 ) printf( "you.\n" );
            else printf( "player%d.\n", dueled + 1 );
            while(1)
            {
                //-----------被決鬥者的反應-----------
                int32_t have_bang = 0;
                for( int32_t j = 0; j < member_list[dueled].card_num; j++ )
                {
                    //電腦有bang或missed就用&看玩家有沒有牌可出
                    if( ( member_list[dueled].card[j] >= 17 && member_list[dueled].card[j] <= 41 ) ||
                        ( member_list[dueled].role == 3 && member_list[dueled].card[j] >= 62 && member_list[dueled].card[j] <= 73 ) )
                    {
                        if( dueled != 0 )
                        {
                            printf( "Player%d ", dueled + 1 );
                            if( member_list[dueled].card[j] >= 62 && member_list[dueled].card[j] <= 73 ) printf( "( Calamity Janet ) " );
                            printf( "use a %s ( %s %d ) to take over player%d's Duel.\n", card_name_list[member_list[dueled].card[j]]
                                                                                        , suit_name_list[card_list[member_list[dueled].card[j]].suit - 1]
                                                                                        , card_list[member_list[dueled].card[j]].point
                                                                                        , i + 1 );
                            fold_a_card( dueled, j, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                            sort_the_hand_card( dueled, member_list );
                        }
                        have_bang = 1;
                        break;
                    }
                }
                if( have_bang == 0 ) //被決鬥的電腦和真人玩家都沒有卡能用
                {
                    member_list[dueled].HP--;
                    if( dueled == 0 ) printf( "You have no card to take over player%d's Duel, and were hurt by it, now your HP is %d\n", i + 1, member_list[dueled].HP );
                    else printf( "Player%d was hurt by player%d's Duel, now his HP is %d\n", dueled + 1, i + 1, member_list[dueled].HP );
                    if( after_n_damage( i, dueled, 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(dueled, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                    break;
                }
                else if( dueled == 0 ) //真人玩家被決鬥，有卡可選
                {
                    printf( "Choose a card you want to use, or reject the Duel.\n" );
                    printf( "(0) reject " );
                    for( int32_t j = 0; j < member_list[i].card_num; j++ )
                    {
                        //印出手上的bang和missed(如果自己是賈奈特)
                        if( ( member_list[dueled].card[j] >= 17 && member_list[dueled].card[j] <= 41 ) ||
                            ( member_list[dueled].role == 3 && member_list[dueled].card[j] >= 62 && member_list[dueled].card[j] <= 73 ) )
                        {
                            printf( "(%d) %s ( %s %d ) ", j + 1
                                                        , card_name_list[member_list[dueled].card[j]]
                                                        , suit_name_list[card_list[member_list[dueled].card[j]].suit - 1]
                                                        , card_list[member_list[dueled].card[j]].point );
                        }
                    }
                    int32_t choice = -1;
                    //檢查選的牌在合法範圍而且是bang或missed(如果自己是賈奈特)
                    while(1)
                    {
                        printf( "\nYour choice: " );
                        scanf( "%d", &choice );
                        if( ( choice >= 0 && choice < (member_list[dueled].card_num) &&
                            ( choice == 0 ||
                            ( ( member_list[dueled].card[choice - 1] >= 17 && member_list[dueled].card[choice - 1] <= 41 ) ||
                              ( member_list[dueled].role == 3 && member_list[dueled].card[choice - 1] >= 62 && member_list[dueled].card[choice - 1] <= 73 )))) )
                            break;
                        else printf( "No such option, please choose again." );
                    }
                    if( choice == 0 )
                    {
                        member_list[dueled].HP--;
                        printf( "You were hurt by player%d, now your HP is %d.\n", i + 1, member_list[dueled].HP );
                        if( after_n_damage( i, dueled , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                        {
                            Somebody_Die(dueled, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                            if( Judge_Winner(*player_num, member_list) ) return 2;
                        }
                        break;
                    }
                    else
                    {
                        fold_a_card( dueled, choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( dueled, member_list );
                    }
                }
                //--------------電腦被決鬥回來後的反應--------------
                have_bang == 0;
                for( int32_t j = 0; j < member_list[i].card_num; j++ )
                {
                    //電腦能用bang或missed就用
                    if( ( member_list[i].card[j] >= 17 && member_list[i].card[j] <= 41 ) ||
                        ( member_list[i].role == 3 && member_list[i].card[j] >= 62 && member_list[i].card[j] <= 73 ) )
                    {
                        printf( "Player%d ", i + 1 );
                        if( member_list[i].card[j] >= 62 && member_list[i].card[j] <= 73 ) printf( "( Calamity Janet ) ");
                        printf( "use a %s ( %s %d ) to take over ", card_name_list[member_list[dueled].card[j]]
                                                                  , suit_name_list[card_list[member_list[dueled].card[j]].suit - 1]
                                                                  , card_list[member_list[dueled].card[j]].point );
                        if( dueled == 0 ) printf( "your Duel.\n" );
                        else printf( "player%d's Duel.\n", dueled + 1 );
                        fold_a_card( i, j, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( i, member_list ); 
                        have_bang = 1;
                        break;
                    }
                }
                if( have_bang == 0 ) //電腦沒牌可用
                {
                    member_list[i].HP--;
                    if( dueled == 0 ) printf( "player%d was hurt by you, now his HP is %d\n", i + 1, member_list[dueled].HP );
                    else printf( "Player%d was hurt by player%d, now his HP is %d\n", i + 1, dueled + 1, member_list[dueled].HP );
                    if( after_n_damage( dueled, i , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die( i, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                    }
                    break;
                }
            }
            if_Suzy( dueled, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }
        else if(member_list[i].card[action_opt-1] >= 57 
                && member_list[i].card[action_opt-1] <= 58 ) //general store 
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            printf( "Player%d use a %s ( %s %d ).\n", i + 1
                                                    , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                    , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                    , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            //先把牌全部抽到手上
            for( int32_t j = 0; j < *player_num; j++ ) draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            printf( "Cards inside the store:\n" );
            int32_t store_offset = member_list[i].card_num - ( *player_num );
            for( int j = store_offset; j < member_list[i].card_num; j++ )
            {
                printf( "(%d) %s (%s  %d)\n", j - store_offset + 1
                                            , card_name_list[member_list[i].card[j]]
                                            ,suit_name_list[card_list[member_list[i].card[j]].suit - 1] 
                                            ,card_list[member_list[i].card[j]].point );
            }
            int32_t chosen; //自己選的牌( 0 ~ player number - 1 )
            int32_t choice = 0;
            for( int32_t j = 0; j < *player_num; j++ )
            {
                int32_t player_index = ( i + j ) % ( *player_num );
                if( j == 0 )
                {
                    choice = rand() % ( *player_num );
                    chosen = choice;
                }
                else
                {
                    if( player_index == 0 ) //真人玩家
                    {
                        printf( "Choose a card which havn't been chosen.\n" );
                    }
                    while(1)
                    {
                        if( player_index == 0 )
                        {
                            printf("Your choice: ");
                            scanf( "%d", &choice );
                            choice--;
                        }
                        else choice = rand() % ( *player_num );
                        if( choice == chosen || choice < 0 || choice > ( *player_num ) - 1 ||
                            member_list[i].card[choice + store_offset] == -1 )
                        {
                            if( player_index == 0 )
                                printf( "This option had been chosen or no such option, please choose again.\n" );
                        }
                        else break;
                    }
                    choice += store_offset;
                    if( player_index != 0 )
                        printf( "Player%d choose %s ( %s %d ).\n", player_index + 1
                                                                 , card_name_list[member_list[i].card[choice]]
                                                                 , suit_name_list[card_list[member_list[i].card[choice]].suit - 1]
                                                                 , card_list[member_list[i].card[choice]].point );
                    member_list[player_index].card[member_list[player_index].card_num++] = member_list[i].card[choice];
                    member_list[i].card[choice] = -1;
                }
            }
            sort_the_hand_card( i, member_list );
        }
        else if(member_list[i].card[action_opt-1] >= 59 
                && member_list[i].card[action_opt-1] <= 59 ) //gatling
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            printf( "Player%d use a %s ( %s %d ).\n", i + 1
                                                    , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                    , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                    , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            for( int32_t j = (i + 1)%(*player_num); j != i ; j++ ) //打其他人
            {
                int32_t have_missed = 0;
                for( int32_t k = 0; k < member_list[j].card_num; k++ )
                {
                    //電腦有missed就用，如果是賈奈特看先找到missed還是bang
                    if( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 )
                    {
                        if( j != 0 )
                        {
                            printf( "Player%d use a Missed ( %s %d ) to dodge player%d's Gatling.\n", j + 1
                                                                                        , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                        , card_list[member_list[j].card[k]].point
                                                                                        , i + 1 );
                            fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                            sort_the_hand_card( j, member_list );
                        }
                        have_missed = 1;
                        break;
                    }
                    else if( member_list[j].role == 3 && ( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 ) )
                    {
                        if( j != 0 )
                        {
                            printf( "Player%d ( Calamity Janet ) use a Bang ( %s %d ) to dodge player%d's Gatling.\n", j + 1
                                                                                                                    , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                                                    , card_list[member_list[j].card[k]].point
                                                                                                                    , i + 1 );
                            fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                            sort_the_hand_card( j, member_list );
                        }
                        have_missed = 1;
                        break;
                    }   
                }
                if( have_missed == 0 ) //真人玩家和電腦都沒有卡能躲Gatling
                {
                    member_list[j].HP--;
                    if( j == 0 ) printf( "You have no card to dodge player%d's Gatling, and were hurt by it, now your HP is %d.\n", i + 1, member_list[j].HP );
                    else printf( "Player%d was hurt by player%d's Gatling, now his HP is %d.\n", j + 1, i + 1, member_list[j].HP );
                    if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                        j--;
                    }
                }
                else if(j == 0) //真人玩家有選擇
                {
                    printf( "Skip or choose a card to use.\n" );
                    printf( "(0) Skip " );
                    for( int32_t k = 0; k < member_list[j].card_num; k++ )
                    {
                        if( ( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 )
                         || ( member_list[j].role == 3 && ( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 ) ) )
                        {
                            printf( "(%d) %s ( %s %d ) ", k + 1
                                                        , card_name_list[member_list[j].card[k]]
                                                        , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                        , card_list[member_list[j].card[k]].point );
                        }
                    }
                    int32_t choice = -1;
                    printf( "\n--> " );
                    scanf( "%d", &choice );
                    while( choice < 0 || choice > member_list[j].card_num
                        || ( ( member_list[j].card[choice - 1] < 62 || member_list[j].card[choice - 1] > 73 )
                          && ( member_list[j].role != 3 || ( member_list[j].card[choice - 1] < 17 && member_list[j].card[choice - 1] > 41 ) ) ) )
                    {
                        printf( "No such option, please choose again.\n" );
                        printf( "--> " );
                        scanf( "%d", &choice );
                    }
                    if( choice == 0 )
                    {
                        member_list[j].HP--;
                        printf( "You were hurt by player%d's Gatling , now your HP is %d.\n", i + 1, member_list[j].HP );
                        if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                        {
                            Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                            if( Judge_Winner(*player_num, member_list) ) return 2;
                            j--;
                        }
                    }
                    else
                    {
                        fold_a_card( j, choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( j, member_list );
                    }
                }
                if_Suzy( j, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                if( j + 1 == *player_num ) j = -1;
            }
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }
        else if(member_list[i].card[action_opt-1] >= 60 
                && member_list[i].card[action_opt-1] <= 61 ) //indians!
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            printf( "Player%d use a %s ( %s %d ).\n", i + 1
                                                    , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                    , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                    , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            for( int32_t j = (i + 1) % *player_num; j != i ; j++ ) //打其他人
            {
                int32_t have_bang = 0;
                for( int32_t k = 0; k < member_list[j].card_num; k++ )
                {
                    //電腦有bang或missed就用&算玩家有沒有牌能用
                    if( ( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 ) ||
                        ( member_list[j].role == 3 &&  member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 ) )
                    {
                        if( j != 0 )
                        {
                            printf( "Player%d ", j + 1 );
                            if( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 ) printf( "( Calamity Janet ) " );
                            printf( "use a %s ( %s %d ) to dodge player%d's Indians.\n", card_name_list[member_list[j].card[k]]
                                                                                       , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                                                       , card_list[member_list[j].card[k]].point
                                                                                       , i + 1 );
                            fold_a_card( j, k, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                            sort_the_hand_card( j, member_list );
                        }
                        have_bang = 1;
                        break;
                    } 
                }
                if( have_bang == 0 ) //真人玩家和電腦都沒有卡能躲indians
                {
                    member_list[j].HP--;
                    if( j == 0 ) printf( "You have no card to dodge player%d's Indians, and were hurt by it, now your HP is %d.\n", i + 1, member_list[j].HP );
                    else printf( "Player%d was hurt by player%d's Indians, now his HP is %d.\n", j + 1, i + 1, member_list[j].HP );
                    if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                    {
                        Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                        if( Judge_Winner(*player_num, member_list) ) return 2;
                        j--;
                    }
                }
                else if( j == 0 )//真人玩家有選擇
                {
                    printf( "Skip or choose a card to use.\n" );
                    printf( "(0) Skip " );
                    for( int32_t k = 0; k < member_list[j].card_num; k++ )
                    {
                        if( ( member_list[j].card[k] >= 17 && member_list[j].card[k] <= 41 )
                         || ( member_list[j].role == 3 && ( member_list[j].card[k] >= 62 && member_list[j].card[k] <= 73 ) ) )
                        {
                            printf( "(%d) %s ( %s %d ) ", k + 1
                                                        , card_name_list[member_list[j].card[k]]
                                                        , suit_name_list[card_list[member_list[j].card[k]].suit - 1]
                                                        , card_list[member_list[j].card[k]].point );
                        }
                    }
                    int32_t choice = -1;
                    while(1)
                    {
                        printf( "\nYour choice: " );
                        scanf( "%d", &choice );
                        if( ( choice >= 0 && choice <= member_list[j].card_num ) &&
                            ( choice == 0 || 
                            ( member_list[j].card[choice - 1] >= 17 && member_list[j].card[choice - 1] <= 41 ) ||
                            ( member_list[j].role == 3 && ( member_list[j].card[choice - 1] >= 62 && member_list[j].card[choice - 1] <= 73 ) ) ) )
                            break;
                        else printf( "No such option, please choose again." );
                    }
                    if( choice == 0 )
                    {
                        member_list[j].HP--;
                        printf( "You were hurt by player%d's Indians , now your HP is %d.\n", i + 1, member_list[j].HP );
                        if( after_n_damage( i, j , 1, player_num, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number ) )
                        {
                            Somebody_Die(j, player_num, member_list, card_list ,Discard_DECK ,pDiscard_DECK_number);
                            if( Judge_Winner(*player_num, member_list) ) return 2;
                            j--;
                        }
                    }
                    else
                    {
                        fold_a_card( j, choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                        sort_the_hand_card( j, member_list );
                    }
                }
                if_Suzy( j, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                if( j + 1 == *player_num ) j = -1;
            }
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }
        else if( member_list[i].card[action_opt-1] >= 62 
                 && member_list[i].card[action_opt-1] <= 73 ) //missed! //
        {
            return 1;
        }
        else if(member_list[i].card[action_opt-1] >= 74 
                && member_list[i].card[action_opt-1] <= 77 ) //panic! //
        {
            int32_t target_player;
            while(1)
            {
                while(1)
                {
                    target_player = rand() % (*player_num) + 1;
                    if(target_player == i) continue;
                    else break;
                }
                // first, consider whether you can bang target player
                int32_t range = 1;
                int32_t distance = min(target_player - (i + 1) , (*player_num)-(i+1) + (target_player - 1) + 1);
                if(member_list[i].equip[2] != -1)  range++; // mirino
                if(member_list[i].role == 11) distance--; // Rose Doolan
                if(member_list[target_player-1].equip[3] != -1) distance++; // mustang
                if(member_list[target_player-1].role == 9) distance++;// Paul Regret
                // check range
                if(range < distance) continue;
                else break;
                int32_t have_equipment = 0;
                for(int j = 0 ; j < 10 ; j++)
                {
                    if(member_list[target_player-1].equip[j] != -1) have_equipment = 1;
                }
                if(member_list[target_player-1].card_num == 0 && !have_equipment) continue;
                else break;
            }
            if(member_list[target_player - 1].card_num == 0)
            {
                int32_t tmp;
                for(int j = 9 ; j >= 0 ; j++)
                {
                    if(member_list[target_player-1].equip[j] != -1)
                    {
                        tmp = member_list[target_player-1].equip[j];
                        break;
                    }
                }
                member_list[i].card[member_list[i].card_num++] = tmp;
                member_list[target_player - 1].equip[tmp] = -1;
            }
            else
            {
                int32_t tmp = rand() % member_list[target_player - 1].card_num;
                member_list[i].card[member_list[i].card_num++] = member_list[target_player - 1].card[tmp];
                member_list[target_player - 1].card[tmp] = -1;
                sort_the_hand_card(target_player - 1,member_list);
                if_Suzy( target_player - 1, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            }
            fold_a_card(i,action_opt-1,card_list,member_list,Discard_DECK,pDiscard_DECK_number);
            sort_the_hand_card(i,member_list);
        }
        else if(member_list[i].card[action_opt-1] >= 78 
                && member_list[i].card[action_opt-1] <= 78 ) //saloon 
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            printf( "Player%d use a %s ( %s %d ).\n", i + 1
                                                    , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                    , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                    , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            for( int32_t j = i;; j++ )
            {
                if( member_list[j].HP < member_list[j].HP_MAX )
                {
                    member_list[j].HP++;
                    if( j == 0 ) printf( "You were cured by player%d's Saloon, now your HP is %d.\n", i + 1, member_list[j].HP );
                    else printf( "Player%d was cured by player%d's Saloon, now his HP is %d.\n", j + 1, i + 1, member_list[j].HP );
                }
                if( j == i - 1 ) break;
                if( j + 1 == (*player_num) ) j = -1;
            }
            if_Suzy( i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }
        else if(member_list[i].card[action_opt-1] >= 79 
                && member_list[i].card[action_opt-1] <= 79 ) //wells farco
        {
            fold_a_card( i, action_opt - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
            sort_the_hand_card( i, member_list );
            printf( "Player%d use a %s ( %s %d ) to draw three cards.\n", i + 1
                                                                        , card_name_list[Discard_DECK[*pDiscard_DECK_number - 1]]
                                                                        , suit_name_list[card_list[Discard_DECK[*pDiscard_DECK_number - 1]].suit - 1]
                                                                        , card_list[Discard_DECK[*pDiscard_DECK_number - 1]].point );
            for( int32_t j = 0; j < 3; j++ ) draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
        }
    }

    if(member_list[i].role == 14 && member_list[i].card_num == 0) // if Suzy Lafayette has no card
    {
        draw_a_card(&member_list[i],card_list,deck_top_ptr,Discard_DECK,pDiscard_DECK_number);
    }
    return 1;
}

int32_t sid_condition(int i ,sMemInfo member_list[] ,sCardInfo card_list[80] , int drinkable , int32_t Discard_DECK[80], int32_t *Discard_DECK_number)
{ // drinkable = 1 when he can use beer, drinkable = 0 when he cannot use beer.    
    while(1)
    {
        printf("Use Beer or discard two cards.\n");
        printf("(1) Beer (2) discard two cards\n");
        printf("--> ");
        int32_t beer_or_sid;
        scanf("%d",&beer_or_sid);
        if(beer_or_sid == 1)
        {
            if(drinkable == 0)
            {
                printf("You can't use beer now.\n");
                continue;
            }
            printf("Choose a Beer\n");
            printf("--> ");
            int32_t choose_beer;
            scanf("%d",&choose_beer);
            if(member_list[i].card[choose_beer - 1] >= 42 && member_list[i].card[choose_beer - 1] <= 47)
            {
                member_list[i].HP++;
                fold_a_card(i ,choose_beer - 1 ,card_list ,member_list ,Discard_DECK ,Discard_DECK_number);
            }
            else 
            {
                printf("Please choose beer!\n");
                continue;
            }
            sort_the_hand_card( i, member_list );
            if(member_list[i].HP >= 1) break;
        }
        else if(beer_or_sid == 2)
        {
            printf("Choose two cards to be discarded.\n");
            printf("--> ");
            int32_t discard1;
            int32_t discard2;
            scanf("%d",&discard1);
            printf("--> ");
            scanf("%d",&discard2);
            if(discard1 > 0 && discard1 <= member_list[i].card_num &&
                discard2 > 0 && discard2 <= member_list[i].card_num)
            {
                member_list[i].HP++;
                fold_a_card(i ,discard1 - 1 ,card_list ,member_list ,Discard_DECK ,Discard_DECK_number);
                fold_a_card(i ,discard2 - 1 ,card_list ,member_list ,Discard_DECK ,Discard_DECK_number);
            }
            if(member_list[i].HP >= 1) break;
        }
    }
}

void if_Suzy( int32_t i, sMemInfo member_list[], sCardInfo card_list[80], int32_t *deck_top_ptr, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number )
{
    if( member_list[i].role == 14 && member_list[i].card_num == 0 )
    {
        draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number);
        if( i == 0 ) printf( "You ( Suzy Lafayette ) draw a card.\n");
        else printf( "player%d ( Suzy Lafayette ) draw a card.\n", i + 1 );
    }
}


//每當掉血後呼叫此函式, atk_i:攻擊者index(炸彈帶-1), def_i:受傷者index, n:掉的血量
int32_t after_n_damage( int32_t atk_i, int32_t def_i, int32_t n, int *player_number, sMemInfo member_list[], sCardInfo card_list[80] ,int32_t *deck_top_ptr ,int32_t Discard_DECK[80] ,int32_t *pDiscard_DECK_number)
{
    //------------------被扣血會發動的角色效果-------------------
    switch( member_list[def_i].role )
    {
        case 1: //Bart Cassidy掉幾滴抽幾張
            for( int32_t i = 0; i < n; i++ ) draw_a_card( &member_list[def_i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number);
            if( def_i == 0 ) printf( "You ( Bart Cassedy ) draw %d card(s).\n", n );
            else printf( "player%d ( Bart Cassidy ) drew %d card(s).\n", def_i + 1, n );
            break;
        case 4: //El Gringo從攻擊者身上抽。*除了炸彈外，沒有牌能一次造成超過一點傷害
            if( atk_i == -1 || member_list[atk_i].card_num == 0 ) break; //被炸彈攻擊、對方沒手牌不能抽
            //機率一樣所以抽第一張
            member_list[def_i].card[member_list[def_i].card_num] = member_list[atk_i].card[0];
            member_list[atk_i].card[0] = -1;
            member_list[def_i].card_num++;
            sort_the_hand_card( atk_i, member_list );
            if( def_i == 0 ) //真人玩家被攻擊
            {
                printf( "You ( El Gringo ) drew a %s ( %s %d ) from player%d's hand.\n", card_name_list[member_list[def_i].card[member_list[def_i].card_num - 1]]
                                                                         , suit_name_list[card_list[member_list[def_i].card[member_list[def_i].card_num - 1]].suit - 1]
                                                                         , card_list[member_list[def_i].card[member_list[def_i].card_num - 1]].point
                                                                         , atk_i + 1 );
            }
            else if( atk_i == 0 ) //自己被電腦( El Gringo )抽牌
            {
                printf( "Player%d ( El Gringo ) stole a %s ( %s %d ) from your hand.\n", def_i + 1
                                                                         , card_name_list[member_list[def_i].card[member_list[def_i].card_num - 1]]
                                                                         , suit_name_list[card_list[member_list[def_i].card[member_list[def_i].card_num - 1]].suit - 1]
                                                                         , card_list[member_list[def_i].card[member_list[def_i].card_num - 1]].point );
            }
            else //電腦抽電腦
            {
                printf( "Player%d ( El Gringo ) stole a card from player%d's hand.\n", def_i + 1, atk_i );
            }
            if_Suzy( atk_i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            break;
    }
    //----------------------確定有沒有死-----------------------
    // determine whether HP is under 0, and the number of beer is enough or not.
    // determine whether you (Sid Ketchum) can survive or not
    if( member_list[def_i].HP >= 1 ) return 0;

    int32_t sid_recover_limit = 0;
    int32_t beer_num = 0;
    for(int j = 0 ; j < member_list[def_i].card_num ; j++)
    {            
        if(member_list[def_i].card[j] >= 42 && member_list[def_i].card[j] <= 47) beer_num++;
        else if( member_list[def_i].role == 12 ) sid_recover_limit++; // if Sid and not beer
    }
    sid_recover_limit /= 2;
    if( member_list[def_i].HP < 1 && beer_num + sid_recover_limit == 0 ) //HP < 1 且回不了血直接死
    {
        if( def_i == 0 ) printf( "You die.\n" );
        return 1;
    }
    if( def_i != 0 && member_list[def_i].HP + beer_num + sid_recover_limit < 1 ) return 1; //電腦有選擇但不能活，直接死
    //真人玩家HP < 1 , 有選擇，不管會不會死都要決定要不要回血
    if( def_i == 0 && member_list[def_i].HP < 1 )
    {
        for( int32_t i = 0; i < beer_num + sid_recover_limit; i++ )
        {
            printf( "Now your HP is %d, ", member_list[def_i].HP );
            if( member_list[def_i].HP + beer_num + sid_recover_limit < 1 ) printf( "although you must die, "); //真人玩家必死
            if( beer_num > 0 ) printf( "you can: \n" );
            printf( "(0) Just let me die " );
            if( beer_num > 0 ) printf( "(1) Use a beer " );
            if( member_list[def_i].card_num >= 2 && member_list[def_i].role == 12 ) printf( "(2) Discard two cards recover " ); //可以棄啤酒
            printf( "\n--> " );
            int32_t choice = -1;
            scanf( "%d", &choice );
            while( choice < 0 || choice > 2
                   || ( beer_num < 1 && choice == 1 )
                   || ( member_list[def_i].card_num < 2 && choice == 2 )
                   || ( member_list[def_i].role != 12 && choice == 2 ) )
            {
                printf( "No such option, please choose again.\n");
                printf( "--> " );
                scanf( "%d", &choice );
            }
            if( choice == 0 )
            {
                printf( "You die.\n" );
                return 1;
            }
            else
            {
                //列出手牌方便真人玩家選擇
                for( int32_t j = 0; j < member_list[def_i].card_num; j++ ) printf( "(%d) %s ( %s %d ) ", j + 1
                                                                                                       , card_name_list[member_list[def_i].card[j]]
                                                                                                       , suit_name_list[card_list[member_list[def_i].card[j]].suit - 1]
                                                                                                       , card_list[member_list[def_i].card[j]].point );
                if( choice == 1 )
                {
                    printf( "\nChoose a Beer.\n" );
                    printf( "--> " );
                    scanf( "%d", &choice );
                    while( choice < 1 || choice > member_list[def_i].card_num
                           || ( member_list[def_i].card[choice - 1] < 42 || member_list[def_i].card[choice - 1] > 47 ) )
                    {
                        printf( "It's not a Beer, please choose again.\n" );
                        printf( "--> " );
                        scanf( "%d", &choice );
                    }
                    fold_a_card( def_i, choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                    member_list[def_i].HP++;
                    beer_num--;
                }
                else if( choice == 2 )
                {
                    int32_t choice_2 = -1;
                    printf( "\nChoose two cards to fold.\n" );
                    printf( "--> " ); //一次棄兩個或分開棄都可
                    scanf( "%d", &choice );
                    scanf( "%d", &choice_2 );
                    while( choice < 0 || choice > member_list[def_i].card_num || choice_2 < 0 || choice_2 > member_list[def_i].card_num  || choice == choice_2 )
                    {
                        printf( "There're something wrong, please choose two cards again.\n" );
                        printf( "--> " );
                        scanf( "%d", &choice );
                        scanf( "%d", &choice_2 );
                    }
                    fold_a_card( def_i, choice - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                    fold_a_card( def_i, choice_2 - 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                    member_list[def_i].HP++;
                }
                sort_the_hand_card( def_i, member_list );
                if_Suzy( def_i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
                if( member_list[def_i].HP > 0 ) return 0;
                beer_num = 0;
                sid_recover_limit = 0;
                for(int j = 0 ; j < member_list[def_i].card_num ; j++) //可以棄啤酒，所以要再算一次
                {            
                    if(member_list[def_i].card[j] >= 42 && member_list[def_i].card[j] <= 47) beer_num++;
                    else if( member_list[def_i].role == 12 ) sid_recover_limit++; // if Sid and not beer
                }
                sid_recover_limit /= 2;
            }
        }
        printf( "You die.\n" );
        return 1;
    }
    else if( def_i != 0 && member_list[def_i].HP < 1 ) //電腦HP < 1 能活就救到剩一滴
    {
        for( int32_t i = 0; i < member_list[def_i].card_num; i++ )
        {
            //先用啤酒
            if( member_list[def_i].card[i] >= 42 && member_list[def_i].card[i] <= 47 )
            {
                fold_a_card( def_i, i, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                member_list[def_i].HP++;
                printf( "Player%d use a Beer ( %s %d ), now his HP is %d.\n", def_i + 1
                                                                            , suit_name_list[card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].suit - 1]
                                                                            , card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].point
                                                                            , member_list[def_i].HP );
                sort_the_hand_card( def_i, member_list );
                beer_num--;
                i--;
            } //啤酒用完再用席德(如果是)
            else if( beer_num == 0 || sid_recover_limit > 0 )
            {
                fold_a_card( def_i, i, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                printf( "Player%d ( Sid Ketchum ) folded %s ( %s %d ) ", def_i + 1
                                                                       , card_name_list[Discard_DECK[(*pDiscard_DECK_number) - 1]]
                                                                       , suit_name_list[card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].suit - 1]
                                                                       , card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].point );
                fold_a_card( def_i, i + 1, card_list, member_list, Discard_DECK, pDiscard_DECK_number );
                printf( "and %s ( %s %d ), ", card_name_list[Discard_DECK[(*pDiscard_DECK_number) - 1]]
                                            , suit_name_list[card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].suit - 1]
                                            , card_list[Discard_DECK[(*pDiscard_DECK_number) - 1]].point );
                member_list[def_i].HP++;
                printf( "now his HP is %d.\n", member_list[def_i].HP );
                sort_the_hand_card( def_i, member_list );
                sid_recover_limit--;
                i--;
            }
            if_Suzy( def_i, member_list, card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            if( member_list[def_i].HP > 0 ) return 0;
        }
    }
}

int abs(int a)
{
    if(a < 0) return a * -1;
    return a;
}

int32_t test(int *used_bang ,int i ,sCardInfo card_list[80] ,sMemInfo member_list[] ,int32_t *deck_top_ptr, int32_t *player_num, int32_t Discard_DECK[80], int32_t *pDiscard_DECK_number )
{
            for( int32_t j = 0; j < ( *player_num ); j++ ) draw_a_card( &member_list[i], card_list, deck_top_ptr, Discard_DECK, pDiscard_DECK_number );
            printf( "Please choose a card you want.\n" );
            int32_t store_offset = member_list[i].card_num - (*player_num);
            for( int j = store_offset; j < member_list[i].card_num; j++ )
            {
                printf( "(%d) %s ( %s  %d )\n", j - store_offset + 1
                                              , card_name_list[member_list[i].card[j]]
                                              ,suit_name_list[card_list[member_list[i].card[j]].suit - 1] 
                                              ,card_list[member_list[i].card[j]].point );
            }
            int32_t chosen; //被選過的牌的index
            int32_t choice = 0;
            while(1)//自己先選
            {
                printf( "Your choice: " );
                scanf( "%d", &choice );
                if(choice < 1 || choice > (*player_num) ) printf( "No such option, please choose again.\n");
                else break;
            }
            choice--;
            chosen = choice;
            for( int32_t j = 1; j < ( *player_num ); j++ ) //電腦選
            {
                int32_t flag = 0;
                while( flag == 0 )
                {
                    if( choice == chosen || member_list[i].card[choice + store_offset] == -1 )
                    {
                        choice = rand() % ( *player_num );
                    }
                    else flag = 1;
                }
                chosen = choice;
                choice = choice + store_offset;
                member_list[j].card[member_list[j].card_num++] = member_list[i].card[choice];
                member_list[i].card[choice] = -1;
                printf( "Player%d chose %s ( %s %d ).\n", j + 1
                                                        , card_name_list[member_list[j].card[member_list[j].card_num]]
                                                        , suit_name_list[card_list[member_list[j].card[member_list[j].card_num]].suit - 1]
                                                        , card_list[member_list[j].card[member_list[j].card_num]].point );
            }
            sort_the_hand_card( i, member_list );
}
