#pragma once
#include "Module.h"

class ClickGuiMod :
	public IModule
{
public:
	ClickGuiMod();
	~ClickGuiMod();

	// Inherited via IModule
	virtual const char* getModuleName() override;
	virtual void onDisable() override;
	virtual void onEnable() override;
};
