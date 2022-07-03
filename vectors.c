#include "vectors.h"


// Simple vector math

vector2 addVect2s( vector2 vectorOne , vector2 vectorTwo )
    {
        vector2 newVect;
        newVect.x = vectorOne.x + vectorTwo.x;
        newVect.y = vectorOne.y + vectorTwo.y;
        return newVect; 
    }

vector3 addVect3s( vector3 vectorOne , vector3 vectorTwo )
    {
        vector3 newVect; 
        newVect.x = vectorOne.x + vectorTwo.x;
        newVect.y = vectorOne.y + vectorTwo.y;
        newVect.z = vectorOne.z + vectorTwo.z;
        return newVect; 
    }

vector4 addVect4s( vector4 vectorOne , vector4 vectorTwo )
    {
        vector4 newVect; 
        newVect.x = vectorOne.x + vectorTwo.x;
        newVect.y = vectorOne.y + vectorTwo.y;
        newVect.z = vectorOne.z + vectorTwo.z;
        newVect.w = vectorOne.w + vectorTwo.w; 
        return newVect; 
    }


float dotProduct2( vector2 vectorOne , vector2 vectorTwo )
    {
        return vectorOne.x * vectorTwo.x + vectorOne.y * vectorTwo.y;
    }

float dotProduct3( vector3 vectorOne , vector3 vectorTwo )
    {
        return vectorOne.x * vectorTwo.x + vectorOne.y * vectorTwo.y + vectorOne.z * vectorTwo.z;
    }

float dotProduct4( vector4 vectorOne , vector4 vectorTwo )
    {
        return vectorOne.x * vectorTwo.x + vectorOne.y * vectorTwo.y + vectorOne.z * vectorTwo.z + vectorOne.w * vectorTwo.w;
    }

vector3 crossVector3s( vector3 vectorOne , vector3 vectorTwo )
    {
        vector3 crossVector;
        crossVector.x = vectorOne.y * vectorTwo.z - vectorOne.z * vectorTwo.y;
        crossVector.y = vectorOne.z * vectorTwo.x - vectorOne.x * vectorTwo.z;
        crossVector.z = vectorOne.x * vectorTwo.y - vectorOne.y * vectorTwo.x; 
        return crossVector; 
    }

vector2 newVector2Coords( float x, float y )
    {
        vector2 newVector;
        newVector.x = x;
        newVector.y = y;
        return newVector; 
    }

vector3 newVector3Coords( float x, float y, float z )
    {
        vector3 newVector;
        newVector.x = x;
        newVector.y = y;
        newVector.z = z; 
        return newVector; 
    }

vector4 newVector4Coords( float x, float y, float z , float w )
    {
        vector4 newVector;
        newVector.x = x;
        newVector.y = y;
        newVector.z = z; 
        newVector.w = w;
        return newVector; 
    }

vector2 vect2Mult( vector2 vector , float scaler )
    {
        vector.x *= scaler;
        vector.y *= scaler;
        return vector;  
    }

vector3 vect3Mult( vector3 vector , float scaler )
    {
        vector.x *= scaler;
        vector.y *= scaler;
        vector.z *= scaler;
        return vector;  
    }

vector4 vect4Mult( vector4 vector , float scaler )
    {
        vector.x *= scaler;
        vector.y *= scaler;
        vector.z *= scaler;
        vector.w *= scaler; 
        return vector;  
    }

vector2 vect2Add( vector2 vector , float add )
    {
        vector.x += add;
        vector.y += add;
        return vector; 
    }

vector3 vect3Add( vector3 vector , float add )
    {
        vector.x += add;
        vector.y += add;
        vector.z += add;
        return vector; 
    }

vector4 vect4Add( vector4 vector , float add )
    {
        vector.x += add;
        vector.y += add;
        vector.z += add;
        vector.w += add;
        return vector; 
    }

vector2 vect2Sub( vector2 vector , float sub )
    {
        vector.x -= sub;
        vector.y -= sub;
        return vector; 
    }

vector3 vect3Sub( vector3 vector , float sub )
    {
        vector.x -= sub;
        vector.y -= sub;
        vector.z -= sub;
        return vector; 
    }

vector4 vect4Sub( vector4 vector , float sub )
    {
        vector.x -= sub;
        vector.y -= sub;
        vector.z -= sub;
        vector.w -= sub;
        return vector; 
    }

vector2 vect2Div( vector2 vector , float div )
    {
        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / div; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / div; 
        }

        return vector;  
    }

vector3 vect3Div( vector3 vector , float div )
    {
        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / div; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / div; 
        }
        if( vector.z == 0 )
        {
            vector.z = 0; 
        }
        else
        {
            vector.z = vector.z / div;
        }
        return vector;     
    }

vector4 vect4Div( vector4 vector , float div )
    {
        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / div; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / div; 
        }
        if( vector.z == 0 )
        {
            vector.z = 0; 
        }
        else
        {
            vector.z = vector.z / div;
        }
        if( vector.w == 0 )
        {
            vector.w = 0;
        }
        else
        {
            vector.w = vector.w / div;
        }

        return vector;     
    }

vector2 normalizeVector2( vector2 vector )
    {
        float mag; 
        mag = sqrt( ( vector.x * vector.x ) + ( vector.y * vector.y ) );

        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / mag; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / mag; 
        }

        return vector; 
    }

vector3 normalizeVector3( vector3 vector )
    {
        float mag; 
        mag = sqrt( ( vector.x * vector.x ) + ( vector.y * vector.y ) + ( vector.z * vector.z ) );

        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / mag; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / mag; 
        }
        if( vector.z == 0 )
        {
            vector.z = 0; 
        }
        else
        {
            vector.z = vector.z / mag;
        }
        return vector; 
    }

vector4 normalizeVector4( vector4 vector )
    {
        float mag; 
        mag = sqrt( ( vector.x * vector.x ) + ( vector.y * vector.y ) + ( vector.z * vector.z ) + ( vector.w * vector.w) );

        if( vector.x == 0 )
        {
            vector.x = 0;
        }
        else
        {
            vector.x = vector.x / mag; 
        }
        if( vector.y == 0 )
        {
            vector.y = 0;
        }
        else
        {
            vector.y = vector.y / mag; 
        }
        if( vector.z == 0 )
        {
            vector.z = 0; 
        }
        else
        {
            vector.z = vector.z / mag;
        }
        if( vector.w == 0 )
        {
            vector.w = 0;
        }
        else
        {
            vector.w = vector.w / mag; 
        }
        return vector; 
    }

vector2 subVector2s( vector2 vectorOne , vector2 vectorTwo )
    {
        vector2 newVect;
        newVect.x = vectorOne.x - vectorTwo.x;
        newVect.y = vectorOne.y - vectorTwo.y; 
        return newVect; 
    }

vector3 subVector3s( vector3 vectorOne , vector3 vectorTwo )
    {
        vector3 newVect;
        newVect.x = vectorOne.x - vectorTwo.x;
        newVect.y = vectorOne.y - vectorTwo.y;
        newVect.z = vectorOne.z - vectorTwo.z;
        return newVect;
    }

vector4 subVector4s( vector4 vectorOne , vector4 vectorTwo )
    {
        vector4 newVect;
        newVect.x = vectorOne.x - vectorTwo.x;
        newVect.y = vectorOne.y - vectorTwo.y;
        newVect.z = vectorOne.z - vectorTwo.z;
        newVect.w = vectorOne.w - vectorTwo.w; 
        return newVect;
    }
