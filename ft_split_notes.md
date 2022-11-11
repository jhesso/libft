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
- the delimiter character is saved to the string X
- the last part is not saved (maybe over written to NULL)
- if more than one delimiter is between the words, that delimiter is included in the string X
- the word counting has an obvious oversight. It counts the amount of delimiter characters. -> if more than one delimiter is betweem words, we count all of them as words meaning the amount calculater is too many compared to what we actually need.
- the calculated length of each string returns as 0
- we calculate one less strings than we need
- the last string contains some garbage values

getting some segfaults atm. seems to count delimiters after the string ended.
