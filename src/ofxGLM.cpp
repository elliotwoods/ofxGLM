#include "ofxGLM.h"

#define OFXGLM_MATCHED_TYPE_OF_GLM_BODY(X, Y) \
	Y & toGLM(X & x) { \
	return *(Y *)& x; \
	} \
	const Y & toGLM(const X & x) { \
		return *(const Y *)& x; \
	} \
	X & toOf(Y & y) { \
		return *(X *)& y; \
	} \
	const X & toOf(const Y & y) { \
		return *(const X *)& y; \
	}

namespace ofxGLM {

	using namespace glm;

	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofVec2f, vec2);
	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofVec3f, vec3);
	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofVec4f, vec4);
	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofQuaternion, glm::quat);
	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofMatrix3x3, mat3);
	OFXGLM_MATCHED_TYPE_OF_GLM_BODY(ofMatrix4x4, mat4);
}
