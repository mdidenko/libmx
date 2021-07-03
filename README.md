![Ucode IT Academy](https://ucode.world/wp-content/themes/ucode/images/logo.svg")

# Challenge task
**Create a library with its own implementation of some standard C functions.**

## Print pack
Function name|Description
----|----- 
mx_printchar|Prints single character on the standard output.
mx_print_unicode|Prints ASCII and multibyte characters on standard output.
mx_printstr|Prints string of characters on the standard output.
mx_print_strarr|Prints array of strings.
mx_printint|Prints integer values on the standard output.

## Math pack
Function name|Description
----|-----
mx_pow|Exponentiation function.
mx_sqrt|Square root function.

## Convert pack
Function name|Description
----|-----
mx_nbr_to_hex|Converts an unsigned long number into a hexadecimal.
mx_hex_to_nbr|Converts a hexadecimal string into an unsigned long number.
mx_itoa|Converts integer value to a string.

## Sort pack
Function name|Description
----|-----
mx_bubble_sort|Bubble sort algorithm.
mx_quicksort|Quick sort algorithm.
mx_binary_search|Binary search algorithm.

## String pack
Function name|Description
----|-----
mx_strlen|Function that has the same behaviour as standard libc function ***strlen***.
mx_swap_char|Swaps the characters of the string.
mx_str_reverse|Reverses string.
mx_strdel|Frees the string memory.
mx_del_strarr|Deletes content of array and frees array memory.
mx_get_char_index|Finds index of the first occurrence of character in a string.
mx_strdup|Function that has the same behaviour as standard libc function ***strdup***.
mx_strndup|Function that has the same behaviour as standard libc function ***strndup***.
mx_strcpy|Function that has the same behaviour as standard libc function ***strcpy***.
mx_strncpy|Function that has the same behaviour as standard libc function ***strncpy***.
mx_strcmp|Function that has the same behaviour as standard libc function ***strcmp***.
mx_strncmp|Function that has the same behaviour as standard libc function ***strncmp***.
mx_strcat|Function that has the same behaviour as standard libc function ***strcat***.
mx_strstr|Function that has the same behaviour as standard libc function ***strstr***.
mx_get_substr_index|Finds an index of substring.
mx_count_substr|Counts number of occurrences of substring in a string.
mx_count_words|Counts words in the string.
mx_letters|Сounts the number of letters.
mx_strnew|Allocates memory for a string and initializes each character with '\0'.
mx_strtrim|Creates new string without whitespace characters at the beginning and the end of the string.
mx_del_extra_spaces|Puts in the new string exactly one space character between words.
mx_strsplit|Converts a string to the array of words.
mx_strjoin|Concatenates strings into new string.
mx_file_to_str|Reads the data from file into the string.
mx_replace_substr|Replaces all occurrences.

## Memory pack
Function name|Description
----|-----
mx_memset|Function that has the same behaviour as standard libc function ***memset***.
mx_memcpy|Function that has the same behaviour as standard libc function ***memcpy***.
mx_memccpy|Function that has the same behaviour as standard libc function ***memccpy***.
mx_memcmp|Function that has the same behaviour as standard libc function ***memcmp***.
mx_memchr|Function that has the same behaviour as standard libc function ***memchr***.
mx_memrchr|Function that has the same behaviour as standard libc function ***memrchr***.
mx_memmem|Function that has the same behaviour as standard libc function ***memmem***.
mx_memmove|Function that has the same behaviour as standard libc function ***memmove***.
mx_realloc|Function that has the same behaviour as standard libc function ***realloc***.

## List pack
Function name|Description
----|-----
mx_create_node|Creates a new node of linked list.
mx_push_front|Inserts a new node at the beginning of the linked list.
mx_push_back|Inserts a new node at the end of the linked list.
mx_pop_front|Removes the first node of the linked list.
mx_pop_back|Removes the last node of the linked list.
mx_list_size|Calculates the number of nodes in the linked list.
mx_sort_list|Sorts the list’s contents in ascending order.
swap_nodes|Swaps the nodes.

## Additional pack
Function name|Description
----|-----
mx_isspace|Function which has the same behaviour as standard libc function ***isspace***.
mx_isalpha|Function which has the same behaviour as standard libc function ***isalpha***.
mx_isdigit|Function which has the same behaviour as standard libc function ***isdigit***.
mx_foreach|Applies the function for each element of the array.
