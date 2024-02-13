package org.prlprg.ir;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import com.pushtorefresh.javac_warning_annotation.Warning;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Collection;
import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.type.RType;
import org.prlprg.util.Reflection;

/**
 * IR instruction: {@link Stmt} or {@link Jump}. An instruction is a single operation in a basic
 * block; a {@link Stmt} is an straight-line instruction and a {@link Jump} affects control flow by
 * moving to a new block.
 *
 * <p>This type is mutable and does not have subclasses for each specific instruction, while {@link
 * Instr.Data} is immutable and does. Don't construct {@link Instr}s directly, instead via {@link
 * BB} methods such as {@link BB#append(Stmt.Data)} and {@link BB#replace(Instr, Instr.Data)}, which
 * take {@link Instr.Data} as an argument and construct the {@link Instr} themselves.
 */
public sealed interface Instr extends InstrOrPhi permits Jump, Stmt {
  /** (A view of) the instruction's arguments, which are the other nodes it depends on. */
  @Override
  @UnmodifiableView
  List<Node> args();

  /**
   * The instruction's return values, which other nodes may depend on. If the instruction produces a
   * single value (may or may not be {@link RValue}), this will be itself. An instruction may return
   * multiple values, in which case this contains multiple nodes. "Void" instructions return
   * nothing.
   */
  @Override
  ImmutableList<Node> returns();

  /**
   * The instruction's data, which determines what type of instruction it is and contains specificly
   * typed children. This is useful for pattern-matching:
   *
   * <pre>
   *   switch (i.data()) {
   *     case Jumps.Goto(var next) -> ...
   *     case Jumps.Branch(var cond, var ifTrue, var ifFalse) -> ...
   *     ...
   *   }
   * </pre>
   */
  Data<?> data();

  /**
   * Whether the instruction's data can be replaced with the specified instance. Calling {@link
   * #replaceData(Data)} will not throw iff this returns {@code true}.
   */
  boolean canReplaceDataWith(Data<?> newData);

  /**
   * Replace the instruction's data.
   *
   * <p>Usually you should call {@link BB#replace(Instr, Data)} instead, because this will fail if
   * the data isn't the correct class.
   *
   * @throws IllegalArgumentException If the new type of data isn't compatible with the instruction.
   */
  void replaceData(Data<?> newData);

  /** Check that arguments are of the correct dynamic type ({@link RType}) and set cached data. */
  void verify();

  @Override
  NodeId<? extends Instr> id();

  sealed interface Data<I extends Instr> permits Jump.Data, Stmt.Data {
    /**
     * Create an instruction containing this data and a small descriptive name (or empty string).
     */
    @Warning("Only exposed for `BB`, call a `BB` method such as `append` instead.")
    I make(CFG cfg, String name);
  }
}

abstract sealed class InstrImpl<D extends Instr.Data<?>> implements NodeWithCfg
    permits JumpImpl, StmtImpl {
  private final Class<D> dataClass;
  private final CFG cfg;
  private final InstrId<?> id;
  private D data;

  InstrImpl(Class<D> dataClass, CFG cfg, String name, D data) {
    this.dataClass = dataClass;
    this.cfg = cfg;
    this.data = data;
    id = new InstrId<>((Instr) this, cfg, name);
    cfg.track(this);
    verify();
  }

  // @Override
  public final ImmutableList<Node> args() {
    // Reflectively get all Node record components
    var cls = data().getClass();
    assert cls.isRecord() : "Instr.Data must be a record";
    var components = cls.getRecordComponents();

    var singleArgs =
        Arrays.stream(components)
            .filter(cmp -> Node.class.isAssignableFrom(cmp.getType()))
            .map(cmp -> (Node) Reflection.getComponent(data(), cmp));
    var argLists =
        Arrays.stream(components)
            .filter(
                cmp -> {
                  if (!Collection.class.isAssignableFrom(cmp.getType())) {
                    return false;
                  }
                  return Node.class.isAssignableFrom(collectionComponentElementClass(cmp));
                })
            .flatMap(
                cmp ->
                    ((Collection<?>) Reflection.getComponent(data(), cmp))
                        .stream().map(Node.class::cast));
    return Streams.concat(singleArgs, argLists).collect(ImmutableList.toImmutableList());
  }

  // @Override
  public final void replace(Node old, Node replacement) {
    // Reflectively look through the nodes,
    // and throw an exception if `old` isn't present or `replacement` is the wrong type.
    // Also, build an array of new constructor arguments, where `old` is replaced with
    // `replacement`.
    @SuppressWarnings("unchecked")
    var cls = (Class<? extends D>) data().getClass();
    assert cls.isRecord() : "Instr.Data must be a record";
    var components = cls.getRecordComponents();

    var found = false;
    var newValues = new Object[components.length];
    for (var i = 0; i < components.length; i++) {
      var cmp = components[i];
      var value = Reflection.getComponent(data(), cmp);

      if (value.equals(old)) {
        assert !found : "Node to replace found multiple times";
        found = true;

        if (!cmp.getType().isInstance(replacement)) {
          throw new IllegalArgumentException(
              "Replacement node is of wrong type: required "
                  + cmp.getType().getSimpleName()
                  + " but it's a "
                  + replacement.getClass().getSimpleName());
        }

        value = replacement;
      } else if (value instanceof Collection<?> c) {
        var elemClass = collectionComponentElementClass(cmp);
        var builder = ImmutableList.builderWithExpectedSize(c.size());
        for (var item : c) {
          if (item.equals(old)) {
            assert !found : "Node to replace found multiple times";
            found = true;

            if (!elemClass.isInstance(replacement)) {
              throw new IllegalArgumentException(
                  "Replacement node (in collection) is of wrong type: required "
                      + cmp.getType().getSimpleName()
                      + " but it's a "
                      + replacement.getClass().getSimpleName());
            }

            builder.add(replacement);
          } else {
            builder.add(item);
          }
        }
        value = builder.build();
      }

      newValues[i] = value;
    }

    // Reflectively re-construct with the new arguments
    data = Reflection.construct(cls, newValues);
    verify();
  }

  private static Class<?> collectionComponentElementClass(RecordComponent cmp) {
    assert cmp.getType() == ImmutableList.class
        : "Instr.Data has Collection component which isn't an ImmutableList";
    if (!(cmp.getGenericType() instanceof ParameterizedType p)
        || p.getActualTypeArguments().length == 1
        || !(p.getActualTypeArguments()[0] instanceof Class<?> elemClass)) {
      throw new AssertionError(
          "Instr.Data has Collection component which isn't a straightforward generic type, don't know how to handle");
    }
    return elemClass;
  }

  @Override
  public final CFG cfg() {
    return cfg;
  }

  // @Override
  public final D data() {
    return data;
  }

  // @Override
  public final boolean canReplaceDataWith(Instr.Data<?> newData) {
    return dataClass.isInstance(newData);
  }

  @SuppressWarnings("unchecked")
  // @Override
  public final void replaceData(Instr.Data<?> newData) {
    if (!dataClass.isInstance(newData)) {
      throw new IllegalArgumentException(
          "Can't replace data in "
              + getClass().getSimpleName()
              + " with incompatible type "
              + newData.getClass().getSimpleName());
    }

    data = (D) newData;
  }

  // @Override
  public void verify() {
    // TODO: Check RValue argument types via annotations
    //  also have annotations for if the RValue is a specific subclass or a Phi where each target is
    // said subclass.
  }

  @Override
  public NodeId<? extends Instr> id() {
    return uncheckedCastId();
  }

  @SuppressWarnings("unchecked")
  protected <T extends Instr> NodeId<T> uncheckedCastId() {
    return (NodeId<T>) id;
  }
}
