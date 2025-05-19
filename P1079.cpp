#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_palindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {

        if (str[left] == ' ') {
            left++;
            continue;
        }
        if (str[right] == ' ') {
            right--;
            continue;
        }

   
        if (tolower(str[left]) != tolower(str[right])) {
            return 0;
        }

        left++;
        right--;
    }

    return 1; 
}

int main() {
    int n;
    scanf("%d", &n); 
    getchar(); 

    char str[1001];  

    for (int i = 0; i < n; i++) {
        fgets(str, sizeof(str), stdin);

        str[strcspn(str, "\n")] = '\0';

        if (is_palindrome(str)) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
