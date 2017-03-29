// Auto generated file, don't modify.

#ifndef CPGF_META_GINCUGTWEEN_H
#define CPGF_META_GINCUGTWEEN_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"


using namespace cpgf;


namespace meta_gincu { 


template <typename D>
void buildMetaClass_GTween(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _constructor<void * ()>();
    _d.CPGF_MD_TEMPLATE _method("getDuration", &D::ClassType::getDuration);
    _d.CPGF_MD_TEMPLATE _method("removeForInstance", &D::ClassType::removeForInstance);
    _d.CPGF_MD_TEMPLATE _method("ease", &D::ClassType::ease);
    _d.CPGF_MD_TEMPLATE _method("duration", &D::ClassType::duration);
    _d.CPGF_MD_TEMPLATE _method("backward", &D::ClassType::backward);
    _d.CPGF_MD_TEMPLATE _method("useFrames", &D::ClassType::useFrames);
    _d.CPGF_MD_TEMPLATE _method("delay", &D::ClassType::delay);
    _d.CPGF_MD_TEMPLATE _method("timeScale", &D::ClassType::timeScale);
    _d.CPGF_MD_TEMPLATE _method("repeat", &D::ClassType::repeat);
    _d.CPGF_MD_TEMPLATE _method("_repeat", &D::ClassType::repeat);
    _d.CPGF_MD_TEMPLATE _method("repeatDelay", &D::ClassType::repeatDelay);
    _d.CPGF_MD_TEMPLATE _method("yoyo", &D::ClassType::yoyo);
    _d.CPGF_MD_TEMPLATE _method("onComplete", &D::ClassType::onComplete);
    _d.CPGF_MD_TEMPLATE _method("onDestroy", &D::ClassType::onDestroy);
    _d.CPGF_MD_TEMPLATE _method("onUpdate", &D::ClassType::onUpdate);
    _d.CPGF_MD_TEMPLATE _method("onRepeat", &D::ClassType::onRepeat);
}


} // namespace meta_gincu




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
