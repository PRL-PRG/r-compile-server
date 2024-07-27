package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Streams;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import org.prlprg.ir.cfg.instr.InstrData;
import org.prlprg.parseprint.BuiltinParseMethods;
import org.prlprg.parseprint.BuiltinPrintMethods;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Classes;
import org.prlprg.util.Reflection;
import org.prlprg.util.Strings;

/**
 * A type which encodes the record {@code T}, except every occurrence of a {@linkplain BB basic
 * block} or {@linkplain Node node} is replaced by its corresponding id ({@link BBId} or {@link
 * NodeId}).
 *
 * <p>Occurrences aren't just replaced in the component; if it's a list, optional, or list of
 * optionals, every element is replaced as well.
 *
 * <p>This allows edits to a {@linkplain CFG control-flow graph} to be undone and replayed on a
 * different CFG. The edits must store IDs instead of the nodes and blocks directly, since the
 * addresses are different in <a href="https://stackoverflow.com/a/1692882">equivalent (but not
 * identical)</a> CFGs. See the documentation of {@link CFGEdit} for why this is useful.
 *
 * <p>{@link T} must be a record. Unfortunately, this has to be checked at runtime even though
 * {@code T extends Record} exists, because some interfaces (e.g. {@link InstrData} are asserted to
 * all be records but can't statically inherit {@link Record}.
 */
// FIXME: Handle `@Nullable` (wrap/unwrap `Optional` when necessary).
public sealed interface MapToIdIn<T> {
  /**
   * Encodes the given record, but replaces every {@linkplain BB basic block} or {@linkplain Node
   * node} component with its corresponding id ({@link BBId} or {@link NodeId}).
   *
   * @throws IllegalArgumentException if {@code data} is not a record.
   */
  static <T> MapToIdIn<T> of(T data) {
    if (!(data instanceof Record r)) {
      throw new IllegalArgumentException("data must be a record");
    }

    return new MapToIdInImpl<>(
        Classes.classOf(data),
        Reflection.streamComponentValuesNoNulls(r)
            .map(MapToIdIn::toId)
            .collect(ImmutableList.toImmutableList()));
  }

  /** Call {@link #decode(CFG)} on each element of the list.
   *
   * @throws IllegalArgumentException If an element isn't a record. */
  static <T> ImmutableList<T> decodeList(
      List<? extends MapToIdIn<T>> list, CFG cfg) {
    return list.stream().map(m -> m.decode(cfg)).collect(ImmutableList.toImmutableList());
  }

  /** Call {@link #decode(CFG)} on each value of the map.
   *
   * @throws IllegalArgumentException If a value isn't a record. */
  static <K, V> ImmutableMap<K, V> decodeMap(
      Map<K, ? extends MapToIdIn<V>> map, CFG cfg) {
    return map.entrySet().stream()
        .collect(ImmutableMap.toImmutableMap(Map.Entry::getKey, e -> e.getValue().decode(cfg)));
  }

  /**
   * Returns the encoded value: the data with the {@linkplain BB basic block} and {@linkplain Node
   * node} IDs replaced by the actual blocks and nodes in the given {@linkplain CFG control-flow
   * graph}.
   *
   * <p>This is the inverse of {@link #of(Object)}.
   *
   * @throws java.util.NoSuchElementException if a block or node ID is not in the CFG.
   */
  T decode(CFG cfg);

  /** The class of the encoded record. */
  Class<? extends T> mappedClass();

  /**
   * Converts {@link BB} to {@link BBId} and {@link Node} to {@link NodeId}, and converts elements
   * in lists, optionals, and lists of optionals.
   */
  private static Object toId(Object o) {
    return switch (o) {
      case BB bb -> bb.id();
      case Node<?> node -> node.id();
      case Optional<?> op -> op.map(MapToIdIn::toId);
      case Collection<?> c -> {
        assert c instanceof ImmutableList<?>
            : "all collection components must be `ImmutableList`s (arrays are also allowed)";
        yield c.stream().map(MapToIdIn::toId).collect(ImmutableList.toImmutableList());
      }
      case Object[] a -> Arrays.stream(a).map(MapToIdIn::toId).toArray();
      case BBId _, NodeId<?> _ ->
          throw new AssertionError("all components must not be `BBId`s or `NodeId`s");
      default -> o;
    };
  }
}

record MapToIdInImpl<T>(
    @Override Class<? extends T> mappedClass, @Override ImmutableList<Object> components)
    implements MapToIdIn<T> {
  private static Object fromId(Object o, CFG cfg) {
    return switch (o) {
      case BBId id -> cfg.get(id);
      case NodeId<?> id -> cfg.get(id);
      case Optional<?> op -> op.map(e -> fromId(e, cfg));
      case Collection<?> c -> {
        assert c instanceof ImmutableList<?> : "non-`ImmutableList` collection in `MapToIdInImpl`";
        yield c.stream().map(e -> fromId(e, cfg)).collect(ImmutableList.toImmutableList());
      }
      case Object[] a -> Arrays.stream(a).map(e -> fromId(e, cfg)).toArray();
      case BB _, Node<?> _ ->
          throw new AssertionError("`BB` or `Node` (not ID) in `MapToIdInImpl`");
      default -> o;
    };
  }

  MapToIdInImpl {
    assert mappedClass().isRecord() : "`mappedClass` must be a record";
  }

  @Override
  public T decode(CFG cfg) {
    return Reflection.construct(
        mappedClass, components.stream().map(o -> fromId(o, cfg)).toArray());
  }

  @Override
  @SuppressWarnings("UnstableApiUsage")
  public String toString() {
    return mappedClass.getSimpleName()
        + "'["
        + Streams.zip(
                Arrays.stream(mappedClass.getRecordComponents()),
                components.stream(),
                (c, a) -> c.getName() + "=" + a)
            .collect(Strings.joining(", "))
        + "]";
  }

  @ParseMethod
  private static MapToIdIn<?> parse(Parser p) {
    var s = p.scanner();

    var mappedClass = BuiltinParseMethods.parseRecordClass(p);
    s.assertAndSkip('\'');
    var arguments = BuiltinParseMethods.parseRecordComponents(mappedClass, p);

    return new MapToIdInImpl<>(mappedClass, ImmutableList.copyOf(arguments));
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    w.write(mappedClass.getSimpleName());
    w.write('\'');
    BuiltinPrintMethods.printRecordComponents(
        Arrays.asList(mappedClass.getRecordComponents()), components, p);
  }
}
