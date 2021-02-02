#include <stdio.h>
#include <string.h>

int main() {
	
	char string[100];
	char stuffing[10];
	char stuffed_string[100];
	char start_delimeter[10];
	char end_delimeter[10];
	char escape[] = "esc";
	int a = 0;
	printf("Enter the string :");
	scanf("%s", string);
	printf("Enter starting delimiter :");
	scanf("%s", start_delimeter);
	printf("Enter ending delimiter :");
	scanf("%s", end_delimeter);
	printf("Enter stuffed string :");
	scanf("%s", stuffing);

	for (int i = 0; i <strlen(start_delimeter); i++) {
		stuffed_string[a] = start_delimeter[i];
		a++;
	}

	for (int i = 0; i < strlen(string); i++){
		int count = 0;
		for (int m = i, n= 0; m < (i + strlen(start_delimeter)); m++,n++){
			if (string[m] == start_delimeter[n]){
				count++;
			} else {
				break;
			}
		}
		if (count == strlen(start_delimeter)) {
			for (int k = 0; k < strlen(start_delimeter); k++) {
				stuffed_string[a] = start_delimeter[k];
				a++;
			}
		}
		
		
	count = 0;
		for (int m = i, n = 0; m < (i + strlen(end_delimeter)); m++,n++) {
                        if (string[m] == end_delimeter[n]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(end_delimeter)) {
                        for (int k = 0; k< strlen(end_delimeter); k++) {
                                stuffed_string[a] = end_delimeter[k];
                                a++;
                        }
                }
                
                
	count = 0;
		for (int m = i, n = 0; m< (i + strlen(escape)); m++,n++) {
                        if (string[m] == escape[n]) {
                                count++;
                        } else {
                                break;
                        }
                }
                if (count == strlen(escape)) {
                        for (int j = 0; j < strlen(stuffing); j++) {
                                stuffed_string[a] = stuffing[j];
                                a++;
                        }
                }
		 
		stuffed_string[a] = string[i];
		a++;
	}

	for (int i = 0; i <strlen(end_delimeter); i++) {
                stuffed_string[a] = end_delimeter[i];
                a++;
    }
	
	stuffed_string[a] = '\0';

	printf("\nAfter Stuffing: %s", stuffed_string);
	return 0;
	
}