package org.prlprg.ir.type;

import java.util.List;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.TaggedElem;

public record ArgumentRType(@Nullable String name, RType type) {
  /** Create an argument type list from the argument list (uses {@link RTypes#exact}). */
  public static List<ArgumentRType> exact(ListSXP arguments) {
    return arguments.stream().map(ArgumentRType::exact).collect(Collectors.toList());
  }

  /** Create an argument type list from the argument list (uses {@link RTypes#exact}). */
  public static List<ArgumentRType> exact(List<TaggedElem> arguments) {
    return arguments.stream().map(ArgumentRType::exact).collect(Collectors.toList());
  }

  /** Create an argument type from the argument (uses {@link RTypes#exact}). */
  public static ArgumentRType exact(TaggedElem argument) {
    return new ArgumentRType(argument.tag(), RTypes.exact(argument.value()));
  }

  public ArgumentRType {
    if (name != null && name.isEmpty()) {
      throw new IllegalArgumentException("Argument name cannot be empty (pass null instead)");
    }
  }

  public boolean isNamed() {
    return name != null;
  }

  public boolean isDots() {
    return name != null && name.equals("...");
  }

  @Override
  public String toString() {
    return (name == null ? "" : RegSymSXP.escape(name)) + ":" + type;
  }
}
