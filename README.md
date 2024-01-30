# Book Review Manager
#### Description:

The "Book Review Manager" is a sophisticated command-line application developed in C, tailored for book enthusiasts. This project serves as a personal library assistant, enabling users to maintain a digital record of books they've read, complete with individual reviews and ratings. The application is designed to handle a list of up to 50 books, aligning with the ambitious goal of avid readers.

**Purpose and Functionality:**
The application was conceived as a tool to assist in the organization and reflection of one's reading journey. Recognizing the value of revisiting one's thoughts on a book, this tool not only stores basic information like titles and authors but also personal reviews and a star-based rating system. The simplicity of the command-line interface was a deliberate choice, emphasizing functionality and ease of use over graphical complexity.

**Features in Detail:**
- **Add Book:** This feature allows users to input a new book's title, their personalized review, and a star rating. The design focuses on ease of entry while capturing essential information.
- **Remove Book:** To accommodate changing preferences or errors in entry, this functionality enables the removal of books from the list. It's a simple yet crucial feature for maintaining an accurate and current reading list.
- **Edit Review:** Given that opinions and perceptions can change over time, this feature permits users to update their reviews and ratings, reflecting their evolving thoughts on a book.
- **Display Books:** A critical feature that presents the entire list of books in a neatly formatted table, offering a quick and organized overview of the user's reading history.

**Technical Aspects:**
- **Language and Structure:** The choice of C language was driven by its performance efficiency and suitability for creating streamlined command-line applications. The program structure is modular, with each key feature implemented in separate functions, ensuring code clarity and maintainability.
- **Data Management:** At the heart of the application lies a robust data handling mechanism using arrays of structs. This approach effectively manages the book data, striking a balance between simplicity and functionality.

**Project Files Explained:**
- **main.c:** The backbone of the application, containing the main loop with the menu-driven interface. It orchestrates the overall program flow and user interactions.
- **book_manager.h:** This header file declares the `Book` struct and the prototypes for various functions, serving as a central reference for the program's structure.
- **add_book.c, remove_book.c, edit_review.c, display_books.c:** Each of these files contains the logic for the respective feature they're named after. They encapsulate specific functionalities, adhering to the principles of modular programming.

**Reflecting on Design Choices:**
During development, careful consideration was given to the user experience and the program's efficiency. The decision to limit the book list to 50 entries was a balancing act between providing ample space for avid readers and maintaining performance. The text-based interface was chosen to focus on functionality and accessibility, ensuring that the application remains lightweight and straightforward to use.

**Conclusion:**
The Book Review Manager exemplifies the effectiveness of C in creating practical and efficient applications. It's not just a tool, but a companion for readers, encouraging them to reflect on and engage with their reading experiences. This project is a testament to the power of programming in transforming a simple idea into a valuable personal resource.

---
