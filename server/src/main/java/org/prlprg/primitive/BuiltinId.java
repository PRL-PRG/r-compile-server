package org.prlprg.primitive;

import static org.prlprg.session.GNURSession.readFunTab;

import com.google.common.collect.ImmutableList;
import com.google.common.collect.ImmutableMap;
import java.util.ArrayList;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.RegSymSXP;
import org.prlprg.sexp.SEXPs;

// FIXME: do we need this? can we simplify the builtins/specials to have just an int?

/**
 * Identifies an R "builtin" or "special" function.
 *
 * @see org.prlprg.sexp.SEXPType#BUILTIN
 * @see org.prlprg.sexp.SEXPType#SPECIAL
 */
public record BuiltinId(int index) {
  private static final ImmutableMap<String, FunTabEntry> FUNTAB = readFunTab();
  private static final ImmutableList<String> NAMES =
      ImmutableList.copyOf(
          FUNTAB.entrySet().stream()
              .<ArrayList<String>>collect(
                  ArrayList::new,
                  (list, entry) -> {
                    var name = entry.getKey();
                    var index = entry.getValue().index();
                    while (list.size() <= index) {
                      list.add("");
                    }
                    list.set(index, name);
                  },
                  (list, newNames) -> {
                    for (var i = 0; i < newNames.size(); i++) {
                      var newName = newNames.get(i);
                      if (!newName.isEmpty()) {
                        assert list.get(i).isEmpty() || list.get(i).equals(newName);
                        list.set(i, newName);
                      }
                    }
                  }));

  /** The id of the builtin function referenced by the given symbol in R. */
  public static BuiltinId referencedBy(RegSymSXP symbol) {
    return named(symbol.name());
  }

  /** The id of the builtin function with the given name (in R). */
  public static BuiltinId named(String name) {
    var entry = FUNTAB.get(name);
    if (entry == null) {
      throw new IllegalArgumentException(
          "No builtin named " + name + " (note: in latest supported R)");
    }
    return new BuiltinId(entry.index());
  }

  /** Returns the name (in R) of the builtin function with this id. */
  public String name() {
    return NAMES.get(index);
  }

  /** Returns the symbol in R which refers to the builtin function with this id. */
  public RegSymSXP symbol() {
    return SEXPs.symbol(name());
  }

  /** Whether the builtin is "special", i.e. evaluates its arguments before calling the C code. */
  public boolean isSpecial() {
    return index % 10 == 1;
  }

  // region serialization and deserialization
  @ParseMethod
  private static BuiltinId parse(Parser p) {
    return referencedBy(p.parse(RegSymSXP.class));
  }

  @PrintMethod
  private void print(Printer p) {
    p.print(symbol());
  }

  @Override
  public String toString() {
    return Printer.toString(this);
  }
  // endregion serialization and deserialization
}
