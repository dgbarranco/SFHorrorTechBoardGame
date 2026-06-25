#include <stdio.h>
#include <stdlib.h>

int hasKey = 0;

/* Function Prototypes */
void titleScreen();
void bedroom();
void hallway();
void basement();
void escapeEnding();
void gameOver();

/* =========================
   MAIN
   ========================= */
int main() {

    titleScreen();

    printf("\nPress ENTER to begin...");
    getchar();

    bedroom();

    return 0;
}

/* =========================
   TITLE SCREEN
   ========================= */
void titleScreen() {

    printf(
    "██╗    ██╗██╗  ██╗██╗███████╗██████╗ ███████╗██████╗ ██╗███╗   ██╗ ██████╗\n"
    "██║    ██║██║  ██║██║██╔════╝██╔══██╗██╔════╝██╔══██╗██║████╗  ██║██╔════╝\n"
    "██║ █╗ ██║███████║██║███████╗██████╔╝█████╗  ██████╔╝██║██╔██╗ ██║██║  ███╗\n"
    "██║███╗██║██╔══██║██║╚════██║██╔═══╝ ██╔══╝  ██╔══██╗██║██║╚██╗██║██║   ██║\n"
    "╚███╔███╔╝██║  ██║██║███████║██║     ███████╗██║  ██║██║██║ ╚████║╚██████╔╝\n"
    " ╚══╝╚══╝ ╚═╝  ╚═╝╚═╝╚══════╝╚═╝     ╚══════╝╚═╝  ╚═╝╚═╝╚═╝  ╚═══╝ ╚═════╝\n");

    printf("\n");
    printf("=========================================================\n");
    printf("                THE WHISPERING HOUSE\n");
    printf("=========================================================\n\n");

    printf("You wake up in a strange house.\n");
    printf("A storm rages outside.\n");
    printf("You cannot remember how you got here.\n");
    printf("Something else is inside the house with you...\n");
}

/* =========================
   BEDROOM
   ========================= */
void bedroom() {

    int choice;

    while (1) {

        printf("\n");
        printf("+------------------------------------------------+\n");
        printf("|                ABANDONED BEDROOM               |\n");
        printf("+------------------------------------------------+\n");

        printf(
        " ______________________________________\n"
        "|                                      |\n"
        "|      ________________________        |\n"
        "|     |                        |       |\n"
        "|     |        WINDOW          |       |\n"
        "|     |________________________|       |\n"
        "|                                      |\n"
        "|       _____________                  |\n"
        "|      |             |                 |\n"
        "|      |    BED      |                 |\n"
        "|      |_____________|                 |\n"
        "|                                      |\n"
        "|                           ____       |\n"
        "|                          |    |      |\n"
        "|                          |DOOR|      |\n"
        "|__________________________|____|______|\n"
        );

        printf("\nThe room smells damp.\n");
        printf("You hear faint scratching behind the walls.\n\n");

        printf("1. Search under the bed\n");
        printf("2. Open the door\n");
        printf("3. Look out the window\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch(choice) {

            case 1:
                if (!hasKey) {
                    printf("\nYou reach beneath the bed.\n");
                    printf("Your hand brushes against cold metal.\n");
                    printf("You found a rusty key!\n");
                    hasKey = 1;
                }
                else {
                    printf("\nThere is nothing else under the bed.\n");
                }
                break;

            case 2:
                hallway();
                return;

            case 3:
                printf("\nLightning flashes outside.\n");
                printf("For a split second...\n");
                printf("You see a figure staring at you.\n");
                printf("Then it disappears.\n");
                break;

            default:
                printf("\nInvalid choice.\n");
        }
    }
}

/* =========================
   HALLWAY
   ========================= */
void hallway() {

    int choice;

    while (1) {

        printf("\n");
        printf("+------------------------------------------------+\n");
        printf("|                    HALLWAY                     |\n");
        printf("+------------------------------------------------+\n");

        printf(
        "###################################################\n"
        "#                                                 #\n"
        "#    | |                                 | |      #\n"
        "#    | |                                 | |      #\n"
        "#    | |                                 | |      #\n"
        "#                                                 #\n"
        "#                   _______                       #\n"
        "#                  |       |                      #\n"
        "#                  | CLOCK |                      #\n"
        "#                  |_______|                      #\n"
        "#                                                 #\n"
        "###################################################\n"
        );

        printf("\nThe grandfather clock has stopped.\n");
        printf("The silence feels unnatural.\n\n");

        printf("1. Approach the clock\n");
        printf("2. Go downstairs\n");
        printf("3. Return to bedroom\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch(choice) {

            case 1:
                printf("\nThe clock suddenly begins ticking.\n");
                printf("TICK...\n");
                printf("TICK...\n");
                printf("TICK...\n");

                printf("\nA cold breath touches your neck.\n");
                gameOver();
                return;

            case 2:
                basement();
                return;

            case 3:
                bedroom();
                return;

            default:
                printf("\nInvalid choice.\n");
        }
    }
}

/* =========================
   BASEMENT
   ========================= */
void basement() {

    int choice;

    while (1) {

        printf("\n");
        printf("+------------------------------------------------+\n");
        printf("|                    BASEMENT                    |\n");
        printf("+------------------------------------------------+\n");

        printf(
        "       ______________________\n"
        "      /                      \\\n"
        "     /                        \\\n"
        "    |      DARK STAIRS         |\n"
        "    |                           |\n"
        "    |            ____           |\n"
        "    |           |EXIT|          |\n"
        "    |___________|____|__________|\n"
        );

        printf("\nYou smell mold and wet wood.\n");
        printf("A locked exit door stands before you.\n\n");

        printf("1. Unlock the exit door\n");
        printf("2. Investigate strange noise\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch(choice) {

            case 1:

                if (hasKey) {
                    escapeEnding();
                    return;
                }
                else {
                    printf("\nThe door is locked.\n");
                    printf("You need a key.\n");
                }

                break;

            case 2:

                printf("\nYou follow the sound.\n");
                printf("Something moves in the darkness.\n");

                printf(
                "\n"
                "                .-''''-.\n"
                "              .'  _  _ '.\n"
                "             /   (o)(o)  \\\n"
                "            |      /\\     |\n"
                "            |    ______   |\n"
                "             \\  |______| /\n"
                "              '.      .'\n"
                "                '-..-'\n"
                );

                printf("\nThe creature notices you.\n");

                gameOver();
                return;

            default:
                printf("\nInvalid choice.\n");
        }
    }
}

/* =========================
   GOOD ENDING
   ========================= */
void escapeEnding() {

    printf("\n");

    printf(
    "███████╗███████╗ ██████╗ █████╗ ██████╗ ███████╗\n"
    "██╔════╝██╔════╝██╔════╝██╔══██╗██╔══██╗██╔════╝\n"
    "█████╗  ███████╗██║     ███████║██████╔╝█████╗\n"
    "██╔══╝  ╚════██║██║     ██╔══██║██╔═══╝ ██╔══╝\n"
    "███████╗███████║╚██████╗██║  ██║██║     ███████╗\n"
    "╚══════╝╚══════╝ ╚═════╝╚═╝  ╚═╝╚═╝     ╚══════╝\n"
    );

    printf("\nThe rusty key turns.\n");
    printf("The lock clicks open.\n");

    printf("\nYou push the door open and sprint into the storm.\n");
    printf("Behind you, the house lets out a low groan.\n");
    printf("Lightning strikes.\n");

    printf("\nWhen you turn around...\n");
    printf("The house is gone.\n");

    printf("\nGOOD ENDING ACHIEVED\n");

    exit(0);
}

/* =========================
   GAME OVER
   ========================= */
void gameOver() {

    printf("\n");

    printf(
    " ██████╗  █████╗ ███╗   ███╗███████╗\n"
    "██╔════╝ ██╔══██╗████╗ ████║██╔════╝\n"
    "██║  ███╗███████║██╔████╔██║█████╗\n"
    "██║   ██║██╔══██║██║╚██╔╝██║██╔══╝\n"
    "╚██████╔╝██║  ██║██║ ╚═╝ ██║███████╗\n"
    " ╚═════╝ ╚═╝  ╚═╝╚═╝     ╚═╝╚══════╝\n"
    );

    printf(
    "\n"
    "      YOU FEEL SOMETHING STANDING\n"
    "           DIRECTLY BEHIND YOU.\n"
    );

    printf("\nA whisper fills the darkness...\n");
    printf("\"You were never supposed to leave.\"\n");

    printf("\nGAME OVER\n");

    exit(0);
}
