package org.prlprg.ir.cfg;

/**
 * IR node which corresponds to a {@link org.prlprg.rshruntime.DeoptReason}.
 *
 * <p>Currently only includes {@linkplain ConstantDeoptReason constants} and {@linkplain
 * DeoptReasonPhi phis}.
 */
public interface DeoptReason extends Node {
  @Override
  NodeId<? extends DeoptReason> id();
}
