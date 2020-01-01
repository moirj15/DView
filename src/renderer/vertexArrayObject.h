//
// Created by moirj15 on 1/1/20.
//

#pragma once

#include "../common.h"
#include "vertexBufferObject.h"
#include "indexBufferObject.h"

class VertexArray
{
  u32 mHandle;
  IndexBuffer mIndexBuffer;
  std::vector<VertexBuffer> mVertexBuffers;

public:
  inline void Bind() const
  {
    glBindVertexArray(mHandle);
    mIndexBuffer.Bind();
  }
  inline void Unbind() const
  {
    glBindVertexArray(0);
    mIndexBuffer.Unbind();
  }

  inline void AddVBO(const VertexBuffer &vbo);
  inline void AddIBO(const IndexBuffer &ibo);
};

