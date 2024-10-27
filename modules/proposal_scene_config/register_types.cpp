/* register_types.cpp */

#include "register_types.h"

#include "core/object/class_db.h"
#include "scene_config.h"

void initialize_proposal_scene_config_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	ClassDB::register_class<SceneConfig>();
}

void uninitialize_proposal_scene_config_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
		return;
	}
	// Nothing to do here in this example.
}
