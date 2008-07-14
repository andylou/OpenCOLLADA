/*
    Copyright (c) 2008 NetAllied Systems GmbH
	
    Licensed under the MIT Open Source License, for details 
    please see LICENSE file or the website
    http://www.opensource.org/licenses/mit-license.php
*/

#include "COLLADAMayaStableHeaders.h"
#include "COLLADAMayaAnimationKeys.h"


namespace COLLADAMaya
{

    // --------------------------------------------
    AnimationMKey::AnimationMKey ( uint _dimension )
            : dimension ( _dimension )
    {
        output = new float[dimension];
    }

    // --------------------------------------------
    AnimationMKey::~AnimationMKey()
    {
        delete output;
    }

    // --------------------------------------------
    AnimationMKeyBezier::AnimationMKeyBezier ( uint dimension )
            : AnimationMKey ( dimension )
    {
        inTangent = new TangentPoint[dimension];
        outTangent = new TangentPoint[dimension];
    }

    // --------------------------------------------
    AnimationMKeyBezier::~AnimationMKeyBezier()
    {
        delete[] inTangent;
        delete[] outTangent;
    }

    // --------------------------------------------
    AnimationMKeyTCB::AnimationMKeyTCB ( uint dimension )
            : AnimationMKey ( dimension )
    {
        tension = new float[dimension];
        continuity = new float[dimension];
        bias = new float[dimension];
        easeIn = new float[dimension];
        easeOut = new float[dimension];
    }

    // --------------------------------------------
    AnimationMKeyTCB::~AnimationMKeyTCB()
    {
        delete tension;
        delete continuity;
        delete bias;
        delete easeIn;
        delete easeOut;
    }
}