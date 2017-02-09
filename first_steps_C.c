#include <stdio.h>

int main() {
	// 1.
	printf("Hello, World!");

	// 2. Note that C does not have a boolean type.
	// Usually, it is defined using the following notation:
	#define BOOL char
	#define FALSE 0
	#define TRUE 1
	// Actually, C99 implemented a library for this. Must be used on the header:
	// #include <stdbool.h>

	// 3. Two-Dimensional Arrays
	// We can optionally skip specifying the number of rows.
	// However, the number of columns must be specified.
	char vowels[][5] = {
	{'A', 'E', 'I', 'O', 'U'},
	{'a', 'e', 'i', 'o', 'u'}
	};

	// 4. Arrays have contiguous memory allocation.
	// Print the addresses of each element of a two-dimensional array.
	int i;
	int j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
			printf("Address of vowels[%d][%d]: %u\n", i, j, &vowels[i][j]);
		}
		printf("\n");
	}
	// In the above code we considered a two-dimensional array.
	// However, based on the memory locations, we find that the elements vowels[0][4]
	// (last element of the first row) and vowels[1][0] (first element of the second row)
	// are next to each other. You can argue that rather than using the two-dimensional
	// array vowels[2][5], we simply could have used a one-dimensional array vowels[10].
	// From the point of physical memory allocation, these two do not differ.
	// The only advantage we get here is the logical separation in the values stored.

	// 5. We will use pointers to a character array to define simple strings.
	// This method creates a string which we can only use for reading.
	char * name = "John Smith";
	
	// FUNCTIONS
	// - Must be first defined before they are used in the code.
	// - They can be either declared first and then implemented later on using a header file
	// or in the beginning of the C file, or they can be implemented in the order they are
	// used (less preferable). Good example:
	/*
		// function declaration
		int foo(int bar);

		int main() {
		    // calling foo from main
		    printf("The value of foo is %d", foo(1));

		    return 0;
		}

		int foo(int bar) {
		    return bar + 1;
		}
	*/

	// - We can also create functions that do not return a value by using the keyword void
	/*
		void moo() {
	    // do something and don't return a value
		}

		int main() {
		    moo();

		    return 0;
		}
	*/

	// POINTERS
	// Dereferencing a pointer is done using the asterisk operator *.
	// The & operator points to the variable.
	

	return 0;
}