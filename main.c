#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    
    printf("Welcome to High School Adventure!\n");
    printf("You are a student at XYZ High School. It's the first day of school, and you're already running late.\n");
    printf("What do you do?\n");
    printf("1. Rush to school as quickly as possible.\n");
    printf("2. Take your time and enjoy the morning.\n");
    
    scanf("%d", &choice);
    
    if (choice == 1) {
        printf("You rush to school as quickly as possible, but you trip on the way and rip your pants.\n");
        printf("What do you do?\n");
        printf("1. Go home and change.\n");
        printf("2. Try to hide the rip and go to school anyway.\n");
        
        scanf("%d", &choice);
        
        if (choice == 1) {
            printf("You go home and change, but by the time you get to school, you're already late.\n");
        } else if (choice == 2) {
            printf("You try to hide the rip and go to school anyway. You're embarrassed, but at least you're not late.\n");
        } else {
            printf("Invalid choice.\n");
        }
    } else if (choice == 2) {
        printf("You take your time and enjoy the morning. You arrive at school feeling refreshed and ready to learn.\n");
    } else {
        printf("Invalid choice.\n");
    }
    
    return 0;
}
