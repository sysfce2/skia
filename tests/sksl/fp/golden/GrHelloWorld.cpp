/* HELLO WORLD */

/**************************************************************************************************
 *** This file was autogenerated from GrHelloWorld.fp; do not modify.
 **************************************************************************************************/
#include "GrHelloWorld.h"

#include "src/core/SkUtils.h"
#include "src/gpu/GrTexture.h"
#include "src/gpu/glsl/GrGLSLFragmentProcessor.h"
#include "src/gpu/glsl/GrGLSLFragmentShaderBuilder.h"
#include "src/gpu/glsl/GrGLSLProgramBuilder.h"
#include "src/sksl/SkSLCPP.h"
#include "src/sksl/SkSLUtil.h"
class GrGLSLHelloWorld : public GrGLSLFragmentProcessor {
public:
    GrGLSLHelloWorld() {}
    void emitCode(EmitArgs& args) override {
        GrGLSLFPFragmentBuilder* fragBuilder = args.fFragBuilder;
        const GrHelloWorld& _outer = args.fFp.cast<GrHelloWorld>();
        (void) _outer;
        fragBuilder->codeAppendf(
R"SkSL(%s = half4(1.0);
)SkSL"
, args.fOutputColor);
    }
private:
    void onSetData(const GrGLSLProgramDataManager& pdman, const GrFragmentProcessor& _proc) override {
    }
};
GrGLSLFragmentProcessor* GrHelloWorld::onCreateGLSLInstance() const {
    return new GrGLSLHelloWorld();
}
void GrHelloWorld::onGetGLSLProcessorKey(const GrShaderCaps& caps, GrProcessorKeyBuilder* b) const {
}
bool GrHelloWorld::onIsEqual(const GrFragmentProcessor& other) const {
    const GrHelloWorld& that = other.cast<GrHelloWorld>();
    (void) that;
    return true;
}
bool GrHelloWorld::usesExplicitReturn() const {
    return false;
}
GrHelloWorld::GrHelloWorld(const GrHelloWorld& src)
: INHERITED(kGrHelloWorld_ClassID, src.optimizationFlags()) {
        this->cloneAndRegisterAllChildProcessors(src);
}
std::unique_ptr<GrFragmentProcessor> GrHelloWorld::clone() const {
    return std::make_unique<GrHelloWorld>(*this);
}
#if GR_TEST_UTILS
SkString GrHelloWorld::onDumpInfo() const {
    return SkString();
}
#endif
