package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.Iterables;
import com.google.common.collect.Sets;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Expression;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;

/// Tracks where each register is assigned (i.e. [Statement#variable()])
/// and every other occurrence.
public final class DefUses implements Analysis {
  private final Map<Register, Set<ScopePosition>> definitions = new HashMap<>();
  private final Map<Register, Set<ScopePosition>> uses = new HashMap<>();
  private final Stack<CfgPosition> outerPromises = new Stack<>();

  @AnalysisConstructor
  public DefUses(Abstraction scope) {
    analyze(scope.cfg());
  }

  /// Get all assignments (defs) of a register.
  public @UnmodifiableView Set<ScopePosition> definitions(Register register) {
    return Collections.unmodifiableSet(definitions.getOrDefault(register, Set.of()));
  }

  /// If the definition is a [Statement], returns its [Expression].
  public @Nullable Expression definitionExpression(Register register) {
    var defs = definitions(register);
    return defs.size() == 1
            && Iterables.getOnlyElement(defs).inInnermostCfg().instruction()
                instanceof Statement(var _, var expr)
        ? expr
        : null;
  }

  /// Get all reads (uses) of a register.
  public @UnmodifiableView Set<ScopePosition> uses(Register register) {
    return Collections.unmodifiableSet(uses.getOrDefault(register, Set.of()));
  }

  /// Get all registers that are assigned.
  public @UnmodifiableView Set<Register> definedRegisters() {
    return Collections.unmodifiableSet(definitions.keySet());
  }

  /// Get all registers that are read.
  public @UnmodifiableView Set<Register> usedRegisters() {
    return Collections.unmodifiableSet(uses.keySet());
  }

  /// Get all registers in all instructions in the scope.
  public @UnmodifiableView Set<Register> allRegisters() {
    return Sets.union(definitions.keySet(), uses.keySet());
  }

  private void analyze(CFG cfg) {
    for (var bb : cfg.bbs()) {
      analyze(bb);
    }
  }

  private void analyze(BB bb) {
    // Analyze phis
    for (var phi : bb.phiParameters()) {
      definitions.computeIfAbsent(phi, _ -> new HashSet<>()).add(scopePosition(bb, -1, null));
    }

    // Analyze instructions
    var instructions = bb.instructions();
    for (var i = 0; i < instructions.size(); i++) {
      var instruction = instructions.get(i);
      analyze(bb, i, instruction);
    }
  }

  private void analyze(BB bb, int instructionIndex, Instruction instruction) {
    // Add immediate definitions
    if (instruction instanceof Statement stmt && stmt.assignee() != null) {
      definitions
          .computeIfAbsent(stmt.assignee(), _ -> new HashSet<>())
          .add(scopePosition(bb, instructionIndex, instruction));
    }

    // Add immediate uses
    if (!(instruction instanceof Statement stmt && stmt.expression() instanceof Promise)) {
      for (var argument : instruction.arguments()) {
        if (argument.variable() != null) {
          uses.computeIfAbsent(argument.variable(), _ -> new HashSet<>())
              .add(scopePosition(bb, instructionIndex, instruction));
        }
      }
    }

    // Add nested definitions and uses (only applicable to [Promise]).
    if (instruction instanceof Statement stmt && stmt.expression() instanceof Promise promise) {
      outerPromises.push(new CfgPosition(bb, instructionIndex, instruction));
      analyze(promise.code());
      outerPromises.pop();
    }
  }

  private ScopePosition scopePosition(
      BB bb, int instructionIndex, @Nullable Instruction instruction) {
    return new ScopePosition(outerPromises, new CfgPosition(bb, instructionIndex, instruction));
  }
}
