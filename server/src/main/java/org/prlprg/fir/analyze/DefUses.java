package org.prlprg.fir.analyze;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.Expression;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Promise;
import org.prlprg.fir.ir.instruction.Write;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.fir.ir.variable.Variable;

/// Tracks where each register is assigned (i.e. a target of [org.prlprg.fir.ir.instruction.Write])
/// and every other occurrence.
public final class DefUses {
  private final CFG cfg;
  private final Map<Register, Set<DefUse>> definitions = new HashMap<>();
  private final Map<Register, Set<DefUse>> uses = new HashMap<>();

  public DefUses(CFG cfg) {
    this.cfg = cfg;
    analyze();
  }

  /// Location of a definition or use within the CFG.
  public record DefUse(BB bb, int instructionIndex, Expression expression) {}

  /// Get all definitions of a register.
  public Set<DefUse> definitions(Register register) {
    return definitions.getOrDefault(register, Set.of());
  }

  /// Get all uses of a register.
  public Set<DefUse> uses(Register register) {
    return uses.getOrDefault(register, Set.of());
  }

  /// Get all registers that are defined.
  public Set<Register> definedRegisters() {
    return definitions.keySet();
  }

  /// Get all registers that are used.
  public Set<Register> usedRegisters() {
    return uses.keySet();
  }

  /// Check if a register is defined in the given basic block.
  public boolean isDefinedInBlock(Register register, BB bb) {
    return definitions(register).stream().anyMatch(defUse -> defUse.bb == bb);
  }

  /// Check if a register is used in the given basic block.
  public boolean isUsedInBlock(Register register, BB bb) {
    return uses(register).stream().anyMatch(defUse -> defUse.bb == bb);
  }

  private void analyze() {
    for (var bb : cfg.bbs()) {
      analyzeBB(bb);
    }
  }

  private void analyzeBB(BB bb) {
    var statements = bb.statements();
    for (var i = 0; i < statements.size(); i++) {
      var expr = statements.get(i);
      analyzeInstruction(bb, i, expr);
    }

    analyzeInstruction(bb, statements.size(), bb.jump());
  }

  private void analyzeInstruction(BB bb, int instructionIndex, Instruction instr) {
    // Handle Write expressions (definitions)
    if (instr instanceof Expression expr
        && expr instanceof Write(var target, var value)
        && target instanceof Register register) {
      definitions
          .computeIfAbsent(register, _ -> new HashSet<>())
          .add(new DefUse(bb, instructionIndex, expr));
    }

    // Handle Promise expressions (nested CFGs)
    if (instr instanceof Promise promise) {
      var promiseCfg = promise.code();
      var nestedDefUses = new DefUses(promiseCfg);
      // Merge nested definitions and uses
      for (var entry : nestedDefUses.definitions.entrySet()) {
        definitions.computeIfAbsent(entry.getKey(), _ -> new HashSet<>()).addAll(entry.getValue());
      }
      for (var entry : nestedDefUses.uses.entrySet()) {
        uses.computeIfAbsent(entry.getKey(), _ -> new HashSet<>()).addAll(entry.getValue());
      }
      return;
    }

    // Collect all variables used in this expression
    var variablesInExpr = new HashSet<Variable>();
    collectVariables(expr, variablesInExpr);

    // Record uses for registers
    for (var variable : variablesInExpr) {
      if (variable instanceof Register register) {
        uses.computeIfAbsent(register, _ -> new HashSet<>())
            .add(new DefUse(bb, instructionIndex, expr));
      }
    }

    // Recursively analyze child expressions
    for (var child : expr.immediateChildren()) {
      analyzeInstruction(bb, instructionIndex, child);
    }
  }

  private void collectVariables(Expression expr, Set<Variable> variables) {
    // Add immediate variables
    variables.addAll(expr.immediateVariables());

    // Recursively collect from children
    for (var child : expr.immediateChildren()) {
      collectVariables(child, variables);
    }
  }
}
