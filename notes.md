# my ft_strlcat

## Variables
- dst_len = length of dst string
- src_len = length of src string
- dst_offset = length of dst -> index for the end of dst str. we move this
- when adding src string to the end of dst.
- index = index for the src string

## While loop
- Condition:
while src at index is not at null terminator (end of the string) and dst_offset is smaller than dstsize
- loop: assigning src[index] to the end of dst (dst[dst_offset]) and then we increase them both

## After while loop
- null-terminate the dst string with dst[dst_offset] which now should be point us to the end of the new dst string.

- return: dst_len + src_len. This way we know if the src string was truncated by comparing the length of dst to the return value of this function.

# apple strlcat

## Variables
- d = dst string
- s = src string
- n = siz = dstsize
- dlen = 

## First while loop
<p>Find the end of dst and adjust bytes left but dont go past end</p>
- Condition: while dstsize > 0 and dst string is not at the end ('\0')
- loop: increase dst string

## After first while
- assign dlen to be d - dst
- assign n to be dstsize - dlen

## If check
- condition: if n is equal to 0
- return dlen + length of src

## Second while loop
- condition: while src string is not at the end ('\0')
- loop: 
	- if n is not 1
		- assign char at src to dst
		- increase dst string
		decrease n
	- increase src string

## After while
- null-terminate dst string
- return length of the new dst string.