#pragma once

#include "RandomEngine/Graphics/Shader.h"
#include "RandomEngine/Maths/Maths.h"

namespace RandomEngine::Graphics {

	class OpenGLShader : public Shader {

		private:
			unsigned int _rendererId;

		public:
			OpenGLShader(const std::string& vertexSrc, const std::string& fragmentSrc);
			virtual ~OpenGLShader();

			void Bind() const override;
			void Unbind() const override;

			void Define(const std::string& name, int value);
			void Define(const std::string& name, float value);
			void Define(const std::string& name, const Maths::Vector2f& value);
			void Define(const std::string& name, const Maths::Vector3f& value);
			void Define(const std::string& name, const Maths::Vector4f& value);
			void Define(const std::string& name, const Maths::Matrix3f& value);
			void Define(const std::string& name, const Maths::Matrix4f& value);
	};

}