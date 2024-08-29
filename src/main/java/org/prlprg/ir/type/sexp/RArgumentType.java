package org.prlprg.ir.type.sexp;

import java.util.List;
import java.util.stream.Collectors;
import org.prlprg.ir.type.RType;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.TaggedElem;

/**
 * Name and {@link RType}, describing an argument passed to a function.
 *
 * <p>This is similar to {@link RParameterType}, but not the same; this is the type of the argument
 * <i>provided to</i> the function, while {@link RParameterType} is the type of the argument
 * <i>required by</i> the function.
 */
public record RArgumentType(String name, RType type) {
  /** Create an argument type list from the argument list (uses {@link RSexpType#exact}). */
  public static List<RArgumentType> exact(ListSXP arguments) {
    return arguments.stream().map(RArgumentType::exact).collect(Collectors.toList());
  }

  /** Create an argument type list from the argument list (uses {@link RSexpType#exact}). */
  public static List<RArgumentType> exact(List<TaggedElem> arguments) {
    return arguments.stream().map(RArgumentType::exact).collect(Collectors.toList());
  }

  /** Create an argument type from the argument (uses {@link RSexpType#exact}). */
  public static RArgumentType exact(TaggedElem argument) {
    return new RArgumentType(argument.tagOrEmpty(), RSexpType.exact(argument.value()));
  }

  public boolean isNamed() {
    return !name.isEmpty();
  }

  public boolean isDots() {
    return name.equals("...");
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    if (!name.isEmpty()) {
      Names.write(w, name);
    }
    w.write(':');
    p.print(type);
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
}
