#include <stdbool.h>
#include <stdio.h>
#include <string.h>

typedef struct Log_entry {
  int timestamp;
  int id;
  int recept_id;
} Log_entry;

Log_entry scan_log_entry() {
  Log_entry entry;
  scanf("%d %d %d", &entry.timestamp, &entry.id, &entry.recept_id);
  return entry;
}

bool is_inside(int *arr, int id, int size) {
  bool result = false;
  for (int i = 0; i < size; i++) {
    if (arr[i] == id) {
      result = true;
      break;
    }
  }
  return result;
}

int main() {
  int n;
  scanf("%d", &n);
  Log_entry log[n];
  memset(log, 0, sizeof(log));
  int uniq_id_arr[n];
  memset(uniq_id_arr, 0, sizeof(uniq_id_arr));
  int count = 0;

  for (int i = 0; i < n; i++) {
    log[i] = scan_log_entry();
  }

  for (int i = 0; i < n; i++) {
    if (!is_inside(uniq_id_arr, log[i].id, n)) {
      uniq_id_arr[i] = log[i].id;
      count++;
    }

    uniq_id_arr[i] = log[i].id;
  }
  printf("%d\n", count);
  return 0;
}