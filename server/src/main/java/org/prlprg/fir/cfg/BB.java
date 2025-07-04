package org.prlprg.fir.cfg;

import com.google.common.base.Joiner;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.LinkedHashSet;
import java.util.List;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.cfg.instruction.Expression;
import org.prlprg.fir.cfg.instruction.Jump;
import org.prlprg.fir.cfg.instruction.PhiParameter;
import org.prlprg.fir.cfg.instruction.Unreachable;
import org.prlprg.fir.cfg.variable.Register;
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
    return this.cfg.record(
        "BB#addParameter",
        List.of(this, name),
        () -> {
          var param = new PhiParameter(new Register(name));
          if (!this.params.add(param)) {
            throw new IllegalArgumentException(
                "Parameter " + name + " already exists in BB " + label);
          }
          return param;
        });
  }

  public void remove(PhiParameter param) {
    this.cfg.record(
        "BB#removeParameter",
        List.of(this, param),
        () -> {
          if (!this.params.remove(param)) {
            throw new IllegalArgumentException(
                "Parameter " + param + " does not exist in BB " + label);
          }
          return null;
        });
  }

  public void pushStatement(Expression statement) {
    this.cfg.record(
        "BB#pushStatement",
        List.of(this, statement),
        () -> {
          this.statements.add(statement);
          return null;
        });
  }

  public void insertStatement(int index, Expression statement) {
    this.cfg.record(
        "BB#insertStatement",
        List.of(this, index, statement),
        () -> {
          if (index < 0 || index > this.statements.size()) {
            throw new IndexOutOfBoundsException(
                "Index " + index + " is out of bounds for BB " + label);
          }
          this.statements.add(index, statement);
          return null;
        });
  }

  public void removeStatement(Expression statement) {
    this.cfg.record(
        "BB#removeStatement",
        List.of(this, statement),
        () -> {
          if (!this.statements.remove(statement)) {
            throw new IllegalArgumentException(
                "Statement " + statement + " does not exist in BB " + label);
          }
          return null;
        });
  }

  public void setJump(Jump jump) {
    this.cfg.record(
        "BB#setJump",
        List.of(this, jump),
        () -> {
          for (var target : jump.targets()) {
            var removed = target.label().predecessors.remove(this);
            assert removed
                : "BB " + this.label + " was not a predecessor of target " + target.label();
          }
          if (jump.targets().isEmpty()) {
            var removed = this.cfg.exits.remove(this);
            assert removed : "BB " + this.label + " was not an exit of the CFG";
          }
          this.jump = jump;
          for (var target : jump.targets()) {
            var added = target.label().predecessors.add(this);
            assert added
                : "BB " + this.label + " was already a predecessor of target " + target.label();
          }
          if (jump.targets().isEmpty()) {
            var added = this.cfg.exits.add(this);
            assert added : "BB " + this.label + " was already an exit of the CFG";
          }
          return null;
        });
  }

  @Override
  public String toString() {
    var sb = new StringBuilder();
    sb.append(label).append("(").append(Joiner.on(", ").join(params)).append("):");
    for (var statement : statements) {
      sb.append("\n  ").append(statement);
    }
    sb.append("\n  ").append(jump);
    return sb.toString();
  }
}
