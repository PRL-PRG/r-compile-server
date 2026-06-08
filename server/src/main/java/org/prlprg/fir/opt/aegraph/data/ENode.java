package org.prlprg.fir.opt.aegraph.data;

/// An e-node: an operator applied to child ids.
///
/// It's represented by `Expr`, the IR expression type, whose arguments are the child ids (see
/// [AEGraph])
record ENode<Expr>(Expr expression) implements Node {}
