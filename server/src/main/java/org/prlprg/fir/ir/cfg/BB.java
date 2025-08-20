package org.prlprg.fir.ir.cfg;

import com.google.common.collect.Collections2;
import com.google.common.collect.ImmutableList;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;
import java.util.Objects;
import java.util.Set;
import javax.annotation.Nullable;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.CommentParser;
import org.prlprg.fir.ir.instruction.Instruction;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.util.DeferredCallbacks;
import org.prlprg.util.Lists;
import org.prlprg.util.SmallBinarySet;
import org.prlprg.util.Strings;

public final class BB {
  static final String ENTRY_LABEL = "ENTRY";
  static final String DEFAULT_LABEL_PREFIX = "L";

  // Backlink
  private final CFG owner;

  // Data
  private final String label;
  private final List<Register> parameters = new ArrayList<>();
  private final List<Statement> statements = new ArrayList<>();
  private Jump jump = new Unreachable();

  // Cached
  private final Set<BB> predecessors =
      new SmallBinarySet<>(4, Comparator.comparing(bb -> bb.label));

  BB(CFG owner, String label) {
    if (!Strings.isIdentifierOrKeyword(label)) {
      throw new IllegalArgumentException("BB labels must be valid identifiers: " + label);
    }

    this.owner = owner;
    this.label = label;

    // Since the jump is `Unreachable`, this is an exit.
    owner.exits.add(this);
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

  public boolean isEntry() {
    return label.equals(ENTRY_LABEL);
  }

  public @UnmodifiableView List<Register> phiParameters() {
    return Collections.unmodifiableList(parameters);
  }

  public @UnmodifiableView List<Statement> statements() {
    return Collections.unmodifiableList(statements);
  }

  public Jump jump() {
    return jump;
  }

  public @UnmodifiableView List<Instruction> instructions() {
    return Lists.concatLazy(statements, List.of(jump));
  }

  public @UnmodifiableView Collection<BB> successors() {
    return Collections2.transform(jump.targets(), t -> Objects.requireNonNull(t).bb());
  }

  public @UnmodifiableView Collection<BB> predecessors() {
    return Collections.unmodifiableCollection(predecessors);
  }

  public void appendParameter(Register parameter) {
    module()
        .record(
            "BB#appendParameter",
            List.of(this, parameter),
            () -> {
              if (parameters.contains(parameter)) {
                throw new IllegalArgumentException(
                    "Parameter '"
                        + parameter
                        + "' is already present in BB '"
                        + label
                        + "': "
                        + parameter);
              }
              parameters.add(parameter);
            });
  }

  public void appendParameters(List<Register> parameters) {
    module()
        .record(
            "BB#appendParameters",
            List.of(this, parameters),
            () -> {
              if (parameters.stream().anyMatch(this.parameters::contains)) {
                throw new IllegalArgumentException(
                    "Some parameters are already present in BB '"
                        + label
                        + "': "
                        + parameters.stream().filter(this.parameters::contains).toList());
              }
              this.parameters.addAll(parameters);
            });
  }

  public void removeParameterAt(int index) {
    module()
        .record(
            "BB#removeParameterAt",
            List.of(this, index),
            () -> {
              if (index < 0 || index >= parameters.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for parameters of BB '" + label + "'.");
              }
              parameters.remove(index);
            });
  }

  public void clearParameters() {
    module().record("BB#clearParameters", List.of(this), parameters::clear);
  }

  public void appendStatement(Statement statement) {
    module()
        .record(
            "BB#appendStatement",
            List.of(this, statement),
            () -> {
              statements.add(statement);
            });
  }

  public void appendStatements(List<Statement> statements) {
    module()
        .record(
            "BB#appendStatements",
            List.of(this, statements),
            () -> {
              this.statements.addAll(statements);
            });
  }

  public void insertStatement(int index, Statement statement) {
    module()
        .record(
            "BB#insertStatement",
            List.of(this, index, statement),
            () -> {
              if (index < 0 || index > statements.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for statements of BB '" + label + "'.");
              }
              statements.add(index, statement);
            });
  }

  public void insertStatements(int index, List<Statement> statements) {
    module()
        .record(
            "BB#insertStatements",
            List.of(this, index, statements),
            () -> {
              if (index < 0 || index > this.statements.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for statements of BB '" + label + "'.");
              }
              this.statements.addAll(index, statements);
            });
  }

  public Statement removeStatementAt(int index) {
    return module()
        .record(
            "BB#removeStatementAt",
            List.of(this, index),
            () -> {
              if (index < 0 || index >= statements.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for statements of BB '" + label + "'.");
              }
              return statements.remove(index);
            });
  }

  public ImmutableList<Statement> removeStatementsAt(int index, int count) {
    return module()
        .record(
            "BB#removeStatementsAt",
            List.of(this, index, count),
            () -> {
              if (index < 0 || index + count > statements.size()) {
                throw new IndexOutOfBoundsException(
                    "End index "
                        + (index + count)
                        + " is out of bounds for statements of BB '"
                        + label
                        + "'.");
              }
              var subList = statements.subList(index, index + count);
              var removed = ImmutableList.copyOf(subList);
              subList.clear();
              return removed;
            });
  }

  public Statement replaceStatementAt(int index, Statement statement) {
    return module()
        .record(
            "BB#replaceStatementAt",
            List.of(this, index, statement),
            () -> {
              if (index < 0 || index >= statements.size()) {
                throw new IndexOutOfBoundsException(
                    "Index " + index + " is out of bounds for statements of BB '" + label + "'.");
              }
              var old = statements.get(index);
              statements.set(index, statement);
              return old;
            });
  }

  public void setJump(Jump jump) {
    module()
        .record(
            "BB#setJump",
            List.of(this, jump),
            () -> {
              for (var target : this.jump.targets()) {
                var removed = target.bb().predecessors.remove(this);
                assert removed
                    : "BB " + label + " was not a predecessor of target '" + target.bb() + "'.";
              }
              if (this.jump.targets().isEmpty()) {
                var removed = owner.exits.remove(this);
                assert removed : "BB " + label + " was not an exit of the CFG.";
              }
              this.jump = jump;
              for (var target : this.jump.targets()) {
                var added = target.bb().predecessors.add(this);
                assert added
                    : "BB " + label + " was already a predecessor of target '" + target.bb() + "'.";
              }
              if (this.jump.targets().isEmpty()) {
                var added = owner.exits.add(this);
                assert added : "BB " + label + " was already an exit of the CFG.";
              }
            });
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!label.equals(ENTRY_LABEL)) {
      w.write(label);
      p.printAsList("(", ")", parameters);
      w.write(":");
    } else {
      w.write("  ");
    }

    w.runIndented(
        () -> {
          if (!label.equals(ENTRY_LABEL)) {
            w.write('\n');
          }

          for (var statement : statements) {
            p.print(statement);
            w.write(";\n");
          }
          p.print(jump);
          w.write(";");
        });
  }

  public record ParseContext(
      boolean isEntry,
      CFG owner,
      DeferredCallbacks<CFG> postOwner,
      DeferredCallbacks<Module> oostModule,
      @Nullable Object inner) {}

  @ParseMethod
  private BB(Parser p1, ParseContext ctx) {
    owner = ctx.owner;
    var postOwner = ctx.postOwner;
    var p = p1.withContext(ctx.inner);

    var s = p.scanner();

    if (ctx.isEntry) {
      label = ENTRY_LABEL;
    } else {
      CommentParser.skipComments(s);
      label = s.readIdentifierOrKeyword();
      var params = p.parseList("(", ")", Register.class);
      parameters.addAll(params);
      s.assertAndSkip(':');
    }

    var p2 =
        p.withContext(
            new Instruction.ParseContext(owner, ctx.postOwner, ctx.oostModule, p.context()));
    Instruction instr;
    do {
      CommentParser.skipComments(s);
      instr = p2.parse(Instruction.class);
      switch (instr) {
        case Statement expr -> statements.add(expr);
        case Jump jmp -> jump = jmp;
      }
      s.assertAndSkip(';');
    } while (!(instr instanceof Jump));

    // Need target's `postCfg` to run before `target.bb()` is called.
    postOwner.add(
        _ -> {
          for (var target : jump.targets()) {
            var added = target.bb().predecessors.add(this);
            assert added
                : "BB " + label + " was already a predecessor of target '" + target.bb() + "'.";
          }
          if (jump.targets().isEmpty()) {
            var added = owner.exits.add(this);
            assert added : "BB " + label + " was already an exit of the CFG.";
          }
        });
  }
}
