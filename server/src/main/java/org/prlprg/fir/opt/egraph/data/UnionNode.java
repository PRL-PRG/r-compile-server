package org.prlprg.fir.opt.egraph.data;

/// A union of two earlier eclasses; either side is a valid representation of the value.
record UnionNode(int left, int right) implements Node {}
