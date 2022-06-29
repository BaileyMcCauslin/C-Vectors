#ifndef VECTORS_H
#define VECTORS_H

#include <math.h>

// diffent dimensions vector config structs 
typedef struct vector2
    {
        float x;
        float y;
    }vector2;

typedef struct vector3
    { 
       float x;
       float y;
       float z;
    }vector3;


typedef struct vector4
    {
        float x;
        float y;
        float z;
        float w; 
    }vector4;

// Vector math prototypes 
vector2 addVect2s( vector2 vectorOne , vector2 vectorTwo );
vector3 addVect3s( vector3 vectorOne , vector3 vectorTwo );
vector4 addVect4s( vector4 vectorOne , vector4 vectorTwo );
float dotProduct2( vector2 vectorOne , vector2 vectorTwo );
float dotProduct3( vector3 vectorOne , vector3 vectorTwo );
float dotProduct4( vector4 vectorOne , vector4 vectorTwo );
vector3 crossVector3s( vector3 vectorOne , vector3 vectorTwo );
vector2 newVector2Coords( float x, float y );
vector3 newVector3Coords( float x, float y, float z );
vector4 newVector4Coords( float x, float y, float z , float w );
vector2 vect2Mult( vector2 vector , float scaler );
vector3 vect3Mult( vector3 vector , float scaler );
vector4 vect4Mult( vector4 vector , float scaler );
vector2 vect2Add( vector2 vector , float add );
vector3 vect3Add( vector3 vector , float add );
vector4 vect4Add( vector4 vector , float add );
vector2 vect2Sub( vector2 vector , float sub );
vector3 vect3Sub( vector3 vector , float sub );
vector4 vect4Sub( vector4 vector , float sub );
vector2 vect2Div( vector2 vector , float div );
vector3 vect3Div( vector3 vector , float div );
vector4 vect4Div( vector4 vector , float div );
vector2 normalizeVector2( vector2 vector );
vector3 normalizeVector3( vector3 vector );
vector4 normalizeVector4( vector4 vector );
vector2 subVector2s( vector2 vectorOne , vector2 vectorTwo );
vector3 subVector3s( vector3 vectorOne , vector3 vectorTwo );
vector4 subVector4s( vector4 vectorOne , vector4 vectorTwo );

#endif