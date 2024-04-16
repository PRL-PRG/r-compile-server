package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.util.Classes;
import org.prlprg.util.Reflection;
import org.prlprg.util.UnreachableError;

/**
 * IR instruction: {@link Stmt} or {@link Jump}. An instruction is a single operation in a basic
 * block; a {@link Stmt} is an straight-line instruction and a {@link Jump} affects control flow by
 * moving to a new block.
 *
 * <p>This type is mutable and does not have subclasses for each specific instruction, while {@link
 * InstrData} is immutable and does. Don't construct {@link Instr}s directly, instead via {@link BB}
 * methods such as {@link BB#insertAt(int, String, StmtData)} and {@link BB#subst(Instr, String,
 * InstrData)}, which take {@link InstrData} as an argument and construct the {@link Instr}
 * themselves.
 */
public sealed interface Instr extends InstrOrPhi permits Jump, Stmt {
  /** (A shallow copy of) the instruction's arguments, which are the other nodes it depends on. */
  @Override
  ImmutableList<Node> args();

  /**
   * (A view of) the instruction's return values, which other nodes may depend on. If the
   * instruction produces a single value (may or may not be {@link RValue}), this will be itself. An
   * instruction may return multiple values, in which case this contains multiple nodes. "Void"
   * instructions return nothing.
   */
  @Override
  @UnmodifiableView
  List<Node> returns();

  /** Side-effects performed when this instruction is executed. */
  REffects effects();

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
   *
   * <p>Unlike {@link Node#id()}, the erased type in {@link InstrData} isn't guaranteed to be equal
   * to this object's class. It's merely guaranteed to be a superclass. Specifically, it's
   * guaranteed to be the same class as all instances that satisfy the predicate {@link
   * #canReplaceDataWith}.
   */
  InstrData<?> data();

  /**
   * Whether the instruction's data can be replaced with the specified instance. Calling {@link
   * BB#subst(Instr, String, InstrData)} will not throw iff this returns {@code true}.
   */
  boolean canReplaceDataWith(InstrData<?> newData);

  /**
   * Replace the instruction's name and data without updating BB predecessors.
   *
   * <p>Call {@link BB#subst(Instr, String, InstrData)} instead.
   *
   * @throws IllegalArgumentException If the new type of data isn't compatible with the instruction.
   */
  void unsafeReplaceData(String newName, InstrData<?> newData);

  /**
   * Check that arguments are of the correct dynamic type ({@link RType}) and set cached data.
   *
   * @throws InstrVerifyException If there are issues with the instruction.
   */
  void verify() throws InstrVerifyException;

  @Override
  NodeId<? extends Instr> id();
}

abstract sealed class InstrImpl<D extends InstrData<?>> implements NodeWithCfg
    permits JumpImpl, StmtImpl {
  private final Class<D> dataClass;
  private final CFG cfg;
  private InstrId<?> id;
  private D data;

  // These are both initialized in `verify`, which is called from the constructor, and doesn't
  // reference either before initializing them.
  @SuppressWarnings("NotNullFieldNotInitialized")
  private ImmutableList<Node> args;

  @SuppressWarnings("NotNullFieldNotInitialized")
  private REffects effects;

  InstrImpl(Class<D> dataClass, CFG cfg, String name, D data) {
    this.dataClass = dataClass;
    this.cfg = cfg;
    this.data = data;
    id = new InstrId<>((Instr) this, cfg, name);
    verify();
  }

  // @Override
  public final ImmutableList<Node> args() {
    return args;
  }

  private void computeArgs() {
    // Reflectively get all Node record components
    if (!(data instanceof Record r)) {
      throw new AssertionError("InstrData must be a record");
    }
    var components = data.getClass().getRecordComponents();

    var singleArgs =
        Arrays.stream(components)
            .filter(cmp -> Node.class.isAssignableFrom(cmp.getType()))
            .map(cmp -> (Node) Reflection.getComponent(r, cmp));
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
                    ((Collection<?>) Reflection.getComponent(r, cmp))
                        .stream().map(Node.class::cast));
    args = Streams.concat(singleArgs, argLists).collect(ImmutableList.toImmutableList());
  }

  protected final void replace(String argTypeStr, Object old, Object replacement) {
    // Reflectively look through the arguments AKA record components,
    // and throw an exception if `old` isn't present or `replacement` is the wrong type.
    // Also, build an array of new arguments, where `old` is replaced with `replacement`.
    if (!(data instanceof Record r)) {
      throw new AssertionError("InstrData must be a record");
    }
    var cls = Classes.classOf(data);
    var components = cls.getRecordComponents();

    var found = false;
    var newValues = new Object[components.length];
    for (var i = 0; i < components.length; i++) {
      var cmp = components[i];
      var value = Reflection.getComponent(r, cmp);

      if (value.equals(old)) {
        assert !found : argTypeStr + " to replace found multiple times";
        found = true;

        if (!cmp.getType().isInstance(replacement)) {
          throw new IllegalArgumentException(
              "Replacement "
                  + argTypeStr
                  + " is of wrong type: required "
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
            assert !found : argTypeStr + " to replace found multiple times";
            found = true;

            if (!elemClass.isInstance(replacement)) {
              throw new IllegalArgumentException(
                  "Replacement "
                      + argTypeStr
                      + " (in collection) is of wrong type: required "
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

  // @Override
  public final void replace(Node old, Node replacement) {
    replace("node", old, replacement);
  }

  private static Class<?> collectionComponentElementClass(RecordComponent cmp) {
    assert cmp.getType() == ImmutableList.class
        : "InstrData has Collection component which isn't an ImmutableList";
    if (!(cmp.getGenericType() instanceof ParameterizedType p)
        || p.getActualTypeArguments().length == 1
        || !(p.getActualTypeArguments()[0] instanceof Class<?> elemClass)) {
      throw new AssertionError(
          "InstrData has Collection component which isn't a straightforward generic type, don't know how to handle");
    }
    return elemClass;
  }

  // @Override
  public final REffects effects() {
    return effects;
  }

  private void computeEffects() {
    var clazz = data().getClass();
    effects =
        mergeComputed(
            "Effects",
            data().computeEffects(),
            computeEffectsFromAnnotation(
                clazz.getAnnotation(EffectsAre.class),
                clazz.getAnnotation(EffectsAreAribtrary.class)));
  }

  // This method is boilerplate-y and defensive coding on purpose
  @SuppressWarnings("ConstantValue")
  private static @Nullable REffects computeEffectsFromAnnotation(
      @Nullable EffectsAre annotation, @Nullable EffectsAreAribtrary annotation2) {
    var numNonNullAnnotations = (annotation != null ? 1 : 0) + (annotation2 != null ? 1 : 0);
    if (numNonNullAnnotations == 0) {
      return null;
    } else if (numNonNullAnnotations > 1) {
      throw new AssertionError("Can't have more than one @EffectsAre annotation");
    }

    if (annotation != null) {
      return EffectsAreUtil.parse(annotation);
    }
    if (annotation2 != null) {
      return REffects.ARBITRARY;
    }
    throw new UnreachableError();
  }

  protected static <T> T mergeComputed(
      String desc, @Nullable T fromOverride, @Nullable T fromAnnotation) {
    if (fromOverride == null && fromAnnotation == null) {
      throw new AssertionError(desc + " must be computed either by annotation or by override");
    }
    if (fromOverride != null && fromAnnotation != null) {
      throw new AssertionError(
          desc + " must be computed either by annotation or by override, not both");
    }
    return fromOverride != null ? fromOverride : fromAnnotation;
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
  public final boolean canReplaceDataWith(InstrData<?> newData) {
    return dataClass.isInstance(newData);
  }

  @SuppressWarnings("unchecked")
  // @Override (can't override because it's not a subclass itself, although its own subclasses are)
  public final void unsafeReplaceData(String newName, InstrData<?> newData) {
    if (!dataClass.isInstance(newData)) {
      throw new IllegalArgumentException(
          "Can't replace data in "
              + getClass().getSimpleName()
              + " with incompatible type "
              + newData.getClass().getSimpleName());
    }

    id = new InstrId<>((Instr) this, cfg, newName);
    data = (D) newData;
  }

  // @Override
  public void verify() throws InstrVerifyException {
    verifySameLenInData();
    computeArgs();
    computeEffects();
    // TODO: also have annotations for if the RValue is a specific subclass?
    verifyRValueArgsAreOfCorrectTypes();
    data.verify();
  }

  private void verifySameLenInData() throws InstrVerifyException {
    // Reflectively get all record components, assert that all `@SameLen` annotations are on a
    // collection and refer to an earlier collection, and check that both collections have the same
    // length.
    if (!(data instanceof Record r)) {
      throw new AssertionError("InstrData must be a record");
    }
    var cls = data().getClass();
    var components = cls.getRecordComponents();

    assert !cls.isAnnotationPresent(SameLen.class)
        : "InstrData must not have @SameLen annotation. Put it on the individual components.";

    var collectionSizes = new HashMap<String, Integer>();
    for (var component : components) {
      var isCollection = Collection.class.isAssignableFrom(component.getType());
      var collectionName = component.getName();
      var collection = isCollection ? (Collection<?>) Reflection.getComponent(r, component) : null;
      if (isCollection) {
        collectionSizes.put(collectionName, collection.size());
      }

      var annotation = component.getAnnotation(SameLen.class);
      if (annotation == null) {
        continue;
      }

      assert isCollection
          : "Only record components of type `Collection` can have `@SameLen` annotation";
      assert annotation.value().length == 1
          : "`@SameLen` annotation must have exactly one value (can ).\nUse transitivity to assert multiple collections have the same length. The reason that the annotation allows multiple values is because we reuse @SameLen from checker-framework which provides it for some reason.";
      var otherCollectionName = annotation.value()[0];
      var otherCollectionSize = collectionSizes.get(otherCollectionName);
      assert otherCollectionSize != null
          : "`@SameLen` annotation must refer to an earlier record component of type `Collection`";

      if (collection.size() != otherCollectionSize) {
        throw new InstrVerifyException(
            "Collections "
                + collectionName
                + " and "
                + otherCollectionName
                + " have different lengths: "
                + collection.size()
                + " and "
                + otherCollectionSize);
      }
    }
  }

  private void verifyRValueArgsAreOfCorrectTypes() throws InstrVerifyException {
    // Reflectively get all record components, filter to ones with `@TypeIs` annotations, check that
    // their type is an `RValue` or a list of `RValue`s, and check that the argument is of the
    // expected type.
    if (!(data instanceof Record r)) {
      throw new AssertionError("InstrData must be a record");
    }
    var components = data.getClass().getRecordComponents();

    for (var i = 0; i < components.length; i++) {
      var component = components[i];

      var annotation = component.getAnnotation(TypeIs.class);
      if (annotation == null) {
        continue;
      }
      var expectedType = TypeIsUtil.parse(annotation);

      var isRValue = RValue.class.isAssignableFrom(component.getType());
      var isListOfRValues =
          List.class.isAssignableFrom(component.getType())
              && RValue.class.isAssignableFrom(collectionComponentElementClass(component));
      assert isRValue || isListOfRValues
          : "Only `RValue`s or lists of `RValue`s can have `@TypeIs` annotation: argument "
              + i
              + " has a `@TypeIs` annotation but isn't an `RValue` or list of them";
      var arg = Reflection.getComponent(r, component);

      if (isRValue) {
        var rValue = (RValue) arg;
        if (!rValue.isInstanceOf(expectedType)) {
          throw new InstrVerifyException(
              "Argument "
                  + i
                  + " is of wrong type: expected "
                  + expectedType
                  + " but it's a "
                  + rValue.type());
        }
      } else {
        var rValues = (List<?>) arg;
        for (var j = 0; j < rValues.size(); j++) {
          var rValue = (RValue) rValues.get(j);
          if (!rValue.isInstanceOf(expectedType)) {
            throw new InstrVerifyException(
                "Argument "
                    + i
                    + " element "
                    + j
                    + " is of wrong type: expected "
                    + expectedType
                    + " but it's a "
                    + rValue.type());
          }
        }
      }
    }
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
