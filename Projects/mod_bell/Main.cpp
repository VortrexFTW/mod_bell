#include "pch.h"

#include <stdio.h>
#include <stdlib.h>

#include <SDKHelper.h>
#include <memory>

// The modules internal name (Also used for the namespace name)
MODULE_MAIN("bell");

void ModuleRegister()
{
	SDK::RegisterFunction("ring", [](Galactic3D::Interfaces::INativeState* pState, int32_t argc, void* pUser) {
		SDK_TRY;

		SDK::State State(pState);

		//bell();
		fprintf(stdout, "\a" );

		SDK::BooleanValue Value(true);
		State.Return(Value);
		return true;

		SDK_ENDTRY;
	});
}

void ModuleUnregister()
{
}