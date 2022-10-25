#pragma once

#include "RandomEngine/Graphics/Buffers/IndexBuffer.h"

namespace RandomEngine::Graphics {

	class OpenGLIndexBuffer : public IndexBuffer {

		private:
			unsigned int _rendererId;

		public:
			OpenGLIndexBuffer(unsigned int* data, unsigned int count);
			virtual ~OpenGLIndexBuffer();

			void Bind() const override;
			void Unbind() const override;
	};

}
