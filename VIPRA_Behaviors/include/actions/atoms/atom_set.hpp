#ifndef VIPRA_BEHAVIORS_ATOM_SET_HPP
#define VIPRA_BEHAVIORS_ATOM_SET_HPP

#include <attributes/attributes.hpp>
#include "targets/target.hpp"

namespace BHVR {
struct AtomSet {
  Attribute       attribute;
  CAttributeValue value;
  bool            targetSelf;

  inline void operator()(Simpack pack, Target self, Target target,
                         VIPRA::State& state) const {
    if (targetSelf) {
      AttributeHandling::setValue(self, attribute, pack, state, value);
      return;
    }

    AttributeHandling::setValue(target, attribute, pack, state, value);
  }
};
}  // namespace BHVR

#endif