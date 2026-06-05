package org.prlprg.fir.opt.egraph.data;

import com.google.common.primitives.ImmutableIntArray;

/// An e-node: an operator applied to child e-class ids. Immutable in value.
public record ENode<Op>(Op op, ImmutableIntArray args) implements Node {}
