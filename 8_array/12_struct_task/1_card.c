#include <assert.h>
#include <stdio.h>
#include <string.h>
#define DECKSIZE 52

/*
c - clubs, трефы, ♣
s - spades, пики, ♠️
h - hearts, червы, ♥️
d - diamond, бубны, ♦️

2', '3', '4', '5', '6', '7', '8', '9' - от 2 до 9
'T' (ten - десять)
'J' (валет)
'Q' (дама)
'K' (король)
'A' (туз)
*/

struct Card {
  char rank;  // 2-9 T J Q K A
  char suit;  // c s h d
};

void print_cards(struct Card* hand);
void read_cards(struct Card* hand);
int valid_card(struct Card* card);
int check(struct Card* hand);

int main() {
  // struct Card hand[DECKSIZE + 1];
  // read_cards(hand);
  // print_cards(hand);

  struct Card hand1[] = {{'Q', 's'}, {'A', 'h'}, {'9', 'd'}, {0, 0}};
  struct Card hand2[] = {{'2', 's'}, {'A', 'h'}, {0, 0}};
  assert(1 == check(hand1));
  assert(0 == check(hand2));
}

int check(struct Card* hand) {
  int result = 0;
  struct Card* p;
  for (p = hand; p->rank != 0; p++) {
    if (p->rank == 'Q' && p->suit == 's') {
      result = 1;
    }
  }
  return result;
}

void print_cards(struct Card* hand) {
  struct Card* p;  // указатель на одну карту
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

// int valid_card(struct Card* card) {
//   char* const suit = "cshd";
//   char* const rank = "23456789TJQKA";
//   return strchr(suit, card->suit) && strchr(rank, card->rank);
// }

int valid_card(struct Card* card) {
  // в строках в конце тоже есть "фальшивый" символ '\0'
  char* const suit = "cshd";
  char* const rank = "23456789TJQKA";
  int i;

  for (i = 0; suit[i] != '\0'; i++) {
    if (suit[i] == card->suit) {  // масть такая существует
      break;
      ;
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