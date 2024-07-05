package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
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
import org.prlprg.ir.closure.CodeObject;
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.lattice.Maybe;
import org.prlprg.util.Classes;
import org.prlprg.util.Reflection;
import org.prlprg.util.Streams;
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
   * <p>Note that {@link BatchSubst}'s time complexity is O(&lt;# instructions in CFG&gt;), while
   * this methods's is O(1), so this method is preferred when possible. However, if you already need
   * to run a {@link BatchSubst}, adding to it doesn't noticeably increase its running time.
   *
   * <p>This can't be an instance method because the type parameter of {@link InstrData} is
   * invariant and restricts type of {@code instr}. Since Java's generics aren't very good you may
   * still need to cast the {@code args}, fortunately the compatibility is also checked at runtime.
   */
  static <I extends Instr> void mutateArgs(I instr, InstrData<I> newArgs) {
    if (!InstrImpl.cast(instr).canReplaceDataWith(newArgs)) {
      throw new IllegalArgumentException(
          "incompatible data for replacement: " + instr + " -> " + newArgs);
    }

    var wasEmpty = false;
    if (instr instanceof Jump j) {
      for (var succ : j.targets()) {
        succ.unsafeRemovePredecessor(JumpImpl.cast(j).bb());
      }
      wasEmpty = j.targets().isEmpty();
    }

    @SuppressWarnings("unchecked")
    var oldArgs = (InstrData<I>) instr.data();
    InstrImpl.cast(instr).unsafeReplaceArgs(newArgs);

    if (instr instanceof Jump j) {
      var bb = JumpImpl.cast(j).bb();

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

  /** (A shallow copy of) the instruction's arguments, which are the other nodes it depends on. */
  @Override
  ImmutableList<Node> args();

  /**
   * Returns the instruction's environment argument, or {@code null} if it cannot have one.
   *
   * <p>Instructions with elided environments, this will be non-null and {@link StaticEnv#ELIDED}.
   */
  @Nullable @IsEnv
  RValue env();

  /**
   * Whether the instruction can have an environment, but it may be elided.
   *
   * <p>i.e. whether {@link #env()} is non-null, but clearer meaning.
   */
  default boolean canHaveEnv() {
    return env() != null;
  }

  /**
   * Whether the instruction has an environment which isn't elided.
   *
   * <p>i.e. whether {@link #env()} is non-null ({@link #canHaveEnv()}) and not {@link
   * StaticEnv#ELIDED}.
   */
  default boolean hasEnv() {
    return env() != null && env() != StaticEnv.ELIDED;
  }

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

abstract sealed class InstrImpl<D extends InstrData<?>> extends InstrOrPhiImpl implements LocalNode
    permits JumpImpl, StmtImpl {
  private final Class<D> dataClass;
  private D data;

  // These are all initialized in `verify`, which is called from the constructor, and doesn't
  // reference either before initializing them.
  @SuppressWarnings("NotNullFieldNotInitialized")
  private ImmutableList<Node> args;

  private @Nullable @IsEnv RValue env;

  @SuppressWarnings("NotNullFieldNotInitialized")
  private REffects effects;

  /**
   * Return the given instruction casted.
   *
   * <p>Any {@link Instr} is guaranteed to be an {@link InstrImpl}, so this method is provided to
   * reduce the number of casts in the code text.
   */
  static InstrImpl<?> cast(Instr instr) {
    return (InstrImpl<?>) instr;
  }

  InstrImpl(Class<D> dataClass, CFG cfg, NodeId<? extends Instr> id, D data) {
    super(cfg, id);
    this.dataClass = dataClass;
    this.data = data;
    verify(true);
  }

  // region data
  // @Override
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

  // endregion data

  // region args
  // @Override
  public final ImmutableList<Node> args() {
    return args;
  }

  // @Override
  public final @Nullable @IsEnv RValue env() {
    return env;
  }

  // @Override
  @SuppressWarnings("unchecked")
  public final void replaceInArgs(Node old, Node replacement) {
    var oldData = data;
    unsafeReplaceInData("node", old, replacement);

    cfg()
        .record(
            new CFGEdit.MutateInstrArgs<>((Instr) this, (InstrData<Instr>) data),
            new CFGEdit.MutateInstrArgs<>((Instr) this, (InstrData<Instr>) oldData));
  }

  private void computeArgs() {
    // Reflectively get all Node record components
    if (!(data instanceof Record r)) {
      throw new AssertionError("`InstrData` must be a record");
    }
    var components = data.getClass().getRecordComponents();

    args =
        Arrays.stream(components)
            .filter(
                cmp -> {
                  if (Node.class.isAssignableFrom(cmp.getType())
                      || CodeObject.class.isAssignableFrom(cmp.getType())) {
                    return true;
                  }
                  if (cmp.getType() == Optional.class
                      || Collection.class.isAssignableFrom(cmp.getType())) {
                    return Node.class.isAssignableFrom(
                        optionalOrCollectionComponentElementClass(cmp));
                  }
                  return false;
                })
            .flatMap(
                cmp ->
                    switch (Reflection.getComponent(r, cmp)) {
                      case Node n -> Stream.of(n);
                      case CodeObject c -> c.outerCfgNodes().stream();
                      case Optional<?> o -> o.map(Node.class::cast).stream();
                      case Collection<?> c ->
                          c.stream()
                              .flatMap(
                                  e ->
                                      e instanceof Optional<?> e1
                                          ? e1.map(Node.class::cast).stream()
                                          : Stream.of((Node) e));
                      default -> throw new UnreachableError();
                    })
            .collect(ImmutableList.toImmutableList());
  }

  private void computeEnv() {
    if (!(data instanceof Record r)) {
      throw new AssertionError("`InstrData` must be a record");
    }
    var components = data.getClass().getRecordComponents();

    env =
        Arrays.stream(components)
            .filter(cmp -> cmp.isAnnotationPresent(IsEnv.class))
            .collect(
                Streams.intoOneOrThrow(
                    () ->
                        new AssertionError(
                            "`InstrData` can't have multiple fields with `@IsEnv` annotations")))
            .map(
                component -> {
                  if (!(Reflection.getComponent(r, component) instanceof RValue env1)) {
                    throw new AssertionError("`@IsEnv` annotation must be on an `RValue` field");
                  }
                  return env1;
                })
            .orElse(null);
    if (env != null && env.isEnv() != Maybe.YES) {
      throw new InstrVerifyException("value assigned to `@IsEnv` must be a guaranteed environment");
    }
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
      throw new AssertionError("`InstrData` must be a record");
    }
    var cls = Classes.classOf(data);
    var components = cls.getRecordComponents();

    var newValues = new Object[components.length];
    for (var i = 0; i < components.length; i++) {
      var cmp = components[i];
      var value = Reflection.getComponent(r, cmp);

      if (value.equals(old)) {
        if (!cmp.getType().isInstance(replacement)) {
          throw new IllegalArgumentException(
              "replacement "
                  + argTypeStr
                  + " is of wrong type: required "
                  + cmp.getType().getSimpleName()
                  + " but it's a "
                  + replacement.getClass().getSimpleName());
        }

        value = replacement;
      } else if (value instanceof CodeObject c && old instanceof Node oldNode) {
        if (!(replacement instanceof Node replacementNode)) {
          throw new AssertionError(
              "replacing a Node with a non-Node (`unsafeReplaceInData` should be called with two nodes or two jumps)");
        }
        c.unsafeReplaceOuterCfgNode(oldNode, replacementNode);
      } else if (value instanceof Optional<?> o) {
        var elemClass = optionalOrCollectionComponentElementClass(cmp);
        if (o.isPresent() && o.get().equals(old)) {
          if (!elemClass.isInstance(replacement)) {
            throw new IllegalArgumentException(
                "replacement "
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
            if (!elemClass.isInstance(replacement)) {
              throw new IllegalArgumentException(
                  "replacement "
                      + argTypeStr
                      + " (in collection) is of wrong type: required "
                      + cmp.getType().getSimpleName()
                      + " but it's a "
                      + replacement.getClass().getSimpleName());
            }

            builder.add(replacement);
          } else if (item instanceof Optional<?> o) {
            if (o.isPresent() && o.get().equals(old)) {
              if (!elemClass.isInstance(replacement)) {
                throw new IllegalArgumentException(
                    "replacement "
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

  // endregion args

  // region effects
  // @Override
  public final REffects effects() {
    return effects;
  }

  private void computeEffects() {
    var clazz = data().getClass();
    effects =
        implicitlyFilterEffects(
            mergeComputed(
                "effects",
                data().computeEffects(),
                computeEffectsFromAnnotation(
                    clazz.getAnnotation(EffectsAre.class),
                    clazz.getAnnotation(EffectsAreAribtrary.class))));
  }

  /**
   * Removes effects that, based on the instruction's data, clearly aren't in the instruction.
   *
   * <p>e.g. removes environment effects if the instruction's environment is elided.
   */
  private REffects implicitlyFilterEffects(REffects effects) {
    if (env == StaticEnv.ELIDED) {
      // ???: Can it do reflection without an environment?
      // We rely on these being filtered in `ElideEnvs`.
      effects =
          effects.without(
              REffect.ReadsEnvArg, REffect.WritesEnvArg, REffect.LeaksEnvArg, REffect.Reflection);
    }

    return effects;
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

  protected <T> T mergeComputed(String desc, @Nullable T fromOverride, @Nullable T fromAnnotation) {
    if (fromOverride == null && fromAnnotation == null) {
      throw new AssertionError(
          desc
              + " must be computed either by annotation or by override.\nIn `"
              + data.getClass().getSimpleName()
              + "`");
    }
    if (fromOverride != null && fromAnnotation != null) {
      throw new AssertionError(
          desc
              + " must be computed either by annotation or by override, not both.\nIn `"
              + data.getClass().getSimpleName()
              + "`");
    }
    return fromOverride != null ? fromOverride : fromAnnotation;
  }

  // endregion effects

  // region verify
  // @Override
  public final void verify() throws InstrVerifyException {
    verify(false);
  }

  protected void verify(boolean isInsert) throws InstrVerifyException {
    verifyNoNullableArgs();
    verifySameLenInData();
    computeArgs();
    computeEnv();
    computeEffects();
    // TODO: also have annotations for if the RValue is a specific subclass?
    verifyRValueArgsAreOfCorrectTypes();
    data.verify(isInsert);
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
          typeIsAnnotation != null ? TypeIsUtil.parse(typeIsAnnotation) : RType.ANY_ENV;

      var isRValue = RValue.class.isAssignableFrom(component.getType());
      var isCodeObject = CodeObject.class.isAssignableFrom(component.getType());
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
      } else if (isCodeObject) {
        var codeObject = (CodeObject) arg;
        try {
          codeObject.verifyOuterCfgRValuesAreOfCorrectTypes();
        } catch (IllegalStateException e) {
          throw new InstrVerifyException(
              "Argument" + i + " contains value of wrong type: " + e.getMessage());
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

  // endregion verify

  @Override
  public NodeId<? extends Instr> id() {
    return uncheckedCastId();
  }

  // region misc reflection helpers
  /**
   * If this is an {@code Optional<T>}, {@code ImmutableList<T>}, or {@code
   * ImmutableList<Optional<T>>}, returns {@code T}.
   */
  private static Class<?> optionalOrCollectionComponentElementClass(RecordComponent cmp) {
    assert cmp.getType() == Optional.class || cmp.getType() == ImmutableList.class
        : "`InstrData` has `Collection` component which isn't an `ImmutableList`";
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
        "`InstrData` has `Collection` component which isn't a straightforward generic type, don't know how to handle: "
            + cmp.getGenericType());
  }
  // endregion misc reflection helpers
}
