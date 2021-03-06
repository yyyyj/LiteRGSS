#ifndef CShaderSprite_Element_H
#define CShaderSprite_Element_H
#include "CSprite_Element.h"

class CShaderSprite_Element : public CSprite_Element {
	protected:
		sf::RenderStates* render_states;
    public:
		CShaderSprite_Element() : CSprite_Element(), render_states(nullptr) {};
        void draw(sf::RenderTarget& target) const override;
        void drawFast(sf::RenderTarget& target) const override;
        bool isViewport() const override { return false; };
        bool isPureSprite() const override { return true; };
		void setRenderState(sf::RenderStates* states) { render_states = states; };
		VALUE rRenderStates;
};
#endif