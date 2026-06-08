package org.prlprg.fir.opt.aegraph.data;

/// A table entry: either an [ENode] or a [UnionNode].
sealed interface Node permits ENode, UnionNode {}
