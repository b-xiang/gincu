// Auto generated file, don't modify.

#ifndef CPGF_META_GINCUELASTIC_H
#define CPGF_META_GINCUELASTIC_H


#include "cpgf/gmetadefine.h"
#include "cpgf/metadata/gmetadataconfig.h"
#include "cpgf/metadata/private/gmetadata_header.h"
#include "cpgf/gmetapolicy.h"
#include "cpgf/tween/gtimeline.h"
#include "cpgf/accessor/gaccessor.h"
#include "cpgf/gselectfunctionbyarity.h"
#include "gincu/ggeometry.h"


using namespace cpgf;


namespace meta_gincu { 


template <typename D>
void buildMetaClass_ElasticEase(D _d)
{
    (void)_d;
    using namespace cpgf;
    
    _d.CPGF_MD_TEMPLATE _method("easeIn", &D::ClassType::easeIn)
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
    ;
    _d.CPGF_MD_TEMPLATE _method("easeOut", &D::ClassType::easeOut)
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
    ;
    _d.CPGF_MD_TEMPLATE _method("easeInOut", &D::ClassType::easeInOut)
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
        ._default(copyVariantFromCopyable<GTweenNumber>(0.0f))
    ;
}


} // namespace meta_gincu




#include "cpgf/metadata/private/gmetadata_footer.h"


#endif
