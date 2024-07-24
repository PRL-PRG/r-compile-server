package org.prlprg.ir.closure;

import java.util.List;
import org.jetbrains.annotations.UnmodifiableView;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.CFGEdit;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.StmtData;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.parseprint.SkipWhitespace;
import org.prlprg.primitive.Names;

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
   * Returns a list of all {@linkplain Node nodes} that this code object contains belonging to the
   * {@linkplain CFG} it's stored in.
   *
   * <p>Specifically, the code object would be stored in a CFG via {@link StmtData.MkCls MkCls} or
   * {@link StmtData.MkProm}), if it's an inner code object. If it's an outermost code object (e.g.
   * outermost closure), this will be empty.
   *
   * @see #unsafeReplaceOuterCfgNode(Node, Node)
   * @see #verifyOuterCfgISexpsAreOfCorrectTypes()
   */
  public abstract @UnmodifiableView List<Node<?>> outerCfgNodes();

  /**
   * Replaces an {@linkplain #outerCfgNodes() outer CFG node} with another one.
   *
   * <p>This shouldn't be called directly except internally in {@link org.prlprg.ir.cfg}. It's
   * "unsafe" because it doesn't record a {@link CFGEdit} for the replacement, but we want one to be
   * recorded (currently we aren't recording edits for mutating the code object's versions or body,
   * but we still are for outer CFG nodes. We may decide to change this in the future, in which case
   * this method will no longer be "unsafe").
   *
   * @throws IllegalArgumentException If the replacement node type is incompatible with the old node
   *     type (e.g. if {@code oldNode} is an {@link ISexp} and {@code newNode} is not).
   * @see #outerCfgNodes()
   * @see #verifyOuterCfgISexpsAreOfCorrectTypes()
   */
  public abstract void unsafeReplaceOuterCfgNode(Node<?> oldNode, Node<?> newNode);

  /**
   * Verify that all {@linkplain #outerCfgNodes() outer CFG nodes} that are {@link ISexp}s (abstract
   * R values) have the correct dynamic type.
   *
   * <p>For example, verify that an environment value is still {@link
   * org.prlprg.ir.type.RType#ANY_ENV ANY_ENV}.
   *
   * @throws IllegalStateException If a node has an incorrect dynamic type.
   * @see #outerCfgNodes()
   * @see #unsafeReplaceOuterCfgNode(Node, Node)
   */
  public abstract void verifyOuterCfgISexpsAreOfCorrectTypes();

  /** Verify all {@link CFG}s within this code object. */
  public abstract void verify();

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
    return p.withContext(new ClosureParseContext.Outermost()).parse(clazz);
  }

  @PrintMethod
  private void print(Printer p) {
    print(p, new ClosurePrintContext.Outermost(p.context()));
  }

  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  @PrintMethod
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

    if (ctx instanceof ClosureParseContext.Outermost) {
      s.assertAndSkip(prefix + " ");
    }
    name = parseId(p, ctx.currentIdIndex());
  }

  /** Print the start of a {@link CodeObject}, which is the prefix (given string) and identifier. */
  // The class doesn't escape its visibility, because this is a protected method of a sealed class.
  protected void printHeader(
      String prefix,
      Printer p,
      @SuppressWarnings("ClassEscapesDefinedScope") ClosurePrintContext ctx) {
    var w = p.writer();

    if (ctx instanceof ClosurePrintContext.Outermost) {
      w.write(prefix);
      w.write(' ');
    }
    printId(name, p, ctx.currentIdIndex());
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
      Names.write(w, name);
    }
  }
  // endregion helpers
  // endregion serialization and deserialization
}
