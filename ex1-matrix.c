#include <stdio.h>

#include "arduino.h"
#include "serial.h"
#include "matrix.h"


int main(void)
{

    printf("------ Task 0: Smile Face ------\n");

    /*
     * Clear the matrix and display the required smiley face.
     */

    printf("\n\n------ Task 1: Different Representations ------\n");

    /*
     * Read one character and print the character together with its decimal,
     * hexadecimal, and octal representations using the required messages.
     */

    printf("\n\n------ Task 2: Bit Manipulation ------\n");

    /*
     * Read a signed byte and a bit position. Display the original byte one
     * pixel at a time from LSB to MSB, then display versions in which the
     * selected bit is flipped, cleared, and set.
     */

    printf("\n\n------ Task 3: Complements Representation ------\n");

    /*
     * Read a signed byte from -127 through 127. Display its two's-complement
     * representation, its one's-complement representation, its sign-magnitude
     * representation, and the required alternating-bit filtered value.
     */

    printf("\n\n------ Task 4: Left Shift Animation ------\n");

    /*
     * Read an 8-by-8 frame in hexadecimal. Shift the frame left once
     * per second; pixels leaving a row disappear.
     */

    printf("\n\n------ Task 5: Circular Left Shift Animation ------\n");

    /*
     * Read another 8-by-8 frame in hexadecimal. Rotate the frame left once
     * per second so a pixel leaving the left edge returns at the right edge.
     */

    printf("\n\n------Done! ------\n");

    return 0;
}
