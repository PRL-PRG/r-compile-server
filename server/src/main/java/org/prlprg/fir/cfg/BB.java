package org.prlprg.fir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedHashMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.instruction.Expression;
import org.prlprg.fir.instruction.Instruction;
import org.prlprg.fir.instruction.Jump;
import org.prlprg.fir.instruction.Unreachable;
import org.prlprg.fir.module.Module;
import org.prlprg.fir.phi.PhiParameter;
import org.prlprg.fir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.SmallBinarySet;

public final class BB {
  // Backlink
  private final CFG owner;

  // Data
  private final String label;
  private final Map<Register, PhiParameter> parameters = new LinkedHashMap<>();
  private final List<Expression> statements = new ArrayList<>();
  private Jump jump = new Unreachable();

  // Cached
  private final Set<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.label));

  BB(CFG owner, String label) {
    this.owner = owner;
    this.label = label;
  }

  public CFG owner() {
    return owner;
  }

  public Module module() {
    return owner.module();
  }

  public String label() {
    return label;
  }

  public @UnmodifiableView Collection<PhiParameter> params() {
    return Collections.unmodifiableCollection(parameters.values());
  }

  public @UnmodifiableView List<Expression> statements() {
    return Collections.unmodifiableList(statements);
  }

  public Jump jump() {
    return jump;
  }

  public @UnmodifiableView Collection<BB> predecessors() {
    return Collections.unmodifiableCollection(predecessors);
  }

  public void addParameter(PhiParameter parameter) {
    module()
        .record(
            "BB#addParameter",
            List.of(this, parameter),
            () -> {
              if (parameters.put(parameter.variable(), parameter) != null) {
                throw new IllegalArgumentException(
                    "Parameter " + parameter.variable() + " already exists in BB '" + label + "'.");
              }
              return null;
            });
  }

  public void removeParameter(PhiParameter parameter) {
    module()
        .record(
            "BB#removeParameter",
            List.of(this, parameter),
            () -> {
              if (!parameters.remove(parameter.variable(), parameter)) {
                throw new IllegalArgumentException(
                    "Parameter " + parameter + " does not exist in BB '" + label + "'.");
              }
              return null;
            });
  }

  public void pushStatement(Expression statement) {
    module()
        .record(
            "BB#pushStatement",
            List.of(this, statement),
            () -> {
              statements.add(statement);
              return null;
            });
  }

  public void insertStatement(int index, Expression statement) {
    module()
        .record(
            "BB#insertStatement",
            List.of(this, index, statement),
            () -> {
              if (index < 0 || index > statements.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for BB '" + label + "'.");
              }
              statements.add(index, statement);
              return null;
            });
  }

  public void removeStatement(Expression statement) {
    module()
        .record(
            "BB#removeStatement",
            List.of(this, statement),
            () -> {
              if (!statements.remove(statement)) {
                throw new IllegalArgumentException(
                    "Statement " + statement + " does not exist in BB '" + label + "'.");
              }
              return null;
            });
  }

  public void setJump(Jump jump) {
    module()
        .record(
            "BB#setJump",
            List.of(this, jump),
            () -> {
              for (var target : this.jump.targets()) {
                var removed = target.label().predecessors.remove(this);
                assert removed
                    : "BB " + label + " was not a predecessor of target '" + target.label() + "'.";
              }
              if (this.jump.targets().isEmpty()) {
                var removed = owner.exits.remove(this);
                assert removed : "BB " + label + " was not an exit of the CFG.";
              }
              this.jump = jump;
              for (var target : this.jump.targets()) {
                var added = target.label().predecessors.add(this);
                assert added
                    : "BB "
                        + label
                        + " was already a predecessor of target '"
                        + target.label()
                        + "'.";
              }
              if (this.jump.targets().isEmpty()) {
                var added = owner.exits.add(this);
                assert added : "BB " + label + " was already an exit of the CFG.";
              }
              return null;
            });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    p.print(label);
    p.printAsList("(", ")", parameters.values());
    w.write(":");
    w.runIndented(
        () -> {
          w.write('\n');
          for (var statement : statements) {
            p.print(statement);
            w.write(";\n");
          }
          p.print(jump);
          w.write(";");
        });
    w.write('\n');
  }

  record ParseContext(CFG owner, @Nullable Object inner) {}

  @ParseMethod
  private BB(Parser p1, ParseContext ctx) {
    owner = ctx.owner;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    label = s.readJavaIdentifierOrKeyword();
    var params = p.parseList("(", ")", PhiParameter.class);
    for (var param : params) {
      if (this.parameters.put(param.variable(), param) != null) {
        throw new IllegalArgumentException(
            "Parameter " + param + " already exists in BB '" + label + "'.");
      }
    }
    s.assertAndSkip(':');

    Instruction instr;
    do {
      instr = p.parse(Instruction.class);
      switch (instr) {
        case Expression expr -> statements.add(expr);
        case Jump jmp -> jump = jmp;
      }
      s.assertAndSkip(';');
    } while (!(instr instanceof Jump));

    for (var target : jump.targets()) {
      var added = target.label().predecessors.add(this);
      assert added
          : "BB " + label + " was already a predecessor of target '" + target.label() + "'.";
    }
    if (jump.targets().isEmpty()) {
      var added = owner.exits.add(this);
      assert added : "BB " + label + " was already an exit of the CFG.";
    }
  }
}
