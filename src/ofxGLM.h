#pragma once
#include "../libs/glm/glm.hpp"
#include "../libs/glm/ext.hpp"

#include "ofMain.h"

#define OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(X, Y) \
	Y & toGLM(X &); \
	const Y & toGLM(const X &); \
	X & toOf(Y &); \
	const X & toOf(const Y &);

namespace ofxGLM {
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofVec2f, glm::vec2);
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofVec3f, glm::vec3);
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofVec4f, glm::vec4);
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofQuaternion, glm::quat);
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofMatrix3x3, glm::mat3);
	OFXGLM_MATCHED_TYPE_OF_GLM_HEADER(ofMatrix4x4, glm::mat4);
}