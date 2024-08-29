package org.prlprg.ir.closure;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.LocalNode;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.NodeId;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;

/**
 * Context for {@linkplain org.prlprg.parseprint.Parser parsing} {@link Closure} so that inner
 * closures and promises are parsed after.
 */
abstract sealed class ClosureParseContext implements HasSEXPParseContext {
  abstract int currentIdIndex();

  abstract Inner inner();

  abstract Ref ref(NodeIdQualifier qualifier);

  static final class Outermost extends ClosureParseContext {
    private final SEXPParseContext sexpParseContext;
    private final Map<NodeIdQualifier, CFG> cfgQualifiers = new HashMap<>();
    private int currentIdIndex = 0;
    private final Inner inner = new Inner(this);

    Outermost() {
      sexpParseContext = new SEXPParseContext();
    }

    @Override
    int currentIdIndex() {
      assert currentIdIndex == 0
          : "the outermost code object should be the first parsed, so `currentIdIndex` should be 0";
      return currentIdIndex++;
    }

    @Override
    Inner inner() {
      return inner;
    }

    @Override
    Ref ref(NodeIdQualifier qualifier) {
      return new Ref(this, qualifier);
    }

    @Override
    public SEXPParseContext sexpParseContext() {
      return sexpParseContext;
    }

    @ParseMethod
    private Node<?> parseNode(Parser p) {
      var s = p.scanner();

      if (!s.nextCharIs('@')) {
        throw s.fail(
            "Directly parsing a CFG that contains a reference to a node in other CFG isn't supported. Note that parsing a code object containing a CFG that contains a reference to a node inside another code object is supported, just the CFG can't be parsed directly.");
      }

      var qualifier = p.parse(NodeIdQualifier.class);
      var id = (NodeId<?>) p.parse(NodeId.class);

      if (!cfgQualifiers.containsKey(qualifier)) {
        throw s.fail(
            "Node encountered with a qualifier to a CFG that wasn't parsed yet: " + qualifier + id);
      }

      return cfgQualifiers.get(qualifier).get(id);
    }
  }

  static final class Inner extends ClosureParseContext {
    private final Outermost outermost;

    private Inner(Outermost outermost) {
      this.outermost = outermost;
    }

    @Override
    int currentIdIndex() {
      assert outermost.currentIdIndex == 0
          : "inner code objects should be parsed after the outer one incremented `currentIdIndex`";
      return outermost.currentIdIndex++;
    }

    @Override
    public Inner inner() {
      return this;
    }

    @Override
    public Ref ref(NodeIdQualifier qualifier) {
      return outermost.ref(qualifier);
    }

    @Override
    public SEXPParseContext sexpParseContext() {
      return outermost.sexpParseContext;
    }

    @ParseMethod
    private Node<?> parseNode(Parser p) {
      return outermost.parseNode(p);
    }
  }

  // Doesn't implement `ClosureParseContext`
  static final class Ref implements HasSEXPParseContext {
    private final Outermost outermost;
    private final NodeIdQualifier qualifier;

    private Ref(Outermost outermost, NodeIdQualifier qualifier) {
      this.outermost = outermost;
      this.qualifier = qualifier;
    }

    @Override
    public SEXPParseContext sexpParseContext() {
      return outermost.sexpParseContext;
    }

    @ParseMethod
    private CFG parseCFG(Parser p) {
      var cfg = p.withContext(outermost.inner).parse(CFG.class);
      outermost.cfgQualifiers.put(qualifier, cfg);
      return cfg;
    }
  }
}

/**
 * Context for {@linkplain org.prlprg.parseprint.Printer printing} {@link Closure} so that inner
 * closures and promises are printed after.
 */
abstract sealed class ClosurePrintContext implements HasSEXPPrintContext {
  abstract CodeObjectPrintOptions options();

  abstract int currentIdIndex();

  abstract Inner inner();

  abstract Ref ref(NodeIdQualifier qualifier);

  static final class Outermost extends ClosurePrintContext {
    private final CodeObjectPrintOptions options;
    private final SEXPPrintContext sexpPrintContext;
    private final Deque<CodeObject> innerCodes = new ArrayDeque<>();
    private final Map<CFG, NodeIdQualifier> cfgQualifiers = new HashMap<>();
    private int currentIdIndex = 0;
    private final Inner inner = new Inner(this);

    Outermost(@Nullable Object outerContext) {
      options =
          outerContext instanceof HasCodeObjectPrintOptions h
              ? h.codeObjectPrintOptions()
              : CodeObjectPrintOptions.DEFAULT;
      sexpPrintContext = options.sexpPrintContext();
    }

    @Override
    CodeObjectPrintOptions options() {
      return options;
    }

    @Override
    int currentIdIndex() {
      assert currentIdIndex == 0
          : "the outermost code object should be the first parsed, so `currentIdIndex` should be 0";
      return currentIdIndex++;
    }

    @Override
    Inner inner() {
      return inner;
    }

    @Override
    Ref ref(NodeIdQualifier qualifier) {
      return new Ref(this, qualifier);
    }

    @Override
    public SEXPPrintContext sexpPrintContext() {
      return sexpPrintContext;
    }

    @PrintMethod
    private void printNode(Node<?> node, Printer p) {
      if (node instanceof LocalNode<?> localNode && cfgQualifiers.containsKey(localNode.cfg())) {
        p.print(cfgQualifiers.get(localNode.cfg()));
      }
      p.print(node.id());
    }
  }

  static final class Inner extends ClosurePrintContext {
    private final Outermost outermost;

    private Inner(Outermost outermost) {
      this.outermost = outermost;
    }

    @Override
    CodeObjectPrintOptions options() {
      return outermost.options;
    }

    @Override
    int currentIdIndex() {
      assert outermost.currentIdIndex == 0
          : "inner code objects should be parsed after the outer one incremented `currentIdIndex`";
      return outermost.currentIdIndex++;
    }

    @Override
    Inner inner() {
      return this;
    }

    @Override
    Ref ref(NodeIdQualifier qualifier) {
      return outermost.ref(qualifier);
    }

    @Override
    public SEXPPrintContext sexpPrintContext() {
      return outermost.sexpPrintContext;
    }

    @PrintMethod
    private void printNode(Node<?> node, Printer p) {
      outermost.printNode(node, p);
    }
  }

  // Doesn't implement `ClosurePrintContext`
  static final class Ref implements HasSEXPPrintContext {
    private final Outermost outermost;
    private final NodeIdQualifier qualifier;

    private Ref(Outermost outermost, NodeIdQualifier qualifier) {
      this.outermost = outermost;
      this.qualifier = qualifier;
    }

    @Override
    public SEXPPrintContext sexpPrintContext() {
      return outermost.sexpPrintContext;
    }

    @PrintMethod
    private void printCfg(CFG cfg, Printer p) {
      assert !outermost.cfgQualifiers.containsKey(cfg);
      outermost.cfgQualifiers.put(cfg, qualifier);
      p.withContext(outermost.inner).print(cfg);
    }
  }
}
