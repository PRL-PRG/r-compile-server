package org.prlprg.ir.node;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import com.pushtorefresh.javac_warning_annotation.Warning;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Collection;
import org.prlprg.ir.CFG;
import org.prlprg.util.Reflection;

/** IR instruction: statement or jump. e.g. GNU-R bytecode or PIR instructions. */
public sealed interface Instr extends InstrOrPhi permits InstrImpl, Jump, Stmt {
  /** The instruction's arguments, which are the other nodes it depends on. */
  ImmutableList<Node> args();

  /**
   * The instruction's return values, which other nodes may depend on. If the instruction produces a
   * single value (may or may not be {@link RValue}), this will be itself. An instruction may return
   * multiple values (e.g. {@code StartFor}), in which case this contains multiple nodes.
   */
  @Override
  ImmutableList<Node> returns();

  /**
   * The instruction's data, which determines what type of instruction it is and contains specificly
   * typed children. This is useful for pattern-matching.
   */
  Data<?> data();

  /** Check that arguments are of the correct dynamic type and set cached data. */
  void verify();

  sealed interface Data<I extends Instr> permits Jump.Data, Stmt.Data {
    /** Create an instruction containing this data. */
    @Warning("Only exposed for BB.insert, call a BB method instead.")
    I make(CFG cfg);
  }
}

abstract sealed class InstrImpl<D extends Instr.Data<?>> implements Instr
    permits JumpImpl, StmtImpl {
  private final CFG cfg;
  private D data;

  InstrImpl(CFG cfg, D data) {
    this.cfg = cfg;
    this.data = data;
    verify();
  }

  @Override
  public ImmutableList<Node> args() {
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

  @Override
  public void replace(Node old, Node replacement) {
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
  public CFG cfg() {
    return cfg;
  }

  @Override
  public D data() {
    return data;
  }

  @Override
  public void verify() {
    // TODO: Check RValue argument types via annotations
    //  also have annotations for if the RValue is a specific subclass or a Phi where each target is
    // said subclass.
  }
}
