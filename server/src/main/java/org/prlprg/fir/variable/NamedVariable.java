package org.prlprg.fir.variable;

import java.util.Objects;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.Strings;

public final class NamedVariable implements Variable {
  public static final NamedVariable DOTS = Variable.named("...");

  private final String name;

  public static NamedVariable ddNum(int index) {
    return Variable.named(".." + index);
  }

  NamedVariable(String name) {
    this.name = name;
  }

  @Override
  public String toString() {
    return name;
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(name);
  }

  @Override
  public String name() {
    return name;
  }

  @Override
  public boolean equals(Object obj) {
    if (obj == this) {
      return true;
    }
    if (obj == null || obj.getClass() != this.getClass()) {
      return false;
    }
    var that = (NamedVariable) obj;
    return Objects.equals(this.name, that.name);
  }

  @Override
  public int hashCode() {
    return Objects.hash(name);
  }

}
