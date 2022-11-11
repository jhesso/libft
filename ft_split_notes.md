# ft_split()

**Function name:** ft_split<br>
**Prototype char:** **ft_split(char const *s, char c);<br>
**Turn in files:** - <br>
### **Parameters:**
- s: The string to be split. <br>
- c: The delimiter character.<br>

### **Return value:**
- The array of new strings resulting from the split.<br>
- NULL if the allocation fails.

**External functions:** malloc, free<br>
**Description:** Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.

-----------

## Solution:
1. calculate how many different strings we will need (its basically the amount of times that c occurs in s)
2. allocate memory for the strings needed
	- only allocate enough for the strings and not too much
3. create new strings from s

## Known bugs:
- the calculated length of each word is wrong
	- maybe try python tutor :thinking:
- the last string contains some garbage values

getting some segfaults atm. seems to count delimiters after the string ended.

## Attempts:
- Trying to recreate get_amount_of_strings() in a way that it counts a word each time it finds a char that is not c. instead of everytime it finds c. (obviously will skip through the rest of the word untill we find c).
	- seems to work as expected.. keeping it for now
- modified get_str_len() to skip the delim char (c) and created a new variable called len to actually return the length of the word instead of the index which is ever growing. get_str_len still isn't perfect but at least it now returns > 0
