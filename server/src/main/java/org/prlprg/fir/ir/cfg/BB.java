package org.prlprg.fir.ir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.Comments;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.phi.Target;
import org.prlprg.fir.ir.variable.BlockParameter;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.Collections2;
import org.prlprg.util.SmallBinarySet;
import org.prlprg.util.Strings;

/// A basic block. Its instructions form an intrusive circular doubly-linked list anchored at its
/// terminator [#jump]: iterating from `jump.next()` back to `jump` visits the statements in order.
public final class BB implements Comparable<BB> {
  /// Blocks can't jump to the entry, and it must be ordered first, so it starts with `$` to make
  /// it unparseable and ordered before anything parsable.
  static final String ENTRY_LABEL = "$ENTRY";
  static final String DEFAULT_LABEL_PREFIX = "L";

  // Backlink
  private final CFG owner;

  // Data
  private final Comments comments;
  private final String label;
  private final List<BlockParameter> parameters = new ArrayList<>();
  // The terminator and anchor of the instruction list. Always present.
  private Jump jump;

  // Cached
  private final Set<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.label));

  BB(CFG owner, String label) {
    if (!label.equals(ENTRY_LABEL) && !Strings.isIdentifierOrKeyword(label)) {
      throw new IllegalArgumentException(
          "BB labels (except entry) must be valid identifiers: " + label);
    }

    this.owner = owner;
    this.comments = new Comments();
    this.label = label;

    jump = new Jump(new Unreachable());
    jump.installAsAnchor(this);

    // Since the jump is `Unreachable`, this is an exit.
    owner.exits.add(this);
  }

  public CFG owner() {
    return owner;
  }

  public Module module() {
    return owner.module();
  }

  public Comments comments() {
    return comments;
  }

  public String label() {
    return label;
  }

  public boolean isEntry() {
    return label.equals(ENTRY_LABEL);
  }

  public boolean isExit() {
    return successors().isEmpty();
  }

  // --- Phi parameters -------------------------------------------------------------------------

  public @UnmodifiableView List<BlockParameter> phiParameters() {
    return Collections.unmodifiableList(parameters);
  }

  public void appendPhiParameter(BlockParameter parameter) {
    if (parameters.contains(parameter)) {
      throw new IllegalArgumentException(
          "Phi parameter is already present in BB '" + label + "': " + parameter);
    }
    parameter.setOwner(this);
    parameters.add(parameter);
  }

  public void appendPhiParameters(List<BlockParameter> parameters) {
    for (var parameter : parameters) {
      appendPhiParameter(parameter);
    }
  }

  public void removeParameterAt(int index) {
    if (index < 0 || index >= parameters.size()) {
      throw new IndexOutOfBoundsException(
          "Index " + index + " is out of bounds for parameters of BB '" + label + "'.");
    }
    parameters.remove(index).setOwner(null);
  }

  public void replaceParameterAt(int index, BlockParameter parameter) {
    if (index < 0 || index >= parameters.size()) {
      throw new IndexOutOfBoundsException(
          "Index " + index + " is out of bounds for parameters of BB '" + label + "'.");
    }
    if (parameters.contains(parameter) && parameters.get(index) != parameter) {
      throw new IllegalArgumentException(
          "Phi parameter is already present in BB '" + label + "': " + parameter);
    }
    parameters.get(index).setOwner(null);
    parameter.setOwner(this);
    parameters.set(index, parameter);
  }

  public void clearPhiParameters() {
    for (var parameter : parameters) {
      parameter.setOwner(null);
    }
    parameters.clear();
  }

  // --- Instructions ---------------------------------------------------------------------------

  public Jump jump() {
    return jump;
  }

  /// The statements, in order (materialized from the intrusive list).
  public @UnmodifiableView List<Statement> statements() {
    var result = new ArrayList<Statement>();
    for (var i = jump.next(); i != jump; i = i.next()) {
      result.add((Statement) i);
    }
    return Collections.unmodifiableList(result);
  }

  /// The statements followed by the [#jump], in order.
  public @UnmodifiableView List<Instruction> instructions() {
    var result = new ArrayList<Instruction>();
    for (var i = jump.next(); i != jump; i = i.next()) {
      result.add(i);
    }
    result.add(jump);
    return Collections.unmodifiableList(result);
  }

  /// The first statement, or `null` if the block has no statements.
  public Statement firstStatement() {
    return jump.next() == jump ? null : (Statement) jump.next();
  }

  /// The last statement, or `null` if the block has no statements.
  public Statement lastStatement() {
    return jump.prev() == jump ? null : (Statement) jump.prev();
  }

  /// Append a statement to the end of the block (just before the [#jump]).
  public void appendStatement(Statement statement) {
    statement.insertBefore(jump);
  }

  public void appendStatements(List<Statement> statements) {
    for (var statement : statements) {
      appendStatement(statement);
    }
  }

  /// Prepend a statement to the start of the block.
  public void prependStatement(Statement statement) {
    statement.insertAfter(jump);
  }

  /// Remove all statements (dropping their argument uses). The caller is responsible for ensuring
  /// the removed statements' results are not used elsewhere.
  public void clearStatements() {
    for (var i = jump.next(); i != jump; ) {
      var next = i.next();
      i.detach();
      i = next;
    }
  }

  /// Replace the terminator, updating predecessors and exits.
  public void setJump(Jump newJump) {
    for (var targetBb : jump.targetBBs()) {
      var removed = targetBb.predecessors.remove(this);
      assert removed : "BB " + label + " was not a predecessor of target '" + targetBb.label + "'.";
    }
    if (jump.targetBBs().isEmpty()) {
      var removed = owner.exits.remove(this);
      assert removed : "BB " + label + " was not an exit of the CFG.";
    }

    newJump.setParentBB(this);
    jump.replaceWith(newJump);
    jump.setParentBB(null);
    jump = newJump;

    for (var targetBb : jump.targetBBs()) {
      var added = targetBb.predecessors.add(this);
      assert added
          : "BB " + label + " was already a predecessor of target '" + targetBb.label + "'.";
    }
    if (jump.targetBBs().isEmpty()) {
      var added = owner.exits.add(this);
      assert added : "BB " + label + " was already an exit of the CFG.";
    }
  }

  // --- Edges ----------------------------------------------------------------------------------

  public @UnmodifiableView Collection<BB> successors() {
    return jump.targetBBs();
  }

  public @UnmodifiableView Collection<BB> predecessors() {
    return Collections.unmodifiableCollection(predecessors);
  }

  // Package-private: maintained by the parser/CFG when wiring jumps.
  Set<BB> predecessorsMutable() {
    return predecessors;
  }

  /// [Target]s in predecessors to this [BB].
  ///
  /// Each element in the outermost collection contains all targets in a [BB] that point to this
  /// one. There is guaranteed at least one, but may be multiple, e.g. if the predecessor's jump
  /// is an [`If`][org.prlprg.fir.ir.instruction.If] and each target has different phi arguments.
  public Collection<Collection<Target>> incomingTargets() {
    return Collections2.mapLazy(
        predecessors, pred -> Collections2.filter(pred.jump().targets(), t -> t.bb() == this));
  }

  /// Arguments from predecessor jumps to the parameter at the index.
  ///
  /// @throws IndexOutOfBoundsException If the index is out of bounds.
  public Collection<Collection<Argument>> phiArguments(int parameterIndex) {
    if (parameterIndex < 0 || parameterIndex >= parameters.size()) {
      throw new IndexOutOfBoundsException(
          "Index " + parameterIndex + " is out of bounds for parameters of BB '" + label + "'.");
    }
    return Collections2.mapLazy(
        incomingTargets(),
        targets -> Collections2.mapLazy(targets, target -> target.phiArgs().get(parameterIndex)));
  }

  /// Basic blocks are ordered by label.
  ///
  /// @throws IllegalArgumentException Comparing blocks in different [CFG]s, or non-equal blocks
  ///   with the same label.
  @Override
  public int compareTo(BB o) {
    if (this == o) {
      return 0;
    }
    if (owner != o.owner) {
      throw new IllegalArgumentException("Can't compare BBs in different CFGs");
    }
    var cmp = label.compareTo(o.label);
    if (cmp != 0) {
      return cmp;
    }
    throw new IllegalArgumentException("Can't compare non-equal BBs with the same label: " + label);
  }

  @Override
  public String toString() {
    return label;
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(comments);

    if (!isEntry()) {
      w.write(label);
      // Phi parameters carry their type inline at the definition site, e.g. `L1(r2: I, r3: v1(I))`.
      w.write('(');
      var firstParam = true;
      for (var parameter : parameters) {
        if (!firstParam) {
          w.write(", ");
        }
        firstParam = false;
        p.print(parameter);
        w.write(": ");
        p.print(parameter.type());
      }
      w.write(')');
      w.write(":");
    } else {
      w.write("  ");
    }

    w.runIndented(
        () -> {
          if (!isEntry()) {
            w.write('\n');
          }

          for (var statement : statements()) {
            p.print(statement);
            w.write(";\n");
          }
          p.print(jump);
          w.write(";");
        });
  }
}
