char ch = 'Q';

char *p = &ch; // p holds the address of ch

cout << *p; // outputs the character 'Q'

ch = 'Z'; // ch now holds 'Z'

cout << *p; // outputs the character 'Z'

*p = 'X'; // ch now holds 'X'

cout << ch; // outputs the character 'X'
