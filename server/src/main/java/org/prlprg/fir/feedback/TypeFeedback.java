package org.prlprg.fir.feedback;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Type feedback for a single register.
public class TypeFeedback {
  static final TypeFeedback EMPTY = new TypeFeedback();

  private final Map<Type, Integer> hits = new LinkedHashMap<>();
  private @Nullable Type union = null;

  /// `true` if no types were recorded.
  public boolean isEmpty() {
    return hits.isEmpty();
  }

  /// Returns [Type#ANY] if no types were recorded (or if it's the union of all recorded types).
  public Type union() {
    return union == null ? Type.ANY : union;
  }

  /// Types that were hit more than `threshold` times and are more specific than `existing`.
  public Stream<Type> streamHits(int threshold, Type existing) {
    return hits.entrySet().stream()
        .filter(e -> e.getValue() > threshold && e.getKey().isSubtypeOf(existing))
        .map(Map.Entry::getKey);
  }

  void record(Type type) {
    hits.merge(type, 1, Integer::sum);
    union = union == null ? type : union.union(type, () -> {});
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  public void print(Printer p) {
    var w = p.writer();

    if (isEmpty()) {
      w.write("_");
      return;
    }

    p.print(union());

    for (var entry : hits.entrySet()) {
      var type = entry.getKey();
      var count = entry.getValue();

      // Don't print types that were hit only once, or are the union.
      if (count <= 1 || Objects.equals(type, union())) {
        continue;
      }

      w.write(", ");
      p.print(type);
      w.write(' ');
      p.print(count);
      w.write('x');
    }
  }
}
