#include <stdio.h>
#include <string.h>

/* Function prototypes */
void stats(char n[], int m, int e, int money, float g, int c, int k);

void aiDetector(int *m, int *k, int *c, float *g);
void fakeNod(int *m, int *k, int *c);
void reservedSeat(int *m, int *c);
void fileDisaster(int *m, int *e, int *c);
void sharedDocument(int *m, int *c, int *k);
void friendKnows(int *m, int *k, int *c);
void penEconomy(int *m, int *money, int *c);
void attendancePanic(int *m, int *c);

void countdown(int n);

int main(void)
{
    char name[30];
    int m = 100, e = 100, money = 10;
    int c = 0, k = 50;
    float g = 4.0f;
    int choice;
    printf("\n");
    printf("+----------------------------------+\n");
    printf("|       SEGMENTATION FAULT :       |\n");
    printf("|        STUDENT'S VERSION!        |\n");
    printf("+----------------------------------+\n");
    printf("\n");

    printf("Enter your name: ");
    scanf("%29s", name);

    /* ASCII demonstration */
    printf("ASCII of A = %d\n", 'A');

    printf("\n========== SYSTEM CHECK ==========\n");
    printf("Brain.exe has started successfully.\n\n");
    printf("Warning:\n");
    printf("Too many thoughts detected.\n");

    printf("\nWould you like to continue anyway?\n");
    printf("\n1. Yes. I believe in myself.\n");
    printf("2. Yes. I have no other option.\n");
    printf("3. I would like to report a bug.\n");
    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        m = 92;
        e = 50;
        g = 3.94f;
        c = 0;
        k = 70;
    }
    else if (choice == 2)
    {
        m = 90;
        e = 40;
        g = 3.75f;
        c = 10;
        k = 60;
    }
    else
    {
        m = 75;
        e = 70;
        g = 3.50f;
        c = 25;
        k = 55;

        printf("\nBug report received.\n");
        printf("Unfortunately, the bug is you.\n");
    }

    /* Event 1 */
    aiDetector(&m, &k, &c, &g);

    /* Event 2 */
    fakeNod(&m, &k, &c);

    /* Event 3 */
    reservedSeat(&m, &c);

    /* Event 4 */
    fileDisaster(&m, &e, &c);

    /* Event 5 */
    sharedDocument(&m, &c, &k);

    /* Event 6 */
    friendKnows(&m, &k, &c);

    /* Event 7 */
    penEconomy(&m, &money, &c);

    /* Event 8 */
    attendancePanic(&m, &c);

    printf("\n========== FINAL DIAGNOSTIC ==========\n");

    stats(name, m, e, money, g, c, k);

    printf("\nSEGMENTATION FAULT.\n");
    printf("Brain attempted to access\n");
    printf("A thought that does not exist.\n\n");
    printf("Process terminated.\n\n");
    printf("See you tomorrow.\n");

    return 0;
}

/* Display statistics */
void stats(char n[], int m, int e, int money, float g, int c, int k)
{
    printf("\nName: %s\n", n);
    printf("Mental Health : %d\n", m);
    printf("Energy        : %d\n", e);
    printf("Money         : $%d\n", money);
    printf("GPA           : %.2f\n", g);
    printf("Confusion     : %d\n", c);
    printf("Knowledge     : %d\n", k);
}

/* AI detector has become sentient */
void aiDetector(int *m, int *k, int *c, float *g)
{
    int x;

    printf("\n========== AI DETECTOR ==========\n");
    printf("You wrote the assignment yourself.\n");
    printf("You checked the grammar.\n");
    printf("You fixed every punctuation error.\n");
    printf("AI Detector: \"100%% AI GENERATED.\"\n");
    printf("You: \"BUT I WROTE IT MYSELF!\"\n");
    printf("AI Detector: \"That's exactly what an AI would say.\"\n");

    printf("\n1. Rewrite it with worse grammar\n");
    printf("2. Submit it anyway\n");
    printf("3. Question your existence\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou intentionally made your grammar worse.\n");
        printf("AI Detector: \"Human detected.\"\n");
        *m += 5;
        *g -= 0.05f;
        *c += 15;
    }
    else if (x == 2)
    {
        printf("\nYou submitted it anyway.\n");
        printf("If you're AI, you're the real threat.\n");
        *m -= 10;
        *k += 5;
    }
    else
    {
        printf("\nYou stare at the screen.\n");
        printf("\"Am I even real?\"\n");
        printf("Congratulations. You are now the real threat.\n");
        *m -= 20;
        *c += 30;
    }

    printf("Achievement: THE REAL THREAT!\n");
}

/* Fake understanding nod */
void fakeNod(int *m, int *k, int *c)
{
    int x;

    printf("\n========== THE FAKE UNDERSTANDING NOD ==========\n");
    printf("Professor: \"Everyone understood?\"\n");
    printf("Your brain: NO.\n");
    printf("Your head: YES.\n");

    printf("\n1. Keep nodding\n");
    printf("2. Stop nodding\n");
    printf("3. Nod harder\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nProfessor thinks you understood everything.\n");
        *k -= 5;
        *c += 20;
    }
    else if (x == 2)
    {
        printf("\nYou stopped nodding. Now you made eye contact.\n");
        *m -= 15;
    }
    else
    {
        printf("\nProfessor: \"Since you understand, explain it.\"\n");
        printf("Your soul has left the classroom.\n");
        *m -= 30;
        *c += 40;
    }

    printf("Achievement: PROFESSIONAL NODDER!\n");
}

/* The seat has been reserved by your soul */
void reservedSeat(int *m, int *c)
{
    int x;

    printf("\n========== SEAT DISPUTE ==========\n");
    printf("Someone is sitting in your usual seat.\n");
    printf("You stare at the chair. The chair knows.\n");

    printf("\n1. Sit somewhere else\n");
    printf("2. Stare until they move\n");
    printf("3. Say \"That's my seat.\"\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou lost your ancestral property.\n");
        *m -= 15;
    }
    else if (x == 2)
    {
        printf("\nThey finally move. Victory through eye contact.\n");
        *m += 5;
    }
    else
    {
        printf("\nThey ask: \"Since when?\"\n");
        printf("You: \"Since semester one.\"\n");
        *c += 15;
    }

    printf("Achievement: PROPERTY DISPUTE!\n");
}

/* File naming disaster */
void fileDisaster(int *m, int *e, int *c)
{
    int x;

    printf("\n========== FILE NAMING DISASTER ==========\n");
    printf("Assignment_Final.pdf\n");
    printf("Assignment_Final2.pdf\n");
    printf("Assignment_Final_NEW.pdf\n");
    printf("Assignment_Final_REAL_LAST.pdf\n");
    printf("Assignment_Final_REAL_LAST_USE_THIS.pdf\n");

    printf("\n1. Submit FINAL_REAL_LAST_USE_THIS\n");
    printf("2. Open every file\n");
    printf("3. Submit all of them\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou trusted the name. Brave.\n");
        *m += 5;
    }
    else if (x == 2)
    {
        printf("\nYou opened 17 files and found no final answer.\n");
        *e -= 20;
        *c += 15;
    }
    else
    {
        printf("\nTeacher received your entire academic history.\n");
        *m -= 10;
        *c += 25;
    }

    printf("Achievement: FINAL_FINAL_FINAL!\n");
}

/* Shared document mystery */
void sharedDocument(int *m, int *c, int *k)
{
    int x;

    printf("\n========== SHARED DOCUMENT MYSTERY ==========\n");
    printf("Someone changed your group assignment.\n");
    printf("Nobody admits doing it.\n");
    printf("Version History: \"Anonymous Animal\"\n");

    printf("\n1. Investigate the edit history\n");
    printf("2. Ask the group chat\n");
    printf("3. Pretend you never saw it\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou found 37 mysterious edits by Anonymous Animal.\n");
        *k += 10;
        *c += 15;
    }
    else if (x == 2)
    {
        printf("\nGroup chat: \"Wasn't me.\"\n");
        printf("Everyone says the same thing.\n");
        *m -= 5;
        *c += 20;
    }
    else
    {
        printf("\nThe document is now somebody else's problem.\n");
        *m += 5;
    }

    printf("Achievement: DIGITAL DETECTIVE!\n");
}

/* The friend who always knows */
void friendKnows(int *m, int *k, int *c)
{
    int x;

    printf("\n========== THE HUMAN LMS ==========\n");
    printf("You: \"What did the teacher say?\"\n");
    printf("Friend: \"Nothing.\"\n");
    printf("Exam starts...\n");
    printf("Friend: \"Chapter 4, page 73, question 6.\"\n");
    printf("You: \"WHO ARE YOU?\"\n");

    printf("\n1. Trust your friend's knowledge\n");
    printf("2. Ask for everything\n");
    printf("3. Accept that they are the class database\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou follow the human LMS.\n");
        *k += 15;
    }
    else if (x == 2)
    {
        printf("\nYour friend now has to teach the entire semester.\n");
        *m += 5;
        *c += 5;
    }
    else
    {
        printf("\nYou have officially found the university database.\n");
        *k += 10;
        *m += 10;
    }

    printf("Achievement: HUMAN LMS!\n");
}

/* Pen exchange economy */
void penEconomy(int *m, int *money, int *c)
{
    int x;

    printf("\n========== PEN EXCHANGE ECONOMY ==========\n");
    printf("Friend: \"Can I borrow your pen?\"\n");
    printf("You give it to them.\n");
    printf("They return a completely different pen.\n");

    printf("\n1. Keep the mysterious pen\n");
    printf("2. Find the original owner\n");
    printf("3. Add it to your collection\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nYou have unknowingly accepted a pen trade.\n");
        *money += 5;
    }
    else if (x == 2)
    {
        printf("\nYou begin a campus-wide pen investigation.\n");
        *m -= 5;
        *c += 10;
    }
    else
    {
        printf("\nAnother pen joins your collection.\n");
        printf("You still don't know where it came from.\n");
        *m += 5;
        *c += 5;
    }

    printf("Achievement: PEN COLLECTOR!\n");
}

/* Who is present panic */
void attendancePanic(int *m, int *c)
{
    int x;

    printf("\n========== WHO IS PRESENT? ==========\n");
    printf("Teacher: \"Your name?\"\n");
    printf("You are physically present.\n");
    printf("You know your own name.\n");
    printf("Your brain: IDENTITY NOT FOUND.\n");

    printf("\n1. Answer immediately\n");
    printf("2. Look at your friend\n");
    printf("3. Say your full name\n");
    printf("Choice: ");
    scanf("%d", &x);

    if (x == 1)
    {
        printf("\nIdentity successfully verified.\n");
        *m += 5;
    }
    else if (x == 2)
    {
        printf("\nYour friend looks back. Neither of you knows why.\n");
        *c += 10;
    }
    else
    {
        printf("\nYou give your full legal identity.\n");
        printf("Teacher only asked for your name.\n");
        *m -= 5;
    }

    printf("Achievement: IDENTITY VERIFICATION FAILED!\n");
}
