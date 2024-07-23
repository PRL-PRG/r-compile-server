package org.prlprg.ir.cfg;

import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collection;
import java.util.Collections;
import java.util.List;
import java.util.Optional;
import javax.annotation.Nullable;
import org.jetbrains.annotations.Contract;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFGEdit.MutateInstrArgs;
import org.prlprg.ir.cfg.InstrData.CascadingInstrUpdate;
import org.prlprg.ir.cfg.InstrData.CascadingUpdatedInstrs;
import org.prlprg.ir.closure.CodeObject;
import org.prlprg.ir.effect.REffects;
import org.prlprg.ir.type.RType;

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
  private REffects effects;
  private final ImmutableList<InstrOutput<?>> outputs;

  private final List<Node<?>> cachedInputNodes = new ArrayList<>();

  Instr(CFG cfg, InstrData data) {
    this.cfg = cfg;
    this.data = data;

    fun = data.fun();
    inputs = data.inputs();
    effects = data.effects();
    outputs = data.outputTypes()
        .stream()
        .map(this::mkOutput)
        .collect(ImmutableList.toImmutableList());

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
  public ImmutableList<InstrOutput<?>> outputs() {
    return outputs;
  }

  /** Run sanity checks. Either does nothing or throws {@link InstrVerifyException}.
   *
   * <p>See {@link InstrData#verify()} for what it does specifically.
   */
  public void verify() {
    data.verify();
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
      case Node<?>[] nodes1 -> nodes.addAll(Arrays.asList(nodes1));
      case Optional<?> optional -> optional.ifPresent(o -> addInputNodesFrom(nodes, o));
      case ImmutableList<?> collection -> {
        for (var item : collection) {
          addInputNodesFrom(nodes, item);
        }
      }
      case Collection<?> _ -> throw new UnsupportedOperationException("Collections in `InstrData` must be `ImmutableList`s (arrays are also allowed)");
      case CodeObject codeObject -> nodes.addAll(codeObject.outerCfgNodes());
      case null, default -> {}
    }
  }

  @Override
  public final CascadingInstrUpdate replaceInInputs(CascadingUpdatedInstrs seen, Node<?> old, Node<?> replacement) {
    var oldData = data;

    for (var i = 0; i < inputs.length; i++) {
      inputs[i] = replaceInputNodesIn(inputs[i], old, replacement);
    }

    var update = data.handleUpdatedNodeInputs(seen);
    if (update.updatedEffects()) {
      effects = data.effects();
    }
    if (update.updatedOutput()) {
      var outputTypes = data.outputTypes();

      if (outputTypes.size() != outputs.size()) {
        throw new IllegalStateException("`InstrData` changed output count, that isn't allowed");
      }

      for (var i = 0; i < outputs.size(); i++) {
        outputs.get(i).unsafeSetType(outputTypes.get(i));
      }
    }

    cfg.record(new MutateInstrArgs(this, data), new MutateInstrArgs(this, oldData));

    return update;
  }

  @SuppressWarnings("unchecked")
  @Contract("null, _, _ -> null; !null, _, _ -> !null")
  private static <T> @Nullable T replaceInputNodesIn(@Nullable T input, Node<?> old, Node<?> replacement) {
    return switch (input) {
      case Node<?> n -> n == old ? (T) replacement : input;
      case Node<?>[] n -> {
        for (var j = 0; j < n.length; j++) {
          n[j] = replaceInputNodesIn(n[j], old, replacement);
        }
        yield (T) n;
      }
      case Optional<?> o -> (T) o.map(o1 -> replaceInputNodesIn(o1, old, replacement));
      case ImmutableList<?> c -> {
        var builder = ImmutableList.builderWithExpectedSize(c.size());
        for (var item : c) {
          builder.add(replaceInputNodesIn(item, old, replacement));
        }
        yield (T) builder.build();
      }
      case Collection<?> _ -> throw new UnsupportedOperationException("Collections in `InstrData` must be `ImmutableList`s (arrays are also allowed)");
      case CodeObject c -> {
        c.unsafeReplaceOuterCfgNode(old, replacement);
        yield (T) c;
      }
      case null, default -> input;
    };
  }

  private <T> InstrOutput<T> mkOutput(Class<? extends T> type) {
    return new InstrOutput<>(this, type);
  }

  @Override
  public CFG cfg() {
    return cfg;
  }
}
