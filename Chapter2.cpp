#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num);
void printTime(int hh, int mm);
void printTriangle(int n);
void printSquare(int n);
void inputArray(int arr[], int size);
void outputArray(int arr[], int size);
void printPrimeInArray(int arr[], int size);

int main() {
    int choice;

    do {
        
        printf("\nMenu:\n");
        printf("1. Check Prime Number\n");
        printf("2. Check Time\n");
        printf("3. Print Triangle\n");
        printf("4. Print Square\n");
        printf("5. Input and Output an Array\n");
        printf("6. Print Prime number in an Array\n");
        printf("7. Quit\n");
        
        printf("Enter your choice (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                int num;
                printf("Input number to check: ");
                scanf("%d", &num);
                if (isPrime(num)) {
                    printf("Valid!\n", num);
                } else {
                    printf("Invalid!\n", num);
                }
                break;
            }
            case 2: {
                int hh, mm;
                printf("Input time (hh ) to check: (<=24): ");
                scanf("%d", &hh);
                printf("Input time ( mm) to check:  (<=60): ");
                scanf("%d", &mm);
                printTime(hh, mm);
                break;
            }
            case 3: {
                int n;
                printf("Triangle: Input n: ");
                scanf("%d", &n);
                printTriangle(n);
                break;
            }
            case 4: {
                int n;
                printf(" Square: Input n: ");
                scanf("%d", &n);
                printSquare(n);
                break;
            }
            case 5: {
                int size;
                printf("Input number or element:");
                scanf("%d", &size);
                int arr[size];
                inputArray(arr, size);
                printf("The entered array is: ");
                outputArray(arr, size);
                break;
            }
            case 6: {
                int size;
                printf("Input number or element: ");
                scanf("%d", &size);
                int arr[size];
                inputArray(arr, size);
                printf(" Input array: ");
                printPrimeInArray(arr, size);
                break;
            }
            case 7: {
                printf("Goodbye.\n");
                break;
            }
            default: {
                printf("Invalid !!!\n");
                break;
            }
        }

    } while (choice != 7);

    return 0;
}

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

void printTime(int hh, int mm) {
    if (hh >= 0 && hh < 24 && mm >= 0 && mm < 60) {
      
        printf("Entered Time: %02d:%02d\n", hh, mm);
    } else {
        printf("Invalid time entered.\n");
    }
}

void printTriangle(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void printSquare(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("* ");
        }
        printf("\n");
    }
}

void inputArray(int arr[], int size) {
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void outputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void printPrimeInArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (isPrime(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}
