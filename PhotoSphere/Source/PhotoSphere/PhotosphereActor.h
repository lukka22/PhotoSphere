

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhotosphereActor.generated.h"

UCLASS()
class PHOTOSPHERE_API APhotosphereActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	APhotosphereActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
