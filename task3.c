#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

// List of keywords
char keywords[10][10] = {
    "int", "float", "char", "double", "if",
    "else", "for", "while", "return", "void"
};

// Check keyword
int isKeyword(char word[]) {
    for(int i = 0; i < 10; i++) {
        if(strcmp(word, keywords[i]) == 0)
            return 1;
    }
    return 0;
}

// Lexical Analyzer Function
void lexicalAnalyze(FILE *fp) {
    char ch, buffer[MAX];
    int i = 0;

    printf("\n%-15s %-15s\n", "TOKEN TYPE", "TOKEN VALUE");
    printf("----------------------------------------\n");

    while((ch = fgetc(fp)) != EOF) {

        // Skip spaces
        if(isspace(ch)) continue;

        // Identifiers or Keywords
        if(isalpha(ch) || ch == '_') {
            buffer[i++] = ch;

            while(isalnum(ch = fgetc(fp)) || ch == '_') {
                buffer[i++] = ch;
            }

            buffer[i] = '\0';
            i = 0;
            ungetc(ch, fp);

            if(isKeyword(buffer))
                printf("%-15s %-15s\n", "KEYWORD", buffer);
            else
                printf("%-15s %-15s\n", "IDENTIFIER", buffer);
        }

        // Numbers
        else if(isdigit(ch)) {
            buffer[i++] = ch;

            while(isdigit(ch = fgetc(fp))) {
                buffer[i++] = ch;
            }

            buffer[i] = '\0';
            i = 0;
            ungetc(ch, fp);

            printf("%-15s %-15s\n", "NUMBER", buffer);
        }

        // Operators
        else if(ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '=') {
            printf("%-15s %c\n", "OPERATOR", ch);
        }

        // Special Symbols
        else if(ch == ';' || ch == ',' || ch == '(' || ch == ')' ||
                ch == '{' || ch == '}') {
            printf("%-15s %c\n", "SYMBOL", ch);
        }

        // Comments
        else if(ch == '/') {
            char next = fgetc(fp);

            if(next == '/') {
                printf("%-15s %s\n", "COMMENT", "//...");
                while((ch = fgetc(fp)) != '\n' && ch != EOF);
            }
            else {
                ungetc(next, fp);
                printf("%-15s %c\n", "OPERATOR", ch);
            }
        }

        // Unknown
        else {
            printf("%-15s %c\n", "UNKNOWN", ch);
        }
    }
}

int main() {
    char filename[50];
    FILE *fp;

    printf("=========================================\n");
    printf(" CODTECH Internship Task-3 (PRO)\n");
    printf(" Lexical Analyzer - Compiler Design\n");
    printf("=========================================\n");

    printf("Enter input C file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");

    if(fp == NULL) {
        printf("❌ Error: Cannot open file!\n");
        return 0;
    }

    lexicalAnalyze(fp);

    fclose(fp);

    printf("\n✅ Lexical Analysis Completed Successfully!\n");

    return 0;
}
