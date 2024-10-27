#include "scene_config.h"

SceneConfig::SceneConfig() {

}

void SceneConfig::add_property(NodePath p_path, Variant p_var) {
	this->properties[p_path] = p_var;
}

void SceneConfig::_bind_methods() {
	ClassDB::bind_method(D_METHOD("add_property", "p_path", "p_var"), &SceneConfig::add_property);
}

