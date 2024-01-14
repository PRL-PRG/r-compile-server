package nrc.util;

public record Left<L, R>(L left) implements Either<L, R> {
}