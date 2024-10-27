#ifndef SCENEPROPS_H
#define SCENEPROPS_H

#include "scene/main/node.h"

class SceneConfig : public Node {
	GDCLASS(SceneConfig, Node);

	HashMap<NodePath, Variant> properties;

protected:
	static void _bind_methods();

public:
	void add_property(NodePath p_path, Variant p_var);

	SceneConfig();
};



#endif
