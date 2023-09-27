#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main() {
        char usrn[10], psw[8];
        int i, j = 1, k;
        fgets(usrn, 10, stdin);
        fgets(psw, 9, stdin);

        char usr[2][5] = {
            "Zeyd",
            "Eymen"
        };
        char pass[2][7] = {
            "zeyd321",
            "eymen12"
        };

        for (i = 0; i < 2; i++) {
            for (k = 0; k < 10; k++)
                if (usrn[k] == usr[i][k])
                    continue;
                else{
                	j = 0;
                    break;
                }
                    if (j = 0)
                        break;
                    else {
                        for (i = 0; i < 2; i++) {
                            for (k = 0; k < 10; k++)
                                if (psw[k] == pass[i][k])
                                    continue;
                                else {
                                	j = 0;
                                    break;
                                }
                                }
                        }
                        }
                    if (j == 0)
                        printf("Hata!");
                    else if (j == 1)
                        printf("OK");
					}
