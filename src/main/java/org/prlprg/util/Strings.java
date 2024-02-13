package org.prlprg.util;

import java.util.Arrays;
import java.util.Collection;
import java.util.StringJoiner;
import java.util.function.Function;
import java.util.stream.Collector;
import javax.annotation.Nullable;

public class Strings {
  @SafeVarargs
  public static <T> String join(String sep, T... items) {
    return Arrays.stream(items).collect(joining(sep));
  }

  @SafeVarargs
  public static <T> String join(String sep, Function<T, String> toString, T... items) {
    return Arrays.stream(items).map(toString).collect(joining(sep));
  }

  public static <T> String join(String sep, Collection<T> items) {
    return items.stream().collect(joining(sep));
  }

  public static <T> String join(String sep, Function<T, String> toString, Collection<T> items) {
    return items.stream().map(toString).collect(joining(sep));
  }

  public static <T> Collector<T, ?, String> joining(String sep) {
    return Collector.of(
        () -> new StringJoiner(sep),
        (r, e) -> r.add(e.toString()),
        StringJoiner::merge,
        StringJoiner::toString,
        Collector.Characteristics.UNORDERED);
  }

  public static @Nullable String stripPrefix(String str, String prefix) {
    return str.startsWith(prefix) ? str.substring(prefix.length()) : null;
  }

  private Strings() {}
}
