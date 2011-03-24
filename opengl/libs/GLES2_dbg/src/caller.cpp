/*
 ** Copyright 2011, The Android Open Source Project
 **
 ** Licensed under the Apache License, Version 2.0 (the "License");
 ** you may not use this file except in compliance with the License.
 ** You may obtain a copy of the License at
 **
 **     http://www.apache.org/licenses/LICENSE-2.0
 **
 ** Unless required by applicable law or agreed to in writing, software
 ** distributed under the License is distributed on an "AS IS" BASIS,
 ** WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 ** See the License for the specific language governing permissions and
 ** limitations under the License.
 */

// auto generated by generate_caller_cpp.py
// implement declarations in caller.h

#include "header.h"

namespace android {

static const int * GenerateCall_glCompressedTexImage2D(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glCompressedTexSubImage2D(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glDrawElements(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGenBuffers(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGenFramebuffers(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGenRenderbuffers(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGenTextures(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetActiveAttrib(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetActiveUniform(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetAttachedShaders(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetBooleanv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetBufferParameteriv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetFloatv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetFramebufferAttachmentParameteriv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetIntegerv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetProgramiv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetProgramInfoLog(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetRenderbufferParameteriv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetShaderiv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetShaderInfoLog(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetShaderPrecisionFormat(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetShaderSource(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetString(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetTexParameterfv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetTexParameteriv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetUniformfv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetUniformiv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetVertexAttribfv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetVertexAttribiv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glGetVertexAttribPointerv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glReadPixels(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glShaderBinary(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glShaderSource(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glTexImage2D(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glTexParameterfv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glTexParameteriv(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glTexSubImage2D(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);
static const int * GenerateCall_glVertexAttribPointer(DbgContext * const dbg,
    const glesv2debugger::Message & cmd, glesv2debugger::Message & msg, const int * const prevRet);

#include "caller.h"

const int * GenerateCall(DbgContext * const dbg, const glesv2debugger::Message & cmd,
                  glesv2debugger::Message & msg, const int * const prevRet)
{
    LOGD("GenerateCall function=%u", cmd.function());
    const int * ret = prevRet; // only some functions have return value
    gl_hooks_t::gl_t const * const _c = &getGLTraceThreadSpecific()->gl;
    nsecs_t c0 = systemTime(timeMode);
    switch (cmd.function()) {    case glesv2debugger::Message_Function_glActiveTexture:
        dbg->hooks->gl.glActiveTexture(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glAttachShader:
        dbg->hooks->gl.glAttachShader(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBindAttribLocation:
        dbg->hooks->gl.glBindAttribLocation(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLuint>(cmd.arg1()), 
            reinterpret_cast<GLchar*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glBindBuffer:
        dbg->hooks->gl.glBindBuffer(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBindFramebuffer:
        dbg->hooks->gl.glBindFramebuffer(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBindRenderbuffer:
        dbg->hooks->gl.glBindRenderbuffer(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBindTexture:
        dbg->hooks->gl.glBindTexture(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBlendColor:
        dbg->hooks->gl.glBlendColor(
            static_cast<GLclampf>(cmd.arg0()), static_cast<GLclampf>(cmd.arg1()), 
            static_cast<GLclampf>(cmd.arg2()), static_cast<GLclampf>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glBlendEquation:
        dbg->hooks->gl.glBlendEquation(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glBlendEquationSeparate:
        dbg->hooks->gl.glBlendEquationSeparate(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBlendFunc:
        dbg->hooks->gl.glBlendFunc(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glBlendFuncSeparate:
        dbg->hooks->gl.glBlendFuncSeparate(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()), static_cast<GLenum>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glBufferData:
        dbg->hooks->gl.glBufferData(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLsizeiptr>(cmd.arg1()), 
            reinterpret_cast<GLvoid*>(const_cast<char *>(cmd.data().data())), 
            static_cast<GLenum>(cmd.arg3()));
        break;
    case glesv2debugger::Message_Function_glBufferSubData:
        dbg->hooks->gl.glBufferSubData(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLintptr>(cmd.arg1()), 
            static_cast<GLsizeiptr>(cmd.arg2()), reinterpret_cast<GLvoid*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glCheckFramebufferStatus:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glCheckFramebufferStatus(
            static_cast<GLenum>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glClear:
        dbg->hooks->gl.glClear(
            static_cast<GLbitfield>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glClearColor:
        dbg->hooks->gl.glClearColor(
            static_cast<GLclampf>(cmd.arg0()), static_cast<GLclampf>(cmd.arg1()), 
            static_cast<GLclampf>(cmd.arg2()), static_cast<GLclampf>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glClearDepthf:
        dbg->hooks->gl.glClearDepthf(
            static_cast<GLclampf>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glClearStencil:
        dbg->hooks->gl.glClearStencil(
            static_cast<GLint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glColorMask:
        dbg->hooks->gl.glColorMask(
            GLboolean(cmd.arg0()), GLboolean(cmd.arg1()), GLboolean(cmd.arg2()), 
            GLboolean(cmd.arg3()));
        break;
    case glesv2debugger::Message_Function_glCompileShader:
        dbg->hooks->gl.glCompileShader(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glCompressedTexImage2D:
        ret = GenerateCall_glCompressedTexImage2D(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glCompressedTexSubImage2D:
        ret = GenerateCall_glCompressedTexSubImage2D(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glCopyTexImage2D:
        dbg->hooks->gl.glCopyTexImage2D(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()), static_cast<GLint>(cmd.arg3()), 
            static_cast<GLint>(cmd.arg4()), static_cast<GLsizei>(cmd.arg5()), 
            static_cast<GLsizei>(cmd.arg6()), static_cast<GLint>(cmd.arg7())
            );
        break;
    case glesv2debugger::Message_Function_glCopyTexSubImage2D:
        dbg->hooks->gl.glCopyTexSubImage2D(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()), static_cast<GLint>(cmd.arg3()), 
            static_cast<GLint>(cmd.arg4()), static_cast<GLint>(cmd.arg5()), 
            static_cast<GLsizei>(cmd.arg6()), static_cast<GLsizei>(cmd.arg7())
            );
        break;
    case glesv2debugger::Message_Function_glCreateProgram:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glCreateProgram(
            )));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glCreateShader:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glCreateShader(
            static_cast<GLenum>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glCullFace:
        dbg->hooks->gl.glCullFace(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDeleteBuffers:
        dbg->hooks->gl.glDeleteBuffers(
            static_cast<GLsizei>(cmd.arg0()), reinterpret_cast<GLuint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glDeleteFramebuffers:
        dbg->hooks->gl.glDeleteFramebuffers(
            static_cast<GLsizei>(cmd.arg0()), reinterpret_cast<GLuint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glDeleteProgram:
        dbg->hooks->gl.glDeleteProgram(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDeleteRenderbuffers:
        dbg->hooks->gl.glDeleteRenderbuffers(
            static_cast<GLsizei>(cmd.arg0()), reinterpret_cast<GLuint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glDeleteShader:
        dbg->hooks->gl.glDeleteShader(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDeleteTextures:
        dbg->hooks->gl.glDeleteTextures(
            static_cast<GLsizei>(cmd.arg0()), reinterpret_cast<GLuint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glDepthFunc:
        dbg->hooks->gl.glDepthFunc(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDepthMask:
        dbg->hooks->gl.glDepthMask(
            GLboolean(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDepthRangef:
        dbg->hooks->gl.glDepthRangef(
            static_cast<GLclampf>(cmd.arg0()), static_cast<GLclampf>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glDetachShader:
        dbg->hooks->gl.glDetachShader(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glDisable:
        dbg->hooks->gl.glDisable(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDisableVertexAttribArray:
        dbg->hooks->gl.glDisableVertexAttribArray(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glDrawArrays:
        dbg->hooks->gl.glDrawArrays(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLsizei>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glDrawElements:
        ret = GenerateCall_glDrawElements(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glEnable:
        dbg->hooks->gl.glEnable(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glEnableVertexAttribArray:
        dbg->hooks->gl.glEnableVertexAttribArray(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glFinish:
        dbg->hooks->gl.glFinish(
            );
        break;
    case glesv2debugger::Message_Function_glFlush:
        dbg->hooks->gl.glFlush(
            );
        break;
    case glesv2debugger::Message_Function_glFramebufferRenderbuffer:
        dbg->hooks->gl.glFramebufferRenderbuffer(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()), static_cast<GLuint>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glFramebufferTexture2D:
        dbg->hooks->gl.glFramebufferTexture2D(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()), static_cast<GLuint>(cmd.arg3()), 
            static_cast<GLint>(cmd.arg4()));
        break;
    case glesv2debugger::Message_Function_glFrontFace:
        dbg->hooks->gl.glFrontFace(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glGenBuffers:
        ret = GenerateCall_glGenBuffers(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGenerateMipmap:
        dbg->hooks->gl.glGenerateMipmap(
            static_cast<GLenum>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glGenFramebuffers:
        ret = GenerateCall_glGenFramebuffers(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGenRenderbuffers:
        ret = GenerateCall_glGenRenderbuffers(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGenTextures:
        ret = GenerateCall_glGenTextures(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGetActiveAttrib:
        ret = GenerateCall_glGetActiveAttrib(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetActiveUniform:
        ret = GenerateCall_glGetActiveUniform(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetAttachedShaders:
        ret = GenerateCall_glGetAttachedShaders(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetAttribLocation:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glGetAttribLocation(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLchar*>(const_cast<char *>(cmd.data().data()))
            )));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glGetBooleanv:
        ret = GenerateCall_glGetBooleanv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetBufferParameteriv:
        ret = GenerateCall_glGetBufferParameteriv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetError:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glGetError(
            )));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glGetFloatv:
        ret = GenerateCall_glGetFloatv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetFramebufferAttachmentParameteriv:
        ret = GenerateCall_glGetFramebufferAttachmentParameteriv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetIntegerv:
        ret = GenerateCall_glGetIntegerv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetProgramiv:
        ret = GenerateCall_glGetProgramiv(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGetProgramInfoLog:
        ret = GenerateCall_glGetProgramInfoLog(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetRenderbufferParameteriv:
        ret = GenerateCall_glGetRenderbufferParameteriv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetShaderiv:
        ret = GenerateCall_glGetShaderiv(dbg, cmd, msg, prevRet);
        break; // annotated output pointers
    case glesv2debugger::Message_Function_glGetShaderInfoLog:
        ret = GenerateCall_glGetShaderInfoLog(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetShaderPrecisionFormat:
        ret = GenerateCall_glGetShaderPrecisionFormat(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetShaderSource:
        ret = GenerateCall_glGetShaderSource(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetString:
        ret = GenerateCall_glGetString(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetTexParameterfv:
        ret = GenerateCall_glGetTexParameterfv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetTexParameteriv:
        ret = GenerateCall_glGetTexParameteriv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetUniformfv:
        ret = GenerateCall_glGetUniformfv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetUniformiv:
        ret = GenerateCall_glGetUniformiv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetUniformLocation:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glGetUniformLocation(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLchar*>(const_cast<char *>(cmd.data().data()))
            )));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glGetVertexAttribfv:
        ret = GenerateCall_glGetVertexAttribfv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetVertexAttribiv:
        ret = GenerateCall_glGetVertexAttribiv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glGetVertexAttribPointerv:
        ret = GenerateCall_glGetVertexAttribPointerv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glHint:
        dbg->hooks->gl.glHint(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glIsBuffer:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsBuffer(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsEnabled:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsEnabled(
            static_cast<GLenum>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsFramebuffer:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsFramebuffer(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsProgram:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsProgram(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsRenderbuffer:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsRenderbuffer(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsShader:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsShader(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glIsTexture:
        msg.set_ret(static_cast<int>(dbg->hooks->gl.glIsTexture(
            static_cast<GLuint>(cmd.arg0()))));
        if (cmd.has_ret())
            ret = reinterpret_cast<int *>(msg.ret());
        break;
    case glesv2debugger::Message_Function_glLineWidth:
        dbg->hooks->gl.glLineWidth(
            static_cast<GLfloat>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glLinkProgram:
        dbg->hooks->gl.glLinkProgram(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glPixelStorei:
        dbg->hooks->gl.glPixelStorei(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glPolygonOffset:
        dbg->hooks->gl.glPolygonOffset(
            static_cast<GLfloat>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glReadPixels:
        ret = GenerateCall_glReadPixels(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glReleaseShaderCompiler:
        dbg->hooks->gl.glReleaseShaderCompiler(
            );
        break;
    case glesv2debugger::Message_Function_glRenderbufferStorage:
        dbg->hooks->gl.glRenderbufferStorage(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLsizei>(cmd.arg2()), static_cast<GLsizei>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glSampleCoverage:
        dbg->hooks->gl.glSampleCoverage(
            static_cast<GLclampf>(cmd.arg0()), GLboolean(cmd.arg1()));
        break;
    case glesv2debugger::Message_Function_glScissor:
        dbg->hooks->gl.glScissor(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLsizei>(cmd.arg2()), static_cast<GLsizei>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glShaderBinary:
        ret = GenerateCall_glShaderBinary(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glShaderSource:
        ret = GenerateCall_glShaderSource(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glStencilFunc:
        dbg->hooks->gl.glStencilFunc(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLuint>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glStencilFuncSeparate:
        dbg->hooks->gl.glStencilFuncSeparate(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()), static_cast<GLuint>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glStencilMask:
        dbg->hooks->gl.glStencilMask(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glStencilMaskSeparate:
        dbg->hooks->gl.glStencilMaskSeparate(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLuint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glStencilOp:
        dbg->hooks->gl.glStencilOp(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glStencilOpSeparate:
        dbg->hooks->gl.glStencilOpSeparate(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLenum>(cmd.arg2()), static_cast<GLenum>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glTexImage2D:
        ret = GenerateCall_glTexImage2D(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glTexParameterf:
        dbg->hooks->gl.glTexParameterf(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glTexParameterfv:
        ret = GenerateCall_glTexParameterfv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glTexParameteri:
        dbg->hooks->gl.glTexParameteri(
            static_cast<GLenum>(cmd.arg0()), static_cast<GLenum>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glTexParameteriv:
        ret = GenerateCall_glTexParameteriv(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glTexSubImage2D:
        ret = GenerateCall_glTexSubImage2D(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glUniform1f:
        dbg->hooks->gl.glUniform1f(
            static_cast<GLint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glUniform1fv:
        dbg->hooks->gl.glUniform1fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform1i:
        dbg->hooks->gl.glUniform1i(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glUniform1iv:
        dbg->hooks->gl.glUniform1iv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform2f:
        dbg->hooks->gl.glUniform2f(
            static_cast<GLint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glUniform2fv:
        dbg->hooks->gl.glUniform2fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform2i:
        dbg->hooks->gl.glUniform2i(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glUniform2iv:
        dbg->hooks->gl.glUniform2iv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform3f:
        dbg->hooks->gl.glUniform3f(
            static_cast<GLint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()), static_cast<GLfloat>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glUniform3fv:
        dbg->hooks->gl.glUniform3fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform3i:
        dbg->hooks->gl.glUniform3i(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()), static_cast<GLint>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glUniform3iv:
        dbg->hooks->gl.glUniform3iv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform4f:
        dbg->hooks->gl.glUniform4f(
            static_cast<GLint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()), static_cast<GLfloat>(cmd.arg3()), 
            static_cast<GLfloat>(cmd.arg4()));
        break;
    case glesv2debugger::Message_Function_glUniform4fv:
        dbg->hooks->gl.glUniform4fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniform4i:
        dbg->hooks->gl.glUniform4i(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLint>(cmd.arg2()), static_cast<GLint>(cmd.arg3()), 
            static_cast<GLint>(cmd.arg4()));
        break;
    case glesv2debugger::Message_Function_glUniform4iv:
        dbg->hooks->gl.glUniform4iv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            reinterpret_cast<GLint*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniformMatrix2fv:
        dbg->hooks->gl.glUniformMatrix2fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            GLboolean(cmd.arg2()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniformMatrix3fv:
        dbg->hooks->gl.glUniformMatrix3fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            GLboolean(cmd.arg2()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUniformMatrix4fv:
        dbg->hooks->gl.glUniformMatrix4fv(
            static_cast<GLint>(cmd.arg0()), static_cast<GLsizei>(cmd.arg1()), 
            GLboolean(cmd.arg2()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glUseProgram:
        dbg->hooks->gl.glUseProgram(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glValidateProgram:
        dbg->hooks->gl.glValidateProgram(
            static_cast<GLuint>(cmd.arg0()));
        break;
    case glesv2debugger::Message_Function_glVertexAttrib1f:
        dbg->hooks->gl.glVertexAttrib1f(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1())
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttrib1fv:
        dbg->hooks->gl.glVertexAttrib1fv(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttrib2f:
        dbg->hooks->gl.glVertexAttrib2f(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()));
        break;
    case glesv2debugger::Message_Function_glVertexAttrib2fv:
        dbg->hooks->gl.glVertexAttrib2fv(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttrib3f:
        dbg->hooks->gl.glVertexAttrib3f(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()), static_cast<GLfloat>(cmd.arg3())
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttrib3fv:
        dbg->hooks->gl.glVertexAttrib3fv(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttrib4f:
        dbg->hooks->gl.glVertexAttrib4f(
            static_cast<GLuint>(cmd.arg0()), static_cast<GLfloat>(cmd.arg1()), 
            static_cast<GLfloat>(cmd.arg2()), static_cast<GLfloat>(cmd.arg3()), 
            static_cast<GLfloat>(cmd.arg4()));
        break;
    case glesv2debugger::Message_Function_glVertexAttrib4fv:
        dbg->hooks->gl.glVertexAttrib4fv(
            static_cast<GLuint>(cmd.arg0()), reinterpret_cast<GLfloat*>(const_cast<char *>(cmd.data().data()))
            );
        break;
    case glesv2debugger::Message_Function_glVertexAttribPointer:
        ret = GenerateCall_glVertexAttribPointer(dbg, cmd, msg, prevRet);
        break;
    case glesv2debugger::Message_Function_glViewport:
        dbg->hooks->gl.glViewport(
            static_cast<GLint>(cmd.arg0()), static_cast<GLint>(cmd.arg1()), 
            static_cast<GLsizei>(cmd.arg2()), static_cast<GLsizei>(cmd.arg3())
            );
        break;
    default:
        assert(0);
    }
    msg.set_time((systemTime(timeMode) - c0) * 1e-6f);
    msg.set_context_id(reinterpret_cast<int>(dbg));
    msg.set_function(cmd.function());
    msg.set_type(glesv2debugger::Message_Type_AfterCall);
    return ret;
}

}; // name space android {
