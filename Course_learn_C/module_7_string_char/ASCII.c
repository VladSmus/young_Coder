// ASCII - ( American Standard Code for Information Interchange).
/*
// 1.1 Write a program to convert characters to uppercase.
#include <stdio.h>

int main(void){
 char c;
 scanf("%c",&c);
 c = c -32;
 printf("%c",c);
 return 0;
}

// 1.2 Output adjacent characters in the ASCII table.
#include <stdio.h>
int main(void)
{ char c;
 scanf("%c",&c);
 printf("%c %c",c-1,c+1);

    return 0;
}

// 1.3  26 numbers separated by a space. The first number is the number of times the letters A or a occur
//  in the input data, the second number is the number of times the letters B or b occur in the input data, and so on.

#include <stdio.h>
#include <ctype.h> // for function tolower()

int main(void) {
    int n;
    scanf("%d", &n);

    int array[26] = {0};

    char arr[n+1];
    for (int i = 0; i < n; i++) {
        scanf(" %c", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        char ch = tolower(arr[i]);
        if (ch >= 'a' && ch <= 'z') {
            array[ch - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}

// 1.4 Output data: digit -- if it is a digit, en -- if it is a letter of the Latin alphabet. In other cases, output error.
#include <stdio.h>
int main(void)
{ char ch;
 scanf("%c",&ch);
if ( ch >= '0' && ch <= '9'){
     printf("digit");
}else if (( ch >= 'A' && ch <= 'Z') || ( ch >= 'a' && ch <= 'z')){
     printf("en");
} else {
     printf("error");
}

    return 0;
}

// 1.5 Output data: The first character of the Latin alphabet. First in uppercase, then in lowercase, without a space between the characters.

#include <stdio.h>
int main(void)
{ int ch;
 scanf("%d",&ch);
 printf("%c%c",ch+64,ch+96);
    return 0;
}

// 1.6 Output data: K last characters of the Latin alphabet.

#include <stdio.h>
int main(void)
{int ch, count = 90;
 scanf("%d",&ch);
 count = 90 - ch;
for(int i = count; i < 90 ; i++){
    int j = 1;
     count +=j;
     printf("%c",count);
}
    return 0;
}

// 2.1 Line length Count the number of characters in a string, excluding the newline character and the null character.

#include <stdio.h>
int main(void)
{ int i =0;
    char str[31];
 fgets(str,31,stdin);
 fflush(stdin);
 while( str[i] != 0){
      i++;
 }
printf("%d",i -1);
    return 0;
}

// 2.2 Words - Count the number of words in a line. By the word we will mean a non-empty sequence of characters separated by spaces.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[101];

    fgets(str, sizeof(str), stdin);

    int prev_is_space = 1;
    int word_count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (!isspace((unsigned char)str[i])) {
            if (prev_is_space) {
                word_count++;
            }
            prev_is_space = 0;
        } else {
            prev_is_space = 1;
        }
    }

    printf("%d\n", word_count);

    return 0;
}
// 2.3 Output data:A single integer is the index of the first occurrence of the desired character in the input string, or the number -1 if the character is not found.
#include <stdio.h>
#include <string.h>

int main() {
    char symbol;
    char string[101];


    scanf("%c", &symbol);


    while(getchar() != '\n');


    fgets(string, sizeof(string), stdin);


    int len = strlen(string);
    if (string[len - 1] == '\n') {
        string[len - 1] = '\0';
    }


    for (int i = 0; i < len; i++) {
        if (string[i] == symbol) {
            printf("%d\n", i);
            return 0;
        }
    }

    printf("-1\n");

    return 0;
}

// 2.4 Output data: A number that corresponds to the decimal notation of the binary number received at the input.

#include <stdio.h>
#include <string.h>
#include <math.h>
int main(void)
{ char binaryStr[21];
 int decimalStr = 0;
 scanf("%s",&binaryStr);
 int length = strlen(binaryStr);
 for(int i = 0; i < length; i++){
      decimalStr += (binaryStr[i] - '0') * pow(2,length - i - 1);
 }
 printf("%d",decimalStr);
    return 0;
}

// 2.5 Remove extra spaces from the string. A space is considered superfluous if:
// - it stands at the beginning of the line;  - it stands at the end of the line; - it is preceded by a space.

#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void)
{ char original_str[101];
  char result_str[101];
 fgets(original_str,sizeof(original_str),stdin);

 int len = strlen(original_str);
 if (original_str[len-1] = '\n'){
      original_str[len-1] = '\0';
 }

int writeIndex = 0;
int readIndex = 0;
 while ( readIndex < len && original_str[readIndex] == ' '){
      readIndex ++;
 }
 if ( readIndex == len){
      puts("");
      return 0;
 }

 while ( readIndex < len){
      result_str[writeIndex++] = original_str[readIndex++];
     if (result_str[writeIndex-1] == ' '){
         while ( readIndex < len && original_str[readIndex] == ' '){
              readIndex++;
         }
     }
 }result_str[writeIndex] = '/0';
 puts(result_str);
    return 0;
}

// 2.6 Hamming Distance The Hamming distance for two words of the same length is the number of positions in which these words differ.
// For two given lines, find the distance between them.

#include <stdio.h>
#include <string.h>
int main() {
    int distance = 0;
    char str1[14], str2[14];
    scanf("%s", str1);
    scanf("%s", str2);

    int len = strlen(str1);
    for (int i = 0; i < len; i++){
         if ( str1[i] != str2[i]){
              distance++;
         }
    }

    printf("%d\n", distance);

    return 0;
}

// 2.7 Output the coordinates of the treasure – two integers separated by a space. The first number is the X coordinate, the second number is the Y coordinate.

#include <stdio.h>
#include <string.h>
int main(void){
 int steps, num, x = 0, y =0;
 char direction[11];
 scanf("%d",&num);
 for(int i = 0; i < num;i++){
      scanf("%s %d", direction, &steps);
     if ( strcmp(direction, "North") == 0){
      y+= steps;
     }else if (strcmp(direction, "South") == 0){
      y-= steps;
     } else if (strcmp(direction, "West") == 0) {
      x-= steps;
     } else if (strcmp(direction, "East") == 0) {
      x+= steps;
   }
 }

    printf("%d %d",x,y);
 return 0;
}

// 2.8 Comments Hide from the output the part of the character string enclosed between the sequences of characters /' and "/


#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char out[101];
    int idxIn = 0;
    int idxOut = 0;
    int insideComment = 0;
    int foundEnd = 0;

    fgets(str, sizeof(str), stdin);


    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
    }

    while (idxIn < len) {
        if (!insideComment && str[idxIn] == '/' && str[idxIn + 1] == '*') {
            insideComment = 1;
            idxIn += 2;
            continue;
        }


        if (insideComment && str[idxIn] == '*' && str[idxIn + 1] == '/') {
            insideComment = 0;
            foundEnd = 1;
            idxIn += 2;
            continue;
        }

        if (!insideComment) {
            out[idxOut++] = str[idxIn++];
        } else {
            idxIn++;
        }
    }


    out[idxOut] = '\0';

    if (foundEnd) {
        printf("%s\n", out);
    } else {
        printf("%s\n", str);
    }

    return 0;
}


// 2.9 Formatted number output Write a program that implements the output of the number N divided into triads of digits.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 8

void format_number(long long n) {
    char buf[MAX_LEN], out[MAX_LEN*2];
    snprintf(buf, sizeof(buf), "%lld", n);
    int len = strlen(buf);

    int j = 0;
    for (int i = len - 1; i >= 0; --i) {
        out[j++] = buf[i];
        if ((len - i) % 3 == 0 && i != 0) {
            out[j++] = ' ';
        }
    }
    for (int k = 0; k < j / 2; ++k) {
        char temp = out[k];
        out[k] = out[j-k-1];
        out[j-k-1] = temp;
    }
    out[j] = '\0';

    puts(out);
}

int main() {
    long long number;
    scanf("%lld", &number);
    format_number(number);
    return 0;
}

// 2.10 Number The string is given. Determine whether a given string is a record of a number (integer or real). The fractional and real parts are separated by a decimal point.
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_valid_integer(const char *s) {
    size_t len = strlen(s);
    if (len == 0 || (!isdigit(s[0]) && !(len > 1 && s[0] == '-' && isdigit(s[1])))) {
        return 0;
    }
    for (size_t i = 1; i < len; i++) {
        if (!isdigit(s[i])) {
            return 0;
        }
    }
    return 1;
}


int is_valid_float(const char *s) {
    size_t len = strlen(s);
    int dot_count = 0;
    if (len <= 1 || !isdigit(s[len - 1])) {
        return 0;
    }
    for (size_t i = 0; i < len; i++) {
        if (s[i] == '.') {
            dot_count++;
            if (dot_count > 1 || i == 0 || i == len - 1) {
                return 0;
            }
        } else if (!(isdigit(s[i]) || (i == 0 && s[i] == '-'))) {
            return 0;
        }
    }
    return dot_count == 1 ? 1 : 0;
}

int main() {
    char input_string[21];
    scanf("%20s", input_string);


    if (input_string[0] == '-' && input_string[1] == '.') {
        printf("error\n");
        return 0;
    }

    if (is_valid_integer(input_string)) {
        printf("int\n");
    } else if (is_valid_float(input_string)) {
        printf("float\n");
    } else {
        printf("error\n");
    }

    return 0;
}

// 2.11 Output words from a string that begin and end with the same letter. Output in the same order in which they occur in the source string.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input_string[51];
    gets(input_string);

    char *word_start = strtok(input_string, " ");
    while(word_start != NULL) {
        int word_len = strlen(word_start);
        if (word_len > 1 && tolower(word_start[0]) == tolower(word_start[word_len - 1])) {
            printf("%s ", word_start);
        }
        word_start = strtok(NULL, " ");
    }
    printf("\n");

    return 0;
}


// 2.12 Output the decrypted string.

#include <stdio.h>
#include <string.h>

// Функция для разворота отдельного слова
void reverse_word(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start++ = *end;
        *end-- = temp;
    }
}

int main() {
    char input_string[41];
    fgets(input_string, sizeof(input_string), stdin);


    input_string[strcspn(input_string, "\n")] = '\0';

    char *word_start = input_string;
    char *current_char = input_string;

    while (*current_char != '\0') {
        if (*current_char == ' ') {

            reverse_word(word_start, current_char - 1);

            word_start = current_char + 1;
        }
        current_char++;
    }

    reverse_word(word_start, current_char - 1);


    printf("%s\n", input_string);

    return 0;
}


// 3.1 The greeting program Complete the greeting program. The program should glue the string that is already in the program and the string entered by the user.

#include <stdio.h>
#include <string.h>
int main(void)
{
    char str1[40] = "Hello, ";
    char str2[20];
    scanf("%s", str2);
    strcat(str1,str2);
    printf("%s",str1);


    return 0;
}

// 3.2 The file name. Print the full file name in the format - file_name.expansion

#include <stdio.h>
int main(void)
{ char str1[30];
  char str2[4];
 scanf("%s",str1);
 scanf("%s",str2);
 strcat(str1,".");
 strcat(str1,str2);
 printf("%s",str1);
    return 0;
}

// 3.3 Output data: yes -- if the specified words can be used to form a chain for playing "Cities", no -- otherwise.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char str1[51];
    char str2[51];

    scanf("%50s", str1);
    scanf("%50s", str2);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (tolower(str1[len1 - 1]) == tolower(str2[0]) ||
        tolower(str2[len2 - 1]) == tolower(str1[0])) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

// 3.4 Output data: yes if the lines completely match, no otherwise.

#include <stdio.h>
#include <string.h>
int main(void)
{ char str1[51],str2[51];
 scanf("%50s",str1);
 scanf("%50s",str2);
 if (strcmp(str1,str2) == 0){
      printf("yes");
 }else{
      printf("no");
 }
    return 0;
}

// 3.5 Output data: yes if the lines completely match, no otherwise.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[51], str2[51];

    fgets(str1,sizeof(str1),stdin);
    fflush(stdin);
    fgets(str2,sizeof(str2),stdin);
    fflush(stdin);


    if (strcasecmp(str1, str2) == 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}

// 3.6 Output: yes if the string is a lucky ticket number, no otherwise.

#include <stdio.h>
int main(void)
{ int d1,d2,d3,d4,d5,d6,sum1,sum2;
 scanf("%1d",&d1);
 scanf("%1d",&d2);
 scanf("%1d",&d3);
 scanf("%1d",&d4);
 scanf("%1d",&d5);
 scanf("%1d",&d6);
 sum1 = d1+d2+d3;
 sum2 = d4+d5+d6;
 if ( sum1 == sum2){
      printf("yes");
 }else {
      printf("no");
 }
    return 0;
}

// 3.7 Output data: yes -- if the letters of the first line are used, the second line can be formed, no -- otherwise.

#include <stdio.h>
#include <string.h>

int main() {
    char str1[51], str2[51];

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    int count1[26] = {0};
    int count2[26] = {0};


    for (int i = 0; str1[i] != '\0'; i++)
        count1[str1[i] - 'a']++;

    for (int i = 0; str2[i] != '\0'; i++)
        count2[str2[i] - 'a']++;

    for (int i = 0; i < 26; i++) {
        if (count2[i] > count1[i]) {
            printf("no\n");
            return 0;
        }
    }

    printf("yes\n");
    return 0;
}

// 3.8  Write a program that translates a string in English using Morse code

#include <stdio.h>
#include <string.h>
int main(void)
{ char chi[51];
 int i = 0;
 fgets(chi,sizeof(chi),stdin);
 fflush(stdin);
 while ( chi[i] != 0){

 switch (chi[i])
   {
case ' ' : printf("|:_..._:|"); break;
case 'A' :
case 'a' : printf(".-|");       break;
case 'B' :
case 'b' : printf("-...|");     break;
case 'W' :
case 'w' : printf(".--|");      break;
case 'G' :
case 'g' : printf("--.|");      break;
case 'D' :
case 'd' : printf("-..|");      break;
case 'E' :
case 'e' : printf(".|");        break;
case 'V' :
case 'v' : printf("...-|");     break;
case 'Z' :
case 'z' : printf("--..|");     break;
case 'I' :
case 'i' : printf("..|");       break;
case 'J' :
case 'j' : printf(".---|");     break;
case 'K' :
case 'k' : printf("-.-|");      break;
case 'L' :
case 'l' : printf(".-..|");     break;
case 'M' :
case 'm' : printf("--|");       break;
case 'N' :
case 'n' : printf("-.|");       break;
case 'O' :
case 'o' : printf("---|");      break;
case 'P' :
case 'p' : printf(".--.|");     break;
case 'R' :
case 'r' : printf(".-.|");      break;
case 'S' :
case 's' : printf("...|");      break;
case 'T' :
case 't' : printf("-|");        break;
case 'U' :
case 'u' : printf("..-|");      break;
case 'F' :
case 'f' : printf("..-.|");     break;
case 'H' :
case 'h' : printf("....|");     break;
case 'C' :
case 'c' : printf("-.-.|");     break;
case 'Q' :
case 'q' : printf("--.-|");     break;
case 'Y' :
case 'y' : printf("-.--|");     break;
case 'X' :
case 'x' : printf("-..-|");     break;
}
  i++;
 }

    return 0;
}
*/



