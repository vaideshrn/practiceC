#include <stdio.h>

int reverse(int numToBeReversed);

int isPalindrome(int reverseNum, int orginalNum);

int main() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  int reverseOfNum = reverse(num);
  isPalindrome(reverseOfNum, num);
  return 0;
}

int reverse(int numToBeReversed) {
  int reversedNum = 0;
  while (numToBeReversed != 0) {
    int var = numToBeReversed % 10;
    reversedNum = (reversedNum * 10) + var;
    numToBeReversed = numToBeReversed / 10;
  }
  return reversedNum;
}

int isPalindrome(int reverseNum, int orginalNum) {
  if (reverseNum == orginalNum) {
    printf("%d is a palindrome number\n", orginalNum);
  } else {
    printf("%d is not a palindrome number\n", orginalNum);
  }
}
