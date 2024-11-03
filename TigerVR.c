#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
#include <unistd.h>

void Riddle(int infiniRiddle) {
    char ans;
    char input;
    char nextChar;
    int count = 0;
    int out = 1;
     while (out) {
        switch (count) {
            case 1:
                printf("\nIn rows and rows, my teeth do bite, \nturning soil from day to night. \nBehind a tractor, I may follow, \nprepping earth for seeds to wallow. \n\nI am a(n)...\n(a) Plow (b) Hoe (c) Rake (d) Sickle\n\nEnter your answer(a, b, c, d): ");
                scanf(" %c", &ans);
                if (ans == 'a' || ans == 'A') {
                    printf("Correct!\n");
                    sleep(1);
                } else {
                    printf("Incorrect.\n");
                    sleep(1);
                }
                printf("\nNew Riddle?(y or n):");
                scanf(" %c", &nextChar);
                if (infiniRiddle != 1 && (nextChar == 'n' || nextChar == 'N')) {
                    out = 0;
                }
                count = 0;
                break;
            case 2:
                printf("\nI stand in the sun, both wide and tall, \nprotecting seeds from the frost's cold call. \nInside, the warmth can be quite pleasing, \nas plants grow strong, resistant to freezing. \n\nI am a(n)...\n(a) Arboretum (b) Arborium (c) Greenhouse (d) Garden\n\nEnter your answer(a, b, c, d): ");
                scanf(" %c", &ans);
                if (ans == 'c' || ans == 'C') {
                    printf("Correct!\n");
                    sleep(1);
                } else {
                    printf("Incorrect.\n");
                    sleep(1);
                }
                printf("\nNew Riddle?(y or n):");
                scanf(" %c", &nextChar);
                if (infiniRiddle != 1 && (nextChar == 'n' || nextChar == 'N')) {
                    out = 0;
                }
                count = 0;
                break;
            case 3:
                printf("\nI'm not alive, yet I grow\n I'm not an animal, but I roam below. \nI'm needed in planting, essential in bloom. \nWithout my dark coat, there is just doom. \n\nWhat am I?\n(a) Worms (b) Soil (c) Moss (d) Nitrogen Fixing Bacteria\n\nEnter your answer(a, b, c, d): ");
                scanf(" %c", &ans);
                if (ans == 'b' || ans == 'B') {
                    printf("Correct!\n");
                    sleep(1);
                } else {
                    printf("Incorrect.\n");
                    sleep(1);
                }
                printf("\nNew Riddle?(y or n):");
                scanf(" %c", &nextChar);
                if (infiniRiddle != 1 && (nextChar == 'n' || nextChar == 'N')) {
                    out = 0;
                }
                count = 0;
                break;
            case 4:
                printf("\nFour legs I have, yet I never tire. \nThrough fields and woods, I accompany sire, \nI ask for no wage, yet work all day. \nBy your side, I always stay. \n\nWhat am I?\n(a) Donkey (b) Sheep (c) Farm Dog (d) Horse\n\nEnter your answer(a, b, c, d): ");
                scanf(" %c", &ans);
                if (ans == 'c' || ans == 'C') {
                    printf("Correct!\n");
                    sleep(1);
                } else {
                    printf("Incorrect.\n");
                    sleep(1);
                }
                printf("\nNew Riddle?(y or n):");
                scanf(" %c", &nextChar);
                if (infiniRiddle != 1 && (nextChar == 'n' || nextChar == 'N')) {
                    out = 0;
                }
                count = 0;
                break;
            case 5:
                printf("\nI house a treasure not of gold, \nWithin my walls, mysteries unfold. \nA cackle, a peck, life begins anew, \nIn my keep, the flock grew. \n\nWhat am I?\n(a) Rooster \n(b) Hen \n(c) Egg (d) Chicken Coop\n\nEnter your answer(a, b, c, d): ");
                scanf(" %c", &ans);
                if (ans == 'd' || ans == 'D') {
                    printf("Correct!\n");
                    sleep(1);
                } else {
                    printf("Incorrect.\n");
                    sleep(1);
                }
                printf("\nNew Riddle?(y or n):");
                scanf(" %c", &nextChar);
                if (infiniRiddle != 1 && (nextChar == 'n' || nextChar == 'N')) {
                    out = 0;
                }
                count = 0;
                break;
            default:
                printf("\nChoose a number between 1 and 5 to hear an agricultural riddle! ");
                scanf(" %c", &input);
                if ( input != '1' && input != '2' && input != '3' && input != '4' && input != '5' ) {
                    printf("\n\nINVALID INPUT\n\n");
                    sleep(1);
                    count = 0;
                } else if (input == '1') {count = 1;} else if (input == '2') {count = 2;} else if (input == '3') {count = 3;} else if (input == '4') {count = 4;} else if (input == '5') {count = 5;}
                
                break;
        }
    }
}

int main(void) {
    char newthing;
    Riddle(0);
    printf("No more riddles?\n");
    sleep(1);
    printf(". \n");
    sleep(1);
    printf(". \n");
    sleep(1);
    printf(". \n");
    sleep(1);
    printf("\nFine. There WAS only five of them, I can see how they could get boring.\n");
    sleep(1);
    printf("Hmmmmm. Wanna see the soil pyramid then?(y or n): ");
    scanf(" %c", &newthing);
    int stress = 0;
    while (newthing!= 'y' && newthing!= 'Y' && newthing!= 'n' && newthing!= 'N') {
        sleep(1);
        printf("\nThats not an option...\n"); 
        printf("\nTry again.(Y OR N):");
        scanf(" %c", &newthing);
        stress++;
        if (stress == 5) {
            printf("\nYA BETTER STOP! OR ELSE. >:(\n");
            sleep(1);
        }
        if (stress > 5) {
            printf("\nI TOLD YOU TO STOP!!!!!\n");
            sleep(2);
            printf("\nBACK TO THE RIDDLES WITH YOU!!!!! \n"); 
            sleep(5);
            printf("\nthis time without the option to leave.\n");
            Riddle(1);
        }
    } 
    char what;
    int end = 1;
    if (newthing == 'n'|| newthing == 'N') {
        printf("(Sigh) Wait a minute while I see what else we have back here...\n");
        for (int i = 0; i < 10; i++) {
            printf(". \n");
            sleep(1);
        }
        printf("\nI found an article about cows wearing VR googles, wanna read it? Soil pyramid, unending riddles, or Cows with VR headsets, which do you want? (v) VR cows (s) Soil pyramid (r) Riddles (e) END :(");
        scanf(" %c)", &what);
        if (what == 'r' || what == 'R') {
            Riddle(1);
        } else
        if (what == 'e' || what == 'E') {
            printf("\n");
            sleep(2);
            printf("\nThis is fairwell! :)");
            end = 0;
        } else 
        if (what == 'v' || what == 'V') {
            printf("Virtual Reality for Cows?\n\n");
            printf("It's a bovine-centric version of “The Matrix” that may seem far from reality. \nBut some cows in Israel and elsewhere are living in virtual reality. \nIsraeli dairy farmer Izzet Kocak purchased two virtual reality headsets for cattle from a Russian manufacturer \nafter seeing them demonstrated by the Russian entity. He was looking for ways \nto increase milk production to offset high feed prices. The headsets \ntransport indoor-housed cows virtually to a setting of calming green pastures, \nwhich is believed to give them an emotional boost. \nKocak also plays classical music in the barn while cows are wearing the headsets.\n");
            printf("Kocak ran a mini-trial on his farm to measure the impact the headsets had on milk production. \nAfter 10 days of wearing the devices, the two test cows' milk production increased by \nabout twenty two percent, from 48.5 pounds per day to 59.5 pounds per day. \nHe said milk quality also improved. The developers reportedly collaborated with \nveterinarians in Russia to make sure the headsets were safe for cows. \nKocak is so impressed with the results that he has ordered 10 more devices. \nYou can see the Israeli dairyman demonstrate the headsets in his barn on this YouTube video.\n- Dairyherd.com\n");
            printf("\nhttps://www.youtube.com/watch?v=EOyImm0IVPE\n");
        } else
        if (what != 's' && what != 'S' && what != 'e' && what != 'E') {
            printf("goodbye :|");
            end = 0;
        } 
    }
    char riddlez;
    if (end) {
printf("\n                          0 \n");
printf("                    100 _/ \n");
printf("                        /\\  10 \n");
printf("                   90 _/__\\/\n");
printf("                      /\\  /\\  20 \n");
printf("                 80 _/__\\/__\\/\n");
printf("                    /\\  /\\  /\\  30 \n");
printf("               70 _/__\\/__\\/__\\/\n");
printf("                  /\\  /\\  /\\  /\\  40 \n");
printf("             60 _/__\\/__\\/__\\/__\\/\n");
printf("                /\\  /\\  /\\  /\\  /\\  50 \n");
printf("           50 _/__\\/__\\/__\\/__\\/__\\/\n");
printf("              /\\  /\\  /\\  /\\  /\\  /\\  60 \n");
printf("         40 _/__\\/__\\/__\\/__\\/__\\/__\\/\n");
printf("            /\\  /\\  /\\  /\\  /\\  /\\  /\\  70 \n");
printf("       30 _/__\\/__\\/__\\/__\\/__\\/__\\/__\\/\n");
printf("          /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  80 \n");
printf("     20 _/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/\n");
printf("        /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  90 \n");
printf("   10 _/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/\n");
printf("      /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  /\\  100 \n");
printf("  0 _/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/__\\/\n");
printf("     \\   \\   \\   \\   \\   \\   \\   \\   \\   \\   \\   \n\n");
printf("     100  90  80  70  60  50  40  30  20  10  0 \n");
        sleep(1);
        printf("\n\nCool right?\n");
        sleep(1);
        printf("Wanna do unending riddles?(y or n)");
        scanf(" %c", &riddlez);
        if (riddlez == 'y' || riddlez == 'Y') {
            Riddle(1);
        }
        printf("\n\nThats it! \n");
    }
    sleep(1);
    printf("Hope you had fun! - Berkley Voss\n");
}
