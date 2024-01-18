package org.prlprg.util;

public record Right<L, R>(R right) implements Either<L, R> {
}
