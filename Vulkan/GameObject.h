#pragma once
#include <vector>
#include <glm/glm.hpp>

class Mesh;
class DescriptorSetVK;
class UniformBufferVK;

class GameObject
{
public:
	GameObject(DescriptorSetVK* descriptorSet, Mesh* mesh, UniformBufferVK* uniformBuffer);
	virtual ~GameObject();

	Mesh* getMesh() const;
	virtual DescriptorSetVK* getDescriptorSet() const;

protected:
	Mesh* m_Mesh;
	UniformBufferVK* m_UniformBuffer;
	DescriptorSetVK* m_DescriptorSet;
};