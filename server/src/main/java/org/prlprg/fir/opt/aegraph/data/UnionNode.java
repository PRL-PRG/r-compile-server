package org.prlprg.fir.opt.aegraph.data;

/// A union of two earlier eclasses; either side is a valid representation of the value.
///
/// E-class IDs are IR expression arguments, `Arg` (see [AEGraph])
record UnionNode<Arg>(Arg left, Arg right) implements Node {}
