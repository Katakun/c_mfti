#include <stdio.h>
#define DECKSIZE 52

struct Card {
  char rank;  // достоинство 2-9 T J Q K A
  char suit;  // масть c s h d
};

void print_cards(struct Card* hand);

void read_cards(struct Card* hand);

int valid_card(struct Card* card);

int main() {
  struct Card hand[DECKSIZE + 1];
  read_cards(hand);
  print_cards(hand);
  return 0;
}

void print_cards(struct Card* hand) {
  struct Card* p;
  for (p = hand; p->rank != 0; p++) {
    printf("%c%c ", p->rank, p->suit);
  }
  printf("\n");
}

void read_cards(struct Card* hand) {
  struct Card* p;  // указатель на одну карту
  for (p = hand; 2 == scanf("%c%c", &p->rank, &p->suit); p++) {
    if (!valid_card(p)) {
      break;
    }
  }
  // в конец положим фальшивую карту
  p->rank = p->suit = 0;
}

int valid_card(struct Card* card) {
  // в строках в конце тоже есть "фальшивый" символ '\0'
  char* const suit = "cshd";
  char* const rank = "23456789TJQKA";
  int i;

  for (i = 0; suit[i] != '\0'; i++) {
    if (suit[i] == card->suit) {  // масть такая существует
      return 0;
    }
  }

  if (suit[i] == '\0') {  // в card->suit была неправильная масть
    return 0;
  }

  for (i = 0; rank[i] != '\0'; i++) {
    if (rank[i] == card->rank) {  // достоинство такое существует
      return 1;  // масть и достоинство существуют, карта правильная
    }
  }
  return 0;  // в card->rank было неправильное достоинство
}