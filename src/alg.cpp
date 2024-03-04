// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    if (value <= 1) {
        return false;
    }
    for (uint64_t i = 2; i * i <= value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
  if (n == 1) {
    return 2;
  }
  uint64_t number = 3;
  uint64_t count = 1;
  while (count < n) {
    if (checkPrime(number)) {
      count++;
    }
    if (count < n) {
      number += 2;
    }
  }
  return number;
}
uint64_t nextPrime(uint64_t value) {
  uint64_t null = value + 1;
  while (!checkPrime(null)) {
    null++;
  }
  return null;
}
uint64_t sumPrime(uint64_t hbound) {
  uint64_t summa = 0;
  for (uint64_t i =2; i < hbound; i++) {
    if (checkPrime(i)) {
      summa += i;
    }
  }
  return summa;
}
