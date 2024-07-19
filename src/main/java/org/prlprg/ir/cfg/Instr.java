package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.HashMap;
import java.util.List;
import java.util.Objects;
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
public sealed class Instr implements InstrOrPhi permits Jump, Stmt {
  private final CFG cfg;

  private InstrData data;

  private IFun fun;
  private final Object[] inputs;
  private final REffects effects;
  private final Node<?>[] outputs;

  private final List<Node<?>> cachedInputNodes = new ArrayList<>();

  Instr(CFG cfg, InstrData data) {
    this.cfg = cfg;
    this.data = data;

    fun = data.resolveFun();
    inputs = data.resolveInputs();
    effects = data.resolveEffects();
    outputs = data.resolveOutputs();

    updateCached();
  }

  /**
   * The instruction's "type"-sans-overloads, in the way it's parsed/printed and lowered.
   *
   * <p>This isn't the same as the type of "data", because the same type (e.g. {@code `+`} may have
   * many overloads, each with different arguments.
   */
  public IFun fun() {
    return fun;
  }

  /**
   * (A view of) the instruction's inputs.
   *
   * <p>This includes nodes, as well as data like the load or store symbol.
   */
  public @UnmodifiableView List<Object> inputs() {
    return List.of(inputs);
  }

  /**
   * (A shallow copy of) the nodes in the instruction's {@link #inputs()}.
   *
   * <p>If an input is an array of nodes, this includes all nodes in that array.
   */
  @Override
  public @UnmodifiableView List<Node<?>> inputNodes() {
    return Collections.unmodifiableList(cachedInputNodes);
  }

  /**
   * Side-effects performed when this instruction is executed.
   *
   * <p>Effects also include references to inputs and outputs. For instance, the "load" effect
   * references the name of the variable to load, as well as the environment it's loaded from.
   */
  public REffects effects() {
    return effects;
  }

  /**
   * (A view of) the instruction's outputs.
   *
   * <p>Outputs may be inputs to other instructions. Some instructions, like {@code st} (store)
   * don't produce any outputs. Most, like {@code ld} (load) and {@code `+`}, produce a single
   * output. A few may produce multiple outputs.
   *
   * <p>Typed outputs can be accessed through {@link #effects()}.
   */
  @Override
  public @UnmodifiableView List<Node<?>> outputs() {
    return List.of(outputs);
  }

  private void updateCached() {
    cachedInputNodes.clear();
    for (var input : inputs) {
      addInputNodesFrom(cachedInputNodes, input);
    }
  }

  private static void addInputNodesFrom(List<Node<?>> nodes, @Nullable Object input) {
    switch (input) {
      case Node<?> node -> nodes.add(node);
      case CodeObject codeObject -> nodes.addAll(codeObject.outerCfgNodes());
      case Collection<?> collection -> {
        for (var item : collection) {
          addInputNodesFrom(nodes, item);
        }
      }
      case Optional<?> optional -> optional.ifPresent(o -> addInputNodesFrom(nodes, o));
      case null, default -> {}
    }
  }

  @Override
  public final void replaceInInputs(Node<?> old, Node<?> replacement) {
    var oldData = data;
    unsafeReplaceInputs("node", old, replacement);

    cfg.record(new MutateInstrArgs(this, data), new MutateInstrArgs(this, oldData));
  }

  /**
   * Replace every occurrence of {@code old} with {@code replacement} in the instruction's {@link
   * #inputs()}.
   *
   * <p>This will <i>not</i> record a {@link CFGEdit} (hence "unsafe").
   *
   * @throws IllegalArgumentException If the {@code replacement}'s type is incompatible with the
   *     input's required type: if the class isn't a subclass of the component's class, or if the
   *     class is {@link Node} and the node's {@link Node#type()} isn't a subtype of the component's
   *     required type.
   */
  protected final void unsafeReplaceInputs(String argTypeStr, Object old, Object replacement) {
    // TODO: this

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

      if (Objects.equals(value, old)) {
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
      } else if (value instanceof Collection<?> c) {
        var elemClass = collectionComponentElementClass(cmp);
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
}

abstract sealed class InstrImpl<D extends InstrData<?>> extends InstrOrPhiImpl implements LocalNode
    permits JumpImpl, StmtImpl {
  private final Class<D> dataClass;
  private D data;

  // These are all initialized in `verify`, which is called from the constructor, and doesn't
  // reference either before initializing them.
  @SuppressWarnings("NotNullFieldNotInitialized")
  private ImmutableList<Node> args;

  private @Nullable @IsEnv ISexp env;
  private @Nullable FrameState frameState;

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
  public final ImmutableList<Node> inputNodes() {
    return args;
  }

  // @Override
  public final @Nullable @IsEnv ISexp env() {
    return env;
  }

  // @Override
  public final @Nullable FrameState frameState() {
    return frameState;
  }

  // @Override
  @SuppressWarnings("unchecked")
  public final void replaceInArgs(Node old, Node replacement) {
    var oldData = data;
    unsafeReplaceInData("node", old, replacement);

    cfg()
        .record(
            new MutateInstrArgs<>((Instr) this, (InstrData<Instr>) data),
            new MutateInstrArgs<>((Instr) this, (InstrData<Instr>) oldData));
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
                  if (Collection.class.isAssignableFrom(cmp.getType())) {
                    return Node.class.isAssignableFrom(collectionComponentElementClass(cmp));
                  }
                  return false;
                })
            .flatMap(
                cmp -> {
                  var value = Reflection.getComponent(r, cmp);
                  return value == null
                      ? Stream.of()
                      : switch (value) {
                        case Node n -> Stream.of(n);
                        case CodeObject c -> c.outerCfgNodes().stream();
                        case Collection<?> c ->
                            c.stream()
                                .flatMap(
                                    e ->
                                        e instanceof Optional<?> e1
                                            ? e1.map(Node.class::cast).stream()
                                            : Stream.of((Node) e));
                        default -> throw new UnreachableError();
                      };
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
                  if (!(Reflection.getComponent(r, component) instanceof ISexp env1)) {
                    throw new AssertionError("`@IsEnv` annotation must be on an `ISexp` field");
                  }
                  return env1;
                })
            .orElse(null);
    if (env != null && env.isEnv() != Maybe.YES) {
      throw new InstrVerifyException("value assigned to `@IsEnv` must be a guaranteed environment");
    }
  }

  private void computeFrameState() {
    if (!(data instanceof Record r)) {
      throw new AssertionError("`InstrData` must be a record");
    }
    var components = data.getClass().getRecordComponents();

    frameState =
        Arrays.stream(components)
            .filter(cmp -> cmp.getType() == FrameState.class)
            .collect(
                Streams.intoOneOrThrow(
                    () ->
                        new AssertionError("`InstrData` can't have multiple `FrameState` fields")))
            .map(component -> (FrameState) Reflection.getComponent(r, component))
            .orElse(null);
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

      if (Objects.equals(value, old)) {
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
      } else if (value instanceof Collection<?> c) {
        var elemClass = collectionComponentElementClass(cmp);
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
    if (env == null) {
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
    verifyNoOptionalArgs();
    verifySameLenInData();
    computeArgs();
    computeEnv();
    computeFrameState();
    computeEffects();
    // TODO: also have annotations for if the ISexp is a specific subclass?
    verifyISexpArgsAreOfCorrectTypes();
    data.verify(isInsert);
  }

  private void verifyNoOptionalArgs() throws InstrVerifyException {
    // Reflectively get all record components, assert that none of them are nullable.
    if (!(data instanceof Record)) {
      throw new AssertionError("InstrData must be a record");
    }
    var cls = data().getClass();
    var components = cls.getRecordComponents();

    for (var component : components) {
      if (component.getType() == Optional.class) {
        throw new InstrVerifyException(
            "Top-level `"
                + cls.getSimpleName()
                + "` argument "
                + component.getName()
                + " is `Optional`, must be `@Nullable` instead.");
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
      if (collection != null) {
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

      if (collection != null && collection.size() != otherCollectionSize) {
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

  private void verifyISexpArgsAreOfCorrectTypes() throws InstrVerifyException {
    // Reflectively get all record components, filter to ones with `@TypeIs` and `@IsEnv`
    // annotations, check that their type is an `ISexp` or a list of `ISexp`s, and check that the
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

      var isISexp = ISexp.class.isAssignableFrom(component.getType());
      var isCodeObject = CodeObject.class.isAssignableFrom(component.getType());
      var isListOfISexps =
          List.class.isAssignableFrom(component.getType())
              && ISexp.class.isAssignableFrom(collectionComponentElementClass(component));
      assert isISexp || isListOfISexps
          : "Only `ISexp`s or lists of `ISexp`s can have `@TypeIs` or `@IsEnv` annotation: argument "
              + i
              + " has a `@TypeIs` or `@IsEnv` annotation but isn't an `ISexp` or list of them";
      var arg = Reflection.getComponent(r, component);

      if (arg != null) {
        if (isISexp) {
          var iSexp = (ISexp) arg;
          if (iSexp.isInstanceOf(expectedType) != Maybe.YES) {
            throw new InstrVerifyException(
                "Argument "
                    + i
                    + " is of wrong type: expected "
                    + expectedType
                    + " but it's a "
                    + iSexp.type());
          }
        } else if (isCodeObject) {
          var codeObject = (CodeObject) arg;
          try {
            codeObject.verifyOuterCfgISexpsAreOfCorrectTypes();
          } catch (IllegalStateException e) {
            throw new InstrVerifyException(
                "Argument" + i + " contains value of wrong type: " + e.getMessage());
          }
        } else {
          var iSexps = (List<?>) arg;
          for (var j = 0; j < iSexps.size(); j++) {
            switch (iSexps.get(j)) {
              case Optional<?> optISexp -> {
                var iSexp = (ISexp) optISexp.orElse(null);
                if (iSexp != null && iSexp.isInstanceOf(expectedType) != Maybe.YES) {
                  throw new InstrVerifyException(
                      "Argument "
                          + i
                          + " element "
                          + j
                          + " is of wrong type: expected "
                          + expectedType
                          + " (or null) but it's a "
                          + iSexp.type());
                }
              }
              case ISexp iSexp -> {
                if (iSexp.isInstanceOf(expectedType) != Maybe.YES) {
                  throw new InstrVerifyException(
                      "Argument "
                          + i
                          + " element "
                          + j
                          + " is of wrong type: expected "
                          + expectedType
                          + " but it's a "
                          + iSexp.type());
                }
              }
              default ->
                  throw new AssertionError(
                      "`optionalOrCollectionComponentElementClass` returned something for this list, so it should either be a list of `ISexp`s or `Optional`s");
            }
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
   * Asserts the component's type is either {@code ImmutableList<Optional<T>>} or {@code
   * ImmutableList<T>} (prioritizing the first), then returns {@code T}.
   */
  @SuppressWarnings("DataFlowIssue")
  private static Class<?> collectionComponentElementClass(RecordComponent cmp) {
    assert cmp.getType() == ImmutableList.class
        : "`InstrData` has `Collection` component which isn't an `ImmutableList`";
    var arg = ((ParameterizedType) cmp.getGenericType()).getActualTypeArguments()[0];
    return arg instanceof ParameterizedType p && p.getRawType() == Optional.class
        ? (Class<?>) p.getActualTypeArguments()[0]
        : (Class<?>) arg;
  }
  // endregion misc reflection helpers
}
