package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.Streams;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
import java.util.Arrays;
import java.util.Collection;
import java.util.HashMap;
import java.util.List;
import java.util.Optional;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.checkerframework.checker.index.qual.SameLen;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFGEdit.MutateInstrArgs;
import org.prlprg.ir.cfg.CFGEdit.RenameInstr;
import org.prlprg.ir.cfg.CFGEdit.ReplaceInArgs;
import org.prlprg.ir.type.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.RTypes;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPType;
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
 * methods such as {@link BB#insertAt(int, String, StmtData)} and {@link BB#replace(int, String,
 * StmtData)}, which take {@link InstrData} as an argument and construct the {@link Instr}
 * themselves.
 */
public sealed interface Instr extends InstrOrPhi permits Jump, Stmt {
  /**
   * Mutate the instruction by changing its {@linkplain #data() data} (and thus {@linkplain #args()
   * arguments}).
   *
   * <p>If the data isn't of a compatible type (has the same return types and count), you must use
   * {@link BatchSubst} to instead "substitute" the instruction with an entirely new one ({@link
   * BB#replace(int, String, StmtData)} <i>does not</i> have the same behavior, because it won't
   * change the instruction in the arguments of any other instructions).
   *
   * <p>Note that {@link BatchSubst}'s time complexity is O(<# instructions in CFG>), while this
   * methods's is O(1), so this method is preferred when possible. However, if you already need to
   * run a {@link BatchSubst}, adding to it doesn't noticeably increase its running time.
   *
   * <p>This can't be an instance method because the type parameter of {@link InstrData} is
   * invariant and restricts type of {@code instr}. Since Java's generics aren't very good you may
   * still need to cast the {@code args}, fortunately the compatibility is also checked at runtime.
   */
  static <I extends Instr> void mutateArgs(I instr, InstrData<I> newArgs) {
    if (!((InstrImpl<?>) instr).canReplaceDataWith(newArgs)) {
      throw new IllegalArgumentException(
          "Incompatible data for replacement: " + instr + " -> " + newArgs);
    }

    var wasEmpty = false;
    if (instr instanceof Jump j) {
      for (var succ : j.targets()) {
        succ.unsafeRemovePredecessor(((JumpImpl<?>) j).bb());
      }
      wasEmpty = j.targets().isEmpty();
    }

    @SuppressWarnings("unchecked")
    var oldArgs = (InstrData<I>) instr.data();
    ((InstrImpl<?>) instr).unsafeReplaceArgs(newArgs);

    if (instr instanceof Jump j) {
      var bb = ((JumpImpl<?>) j).bb();

      for (var succ : j.targets()) {
        succ.unsafeAddPredecessor(bb);
      }

      var isEmpty = j.targets().isEmpty();
      if (!wasEmpty && isEmpty) {
        instr.cfg().markExit(bb);
      } else if (wasEmpty && !isEmpty) {
        instr.cfg().unmarkExit(bb);
      }
    }

    instr
        .cfg()
        .record(new MutateInstrArgs<>(instr, newArgs), new MutateInstrArgs<>(instr, oldArgs));
  }

  /** Change the instruction or phi's name (descriptive identifier). */
  void rename(String newName);

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

  /** Whether the instruction produces no side-effects. */
  default boolean isPure() {
    return effects().isEmpty();
  }

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
   * <p>The erased type in {@link InstrData} isn't guaranteed to be equal to this object's class,
   * it's merely guaranteed to be a superclass. Specifically, it's guaranteed to be the same class
   * as any {@link InstrData} which can be replaced in this instruction via {@link
   * Instr#mutateArgs(Instr, InstrData)} (without throwing a runtime exception).
   */
  // Overridden via an class that doesn't implement `Instr` so it doesn't mess up `Instr`'s sealed
  // interface hierarchy. So IntelliJ can't detect that `EmptyMethod` doesn't apply.
  @SuppressWarnings("EmptyMethod")
  InstrData<?> data();

  /**
   * Check that arguments are of the correct dynamic type ({@link RType}) and set cached data.
   *
   * @throws InstrVerifyException If there are issues with the instruction.
   */
  void verify() throws InstrVerifyException;

  @Override
  NodeId<? extends Instr> id();
}

abstract sealed class InstrImpl<D extends InstrData<?>> implements LocalNode
    permits JumpImpl, StmtImpl {
  private final Class<D> dataClass;
  private final CFG cfg;
  private LocalNodeIdImpl<? extends Instr> id;
  private D data;

  // These are both initialized in `verify`, which is called from the constructor, and doesn't
  // reference either before initializing them.
  @SuppressWarnings("NotNullFieldNotInitialized")
  private ImmutableList<Node> args;

  @SuppressWarnings("NotNullFieldNotInitialized")
  private REffects effects;

  InstrImpl(Class<D> dataClass, CFG cfg, TokenToCreateNewInstr token, D data) {
    this.dataClass = dataClass;
    this.cfg = cfg;
    id =
        switch (token) {
          case CreateInstrWithExistingId(var id1) -> {
            var id2 = (LocalNodeIdImpl<? extends Instr>) id1;
            id2.lateAssignClass(getClass());
            yield id2;
          }
          case CreateInstrWithNewId(var name) -> new LocalNodeIdImpl<>((Instr) this, name);
        };
    this.data = data;
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
                  if (cmp.getType() != Optional.class
                      && !Collection.class.isAssignableFrom(cmp.getType())) {
                    return false;
                  }
                  return Node.class.isAssignableFrom(
                      optionalOrCollectionComponentElementClass(cmp));
                })
            .flatMap(
                cmp ->
                    switch (Reflection.getComponent(r, cmp)) {
                      case Optional<?> o -> o.map(Node.class::cast).stream();
                      case Collection<?> c ->
                          c.stream()
                              .flatMap(
                                  e ->
                                      e instanceof Optional<?> e1
                                          ? e1.map(Node.class::cast).stream()
                                          : Stream.of((Node) e));
                      default -> throw new UnreachableError();
                    });
    args = Streams.concat(singleArgs, argLists).collect(ImmutableList.toImmutableList());
  }

  /**
   * Replace the object in {@link #data()}.
   *
   * <p>This is "unsafe" because no {@linkplain CFGEdit edit} is recorded. It should only be used
   * internally by {@link InstrImpl} and subclasses.
   *
   * @throws IllegalArgumentException If the old object wasn't in {@link #data()}.
   */
  protected final void unsafeReplaceInData(String argTypeStr, Object old, Object replacement) {
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
      } else if (value instanceof Optional<?> o) {
        var elemClass = optionalOrCollectionComponentElementClass(cmp);
        if (o.isPresent() && o.get().equals(old)) {
          assert !found : argTypeStr + " to replace found multiple times";
          found = true;

          if (!elemClass.isInstance(replacement)) {
            throw new IllegalArgumentException(
                "Replacement "
                    + argTypeStr
                    + " (in optional) is of wrong type: required "
                    + cmp.getType().getSimpleName()
                    + " but it's a "
                    + replacement.getClass().getSimpleName());
          }

          value = Optional.of(replacement);
        }
      } else if (value instanceof Collection<?> c) {
        var elemClass = optionalOrCollectionComponentElementClass(cmp);
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
          } else if (item instanceof Optional<?> o) {
            if (o.isPresent() && o.get().equals(old)) {
              assert !found : argTypeStr + " to replace found multiple times";
              found = true;

              if (!elemClass.isInstance(replacement)) {
                throw new IllegalArgumentException(
                    "Replacement "
                        + argTypeStr
                        + " (in optional in collection) is of wrong type: required "
                        + cmp.getType().getSimpleName()
                        + " but it's a "
                        + replacement.getClass().getSimpleName());
              }

              builder.add(Optional.of(replacement));
            }
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

  public final void replaceInArgs(Node old, Node replacement) {
    unsafeReplaceInData("node", old, replacement);

    cfg.record(
        new ReplaceInArgs((Instr) this, old, replacement),
        new ReplaceInArgs((Instr) this, replacement, old));
  }

  /**
   * If this is an {@code Optional<T>}, {@code ImmutableList<T>}, or {@code
   * ImmutableList<Optional<T>>}, returns {@code T}.
   */
  private static Class<?> optionalOrCollectionComponentElementClass(RecordComponent cmp) {
    assert cmp.getType() == Optional.class || cmp.getType() == ImmutableList.class
        : "InstrData has Collection component which isn't an ImmutableList";
    if (cmp.getGenericType() instanceof ParameterizedType p
        && p.getActualTypeArguments().length == 1) {
      if (p.getActualTypeArguments()[0] instanceof ParameterizedType innerP
          && innerP.getRawType() == Optional.class
          && innerP.getActualTypeArguments().length == 1
          && innerP.getActualTypeArguments()[0] instanceof Class<?> elemClass) {
        return elemClass;
      } else if (p.getActualTypeArguments()[0] instanceof Class<?> elemClass) {
        return elemClass;
      }
    }
    throw new AssertionError(
        "InstrData has Collection component which isn't a straightforward generic type, don't know how to handle: "
            + cmp.getGenericType());
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
  // @Override
  public final void rename(String newName) {
    var oldId = id();
    if (newName.equals(oldId.name())) {
      return;
    }

    cfg().untrack((Instr) this);
    id = new LocalNodeIdImpl<>((Instr) this, newName);
    cfg().track((Instr) this);

    cfg().record(new RenameInstr(oldId, newName), new RenameInstr(id(), oldId.name()));
  }

  public final D data() {
    return data;
  }

  /**
   * Whether the instruction's data can be replaced with the specified instance. Calling {@link
   * Instr#mutateArgs(Instr, InstrData)} will not throw iff this returns {@code true}.
   */
  public final boolean canReplaceDataWith(InstrData<?> newData) {
    return dataClass.isInstance(newData);
  }

  /**
   * Replace the instruction's data <i>without</i> updating BB predecessors or recording an
   * {@linkplain CFGEdit edit}.
   *
   * <p>Call {@link Instr#mutateArgs(Instr, InstrData)} to update predecessors and record an edit.
   *
   * @throws IllegalArgumentException If the new type of data isn't compatible with the instruction.
   */
  @SuppressWarnings("unchecked")
  public final void unsafeReplaceArgs(InstrData<?> newData) {
    if (!canReplaceDataWith(newData)) {
      throw new IllegalArgumentException(
          "Can't replace data in "
              + getClass().getSimpleName()
              + " with incompatible type "
              + newData.getClass().getSimpleName());
    }

    data = (D) newData;
  }

  // @Override
  public void verify() throws InstrVerifyException {
    verifyNoNullableArgs();
    verifySameLenInData();
    computeArgs();
    computeEffects();
    // TODO: also have annotations for if the RValue is a specific subclass?
    verifyRValueArgsAreOfCorrectTypes();
    data.verify();
  }

  private void verifyNoNullableArgs() throws InstrVerifyException {
    // Reflectively get all record components, assert that none of them are nullable.
    if (!(data instanceof Record)) {
      throw new AssertionError("InstrData must be a record");
    }
    var cls = data().getClass();
    var components = cls.getRecordComponents();

    for (var component : components) {
      if (component.isAnnotationPresent(Nullable.class)) {
        throw new InstrVerifyException(
            "Argument "
                + component.getName()
                + " in "
                + cls.getSimpleName()
                + " is `@Nullable`. InstrData arguments must be `Optional` (since they are often streamed it's easier this way).");
      }
    }
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
    // Reflectively get all record components, filter to ones with `@TypeIs` and `@IsEnv`
    // annotations, check that their type is an `RValue` or a list of `RValue`s, and check that the
    // argument is of the expected type.
    if (!(data instanceof Record r)) {
      throw new AssertionError("InstrData must be a record");
    }
    var components = data.getClass().getRecordComponents();

    for (var i = 0; i < components.length; i++) {
      var component = components[i];

      var typeIsAnnotation = component.getAnnotation(TypeIs.class);
      var isEnvAnnotation = component.getAnnotation(IsEnv.class);
      if (typeIsAnnotation != null && isEnvAnnotation != null) {
        throw new AssertionError(
            "a Java element can't have both `@TypeIs` and `@IsEnv` annotations");
      }
      if (typeIsAnnotation == null && isEnvAnnotation == null) {
        continue;
      }
      var expectedType =
          typeIsAnnotation != null
              ? TypeIsUtil.parse(typeIsAnnotation)
              : RTypes.simple(SEXPType.ENV);

      var isRValue = RValue.class.isAssignableFrom(component.getType());
      var isOptionalRValue =
          component.getType() == Optional.class
              && RValue.class.isAssignableFrom(
                  optionalOrCollectionComponentElementClass(component));
      var isListOfRValues =
          List.class.isAssignableFrom(component.getType())
              && RValue.class.isAssignableFrom(
                  optionalOrCollectionComponentElementClass(component));
      assert isRValue || isOptionalRValue || isListOfRValues
          : "Only `RValue`s or lists of `RValue`s can have `@TypeIs` or `@IsEnv` annotation: argument "
              + i
              + " has a `@TypeIs` or `@IsEnv` annotation but isn't an `RValue` or list of them";
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
      } else if (isOptionalRValue) {
        var rValue = (RValue) ((Optional<?>) arg).orElse(null);
        if (rValue != null && !rValue.isInstanceOf(expectedType)) {
          throw new InstrVerifyException(
              "Argument "
                  + i
                  + " is of wrong type: expected "
                  + expectedType
                  + " (or null) but it's a "
                  + rValue.type());
        }
      } else {
        var rValues = (List<?>) arg;
        for (var j = 0; j < rValues.size(); j++) {
          switch (rValues.get(j)) {
            case Optional<?> optRValue -> {
              var rValue = (RValue) optRValue.orElse(null);
              if (rValue != null && !rValue.isInstanceOf(expectedType)) {
                throw new InstrVerifyException(
                    "Argument "
                        + i
                        + " element "
                        + j
                        + " is of wrong type: expected "
                        + expectedType
                        + " (or null) but it's a "
                        + rValue.type());
              }
            }
            case RValue rValue -> {
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
            default ->
                throw new AssertionError(
                    "`optionalOrCollectionComponentElementClass` returned something for this list, so it should either be a list of `RValue`s or `Optional`s");
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

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @ParseMethod
  private Instr parse(Parser p) {
    throw new UnsupportedOperationException("can't parse a Phi outside of a BB");
  }

  @PrintMethod
  private void print(Printer p) {
    p.withContext(new BBParseOrPrintContext(cfg(), null)).print(this);
  }
}
