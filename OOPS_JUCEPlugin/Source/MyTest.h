/*
  ==============================================================================

    MyTest.h
    Created: 23 Jan 2017 9:39:38am
    Author:  Michael R Mulshine

  ==============================================================================
*/

#ifndef FM_H_INCLUDED
#define FM_H_INCLUDED

float sampleRate;

float myGain, myT, myR, myW, myM, myAtt, myRel;

tRamp* rampOut;

t808Snare* snare;
t808Hihat* hihat;
t808Cowbell* cowbell;

#endif  // FM_H_INCLUDED
