1.Entry-controlled Loop
	The condition is checked before the loop body executes.
	If the condition is false at the start, the loop does not execute even once.
	Examples: for, while
	
2.Exit-controlled Loop
	The condition is checked after the loop body executes.
	If the condition is false at the start, the loop executes at least once.
	Example: do-while
	
	
Example 1: Entry-controlled (while)
	int i = 5;

while(i < 5)
{
    printf("%d", i);
    i++;
}


Example 2: Exit-controlled (do-while)
	int i = 5;

do
{
    printf("%d", i);
    i++;
}
while(i < 5);
