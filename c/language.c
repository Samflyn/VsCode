%f real     8.54
%d integer  100	
%c char     a
%u for unsigned integer
printf ( "<format string>", <list of variables> ) ;

scanf(%d integer  int
      %f float    float
      %c char     char
scanf("%d %d %d",&calc,&git,&galc);
printf("%d\n", calc)     \n for new line
in printf  ( &i ) -- prints address of the variable rather than ( i ) which just prints the value of the variable
////* PRIORITY OF OPERATORS */////

First   --    * / %    multiplication, division, modular division
Second  --    + -      addition, subtraction
Third   --    =        assignment

EXCEPT ASSIGNMENTS ( =, +=, -=, ) OR CONDITIONAL OPERATOR ( ?: ) OR NEGATIONS AND INCREMENTS, EVERY THING IS FROM LEFT TO RIGHT



///////////////////* Statements *////////////////
/* THE IF */
if ( this condition is true )
	{
	  execute this statement ;
	  and this statement;
	}

/* THE IF-ELSE*/

if(condition)
{
	if(condition)
		do this;
		else
		{
			do this;
			and this;
		}
}
else
do this ;



/* ELSE-IF*/
if(condition)
	printf("something");
else if(condition)
	printf("again something");
else if(condition)
	printf("again something");


/* LOGICAL OPERATORS */
AND &&
OR ||
NOT !

">=" or "<="

/* CONDITIONAL OPERATOR*/
IF? ELSE: THEN
(if this is true i.e the value is not 0)? (then this value is returned): (else this value is returned)


//////////////////////////////////////////////* LOOPS*//////////////////////////////////////////////////

/* WHILE LOOP*/

main()
{
	int
	float
	count=1;
	while(count<=4)
	{
		d this;
		and this;
		and this;
		count=count+1;
	}
}

incrementer(i++) || incrementer(++i)
compound incrementer(i+="some number")  /* this implies the number i to be incremented with 5 or 10 or something*/
similarly we can use ( -= or *= or %= or /= )

/* FOR LOOP */

for ( initialise counter ; test counter ; increment counter )
{
	do this ;
	and this ;
	and this ;
}


for ( count = 1 ; count <= 3 ; count = count + 1 )


/* ODD LOOP*/

to execute a loop infinite times

int main()
{
	do
	{
		/* code */
	} while (/* condition */);
	
}


same can be done with 

int main()
{
	for(;another=='y';)
	{
		/* code */
	}
	
}



int main()
{
	while(another=='y'){
		/* code */
	}
	
}





/* BREAK STATEMENT */
It breaks the loop which it is placed in.

main()
{
	int num,i;
	i=2;
	while( i<=num-1 )
	{
		if (num%i==0) 
		{
			printf("not a prime");
			break;
		}
		i++
	}
	if(i==num)
		printf("Prime number")
}

/* CONTINUE */
It is used to take the control to the begining of the statement.

main()
{
	int i,i;
	for( i = 1; i<=2; i++)
	{
		for( j = 1; j <= 2; j++)
		{
			if (i==j)
				continue;
			printf("\n%d %d\n",i,j)
			
		}
		
	}
	
}


/* DO-WHILE LOOP */

do
{
	/* code */
} while (/* condition */);

the do while executes the code before checking the condition.


///////////////////////* CASE CONTROL STRUCTURE */////////////////////////////////////////////////

/* SWITCH */

switch-case-default
no float is allowed in switch

switch (expression)
{
	case /* constant-expression */:
		/* code */
		break;

	default:
		break;
}

/* GOTO */

main()
{
	int num;
	scanf("%d",&num);
	if(num<=5)
		goto sos;
	else
	{
		/* code */
		exit()
	}
	sos:
		printf("something");
}


here sos can be replaced with anything 
goto "something";

"something":
			/* code */


/////////////////////* FUNCTIONS AND POINTERS *////////////////////////

/* FUNCTIONS */
main()   --  Its is a calling function. Any function can call any other function
In this the called function is followed by ;
function can be called inside any function but cannot be defined inside it


main()
{
	printf("\n I am in main");
	italy();
	printf("\n I am finaly back in main") ;
}
italy( )
{
	printf ( "\nI am in italy" ) ;
	brazil( ) ;
	printf ( "\nI am back in italy" ) ; 
}
brazil( )
{
	printf ( "\nI am in brazil" ) ;
	argentina( ) ;
}
argentina( )
{
	printf ( "\nI am in argentina" ) ;
}

/*
The output would  be 


I am in main
I am in italy
I am in brazil
I am in argentina
I am back in italy
I am finally back in main 
*/

/* passing values b/w functions */

main()
{
	int a,b,c,sum;
	sum=calsum(a,b,c);
	printf("%d",&sum);
}
calsum(x,y,z)						calsum(int x, int y, int z)
int x,y,z;            (or)               
{
	int d;
	d=x+y+z;
	return(d);
}


/* ADVANCED FEATURES OF FUNCTIONS */
/* FUNCTION DECLERATION AND PROTOTYPES */

to get any other value other than int, it should be defined in both calling function and the called function



main( )
{
	float square ( float ) ;         /*======>>>>> This statement is often called as prototype declaration <<<<<<========== */
	float a, b ;
	printf ( "\nEnter any number " ) ;
	scanf ( "%f", &a ) ;
	b = square ( a ) ;
	printf ( "\nSquare of %f is %f", a,b ) ; 
}
float square ( float x )
{
	float y ;
	y = x * x ;
	return( y ) ; 
}



In some cases we need to call a function which should not return any value, we use void function

main( )
{
	void gospel( ) ;
	gospel( ) ;
}
void gospel( )
{
	printf ( "\nViruses are electronic bandits..." ) ;
	printf ( "\nwho eat nuggets of information..." ) ;
	printf ( "\nand chunks of bytes..." ) ;
	printf ( "\nwhen you least expect..." ) ; 
}

Here, the gospel( ) function has been defined to return void; means
it would return nothing. Therefore, it would just flash the four
messages about viruses and return the control back to the main( )
function.

//////////////* POINTERS *//////////////////

main()
{
	int i=3;
	printf("\nThe address of i = %u", &i);
	printf("\nThe value of i = %d", i);
}

we sould get the address where the value of i is stored

the other pointer available is * which is the value at address or called 'indirection' operator

main()
{
	int i=3;
	printf("\nThe value of a variable at an address is  called by %d",*(&i))
}

int *j;
this declaration is used to tell the compiler that j will store the address of other variable




main( )
{
	int i = 3 ;
	int *j ;
	j = &i ;
	printf ( "\nAddress of i = %u", &i ) ;
	printf ( "\nAddress of i = %u", j ) ;
	printf ( "\nAddress of j = %u", &j ) ;
	printf ( "\nValue of j = %u", j ) ;
	printf ( "\nValue of i = %d", i ) ;
	printf ( "\nValue of i = %d", *( &i ) ) ;
	printf ( "\nValue of i = %d", *j ) ;
}

the output would be 


Address of i = 65524
Address of i = 65524
Address of j = 65522
Value of j = 65524
Value of i = 3
Value of i = 3
Value of i = 3


A pointer can inturn contain the address of another pointer 

int i, *j, **k 
i=3;
j=&i;
k=&j;


to get the value we can use *(&i) or *j or **k 


////////////* TYPES OF FUNCTION CALLS *////////////////
1) CALL BY VALUE
2) CALL BY REFERENCE

i.e sending the value of arguments or sending the address of the arguments


1)

main( )
{
	int a = 10, b = 20 ;
	swapv ( a, b ) ;
	printf ( "\na = %d b = %d", a, b ) ; 
}
swapv ( int x, int y )
{
	int t ;
	t = x ;
	x = y ;
	y = t ;
	printf ( "\nx = %d y = %d", x, y ) ; 
}



the output would be 

x = 20 y = 10
a = 10 b = 20

Here the values of a abd b are not affected even after changing the values of x and y

2) in call by reference we are changing the value of arguments of the calling function

main( )
{
	int a = 10, b = 20 ;
	swapr ( &a, &b ) ;
	printf ( "\na = %d b = %d", a, b ) ; 
}
swapr( int *x, int *y )
{
	int t ;
	t = *x ;
	*x = *y ;
	*y = t ;
}



the output would be 

a = 20  b= 10

Using call by reference we can make a function return more than two values at a time 


main( )
{
	int radius ;
	float area, perimeter ;
	printf ( "\nEnter radius of a circle " ) ;
	scanf ( "%d", &radius ) ;
	areaperi ( radius, &area, &perimeter ) ;
	printf ( "Area = %f", area ) ;
	printf ( "\nPerimeter = %f",
	perimeter ) ;
}
areaperi ( int r, float *a, float *p )
{
	*a = 3.14 * r * r ;
	*p = 2 * 3.14 * r ;
}


And here is the output...
Enter radius of a circle 5
Area = 78.500000
Perimeter = 31.400000



///////////* Recursion *//////////////////

A function is called  recursive if a statement within the body of a function calls the same function.



main( )
{
	int a, fact ;
	printf ( "\nEnter any number " ) ;
	scanf ( "%d", &a ) ;
	fact = rec ( a ) ;
	printf ( "Factorial value = %d", fact ) ; 
}
rec ( int x )
{
	int f ;
	if ( x == 1 )
	return ( 1 ) ;
	else
	f = x * rec ( x - 1 ) ;
	return( f ) ; 
}

