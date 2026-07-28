package org.prlprg.fir.ir.instruction;

import java.util.Map;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.Consume;
import org.prlprg.fir.ir.argument.Read;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.module.FunctionRef;
import org.prlprg.fir.ir.variable.Register;
import org.prlprg.parseprint.Scanner;

/// Parse-time context threaded as the parser context while parsing an
/// [Abstraction][org.prlprg.fir.ir.abstraction.Abstraction]'s body (its declarations and CFG).
///
/// Registers are identity objects, so the textual form refers to them by name and the parser must
/// resolve those names back to the (single) [Register] each one defines. This context carries:
///
///   - [#cfg] the CFG currently being parsed into (the function body, or a nested promise);
///   - [#registers] the name → [Register] map, populated as definitions (parameters, phi
///     parameters, assignees) are parsed and consulted when a use is parsed. Because the printed
///     form is dominator-ordered and a definition dominates its uses, every definition is parsed
///     before any use, so no forward references are needed here;
///   - [#aliases] name → [Argument] bindings for the legacy forwarding form `r = <arg>` (the old
///     `Aea` expression). The new IR has no forwarding node, so such a binding emits no statement;
///     instead every use of `r` is replaced by (a fresh copy of) the bound argument. This keeps the
///     parser accepting the same textual form even though the IR no longer represents it;
///   - [#forFunctionRef] the context for resolving [FunctionRef]s (shared across the module).
///
/// The maps are shared (not copied) with nested promise contexts via [#withCfg], because a
/// promise's body lives in the enclosing abstraction's register namespace.
public final class FirParseContext {
  private final CFG cfg;
  private final Map<String, Register> registers;
  private final Map<String, Argument> aliases;
  private final FunctionRef.ParseContext forFunctionRef;

  public FirParseContext(
      CFG cfg,
      Map<String, Register> registers,
      Map<String, Argument> aliases,
      FunctionRef.ParseContext forFunctionRef) {
    this.cfg = cfg;
    this.registers = registers;
    this.aliases = aliases;
    this.forFunctionRef = forFunctionRef;
  }

  public CFG cfg() {
    return cfg;
  }

  public FunctionRef.ParseContext forFunctionRef() {
    return forFunctionRef;
  }

  /// A context for a nested promise's CFG, sharing this one's register namespace.
  public FirParseContext withCfg(CFG newCfg) {
    return new FirParseContext(newCfg, registers, aliases, forFunctionRef);
  }

  /// Record a register definition under its name (overriding any prior definition or alias).
  public void define(String name, Register register) {
    registers.put(name, register);
    aliases.remove(name);
  }

  /// Record a legacy forwarding binding `name = argument` (overriding any prior definition/alias).
  public void bindAlias(String name, Argument argument) {
    aliases.put(name, argument);
    registers.remove(name);
  }

  public boolean isInScope(String name) {
    return registers.containsKey(name) || aliases.containsKey(name);
  }

  /// Resolve a register *use* to an argument: a fresh [Read] of its definition, or (a fresh copy
  /// of) the argument it was forward-bound to.
  ///
  /// @throws org.prlprg.parseprint.ParseException If the name is not in scope.
  public Argument resolveUse(String name, Scanner s) {
    var alias = aliases.get(name);
    if (alias != null) {
      return freshUse(alias);
    }
    var register = registers.get(name);
    if (register != null) {
      return new Read(register);
    }
    throw s.fail("register not in scope: " + name);
  }

  /// Resolve a name that must denote a [Register] (e.g. the operand of `consume`).
  ///
  /// @throws org.prlprg.parseprint.ParseException If the name is not (or is not bound to) a
  // register.
  public Register resolveRegister(String name, Scanner s) {
    var register = registers.get(name);
    if (register != null) {
      return register;
    }
    if (aliases.get(name) instanceof Read(var r)) {
      return r;
    }
    throw s.fail("not a register in scope: " + name);
  }

  /// A fresh occurrence of `argument`, so each use is tracked independently. Constants are
  /// immutable and carry no per-use state, so they can be shared.
  private static Argument freshUse(Argument argument) {
    return switch (argument) {
      case Constant c -> c;
      case Read(var r) -> new Read(r);
      case Consume(var r) -> new Read(r);
    };
  }
}
