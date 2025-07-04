package org.prlprg.fir.cfg;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;
import org.prlprg.fir.cfg.instruction.Instruction;
import org.prlprg.fir.cfg.instruction.Jump;
import org.prlprg.fir.cfg.instruction.PhiParameter;
import org.prlprg.fir.cfg.instruction.Unreachable;
import org.prlprg.fir.cfg.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.SmallBinarySet;

public final class BB {
  // Backlink
  private final CFG cfg;

  // Data
  private final String label;
  private final Set<PhiParameter> params = new LinkedHashSet<>();
  private final List<Expression> statements = new ArrayList<>();
  private Jump jump = new Unreachable();

  // Cached
  private final Set<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.label));

  BB(CFG cfg, String label) {
    this.cfg = cfg;
    this.label = label;
  }

  public CFG parent() {
    return cfg;
  }

  public String label() {
    return label;
  }

  public @UnmodifiableView Collection<PhiParameter> params() {
    return Collections.unmodifiableCollection(params);
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

  public PhiParameter addParameter(String name) {
    return cfg.record(
        "BB#addParameter",
        List.of(this, name),
        () -> {
          var param = new PhiParameter(new Register(name));
          if (!params.add(param)) {
            throw new IllegalArgumentException(
                "Parameter " + name + " already exists in BB " + label);
          }
          return param;
        });
  }

  public void remove(PhiParameter param) {
    cfg.record(
        "BB#removeParameter",
        List.of(this, param),
        () -> {
          if (!params.remove(param)) {
            throw new IllegalArgumentException(
                "Parameter " + param + " does not exist in BB " + label);
          }
          return null;
        });
  }

  public void pushStatement(Expression statement) {
    cfg.record(
        "BB#pushStatement",
        List.of(this, statement),
        () -> {
          statements.add(statement);
          return null;
        });
  }

  public void insertStatement(int index, Expression statement) {
    cfg.record(
        "BB#insertStatement",
        List.of(this, index, statement),
        () -> {
          if (index < 0 || index > statements.size()) {
            throw new IndexOutOfBoundsException(
                "Index " + index + " is out of bounds for BB " + label);
          }
          statements.add(index, statement);
          return null;
        });
  }

  public void removeStatement(Expression statement) {
    cfg.record(
        "BB#removeStatement",
        List.of(this, statement),
        () -> {
          if (!statements.remove(statement)) {
            throw new IllegalArgumentException(
                "Statement " + statement + " does not exist in BB " + label);
          }
          return null;
        });
  }

  public void setJump(Jump jump) {
    cfg.record(
        "BB#setJump",
        List.of(this, jump),
        () -> {
          for (var target : this.jump.targets()) {
            var removed = target.label().predecessors.remove(this);
            assert removed : "BB " + label + " was not a predecessor of target " + target.label();
          }
          if (this.jump.targets().isEmpty()) {
            var removed = cfg.exits.remove(this);
            assert removed : "BB " + label + " was not an exit of the CFG";
          }
          this.jump = jump;
          for (var target : this.jump.targets()) {
            var added = target.label().predecessors.add(this);
            assert added : "BB " + label + " was already a predecessor of target " + target.label();
          }
          if (this.jump.targets().isEmpty()) {
            var added = cfg.exits.add(this);
            assert added : "BB " + label + " was already an exit of the CFG";
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
    p.printAsList("(", ")", params);
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

  record ParseContext(CFG cfg, @Nullable Object inner) {}

  @ParseMethod
  private BB(Parser p1, ParseContext ctx) {
    var p = p1.withContext(ctx.inner);
    var s = p.scanner();

    cfg = ctx.cfg;
    label = s.readJavaIdentifierOrKeyword();
    var params = p.parseList("(", ")", PhiParameter.class);
    for (var param : params) {
      if (!this.params.add(param)) {
        throw new IllegalArgumentException("Parameter " + param + " already exists in BB " + label);
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
      assert added : "BB " + label + " was already a predecessor of target " + target.label();
    }
    if (jump.targets().isEmpty()) {
      var added = cfg.exits.add(this);
      assert added : "BB " + label + " was already an exit of the CFG";
    }
  }
}
