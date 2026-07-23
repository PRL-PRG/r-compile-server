package org.prlprg.fir.ir.variable;

import com.google.common.collect.ImmutableMap;
import java.util.List;
import java.util.Map;
import java.util.Set;
import org.jetbrains.annotations.UnmodifiableView;
import org.jspecify.annotations.Nullable;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.instruction.FirParseContext;
import org.prlprg.fir.ir.instruction.Use;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.value.Value;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.util.Strings;

/// An SSA value definition. A register *is* its own definition site: the result of a
// [org.prlprg.fir.ir.instruction.Statement]
/// ([AssigneeOf]), a [BB][org.prlprg.fir.ir.cfg.BB] phi parameter ([BlockParameter]), or an
/// [Abstraction][org.prlprg.fir.ir.abstraction.Abstraction] parameter ([FunctionParameter]).
///
/// Registers are identity objects (not interned by name): two distinct definitions are never
/// equal even if they share a name. Each register carries its declared [#type] and tracks the
/// set of its [#uses], so def-use information lives in the IR and stays accurate under mutation.
public sealed interface Register permits AssigneeOf, BlockParameter, FunctionParameter {
  String DEFAULT_NAME = "r";

  /// The register's (printed) name. Unique within a version is a printing/parsing concern, not an
  /// identity concern.
  String name();

  /// The register's declared type (an upper bound; the assigned value's type subtypes it).
  Type type();

  void setType(Type type);

  /// Every occurrence where this register's value is used.
  @UnmodifiableView
  Set<Use> uses();

  void addUse(Use use);

  void removeUse(Use use);

  default int useCount() {
    return uses().size();
  }

  default boolean isUsed() {
    return !uses().isEmpty();
  }

  /// The [BB][org.prlprg.fir.ir.cfg.BB] where this register is defined: an [AssigneeOf]'s
  /// statement's block, a [BlockParameter]'s owner block, or a [FunctionParameter]'s abstraction
  /// entry block. Returns `null` if the definition isn't (yet) attached to a CFG.
  default @Nullable BB definingBB() {
    return switch (this) {
      case AssigneeOf a -> a.statement().parentBB();
      case BlockParameter p -> p.owner();
      case FunctionParameter param -> {
        var owner = param.owner();
        var cfg = owner == null ? null : owner.cfg();
        yield cfg == null ? null : cfg.entry();
      }
    };
  }

  /// The [CFG][org.prlprg.fir.ir.cfg.CFG] where this register is defined, or `null` if its
  /// definition isn't (yet) attached to a CFG.
  default @Nullable CFG definingCfg() {
    var bb = definingBB();
    return bb == null ? null : bb.owner();
  }

  /// Replace every use of this register with 'argument'. Afterwards [#uses] is empty.
  default void substUsesWith(Argument argument) {
    // Copy first: replaceWith mutates the use set we're iterating.
    for (var use : List.copyOf(uses())) {
      use.replaceWith(argument);
    }
  }

  default void substUsesWith(Register register) {
    substUsesWith(new Read(register));
  }

  default void substUsesWith(Value constant) {
    substUsesWith(new Constant(constant));
  }

  @PrintMethod
  private void print(Printer p) {
    p.writer().write(name());
  }

  /// Parse a name that must denote a register (e.g. the operand of `consume`). Definitions
  /// (parameters, phi parameters, assignees) are created at their definition sites, not here.
  @ParseMethod
  private static Register parse(Parser p, FirParseContext ctx) {
    var s = p.scanner();
    var name = s.nextCharIs('`') ? Names.read(s, true) : s.readIdentifierOrKeyword();
    return ctx.resolveRegister(name, s);
  }

  // --- Name helpers (registers must be syntactically valid identifiers) -----------------------

  ImmutableMap<String, String> BUILTIN_RESEMBLANCES =
      ImmutableMap.ofEntries(
          Map.entry("...", "ddd"),
          Map.entry("+", "plus"),
          Map.entry("-", "minus"),
          Map.entry("*", "mul"),
          Map.entry("/", "div"),
          Map.entry("^", "pow"),
          Map.entry("%", "mod"),
          Map.entry("!", "not"),
          Map.entry("~", "tilde"),
          Map.entry("?", "question"),
          Map.entry("&&", "and"),
          Map.entry("||", "or"),
          Map.entry("==", "eq"),
          Map.entry("!=", "neq"),
          Map.entry("<", "lt"),
          Map.entry(">", "gt"),
          Map.entry("<=", "le"),
          Map.entry(">=", "ge"),
          Map.entry(":", "colon"),
          Map.entry("<-", "assign"),
          Map.entry("<<-", "superassign"),
          Map.entry("[", "extract1"),
          Map.entry("[[", "extract2"),
          Map.entry("[<-", "subassign1"),
          Map.entry("[[<-", "subassign2"),
          Map.entry("$", "dollar"),
          Map.entry("$<-", "dollarassign"),
          Map.entry("@", "at"));

  /// A syntactically valid register name resembling `name`.
  static String resemblance(String name) {
    var builtin = BUILTIN_RESEMBLANCES.get(name);
    if (builtin != null) {
      return builtin;
    }

    var base = name.replaceAll("[^a-zA-Z0-9_]", "_");
    if ((base.charAt(0) >= '0' && base.charAt(0) <= '9')
        || (base.charAt(0) >= 'A' && base.charAt(0) <= 'Z')
        || base.equals("_")) {
      base = "_" + base;
    }
    return base;
  }

  static boolean isValid(String name) {
    return Strings.isIdentifierOrKeyword(name) && !(name.charAt(0) >= 'A' && name.charAt(0) <= 'Z');
  }
}
