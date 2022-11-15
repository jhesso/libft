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

