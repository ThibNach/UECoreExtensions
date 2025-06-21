#include "BlueprintLibraries/CoreExtAnimationMontageBlueprintLibrary.h"

float UCoreExtAnimationMontageBlueprintLibrary::GetCurveFloat( const UAnimMontage * montage, const FName & curve_name, const float position )
{
    if (montage != nullptr)
    {
        FAnimExtractContext extract_context;
        extract_context.CurrentTime = position;
        return montage->EvaluateCurveData( curve_name, extract_context );
    }

    return 0.0f;
}