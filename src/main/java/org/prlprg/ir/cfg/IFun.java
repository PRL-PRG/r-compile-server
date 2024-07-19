package org.prlprg.ir.cfg;

import org.prlprg.ir.closure.Closure;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.BuiltinId;
import org.prlprg.sexp.FunSXP;

/**
 * A "function" that defines the type-sans-overloads of an instruction.
 *
 * <p>There are 3 categories: "dynamic calls", "static builtin calls" and "static compiled calls".
 * However, these are only used in creation, lowering, and parsing/printing. Optimization passes
 * don't rely on the instruction's type, only its effects, inputs, and outputs.
 */
public sealed interface IFun {
  /** The instruction whose function is this is a call to a dynamically-resolved function. */
  record DynamicNode(Node<? extends FunSXP> value) implements IFun {}

  /**
   * The instruction whose function is this is an intrinsic ("made-up builtin") or call to a
   * statically-resolved builtin.
   *
   * <p>e.g. {@code ld} (load) is an intrinsic, {@code `+`} is a statically-resolved builtin.
   */
  sealed interface Static extends IFun {
    /** Returns the {@link Static} that prints to the given name. */
    static Static named(String name) {
      return BuiltinId.existsNamed(name)
          ? new Static.Builtin(BuiltinId.named(name))
          : new Static.Intrinsic(name);
    }

    /** Returns what this prints to. */
    default String name() {
      return switch (this) {
        case Intrinsic(var name) -> name;
        case Builtin(var builtin) -> builtin.name();
      };
    }

    /** The instruction whose function is this is a call to an intrinsic ("made-up builtin"). */
    record Intrinsic(String name) implements Static {
      public Intrinsic {
        if (BuiltinId.existsNamed(name)) {
          throw new IllegalArgumentException("Intrinsic name is a builtin: " + name);
        }
      }
    }

    /** The instruction whose function is this is a call to a statically-resolved builtin. */
    record Builtin(BuiltinId id) implements Static {}
  }

  /** The instruction whose function is this is a call to a statically-resolved compiled closure. */
  record SemiStatic(Closure closure) implements IFun {}

  // region serialization and deserialization
  @ParseMethod
  private static IFun parse(Parser p) {
    var s = p.scanner();

    var peek = s.peekChar();
    return switch (peek) {
      case '%' -> new DynamicNode(Node.cast(p.parse(Node.class), FunSXP.class));
      case '@' -> new SemiStatic(p.parse(Closure.class));
      default -> {
        if (Character.isJavaIdentifierStart(peek)) {
          yield Static.named(s.readJavaIdentifierOrKeyword());
        } else {
          throw s.fail("'%', '@', or identifier start (`IFun` start)", Character.toString(peek));
        }
      }
    };
  }

  @PrintMethod
  private void print(Printer p) {
    var w = p.writer();

    switch (this) {
      case DynamicNode(var value) -> p.print(value);
      case SemiStatic(var closure) -> p.print(closure);
      case Static s -> w.write(s.name());
    }
  }
  // endregion serialization and deserialization
}
