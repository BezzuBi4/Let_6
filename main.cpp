#include <iostream>

char alphabet [] = "0123456789AaBbCcDdEeFfGgHhXxYyZz"; // т.к. нужен
static char temp_pass [5];
int main() {
    for (int i = 1; i < 32; i++){
        for (int j = 1; j < 32; j++){
            for (int k = 1; k < 32; k++){
                for (int n = 1; n < 32; n++){
                    for (int m = 1; m < 32; m++){
                        temp_pass[0] = alphabet[i];
                        temp_pass[1] = alphabet[j];
                        temp_pass[2] = alphabet[k];
                        temp_pass[3] = alphabet[n];
                        temp_pass[4] = alphabet[m];
                        std::cout << temp_pass << std::endl;
                    }
                }
            }
        }
    }
}

