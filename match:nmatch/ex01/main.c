#include <stdio.h>
#include <string.h>

int nmatch(char *s1, char *s2);

int main()
{
	char *s1 = "Anticonstitutionellement";
	char *s2 = "*con*tu*ellement";
	printf ("1 ca match, 0 ca match pas : %d", nmatch(s1, s2));
}
