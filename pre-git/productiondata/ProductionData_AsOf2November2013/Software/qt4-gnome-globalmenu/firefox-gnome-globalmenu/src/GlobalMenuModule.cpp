#include <mozilla/ModuleUtils.h>
#include <nsIClassInfoImpl.h>

#include "GlobalMenu.h"

NS_GENERIC_FACTORY_CONSTRUCTOR(GlobalMenu);

NS_DEFINE_NAMED_CID(GLOBAL_MENU_CID);

static const mozilla::Module::CIDEntry kGlobalMenuCIDs[] = {
	{ &kGLOBAL_MENU_CID, false, NULL, GlobalMenuConstructor },
	{ NULL }
};

static const mozilla::Module::ContractIDEntry kGlobalMenuContracts[] = {
	{ GLOBAL_MENU_CONTRACTID, &kGLOBAL_MENU_CID },
	{ NULL }
};

static const mozilla::Module::CategoryEntry kGlobalMenuCategories[] = {
	{ NULL }
};

static const mozilla::Module kGlobalMenuModule = {
	mozilla::Module::kVersion,
	kGlobalMenuCIDs,
	kGlobalMenuContracts,
	kGlobalMenuCategories
};

NSMODULE_DEFN(GlobalMenuModule) = &kGlobalMenuModule;

