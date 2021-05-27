// Fill out your copyright notice in the Description page of Project Settings.


#include "HitCameraShake.h"


UHitCameraShake::UHitCameraShake()
{
	OscillationDuration = 0.5f;

	LocOscillation.Y.Amplitude = 1.f;
	LocOscillation.Y.Frequency = 100.f;

	bSingleInstance = true;
}