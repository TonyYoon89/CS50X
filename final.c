#include <stdio.h>
#include <string.h>

typedef struct {
    char title[100];
    char review[500];
    int stars;
} Book;

Book books[50];
int bookCount = 0;

void addBook() {
    if (bookCount >= 50) {
        printf("Book list is full.\n");
        return;
    }
    printf("Enter book title: ");
    scanf(" %[^\n]", books[bookCount].title);
    getchar(); // Clear newline character from the buffer

    printf("Enter review: ");
    fgets(books[bookCount].review, sizeof(books[bookCount].review), stdin);
    books[bookCount].review[strcspn(books[bookCount].review, "\n")] = 0;

    do {
        printf("Enter star rating (1-5): ");
        scanf("%d", &books[bookCount].stars);
    } while (books[bookCount].stars < 1 || books[bookCount].stars > 5);

    bookCount++;
    printf("Book added successfully.\n");
}

void removeBook() {
    int i, index;
    printf("Enter book index to remove (1 - %d): ", bookCount);
    scanf("%d", &index);
    index--; // Adjust for zero-based indexing

    if (index < 0 || index >= bookCount) {
        printf("Invalid index.\n");
        return;
    }
    for (i = index; i < bookCount - 1; i++) {
        books[i] = books[i + 1];
    }
    bookCount--;
    printf("Book removed successfully.\n");
}

void editReview() {
    int index;
    printf("Enter book index to edit (1 - %d): ", bookCount);
    scanf("%d", &index);
    index--;

    if (index < 0 || index >= bookCount) {
        printf("Invalid index.\n");
        return;
    }

    // Display the title of the book being edited
    printf("Editing review for the book: %s\n", books[index].title);

    printf("Enter new review: ");
    scanf(" %[^\n]", books[index].review);

    do {
        printf("Enter new star rating (1-5): ");
        scanf("%d", &books[index].stars);
    } while (books[index].stars < 1 || books[index].stars > 5);

    printf("Review updated successfully.\n");
}

void displayBooks() {
    int i;
    if (bookCount == 0) {
        printf("No books to display.\n");
        return;
    }
    printf("\n| %-4s | %-30s | %-10s | %-5s |\n", "No.", "Title", "Review", "Stars");
    printf("---------------------------------------------------------\n");
    for (i = 0; i < bookCount; i++) {
        printf("| %-4d | %-30s | %-10s | %-5d |\n", i + 1, books[i].title, books[i].review, books[i].stars);
    }
    printf("---------------------------------------------------------\n");
}

void displayMenu() {
    printf("\n----- Book Review Manager -----\n");
    printf("1. Add Book\n");
    printf("2. Remove Book\n");
    printf("3. Edit Review\n");
    printf("4. Display Books\n");
    printf("5. Exit\n");
    printf("--------------------------------\n");
    printf("Enter your choice: ");
}

int main() {
    int choice, status;
    while(1) {
        displayMenu();

        status = scanf("%d", &choice);

        // Clear the input buffer
        while (getchar() != '\n');

        if (status != 1) {
            printf("Invalid choice. Please try again.\n");
            continue;
        }

        switch(choice) {
            case 1:
                addBook();
                break;
            case 2:
                removeBook();
                break;
            case 3:
                editReview();
                break;
            case 4:
                displayBooks();
                break;
            case 5:
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
    return 0;
}
