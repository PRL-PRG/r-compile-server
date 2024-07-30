package org.prlprg.ir.cfg.instr;

import static org.prlprg.util.Reflection.assertJavaxNullableOrNoNullable;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Streams;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.Type;
import java.lang.reflect.WildcardType;
import java.util.Arrays;
import java.util.List;
import java.util.Objects;
import java.util.Optional;
import java.util.function.Function;
import java.util.stream.Stream;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Unmodifiable;
import org.prlprg.ir.cfg.CascadingUpdatedInstrs;
import org.prlprg.ir.cfg.IFun;
import org.prlprg.ir.cfg.Instr;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.effect.REffects;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.Reflection;

/**
 * Every type of instruction as an immutable, pattern-matchable record.
 *
 * @see Instr for why we have this separate from instructions.
 */
public sealed interface InstrData permits JumpData, StmtData {
  // TODO: Refactor this: we need `INTRINSIC_CLASSES`, `CLOSURE_CLASS`, and `DYNAMIC_CALL_CLASSES`.
  @SuppressWarnings("unchecked")
  ImmutableMap<String, Class<? extends InstrData>> CLASSES =
      Stream.concat(
              Arrays.stream(StmtData.class.getNestMembers()),
              Arrays.stream(JumpData.class.getNestMembers()))
          .filter(c -> c.isRecord() && InstrData.class.isAssignableFrom(c))
          .map(c -> (Class<? extends InstrData>) c)
          .collect(ImmutableMap.toImmutableMap(Class::getSimpleName, Function.identity()));

  /** Returns {@code this} casted to {@link Record}, which is guaranteed to succeed because all
   * {@link InstrData} are records. */
  default Record asRecord() {
    if (!(this instanceof Record r)) {
      throw new AssertionError("`InstrData` must be record: " + getClass().getSimpleName());
    }
    return r;
  }

  /** Compute and return the {@link Instr#fun()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws
   * {@link InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  default IFun fun() {
    var components = getClass().getRecordComponents();
    var firstComponent = components.length == 0 ? null : components[0];
    var hasFunAnnotation = firstComponent != null && firstComponent.isAnnotationPresent(Fun.class);
    var annotatedFun = hasFunAnnotation ? IFun.of(Objects.requireNonNull(Reflection.getComponentValue(asRecord(), firstComponent))) : null;

    var intrinsicFun = Optional.ofNullable(getClass().getAnnotation(Intrinsic.class))
        .map(Intrinsic::value)
        .map(IFun.Static::named)
        .orElse(null);

    return ComputeCandidate.resolve(
        this,
        ComputeCandidate.of("`@Fun` on first component", annotatedFun),
        ComputeCandidate.of("`@Intrinsic` on class", intrinsicFun)
    );
  }

  /** Compute, allocate, and return the {@link Instr#inputs()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws
   * {@link InvalidAnnotationError} if the instruction has bad or missing annotations.
   *
   * <p>You can modify this array and call {@link #setInputs(CascadingUpdatedInstrs, Object[])} to
   * return an updated {@link InstrData} which is the same class as this, but with the new inputs
   * (note that {@link #fun()}, {@link #effects()}, and {@link #outputTypes()} may be affected if
   * they depend on the inputs).
   */
  default Object[] inputs() {
    var components = getClass().getRecordComponents();
    var inputs = ImmutableList.builder();

    for (var i = 0; i < components.length; i++) {
      var component = components[i];

      var value = Reflection.getComponentValue(asRecord(), component);

      assertJavaxNullableOrNoNullable(component);
      assert !(value instanceof Optional)
          : "In `InstrData`, use nullable not `Optional` components";
      if (value == null) {
        continue;
      }

      if (component.isAnnotationPresent(VarInputs.class)) {
        if (i != components.length - 1) {
          throw new InvalidAnnotationError(
              getClass().getSimpleName(),
              "`@VarInputs` must be on the last component, but found on component " + i);
        }
        if (!(component.getGenericType() instanceof GenericArrayType)) {
          throw new InvalidAnnotationError(
              getClass().getSimpleName(),
              "`@VarInputs` component must be an array, but found " + value.getClass().getName());
        }
        if (component.isAnnotationPresent(Nullable.class)) {
          throw new InvalidAnnotationError(
              getClass().getSimpleName(),
              "`@VarInputs` component must not be nullable, but found nullable");
        }
        inputs.addAll(Arrays.asList((Object[]) Objects.requireNonNull(value)));
      } else {
        inputs.add(value);
      }
    }

    return inputs.build().toArray();
  }

  /** Create a new {@link InstrData} with the same class as this one, but new inputs.
   *
   * <p>The {@link #fun()}, {@link #effects()}, and {@link #outputTypes()}} may also change, if they
   * depend on the inputs. For example, an {@link IFun.Static} {@link #fun()} won't change, but a
   * {@link IFun.SemiStatic} or {@link IFun.DynamicNode} may. The number of outputs
   * {@link #outputTypes()}{@code .size()} is guaranteed not to change, because it's guaranteed to
   * be the same for all instances of a given {@link InstrData} class.
   *
   * @param cascade For the {@link InputNodeTypeException} message if it gets thrown.
   * @throws IllegalArgumentException If the new inputs are incompatible with the instruction's
   *                                  required input types or the count is incorrect. Each
   *                                  instruction is a record: the number of inputs must match the
   *                                  number of components, and each input's class must be a
   *                                  subclass of the corresponding component's; unless the last
   *                                  component is a {@link VarInputs} collection, then there can be
   *                                  any number of trailing inputs at its index (including zero)
   *                                  and they must all be subclasses of its element class.
   * @throws InputNodeTypeException If the {@link Node#type()} of an input is not a subtype of the
   *                               corresponding {@link Node} component's type parameter (if the
   *                               input's actual type is wrong, it gets {@link IllegalArgumentException}).
   */
  default InstrData setInputs(@Nullable CascadingUpdatedInstrs cascade, Object[] inputs) {
    var components = getClass().getRecordComponents();
    var newComponentValues = new Object[components.length];
    var expectedNumInputs = 0;

    try {
      for (var i = 0; i < components.length; i++) {
        var component = components[i];
        var oldComponentValue = Reflection.getComponentValue(asRecord(), component);

        if (oldComponentValue == null) {
          continue;
        } else if (inputs[i] == null) {
          throw new IllegalArgumentException(
              "Expected input " + i + " to be non-null, but got null.\nAll inputs need to be non-null; components can be nullable, but null components aren't added to the inputs array.");
        }

        if (component.isAnnotationPresent(VarInputs.class)) {
          if (!(component.getGenericType() instanceof GenericArrayType componentType)) {
            throw new AssertionError("`@VarInputs` component must be an array");
          }

          var componentElementType = componentType.getGenericComponentType();
          if (componentElementType instanceof ParameterizedType p) {
            componentElementType = p.getRawType();
          }
          if (!(componentElementType instanceof Class<?> componentElementClass)) {
            throw new AssertionError("`@VarInputs` component must be an array of a parameterized type or class type");
          }

          var varInputs = (Object[]) oldComponentValue;
          expectedNumInputs += varInputs.length;
          System.arraycopy(inputs, i, varInputs, 0, varInputs.length);

          for (var j = 0; j < varInputs.length; j++) {
            if (!componentElementClass.isInstance(varInputs[j])) {
              throw new IllegalArgumentException(
                  "Expected input " + (i + j) + " to be a " + componentElementClass.getName()
                      + ", but got a " + varInputs[j].getClass().getName());
            }
          }
        } else {
          expectedNumInputs++;
          newComponentValues[i] = inputs[i];

          if (!component.getType().isInstance(inputs[i])) {
            throw new IllegalArgumentException(
                "Expected input " + i + " to be a " + component.getType().getName()
                    + ", but got a " + inputs[i].getClass().getName());
          }
        }
      }
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new IllegalArgumentException(
          "Expected at least " + expectedNumInputs + " inputs, but got " + inputs.length);
    }

    if (inputs.length != expectedNumInputs) {
      throw new IllegalArgumentException(
          "Expected " + expectedNumInputs + " inputs, but got " + inputs.length);
    }

    var newSelf = Reflection.construct(getClass(), newComponentValues);
    newSelf.checkInputNodeTypes(cascade);

    return newSelf;
  }

  /** Check that the {@link Node} inputs' {@link Node#type()}s are subtypes of their corresponding
   * {@link Node} components' type parameters.
   *
   * @param cascade For the {@link InputNodeTypeException} message if it gets thrown.
   * @throws InputNodeTypeException If the {@link Node#type()} of an input is not a subtype of the
   *                                corresponding {@link Node} component's type parameter.
   *                                <p>This is the same exception that would be thrown by
   *                                calling {@link #setInputs(CascadingUpdatedInstrs, Object[])}
   *                                given the existing {@link #inputs()} (which were originally
   *                                valid, but are no longer because the node's type changed).
   */
  default void checkInputNodeTypes(@Nullable CascadingUpdatedInstrs cascade) {
    for (var component : getClass().getRecordComponents()) {
      var componentValue = Reflection.getComponentValue(asRecord(), component);

      if (componentValue == null) {
        continue;
      }

      if (component.isAnnotationPresent(VarInputs.class)) {
        if (!(component.getGenericType() instanceof GenericArrayType componentType)) {
          throw new AssertionError("`@VarInputs` component must be an array");
        }

        var componentElementType = componentType.getGenericComponentType();
        var componentElementNodeType = nodeTypeIfNode(componentElementType);
        if (componentElementNodeType == null) {
          continue;
        }

        for (var varInput : (Object[]) componentValue) {
          if (!(varInput instanceof Node<?> varInputNode)) {
            throw new AssertionError("`Node` component must have a `Node` input");
          }

          if (!varInputNode.isSubtypeOf(componentElementNodeType)) {
            throw new InputNodeTypeException(cascade, varInputNode, componentElementNodeType);
          }
        }
      } else {
        var componentNodeType = nodeTypeIfNode(component.getGenericType());
        if (componentNodeType == null) {
          continue;
        }

        if (!(componentValue instanceof Node<?> inputNode)) {
          throw new AssertionError("`Node` component must have a `Node` input");
        }

        if (!inputNode.isSubtypeOf(componentNodeType)) {
          throw new InputNodeTypeException(cascade, inputNode, componentNodeType);
        }
      }
    }
  }

  /** If {@code genericType} is {@code Node<…>}, asserts {@code …} is {@code ? extends T} and
   * {@code T} is a class, then returns {@code T}.
   *
   * <p>Otherwise, returns {@code null}.
   */
  private static @Nullable Class<?> nodeTypeIfNode(Type genericType) {
    if (!(genericType instanceof ParameterizedType p) || p.getRawType() != Node.class) {
      return null;
    }

    if (!(p.getActualTypeArguments()[0] instanceof WildcardType w)) {
      throw new AssertionError("`Node` component must have a wildcard type parameter (`Node<? extends …>`)");
    }
    if (w.getLowerBounds().length != 1 || w.getUpperBounds().length != 0) {
      throw new AssertionError("`Node` component must have a single lower bound wildcard type parameter (`Node<? extends …>`)");
    }
    if (!(w.getLowerBounds()[0] instanceof Class<?> nodeType)) {
      throw new AssertionError("`Node` component must have a wildcard type parameter with a class lower bound (`Node<? extends …>`, where `…` is a class)");
    }

    return nodeType;
  }

  /** Compute and return the {@link Instr#effects()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws
   * {@link InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  default REffects effects() {
    var effects = new REffects();

    var annotations = getClass().getAnnotation(Effects.class);
    if (annotations == null) {
      return effects;
    }

    var components = getClass().getRecordComponents();

    for (var annotation : annotations.value()) {
      var effectClass = annotation.value();
      var effectInputIndices = annotation.inputs();

      var effectInputs = new Object[effectInputIndices.length];
      for (var i = 0; i < effectInputIndices.length; i++) {
        var effectInputIndex = effectInputIndices[i];
        effectInputs[i] = Reflection.getComponentValue(asRecord(), components[effectInputIndex]);
      }

      try {
        var effect = Reflection.construct(effectClass, effectInputs);
        effects.add(effect);
      } catch (IllegalArgumentException e) {
        throw new InvalidAnnotationError(
            getClass().getSimpleName(),
            "Malformed effect " + effectClass.getSimpleName() + " and inputs "
                + Arrays.toString(effectInputs),
            e);

      }
    }

    return effects;
  }

  /** Compute and return the {@link Node#type()}s of the {@link Instr#outputs()} of an instruction
   * with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws
   * {@link InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  @SuppressWarnings("UnstableApiUsage")
  default @Unmodifiable List<? extends Class<?>> outputTypes() {
    var outputs = getClass().getAnnotation(Outputs.class);
    var outputsGeneric = getClass().getAnnotation(OutputsGeneric.class);

    if (outputs == null) {
      if (outputsGeneric != null) {
        throw new InvalidAnnotationError(
            getClass().getSimpleName(),
            "`@OutputsGeneric` can only be present with `@Outputs` (and they must have the same number of values)");
      }

      return List.of();
    }

    if (outputsGeneric == null) {
      return Arrays.asList(outputs.value());
    }

    if (outputs.value().length != outputsGeneric.value().length) {
      throw new InvalidAnnotationError(
          getClass().getSimpleName(),
          "`@Outputs` and `@OutputsGeneric` must have the same number of values: "
              + outputs.value().length + " != " + outputsGeneric.value().length);
    }

    var components = getClass().getRecordComponents();
    var values = Reflection.getComponentValues(asRecord());

    return Streams.zip(
        Arrays.stream(outputs.value()),
        Arrays.stream(outputsGeneric.value()),
        (output, genericExpression) -> genericExpression.apply(output, components, values)).toList();
  }

  /** Run sanity checks. Either does nothing or throws {@link RuntimeException}.
   *
   * <p>Specifically:
   * <ul>
   *   <li>Check that all input nodes' {@link Node#type()}s are correct (since this isn't enforced
   *   by Java, since they are generic).
   *   <li>Any annotation-specific or instruction-specific checks.
   * </ul>
   */
  default void verify() {
    // Make sure node types are correct.
    checkInputNodeTypes(null);

    // Make sure effects can be constructed.
    effects();
  }
}
