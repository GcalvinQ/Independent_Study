#include <stdio.h>
#include <ctype.h>

// Function to encrypt plaintext using Caesar cipher
void encrypt(char* plaintext, int key) {
    int i = 0;

    while (plaintext[i]) {
        if (isalpha(plaintext[i])) {
            char charCase = isupper(plaintext[i]) ? 'A' : 'a';
            char charIndex = plaintext[i] - charCase;
            char encryptedChar = (charIndex - key) % 26;
            if (encryptedChar < 0) {
                encryptedChar += 26;
            }
            plaintext[i] = encryptedChar + charCase;
        }
        i++;
    }

    printf("Ciphertext: %s\n", plaintext);
}

// Function to decrypt ciphertext using Caesar cipher
void decrypt(char* ciphertext, int key) {
    int i = 0;

    while (ciphertext[i]) {
        if (isalpha(ciphertext[i])) {
            char charCase = isupper(ciphertext[i]) ? 'A' : 'a';
            char charIndex = ciphertext[i] - charCase;
            char decryptedChar = (charIndex + key) % 26;
            if (decryptedChar < 0) {
                decryptedChar += 26;
            }
            ciphertext[i] = decryptedChar + charCase;
        }
        i++;
    }

    printf("Decrypted plaintext: %s\n", ciphertext);
}

int main() {
    char text[1000];
    int key;

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    printf("Enter the key (number of shifts, negative for decryption, positive for encryption): ");
    scanf("%d", &key);

    // Perform encryption
    //encrypt(text, key);

    // Perform decryption on the previously encrypted text
    encrypt(text, key);

    return 0;
}








