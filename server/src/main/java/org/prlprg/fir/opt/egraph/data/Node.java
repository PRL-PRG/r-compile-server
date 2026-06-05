package org.prlprg.fir.opt.egraph.data;

/// A table entry: either an [ENode] or a [UnionNode].
sealed interface Node permits ENode, UnionNode {}
