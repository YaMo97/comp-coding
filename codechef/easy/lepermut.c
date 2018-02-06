/**
 * lepermut.c
 *
 * Yatharth Manocha
 * yathman97@gmail.com
 *
 * Codechef - Practice - Easy
 * 
 * Problem Code - LEPERMUT
 * Little Elephant and Permutations
 * 
 * Link - https://www.codechef.com/problems/LEPERMUT
 *
 */
 
// includes
#include <stdio.h>
#include <stdlib.h>

// defines
#define max(a,b) (a<b?b:a)
#define abs(x) (x<0?(-x):x) // big bug here if "-x" is not surrounded by "()"

#define getI(a) scanf("%d", &a) //next three are handy ways to get ints, it's also force you to use '&' sign
#define getII(a,b) scanf("%d%d", &a, &b)
#define getIII(a,b,c) scanf("%d%d%d", &a, &b, &c)

#define wez(n) int (n); scanf("%d",&(n)) //handy if the input is right after the definition of a variable
#define wez2(n,m) int (n),(m); scanf("%d %d",&(n),&(m))
#define wez3(n,m,k) int (n),(m),(k); scanf("%d %d %d",&(n),&(m),&(k))

#define F(i,L,R) for (int i = L; i < R; i++) //next four are for "for loops"
#define FE(i,L,R) for (int i = L; i <= R; i++)
#define FF(i,L,R) for (int i = L; i > R; i--)
#define FFE(i,L,R) for (int i = L; i >= R; i--)

#define TESTS wez(testow); while(testow--) //for multilple cases problems
#define whileZ int T; getI(T); while(T--) // the same as above

#define printA(a,L,R) FE(i,L,R) { printf("%d", a[i]); (i==R?printf("\n"):printf(" ")); } // to Print Array

#define getS(x) scanf("%s", x) //get a char* string
#define clr(a,x) memset(a,x,sizeof(a)) //set elements of array to some value

int main(void) 
{

    TESTS {

        wez(N);

        int *A = malloc(N * sizeof(int));

        F(i, 0, N) {
            getI(*(A + i));
        }

        int local = 0;
        int global = 0;

        F(i, 0, N - 1) {
            if (A[i] > A[i + 1])
                local++;
            
            F(j, i, N) {
                if (A[i] > A[j])
                    global++;
            }
        }
        
        if (local == global) {
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}