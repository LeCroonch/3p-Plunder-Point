#pragma once

UENUM(BlueprintType)
enum class ETurningInPlace : uint8
{
	ETIP_Left UMETA(DisplayName = "TurningLeft"),
	ETIP_Right UMETA(DisplayName = "TurningRight"),
	ETIP_NotTurning UMETA(DisplayName = "Not Turning"),

	ETIP_MAX UMETA(DisplayName = "DefaultMAX")
};