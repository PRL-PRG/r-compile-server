package org.prlprg.ir.cfg.instr;

import static org.prlprg.util.Reflection.assertJavaxNullableOrNoNullable;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import com.google.common.collect.Streams;
import java.lang.reflect.GenericArrayType;
import java.lang.reflect.ParameterizedType;
import java.lang.reflect.RecordComponent;
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
import org.prlprg.ir.effect.REffect;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;
import org.prlprg.ir.type.sexp.RSexpType;
import org.prlprg.parseprint.ParseException;
import org.prlprg.sexp.PromSXP;
import org.prlprg.sexp.ValueSXP;
import org.prlprg.util.Classes;
import org.prlprg.util.InvalidAnnotationError;
import org.prlprg.util.Reflection;
import org.prlprg.util.StringCase;
import org.prlprg.util.TriConsumer;

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

  /**
   * Returns {@code this} casted to {@link Record}, which is guaranteed to succeed because all
   * {@link InstrData} are records.
   */
  default Record asRecord() {
    if (!(this instanceof Record r)) {
      throw new AssertionError("`InstrData` must be record: " + getClass().getSimpleName());
    }
    return r;
  }

  /**
   * Compute and return the {@link Instr#fun()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws {@link
   * InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  default IFun fun() {
    var clazz = getClass();
    var hasFunAnnotation = clazz.isAnnotationPresent(Fun.class);
    var hasIntrinsicAnnotation = clazz.isAnnotationPresent(Intrinsic.class);

    if (hasFunAnnotation && hasIntrinsicAnnotation) {
      throw new InvalidAnnotationError(
          clazz.getSimpleName(), "`@Fun` and `@Intrinsic` can't both be present");
    } else if (hasFunAnnotation) {
      var components = clazz.getRecordComponents();
      if (components.length == 0) {
        throw new InvalidAnnotationError(
            clazz.getSimpleName(),
            "`InstrData` with `@Fun` must have at least one component (the function)");
      }

      return IFun.of(
          Objects.requireNonNull(Reflection.getComponentValue(asRecord(), components[0])));
    } else if (hasIntrinsicAnnotation) {
      return IFun.Static.named(clazz.getAnnotation(Intrinsic.class).value());
    } else {
      return IFun.Static.named(
          StringCase.convert(clazz.getSimpleName(), StringCase.PASCAL, StringCase.CAMEL));
    }
  }

  /**
   * Compute, allocate, and return the {@link Instr#inputs()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws {@link
   * InvalidAnnotationError} if the instruction has bad or missing annotations.
   *
   * <p>You can modify this array and call {@link #setInputs(CascadingUpdatedInstrs, Object[])} to
   * return an updated {@link InstrData} which is the same class as this, but with the new inputs.
   * Note that the new inputs must conform to {@link #requiredInputTypes()}. Also note that {@link
   * #fun()}, {@link #effects()}, and {@link #outputTypes()} may be affected if they depend on the
   * inputs.
   */
  default Object[] inputs() {
    var inputs = ImmutableList.builder();

    traverseComponentsAndInputs(
        this,
        (_, _, value) -> inputs.add(value),
        (_, _, values) -> inputs.addAll(Arrays.asList(values)));

    return inputs.build().toArray();
  }

  /**
   * Compute, allocate, and return the {@link Instr#requiredInputTypes()} of an instruction with
   * this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws {@link
   * InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  default RType[] requiredInputTypes() {
    var inputTypes = ImmutableList.<RType>builder();

    traverseComponentsAndInputs(
        this,
        (_, component, _) -> inputTypes.add(InstrDataUtil.componentInputType(component)),
        (_, component, values) -> {
          var requiredElemType = InstrDataUtil.componentInputType(component);

          for (var i = 0; i < values.length; i++) {
            inputTypes.add(requiredElemType);
          }
        });

    return inputTypes.build().toArray(RType[]::new);
  }

  /**
   * Create a new {@link InstrData} with the same class as this one, but new inputs.
   *
   * <p>The {@link #fun()}, {@link #effects()}, and {@link #outputTypes()}} may also change, if they
   * depend on the inputs. For example, an {@link IFun.Static} {@link #fun()} won't change, but a
   * {@link IFun.SemiStatic} or {@link IFun.DynamicNode} may. The number of outputs {@link
   * #outputTypes()}{@code .size()} is guaranteed not to change, because it's guaranteed to be the
   * same for all instances of a given {@link InstrData} class.
   *
   * @param cascade For the {@link InputTypeException} message if it gets thrown.
   * @throws IllegalArgumentException If the new inputs are incompatible with the instruction's
   *     required input types or the count is incorrect. Each instruction is a record: the number of
   *     inputs must match the number of components, and each input's class must be a subclass of
   *     the corresponding component's; unless the last component is a {@link VarInputs} collection,
   *     then there can be any number of trailing inputs at its index (including zero) and they must
   *     all be subclasses of its element class.
   * @throws InputTypeException If the {@link Node#type()} of an input is not a subtype of the
   *     corresponding {@link Node} component's type parameter (if the input's actual type is wrong,
   *     it gets {@link IllegalArgumentException}).
   */
  default InstrData setInputs(@Nullable CascadingUpdatedInstrs cascade, Object[] inputs) {
    var newComponentValues = new Object[getClass().getRecordComponents().length];
    final int[] inputIdx = {0};

    try {
      traverseComponentsAndInputs(
          this,
          (componentIdx, _, _) -> {
            var input = inputs[inputIdx[0]];
            newComponentValues[componentIdx] = input;

            inputIdx[0]++;
          },
          (componentIdx, _, varInputs) -> {
            System.arraycopy(inputs, inputIdx[0], varInputs, 0, varInputs.length);
            newComponentValues[componentIdx] = varInputs;

            inputIdx[0] += varInputs.length;
          });
    } catch (ArrayIndexOutOfBoundsException e) {
      throw new IllegalArgumentException(
          "Expected " + inputIdx[0] + " inputs, but got " + inputs.length);
    }

    if (inputs.length != inputIdx[0]) {
      throw new IllegalArgumentException(
          "Expected " + inputIdx[0] + " inputs, but got " + inputs.length);
    }

    var newSelf = Reflection.construct(getClass(), newComponentValues);
    newSelf.checkInputNodeTypes(cascade);

    return newSelf;
  }

  /**
   * Check that the {@link Node} inputs' {@link Node#type()}s are subtypes of their corresponding
   * {@link Node} components' type parameters.
   *
   * @param cascade For the {@link InputTypeException} message if it gets thrown.
   * @throws InputTypeException If the {@link Node#type()} of an input is not a subtype of the
   *     corresponding {@link Node} component's type parameter.
   *     <p>This is the same exception that would be thrown by calling {@link
   *     #setInputs(CascadingUpdatedInstrs, Object[])} given the existing {@link #inputs()} (which
   *     were originally valid, but are no longer because the node's type changed).
   */
  default void checkInputNodeTypes(@Nullable CascadingUpdatedInstrs cascade) {
    traverseComponentsAndInputs(
        this,
        (_, component, input) -> {
          var requiredInputType = InstrDataUtil.componentInputType(component);
          if (!requiredInputType.isInstance(input)) {
            throw new InputTypeException(cascade, input, requiredInputType);
          }
        },
        (_, component, varInputs) -> {
          var requiredInputType = InstrDataUtil.componentInputType(component);

          for (var varInput : varInputs) {
            if (!requiredInputType.isInstance(varInput)) {
              throw new InputTypeException(cascade, varInput, requiredInputType);
            }
          }
        });
  }

  private static void traverseComponentsAndInputs(
      InstrData data,
      TriConsumer<Integer, RecordComponent, Object> mapper,
      TriConsumer<Integer, RecordComponent, Object[]> variadicMapper) {
    var clazz = data.getClass();
    var r = data.asRecord();

    var components = clazz.getRecordComponents();

    for (var i = 0; i < components.length; i++) {
      var component = components[i];

      var value = Reflection.getComponentValue(r, component);

      assertJavaxNullableOrNoNullable(component);
      assert !(value instanceof Optional)
          : "In `InstrData`, use nullable not `Optional` components";
      if (value == null) {
        continue;
      }

      if (component.isAnnotationPresent(VarInputs.class)) {
        if (i != components.length - 1) {
          throw new InvalidAnnotationError(
              clazz.getSimpleName(),
              "`@VarInputs` must be on the last component, but found on component " + i);
        }
        if (!(component.getGenericType() instanceof GenericArrayType)) {
          throw new InvalidAnnotationError(
              clazz.getSimpleName(),
              "`@VarInputs` component must be an array, but found " + value.getClass().getName());
        }
        if (component.isAnnotationPresent(Nullable.class)) {
          throw new InvalidAnnotationError(
              clazz.getSimpleName(),
              "`@VarInputs` component must not be nullable, but found nullable");
        }
        var values = ((Object[]) Objects.requireNonNull(value));

        variadicMapper.accept(i, component, values);
      } else {
        mapper.accept(i, component, value);
      }
    }
  }

  /**
   * Compute and return the {@link Instr#effects()} of an instruction with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws {@link
   * InvalidAnnotationError} if the instruction has bad or missing annotations.
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
      var effectInputNames = annotation.inputs();

      var effectInputs =
          Arrays.stream(effectInputNames)
              .map(
                  inputName ->
                      Arrays.stream(components)
                          .filter(c -> c.getName().equals(inputName))
                          .findFirst()
                          .orElseThrow(
                              () ->
                                  new InvalidAnnotationError(
                                      getClass().getSimpleName(),
                                      "Input named " + inputName + " not found in components")))
              .toArray();

      REffect effect;
      try {
        effect = Reflection.construct(effectClass, effectInputs);
      } catch (IllegalArgumentException e) {
        throw new InvalidAnnotationError(
            getClass().getSimpleName(),
            "Malformed effect "
                + effectClass.getSimpleName()
                + " and inputs "
                + Arrays.toString(effectInputs),
            e);
      }

      effects.add(effect);
    }

    return effects;
  }

  /**
   * Compute and return the {@link Node#type()}s of the {@link Instr#outputs()} of an instruction
   * with this data.
   *
   * <p>By default, this does so via reflection and annotations, and throws {@link
   * InvalidAnnotationError} if the instruction has bad or missing annotations.
   */
  @SuppressWarnings("UnstableApiUsage")
  default @Unmodifiable List<? extends RType> outputTypes() {
    var outputs = getClass().getAnnotation(Outputs.class);
    var outputsGeneric = getClass().getAnnotation(OutputsGeneric.class);

    if (outputs == null) {
      if (outputsGeneric != null) {
        throw new InvalidAnnotationError(
            outputsGeneric,
            "`@OutputsGeneric` can only be present with `@Outputs` (and they must have the same number of values)");
      }

      return List.of();
    }

    var outputTypes =
        Arrays.stream(outputs.value())
            .map(
                output -> {
                  try {
                    return RType.parse(output);
                  } catch (ParseException e) {
                    throw new InvalidAnnotationError(
                        outputs, "Malformed `RType` in `@Outputs`: `" + output + "`", e);
                  }
                })
            .toList();

    if (outputsGeneric == null) {
      return outputTypes;
    }

    if (outputTypes.size() != outputsGeneric.value().length) {
      throw new InvalidAnnotationError(
          getClass().getSimpleName(),
          "`@Outputs` and `@OutputsGeneric` must have the same number of values: "
              + outputTypes.size()
              + " != "
              + outputsGeneric.value().length);
    }

    var components = getClass().getRecordComponents();
    var values = Reflection.getComponentValues(asRecord());

    return Streams.zip(
            outputTypes.stream(),
            Arrays.stream(outputsGeneric.value()),
            (outputType, genericExpression) ->
                genericExpression.apply(outputType, components, values))
        .toList();
  }

  /**
   * Run sanity checks. Either does nothing or throws {@link RuntimeException}.
   *
   * <p>Specifically:
   *
   * <ul>
   *   <li>Check that all input nodes' {@link Node#type()}s are correct (since this isn't enforced
   *       by Java, since they are generic).
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

class InstrDataUtil {
  /**
   * Returns the required type of an input corresponding to the given component.
   *
   * <p>Any value that is assigned to the input (e.g. in {@link
   * InstrData#setInputs(CascadingUpdatedInstrs, Object[])} is checked to be an instance of this
   * required type, and an {@link InputTypeException} is thrown if it isn't one.
   *
   * @throws AssertionError If an {@link RType} can't be extracted from the component's combination
   *     of annotations and type because they're nonsensical (e.g. {@code Node<? extends Node…>}).
   * @throws UnsupportedOperationException If an {@link RType} could theoretically be extracted from
   *     the component's combination of annotations and type, but we didn't implement it.
   */
  static RType componentInputType(RecordComponent component) {
    var inferredType =
        componentInputTypeFromClass(
            component.getGenericType(), component.getAnnotation(VarInputs.class));
    var explicitType =
        component.isAnnotationPresent(Input.class)
            ? componentInputTypeFromAnnotation(component.getAnnotation(Input.class))
            : null;

    if (explicitType == null) {
      return inferredType;
    } else {
      if (!explicitType.isSubsetOf(inferredType)) {
        throw new InvalidAnnotationError(
            component.getAnnotation(Input.class),
            "Explicit input type "
                + explicitType
                + " must be a subset of inferred input type "
                + inferredType);
      }

      return explicitType;
    }
  }

  private static RType componentInputTypeFromClass(
      Type type, @Nullable VarInputs varInputsAnnotation) {
    // If var-inputs, the input type is the element type.
    if (varInputsAnnotation != null) {
      if (!(type instanceof GenericArrayType genericArrayType)) {
        throw new InvalidAnnotationError(
            varInputsAnnotation, "`@VarInputs` component must be an array, but found " + type);
      }

      // The following code sets `type` to the array *element* type.
      // Why does Java call array elements "components"? Record properties are also components...
      type = genericArrayType.getGenericComponentType();
    }

    // If the type is `Node`, it must be `Node<?>` or `Node<? extends …>`, and the input type is
    // `Object` or `…`, respectively.
    if (type instanceof ParameterizedType p && p.getRawType() == Node.class) {
      if (!(p.getActualTypeArguments()[0] instanceof WildcardType w)) {
        throw new AssertionError(
            "`Node` component must have a wildcard type parameter (`Node<? extends …>`)");
      }

      type = w.getLowerBounds().length == 0 ? Object.class : w.getLowerBounds()[0];

      if (type == Node.class
          || (type instanceof ParameterizedType p1 && p1.getRawType() == Node.class)) {
        throw new AssertionError("`Node<? extends Node…>` doesn't make sense");
      }
    }

    // If the input type is `PromSXP<?>` or `PromSXP<? extends …>`, we henceforth compute the type
    // of the parameter (or `ValueSXP` if not present), then promise-wrap it at the end.
    var isPromise = false;
    if (type instanceof ParameterizedType p && p.getRawType() == PromSXP.class) {
      isPromise = true;

      type = p.getActualTypeArguments()[0];
      if (type instanceof WildcardType w) {
        type = w.getLowerBounds().length == 0 ? ValueSXP.class : w.getLowerBounds()[0];
      }
    }

    // Since `RType.of` can only take classes:
    // - If the input type is parameterized and all parameters are wildcards (e.g. `NumericSXP<?>`),
    //   we can just give it the raw type.
    // - If the input type is a primitive, we give it the boxed version.
    // - Otherwise, we haven't implemented the specialization necessary to capture the generic
    //   parameter (if we had, it would've been in one of the above cases), so we throw.
    if (type instanceof GenericArrayType) {
      throw new AssertionError("Only a `@VarArgs` component can be an array type");
    }
    if (type instanceof ParameterizedType p
        && Arrays.stream(p.getActualTypeArguments())
            .allMatch(arg -> arg instanceof WildcardType w && w.getLowerBounds().length == 0)) {
      type = p.getRawType();
    }
    if (!(type instanceof Class<?> clazz)) {
      throw new UnsupportedOperationException(
          "Need to add code to extract a detailed RType from an " + type);
    }
    if (clazz.isPrimitive()) {
      clazz = Classes.boxed(clazz);
    }

    var base = RType.of(clazz);
    return isPromise ? ((RSexpType) base).promiseWrapped() : base;
  }

  private static RType componentInputTypeFromAnnotation(Input annotation) {
    try {
      return RType.parse(annotation.value());
    } catch (ParseException e) {
      throw new InvalidAnnotationError(
          annotation, "Malformed `RType`: `" + annotation.value() + "`", e);
    }
  }
}
