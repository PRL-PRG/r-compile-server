package org.prlprg.fir.analyze.cfg;

import com.google.common.collect.Iterables;
import com.google.common.collect.Sets;
import java.util.Collections;
import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import java.util.Stack;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.analyze.Analysis;
import org.prlprg.fir.analyze.AnalysisConstructor;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.position.CfgPosition;
import org.prlprg.fir.ir.position.ScopePosition;
import org.prlprg.fir.ir.variable.Register;

/// Tracks where each register is assigned (i.e. [Statement#assignee()()])
/// and every other occurrence.
public final class DefUses implements Analysis {
  private final Map<Register, Set<ScopePosition>> definitions = new HashMap<>();
  private final Map<Register, Set<ScopePosition>> uses = new HashMap<>();
  private final Stack<CfgPosition> outerPromises = new Stack<>();

  @AnalysisConstructor
  public DefUses(Abstraction scope) {
    analyze(scope);
  }

  /// Get all assignments (defs) of a register.
  public @UnmodifiableView Set<ScopePosition> definitions(Register register) {
    return Collections.unmodifiableSet(definitions.getOrDefault(register, Set.of()));
  }

  /// Get the only assignment of a register, or `null` if there is not exactly one (which
  /// implies the CFG is invalid).
  public @Nullable ScopePosition definition(Register register) {
    var defs = definitions.get(register);
    return defs == null || defs.size() > 1 ? null : Iterables.getOnlyElement(defs);
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

  private void analyze(Abstraction scope) {
    if (scope.cfg() == null) {
      return;
    }

    for (var param : scope.parameters()) {
      addDef(param.variable(), scopePosition(scope.cfg().entry(), -1, null));
    }

    analyze(scope.cfg());
  }

  private void analyze(CFG cfg) {
    for (var bb : cfg.bbs()) {
      analyze(bb);
    }
  }

  private void analyze(BB bb) {
    // Analyze phis
    for (var phi : bb.phiParameters()) {
      addDef(phi, scopePosition(bb, -1, null));
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
      addDef(stmt.assignee(), scopePosition(bb, instructionIndex, instruction));
    }

    // Add immediate uses
    if (!(instruction instanceof Statement stmt && stmt.expression() instanceof Promise)) {
      for (var argument : instruction.arguments()) {
        if (argument.variable() != null) {
          addUse(argument.variable(), scopePosition(bb, instructionIndex, instruction));
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

  private void addDef(Register register, ScopePosition position) {
    definitions.computeIfAbsent(register, _ -> new HashSet<>()).add(position);
  }

  private void addUse(Register register, ScopePosition position) {
    uses.computeIfAbsent(register, _ -> new HashSet<>()).add(position);
  }

  private ScopePosition scopePosition(
      BB bb, int instructionIndex, @Nullable Instruction instruction) {
    return new ScopePosition(outerPromises, new CfgPosition(bb, instructionIndex, instruction));
  }
}
