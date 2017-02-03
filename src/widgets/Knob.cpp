#include "scene.hpp"
#include "gui.hpp"


namespace rack {

#define KNOB_SENSITIVITY 0.001


void Knob::onDragStart() {
	guiCursorLock();
}

void Knob::onDragMove(Vec mouseRel) {
	setValue(value - KNOB_SENSITIVITY * (maxValue - minValue) * mouseRel.y);
}

void Knob::onDragEnd() {
	guiCursorUnlock();
}


} // namespace rack
