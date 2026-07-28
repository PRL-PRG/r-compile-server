package org.prlprg.fir.ir.variable;

import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.parseprint.Printer;

/// The [Register] defined by a [Statement]'s result (`r = e`).
///
/// Its [#uses] are exactly the consumers of the statement's result, which are tracked on the
/// [Statement] itself; this class delegates to them.
public final class AssigneeOf implements Register {
  private final Statement statement;
  private String name;
  private Type type;

  public AssigneeOf(Statement statement, String name, Type type) {
    this.statement = statement;
    this.name = name;
    this.type = type;
  }

  public Statement statement() {
    return statement;
  }

  @Override
  public String name() {
    return name;
  }

  public void rename(String name) {
    this.name = name;
  }

  @Override
  public Type type() {
    return type;
  }

  @Override
  public void setType(Type type) {
    this.type = type;
  }

  @Override
  @UnmodifiableView
  public Set<Use> uses() {
    return statement.uses();
  }

  @Override
  public void addUse(Use use) {
    statement.addUse(use);
  }

  @Override
  public void removeUse(Use use) {
    statement.removeUse(use);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
