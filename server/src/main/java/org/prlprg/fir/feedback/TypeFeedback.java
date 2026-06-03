package org.prlprg.fir.feedback;

import java.util.LinkedHashMap;
import java.util.Map;
import java.util.Objects;
import java.util.stream.Stream;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;

/// Type feedback for a single register.
public class TypeFeedback {
  static final TypeFeedback EMPTY = new TypeFeedback();

  private final Map<Type, Integer> hits = new LinkedHashMap<>();
  private @Nullable Type union = null;

  public TypeFeedback() {}

  /// `true` if no types were recorded.
  public boolean isEmpty() {
    return hits.isEmpty();
  }

  /// Returns [Type#ANY_SEXP] if no types were recorded (or if it's the union of all recorded
  // types).
  public Type union() {
    return union == null ? Type.ANY_SEXP : union;
  }

  /// Types that were hit more than `threshold` times and are more specific than `existing`.
  public Stream<Type> streamHits(int threshold, Type existing) {
    return hits.entrySet().stream()
        .filter(e -> e.getValue() >= threshold && e.getKey().isSubtypeOf(existing))
        .map(Map.Entry::getKey);
  }

  void record(Type type) {
    hits.merge(type, 1, Integer::sum);
    union = union == null ? type : union.union(type, _ -> {});
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private TypeFeedback(Parser p) {
    var s = p.scanner();

    if (s.trySkip('_')) {
      // Empty type feedback
      return;
    }

    // Parse the union type
    union = p.parse(Type.class);

    if (s.trySkip('[')) {
      // Parse individual type hits
      do {
        var type = p.parse(Type.class);
        var count = p.parse(Integer.class);
        s.assertAndSkip('x');

        hits.put(type, count);
        // Update union to include this type
        union = union.union(type, _ -> {});
      } while (s.trySkip(", "));
      s.assertAndSkip(']');
    } else {
      hits.put(union, 1);
    }
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (isEmpty()) {
      w.write("_");
      return;
    }

    p.print(union());

    var wroteAny = false;
    for (var entry : hits.entrySet()) {
      var type = entry.getKey();
      var count = entry.getValue();

      // Don't print types that were hit only once, or are the union.
      if (count <= 1 || Objects.equals(type, union())) {
        continue;
      }

      if (!wroteAny) {
        wroteAny = true;
        w.write('[');
      } else {
        w.write(", ");
      }

      p.print(type);
      w.write(' ');
      p.print(count);
      w.write('x');
    }

    if (wroteAny) {
      w.write(']');
    }
  }
}
