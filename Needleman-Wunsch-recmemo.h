#include <stddef.h>  // Pour size_t
/*
 * Costs for operations on canonical bases
 * Three  operations: insertion and sustitution of one base by an another 
 * Note= substitution of an unknown base N by another one (known or unknown) as the same cost than substitution between 2 different known bases
 */
/** \def SUBSTITUTION_COST
 *  \brief Cost of substitution of one canonical base by another
 */
#define SUBSTITUTION_COST	1

/** \def SUBSTITUTION_UNKNOWN_COST
 *  \brief Cost of substitution of an unknown base (N) by another one (canonical or unknown)
 */
#define SUBSTITUTION_UNKNOWN_COST	1  /* Cost for sustitition of an Unknown bas N by another on -known or unkown- */ 

/** \def INSERTION_COST
 *  \brief Cost of insertion of a canonical ba
 */
#define INSERTION_COST		2

// Taille des blocs pour l'approche cache aware
#define BLOCK_SIZE_1 128
#define BLOCK_SIZE_2 128
#define S 16
// Déclaration de la fonction principale de l'algorithme cache aware
long EditDistance_NW_Rec(char* A, size_t lengthA, char* B, size_t lengthB);
long EditDistance_NW_iter(char* A, size_t lengthA, char* B, size_t lengthB);
long EditDistance_NW_Aware(char* A, size_t lengthA, char* B, size_t lengthB);
long EditDistance_NW_Oblivious(char* A, size_t lengthA, char* B, size_t lengthB);