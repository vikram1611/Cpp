1- Character type hold values that reprsesent character which are bascilly integer that map to to ASCII character set. 1 byte
2- String are sequence of character.
3- C++ have two type of string:-
    a - c style string
    b- C++ String are object
4- CCtype library which work with charcter (Test character for case, covert to lower top upper , etc)
5- Character Function
    #include<cctype>
- Consist of function for testing characters
- Function for testing case

Testing Character
- isalpha(c) - True if c is a letter
- isalnum(c)- true if c is letter or digit
- is digit(c) - true if c is digit
- is lower(c) - true if c is lowercase letter
- isprint(c)- true if c is printable letter
- ispunct(c)- true if c is punctuatio chr
- isupper(c)- true if c is uppercase
- isspace(c)- True if c is whitespace

Converting Character:-
tolower(c)- return lower case of c
toupper(c) - return upper case of c