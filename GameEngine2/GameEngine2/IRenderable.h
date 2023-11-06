#pragma once
#ifndef _IRENDERABLE_H_
#define _IRENDERABLE_H_

class IRenderable
{
private:
	friend class RenderSystem;
	virtual void Render()=0;
protected:
	IRenderable();
	~IRenderable();

};
#endif // !_IRENDERABLE_H_


