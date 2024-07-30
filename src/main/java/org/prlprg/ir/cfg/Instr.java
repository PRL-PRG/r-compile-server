package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Map;
import java.util.Optional;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Contract;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.instr.InputNodeTypeException;
import org.prlprg.ir.cfg.instr.InstrData;
import org.prlprg.ir.cfg.instr.JumpData;
import org.prlprg.ir.cfg.instr.StmtData;
import org.prlprg.ir.effect.REffects;

/**
 * IR instruction: {@link Stmt} or {@link Jump}. An instruction is a single operation in a basic
 * block; a {@link Stmt} is an straight-line instruction and a {@link Jump} affects control flow by
 * moving to a new block.
 *
 * <p>This type is mutable and does not have subclasses for each specific instruction, while {@link
 * InstrData} is immutable and does. Don't construct {@link Instr}s directly, instead via {@link BB}
 * methods such as {@link BB#insertAt(int, StmtData)} and {@link BB#replace(int, StmtData)}, which
 * take {@link InstrData} as an argument and construct the {@link Instr} themselves.
 */
public sealed abstract class Instr implements InstrOrPhi, InstrOrPhiImpl permits Stmt, Jump {
  private final CFG cfg;

  /**
   * The instruction's data, which determines its {@link #fun()}, {@link #inputs()},
   * {@link #effects()}, and the {@link Node#type()}s of its {@link #outputs()}.
   *
   * <p>This is only exposed internally because, outside of instruction creation and lowering, the
   * instruction should only be queried for its other public methods. This is because there are many
   * instructions, and many are handled very similarly, so it's better design to abstract how they
   * are handled (e.g. query a "load" effect vs pattern-matching the load {@link InstrData}s).
   */
  protected InstrData data;

  protected IFun fun;
  protected final Object[] inputs;
  private REffects effects;
  private final ImmutableList<InstrOutput<?>> outputs;

  private final List<Node<?>> cachedInputNodes = new ArrayList<>();

  // region construct
  /** Serialized form where everything is replaced by IDs. */
  public sealed interface Serial permits Stmt.Serial, Jump.Serial {
    /** The {@link StmtData} or {@link JumpData} the instruction is constructed with. */
    MapToIdIn<? extends InstrData> data();

    /** The {@link LocalNodeId}s of the instruction's {@link #outputs()} after it's constructed. */
    ImmutableList<LocalNodeId<?>> outputIds();
  }

  /** Creates an instruction.
   *
   * <p>Doesn't {@link CFG#track(InstrOrPhi)} it in the {@link CFG}, so this should be called in
   * {@link BB}. */
  Instr(CFG cfg, InstrData data) {
    this.cfg = cfg;
    this.data = data;

    fun = data.fun();
    inputs = data.inputs();
    effects = data.effects();
    outputs = data.outputTypes()
        .stream()
        .map(type -> new InstrOutput<>(this, type))
        .collect(ImmutableList.toImmutableList());

    updateCachedInputNodes();
  }

  // endregion construct

  // region accessors
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
  public ImmutableList<InstrOutput<?>> outputs() {
    return outputs;
  }

  @Override
  public CFG cfg() {
    return cfg;
  }
  // endregion accessors

  // region mutators
  @Override
  public CascadingInstrUpdate unsafeReplaceInInputs(CascadingUpdatedInstrs seen, Node<?> old, Node<?> replacement) {
    boolean[] replaced = {false};
    for (var i = 0; i < inputs.length; i++) {
      inputs[i] = replaceInputNodesIn(inputs[i], old, replacement, replaced);
    }

    if (!replaced[0]) {
      return CascadingInstrUpdate.NONE;
    }

    data = data.setInputs(seen, inputs);

    return postUpdateData(seen);
  }

  /**
   * Calls {@link InstrData#checkInputNodeTypes(CascadingUpdatedInstrs)}, then updates cached
   * accessors ({@link Instr#fun()}, {@link Instr#effects()}, and the {@link Node#type()}s of
   * {@link Instr#outputs()}) to properly handle input {@link Node}s whose {@link Node#type()}s have
   * changed.
   *
   * <p>Returns whether this caused the phi's {@link Node#type()}, or the instruction's {@link
   * Instr#effects()} or one ot its {@link Instr#outputs()} {@link Node#type()}s, to change. If the
   * latter, you are responsible for updating instructions whose inputs contain the changed outputs.
   *
   * <p>This will not record a {@link CFGEdit}, it may cause a {@link Phi} to no longer be an
   * expected type, and you are responsible for updating instructions whose inputs contain outputs
   * that the replacement changed the type of. Hence this is package-private and "unsafe".
   *
   * @throws InputNodeTypeException If an input's {@link Node#type()} has changed so that it's no
   * longer a subtype of the required type.
   * @throws InfiniteCascadingUpdateException if an instruction's updated outputs trigger more
   * updates that eventually update that instruction's inputs so that its outputs update again. This
   * is checked via the {@link CascadingUpdatedInstrs} data-structure, which can be constructed with
   * the initial instruction whose outputs have changed, and passed to each instruction whose inputs
   * change.
   */
  CascadingInstrUpdate unsafeCascadeUpdate(CascadingUpdatedInstrs seen) {
    data.checkInputNodeTypes(seen);

    return postUpdateData(seen);
  }

  private CascadingInstrUpdate postUpdateData(CascadingUpdatedInstrs seen) {
    fun = data.fun();

    var effectsChanged = !effects.equals(data.effects());
    effects = data.effects();

    var outputTypesChanged = false;
    var outputTypes = data.outputTypes();
    if (outputTypes.size() != outputs.size()) {
      throw new IllegalStateException("`InstrData` changed output count, that isn't allowed");
    }
    for (var i = 0; i < outputs.size(); i++) {
      if (outputs.get(i).type() != outputTypes.get(i)) {
        outputTypesChanged = true;
        outputs.get(i).unsafeSetType(outputTypes.get(i));
      }
    }

    updateCachedInputNodes();

    var result = CascadingInstrUpdate.of(effectsChanged, outputTypesChanged);

    seen.handleUpdatedInstrData(this, result);

    return result;
  }

  @SuppressWarnings("unchecked")
  @Contract("null, _, _, _ -> null; !null, _, _, _ -> !null")
  private static <T> @Nullable T replaceInputNodesIn(@Nullable T input, Node<?> old, Node<?> replacement, boolean[] replaced) {
    return switch (input) {
      case Node<?> n when n == old -> {
        replaced[0] = true;
        yield (T) replacement;
      }
      case PureExpressionNode<?> c -> {
        replaced[0] |= c.unsafeReplaceInDescendants(old, replacement);
        yield (T) c;
      }
      case Node<?>[] n -> {
        for (var j = 0; j < n.length; j++) {
          n[j] = replaceInputNodesIn(n[j], old, replacement, replaced);
        }
        yield (T) n;
      }
      case Optional<?> o -> (T) o.map(o1 -> replaceInputNodesIn(o1, old, replacement, replaced));
      case ImmutableList<?> c -> {
        var builder = ImmutableList.builderWithExpectedSize(c.size());
        for (var item : c) {
          builder.add(replaceInputNodesIn(item, old, replacement, replaced));
        }
        yield (T) builder.build();
      }
      case Collection<?> _ -> throw new UnsupportedOperationException("Collections in `InstrData` must be `ImmutableList`s (arrays are also allowed)");
      case null, default -> input;
    };
  }
  // endregion mutators

  // region verify and update cached
  /** Run sanity checks. Either does nothing or throws {@link RuntimeException}.
   *
   * <p>See {@link InstrData#verify()} for what it does specifically.
   */
  public void verify() {
    data.verify();
  }

  protected void updateCachedInputNodes() {
    cachedInputNodes.clear();
    for (var input : inputs) {
      addInputNodesFrom(cachedInputNodes, input);
    }
  }

  private static void addInputNodesFrom(List<Node<?>> nodes, @Nullable Object input) {
    switch (input) {
      case Node<?> node -> {
        nodes.add(node);
        if (node instanceof PureExpressionNode<?> c) {
          nodes.addAll(c.descendants());
        }
      }
      case Node<?>[] nodes1 -> nodes.addAll(Arrays.asList(nodes1));
      case Optional<?> optional -> optional.ifPresent(o -> addInputNodesFrom(nodes, o));
      case ImmutableList<?> collection -> {
        for (var item : collection) {
          addInputNodesFrom(nodes, item);
        }
      }
      case ImmutableMap<?, ?> map -> {
        for (var item : map.values()) {
          addInputNodesFrom(nodes, item);
        }
      }
      case Collection<?> _ -> throw new UnsupportedOperationException("Collections in `InstrData` must be `ImmutableList`s");
      case Map<?, ?> _ -> throw new UnsupportedOperationException("Maps in `InstrData` must be `ImmutableMap`s");
      case null, default -> {}
    }
  }
  // endregion verify and update cached
}
