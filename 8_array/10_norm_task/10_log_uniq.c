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

int main() {
  int n;
  scanf("%d", &n);
  Log_entry log[n];
  memset(log, 0, sizeof(log));

  for (int i = 0; i < n; i++) {
    log[i] = scan_log_entry();
  }

  return 0;
}