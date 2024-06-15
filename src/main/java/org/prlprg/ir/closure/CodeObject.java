package org.prlprg.ir.closure;

import org.prlprg.ir.cfg.CFG;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;
import org.prlprg.util.Reflection;

/**
 * An IR object that contains its own IR code ({@link CFG}) and can be stored in other objects.
 *
 * <p>Note that this isn't implemented by {@link ClosureVersion}, because those are always stored
 * inside of and referenced by their closures, whereas the implementors of this interface may be
 * stored and referenced directly.
 */
public abstract sealed class CodeObject permits Closure, Promise {
  protected final String name;

  protected CodeObject(String name) {
    this.name = name;
  }

  /**
   * Name of the object for debugging.
   *
   * <p>e.g. if a closure, typically the name of the variable it's assigned to.
   *
   * <p>It may also be the empty string.
   */
  public String name() {
    return name;
  }

  /**
   * An object that lets you move the data from another {@link CodeObject} of the same type into
   * this one, so that you can construct this object and assign it somewhere before initializing its
   * data later.
   */
  abstract sealed class LateConstruct<T extends CodeObject>
      permits Closure.LateConstruct, Promise.LateConstruct {
    private boolean wasSet = false;

    protected LateConstruct() {}

    /**
     * Move the data from the given object to this one.
     *
     * <p>Must be called exactly once.
     *
     * <p>The name <i>in this object and the given one</i> should be set. If they aren't equal,
     * {@link LateConstructException} is thrown.
     */
    public final void set(T data) {
      assert !wasSet;
      wasSet = true;

      if (!name().equals(data.name())) {
        throw new LateConstructException(
            "Code object name in reference is different from its name in definition: reference is "
                + name()
                + ", definition is "
                + data.name());
      }

      doSet(data);
    }

    /**
     * Move the data from the given object to this one.
     *
     * <p>It has already been checked that this was called exactly once, and the names of this
     * object and the given one are equal.
     */
    protected abstract void doSet(T data);
  }

  static final class LateConstructException extends IllegalArgumentException {
    private LateConstructException(String s) {
      super(s);
    }
  }

  // region serialization and deserialization
  // region parse/print methods
  @ParseMethod
  private static CodeObject parse(Parser p, Class<? extends CodeObject> clazz) {
    return p.withContext(new ClosureParseContext.Outermost(p.context())).parse(clazz);
  }

  @ParseMethod
  private static CodeObject parse(
      Parser p, ClosureParseContext.Outermost ctx, Class<? extends CodeObject> clazz) {
    return Reflection.construct(clazz, p, ctx);
  }

  @ParseMethod
  private static CodeObject parse(
      Parser p, ClosureParseContext.Inner ctx, Class<? extends CodeObject> clazz) {
    return Reflection.construct(clazz, p, ctx);
  }

  @PrintMethod
  private void print(Printer p) {
    print(p, new ClosurePrintContext.Outermost(p.context()));
  }

  @PrintMethod
  private void print(Printer p, ClosurePrintContext.Outermost ctx) {
    print(p, (ClosurePrintContext) ctx);
  }

  @PrintMethod
  private void print(Printer p, ClosurePrintContext.Inner ctx) {
    print(p, (ClosurePrintContext) ctx);
  }

  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  protected abstract void print(
      Printer p, @SuppressWarnings("ClassEscapesDefinedScope") ClosurePrintContext ctx);

  // endregion parse/print methods

  // region helpers
  /**
   * Parse the start of a {@link CodeObject}, which is the prefix (given string) and identifier.
   *
   * <p>This is a deserializing constructor.
   */
  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  protected CodeObject(
      String prefix,
      Parser p,
      @SuppressWarnings("ClassEscapesDefinedScope") ClosureParseContext ctx) {
    var s = p.scanner();

    s.assertAndSkip(prefix + " ");
    name = parseId(p, ctx.lastYieldedIdIndex());
  }

  /** Print the start of a {@link CodeObject}, which is the prefix (given string) and identifier. */
  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  protected void printHeader(
      String prefix,
      Printer p,
      @SuppressWarnings("ClassEscapesDefinedScope") ClosurePrintContext ctx) {
    var w = p.writer();

    w.write(prefix);
    w.write(' ');
    printId(name, p, ctx.lastYieldedIdIndex());
  }

  /**
   * Parse a {@link CodeObject} identifier, assert its index is the given one, and return its name.
   *
   * <p>Pass 0 for no index (for an outermost code identifier).
   */
  static String parseId(Parser p, int expectedIndex) {
    var s = p.scanner();

    return s.runWithWhitespacePolicy(
        SkipWhitespace.NONE,
        () -> {
          s.assertAndSkip('@');
          var actualIndex = s.nextCharSatisfies(Character::isDigit) ? s.readUInt() : 0;
          if (expectedIndex != actualIndex) {
            throw expectedIndex == 0
                ? s.fail(
                    "unexpected inner code index when parsing outermost code identifier: "
                        + actualIndex)
                : actualIndex == 0
                    ? s.fail(
                        "unexpected outermost code identifier when parsing inner code with index "
                            + expectedIndex)
                    : s.fail("Expected inner code index " + expectedIndex + ", got " + actualIndex);
          }
          return s.nextCharSatisfies(Names::isValidStartChar) ? Names.read(s, true) : "";
        });
  }

  /**
   * Print a {@link CodeObject} identifier with the given name and index.
   *
   * <p>Pass 0 for no index (for an outermost code identifier).
   */
  static void printId(String name, Printer p, int index) {
    var w = p.writer();

    w.write('@');
    if (index != 0) {
      p.print(index);
    }
    if (!name.isEmpty()) {
      w.write(Names.quoteIfNecessary(name));
    }
  }
  // endregion helpers
  // endregion serialization and deserialization
}
