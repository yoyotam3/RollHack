#include "src/game/envfx_snow.h"

const GeoLayout MODEL_MARBLE_GEO[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, MODEL_MARBLE_Icosphere_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
