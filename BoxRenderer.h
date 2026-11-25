//
// Created by harry on 11/24/2026.
//

#ifndef SDP_SIMULATOR_BOXRENDERER_H
#define SDP_SIMULATOR_BOXRENDERER_H
#include "FEHLCD.h"
#include "FEHImages.h"
#include "RectangleCollider.h"

enum class RendererType {
    DEFAULT,
    COLLIDER_COLORED,
    COLLIDER_WITH_SPRITE,
    COLLIDER_WITH_ANIMATION

};
class BoxRenderer {
public:
    BoxRenderer();
    BoxRenderer(RectangleCollider collider);
    BoxRenderer(RectangleCollider collider, unsigned int color);
    BoxRenderer(RectangleCollider collider, FEHImage sprite);
    BoxRenderer(RectangleCollider collider, std::vector<FEHImage> sprites);

    void tick();
private:
    RectangleCollider collider;
    FEHImage sprite;
    std::vector<FEHImage> sprites;
    unsigned int color;
};


#endif //SDP_SIMULATOR_BOXRENDERER_H
