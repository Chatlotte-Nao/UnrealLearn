// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystem/WarriorAbilitySystemComponent.h"
#include "AbilitySystem/Abilities/WarriorGameplayAbility.h"
#include "Items/Weapons/WarriorHeroWeapon.h"


void UWarriorAbilitySystemComponent::OnAbilityInputPressed(const FGameplayTag& InInputTag)
{
	if (!InInputTag.IsValid())
	{
		return;
	}
	for (const FGameplayAbilitySpec& AbilitySpec : GetActivatableAbilities())
	{
		if (!AbilitySpec.DynamicAbilityTags.HasTagExact(InInputTag)) continue;
		TryActivateAbility(AbilitySpec.Handle);
	}
}

void UWarriorAbilitySystemComponent::OnAbilityInputReleased(const FGameplayTag& InInputTag)
{
	
}

void UWarriorAbilitySystemComponent::GrantHeroWeaponAbilities(const TArray<FWarriorHeroAbilitySet>& InDefaultWeaponAbilities,
                                                              int32 ApplyLevel,TArray<FGameplayAbilitySpecHandle>& OutGrantedAbilitySpecHandles)
{
	if (!InDefaultWeaponAbilities.IsEmpty())
	{
		for (const FWarriorHeroAbilitySet& AbilitySet : InDefaultWeaponAbilities)
		{
			if (!AbilitySet.IsValid()) continue;
			
			FGameplayAbilitySpec AbilitySpec(AbilitySet.AbilityToGrant);
			AbilitySpec.SourceObject=GetAvatarActor();
			AbilitySpec.Level=ApplyLevel;
			AbilitySpec.DynamicAbilityTags.AddTag(AbilitySet.InputTag);
			OutGrantedAbilitySpecHandles.AddUnique(GiveAbility(AbilitySpec));
		}
	}
}

void UWarriorAbilitySystemComponent::RemovedGrantedHeroWeaponAbilities(UPARAM(ref)TArray<FGameplayAbilitySpecHandle>& InSpecHandlesToRemove)
{
	if (InSpecHandlesToRemove.IsEmpty())
	{
		return;
	}
}
