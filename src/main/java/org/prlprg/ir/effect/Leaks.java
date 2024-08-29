package org.prlprg.ir.effect;

import org.prlprg.ir.cfg.Node;

public record Leaks(Node<?> value) implements REffect {}
