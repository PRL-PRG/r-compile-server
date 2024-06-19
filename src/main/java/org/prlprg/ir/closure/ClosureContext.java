package org.prlprg.ir.closure;

import java.util.ArrayDeque;
import java.util.Deque;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import javax.annotation.Nullable;
import org.prlprg.ir.cfg.CFG;
import org.prlprg.ir.cfg.Node;
import org.prlprg.ir.cfg.NodeId;
import org.prlprg.ir.closure.CodeObject.LateConstructException;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;
import org.prlprg.sexp.parseprint.HasSEXPParseContext;
import org.prlprg.sexp.parseprint.HasSEXPPrintContext;
import org.prlprg.sexp.parseprint.SEXPParseContext;
import org.prlprg.sexp.parseprint.SEXPPrintContext;
import org.prlprg.util.Pair;

/**
 * Context for {@linkplain org.prlprg.parseprint.Parser parsing} {@link Closure} so that inner
 * closures and promises are parsed after.
 */
abstract sealed class ClosureParseContext implements HasSEXPParseContext {
  abstract int lastYieldedIdIndex();

  abstract Inner inner();

  abstract Ref ref(NodeIdQualifier qualifier);

  static final class Outermost extends ClosureParseContext {
    private final SEXPParseContext sexpParseContext;
    private final Deque<CodeObject.LateConstruct<?>> innerCodeConsumers = new ArrayDeque<>();
    private final Map<NodeIdQualifier, CFG> cfgQualifiers = new HashMap<>();
    private int nextInnerIdIndex = 0;
    private int lastYieldedInnerIdIndex = 0;
    private final Inner inner = new Inner(this);
    private final InCfg inCfg = new InCfg(this);

    Outermost(@Nullable Object outerContext) {
      sexpParseContext =
          outerContext instanceof HasSEXPParseContext h
              ? h.sexpParseContext()
              : new SEXPParseContext();
    }

    @Override
    int lastYieldedIdIndex() {
      return 0;
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

    private <T extends CodeObject> T deferInnerCode(
        Parser p, int index, T code, CodeObject.LateConstruct<T> lateConstruct) {
      if (index != ++nextInnerIdIndex) {
        throw p.scanner()
            .fail(
                "Inner code object index isn't in order: expected "
                    + nextInnerIdIndex
                    + " got "
                    + index);
      }
      innerCodeConsumers.addLast(lateConstruct);
      return code;
    }

    private Closure deferInnerClosure(Parser p, int index, String name) {
      var codeAndLateConstruct = Closure.lateConstruct(name);
      return deferInnerCode(p, index, codeAndLateConstruct.first(), codeAndLateConstruct.second());
    }

    private Promise deferPromise(Parser p, int index, String name) {
      var codeAndLateConstruct = Promise.lateConstruct(name);
      return deferInnerCode(p, index, codeAndLateConstruct.first(), codeAndLateConstruct.second());
    }

    void parseRemaining(Parser p) {
      iterator()
          .forEachRemaining(
              lateConstruct -> {
                try {
                  switch (lateConstruct) {
                    case Closure.LateConstruct cc ->
                        cc.set(p.withContext(inner).parse(Closure.class));
                    case Promise.LateConstruct pc ->
                        pc.set(p.withContext(inner).parse(Promise.class));
                  }
                } catch (LateConstructException e) {
                  throw p.scanner().fail(e.getMessage());
                }
              });
    }

    private Iterator<CodeObject.LateConstruct<?>> iterator() {
      return new Iterator<>() {
        @Override
        public boolean hasNext() {
          return !innerCodeConsumers.isEmpty();
        }

        @Override
        public CodeObject.LateConstruct<?> next() {
          lastYieldedInnerIdIndex++;
          return innerCodeConsumers.removeFirst();
        }
      };
    }

    @ParseMethod
    private Node parseNode(Parser p) {
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
    int lastYieldedIdIndex() {
      if (outermost.lastYieldedInnerIdIndex == 0) {
        throw new IllegalStateException("No deferred inner closures were yielded");
      }
      return outermost.lastYieldedInnerIdIndex;
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
    private Node parseNode(Parser p) {
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
      var cfg = p.withContext(outermost.inCfg).parse(CFG.class);
      outermost.cfgQualifiers.put(qualifier, cfg);
      return cfg;
    }
  }

  private record InCfg(Outermost outermost) implements HasSEXPParseContext {
    @Override
    public SEXPParseContext sexpParseContext() {
      return outermost.sexpParseContext;
    }

    @ParseMethod
    private Closure parseInnerClosure(Parser p) {
      var indexAndName = parseName(p);
      return outermost.deferInnerClosure(p, indexAndName.first(), indexAndName.second());
    }

    @ParseMethod
    private Promise parsePromise(Parser p) {
      var indexAndName = parseName(p);
      return outermost.deferPromise(p, indexAndName.first(), indexAndName.second());
    }

    private Pair<Integer, String> parseName(Parser p) {
      var s = p.scanner();

      s.assertAndSkip('@');
      var index = s.readUInt();
      var name = s.nextCharSatisfies(Names::isValidStartChar) ? Names.read(s, true) : "";

      return Pair.of(index, name);
    }
  }
}

/**
 * Context for {@linkplain org.prlprg.parseprint.Printer printing} {@link Closure} so that inner
 * closures and promises are printed after.
 */
abstract sealed class ClosurePrintContext implements HasSEXPPrintContext {
  abstract int lastYieldedIdIndex();

  abstract Inner inner();

  abstract Ref ref(NodeIdQualifier qualifier);

  static final class Outermost extends ClosurePrintContext {
    private final SEXPPrintContext sexpPrintContext;
    private final Deque<CodeObject> innerCodes = new ArrayDeque<>();
    private final Map<CFG, NodeIdQualifier> cfgQualifiers = new HashMap<>();
    private int nextInnerIdIndex = 0;
    private int lastYieldedInnerIdIndex = 0;
    private final Inner inner = new Inner(this);
    private final InCfg inCfg = new InCfg(this);

    Outermost(@Nullable Object outerContext) {
      sexpPrintContext =
          outerContext instanceof HasSEXPPrintContext h
              ? h.sexpPrintContext()
              : new SEXPPrintContext();
    }

    @Override
    int lastYieldedIdIndex() {
      return 0;
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

    private int deferInnerCode(CodeObject elem) {
      innerCodes.addLast(elem);
      return ++nextInnerIdIndex;
    }

    void printRemaining(Printer p) {
      var w = p.writer();

      iterator()
          .forEachRemaining(
              innerCode -> {
                w.write('\n');
                p.withContext(inner).print(innerCode);
              });
    }

    private Iterator<CodeObject> iterator() {
      return new Iterator<>() {
        @Override
        public boolean hasNext() {
          return !innerCodes.isEmpty();
        }

        @Override
        public CodeObject next() {
          lastYieldedInnerIdIndex++;
          return innerCodes.removeFirst();
        }
      };
    }

    @PrintMethod
    private void printNode(Node node, Printer p) {
      if (node.cfg() != null && cfgQualifiers.containsKey(node.cfg())) {
        p.print(cfgQualifiers.get(node.cfg()));
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
    int lastYieldedIdIndex() {
      if (outermost.lastYieldedInnerIdIndex == 0) {
        throw new IllegalStateException("No deferred inner elements were yielded");
      }
      return outermost.lastYieldedInnerIdIndex;
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
    private void printNode(Node node, Printer p) {
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
      p.withContext(outermost.inCfg).print(cfg);
    }
  }

  // Doesn't implement `ClosurePrintContext`
  private record InCfg(Outermost outermost) implements HasSEXPPrintContext {
    @Override
    public SEXPPrintContext sexpPrintContext() {
      return outermost.sexpPrintContext;
    }

    @PrintMethod
    private void printInnerCode(CodeObject elem, Printer p) {
      var w = p.writer();

      w.write('@');
      p.print(outermost.deferInnerCode(elem));
      if (!elem.name().isEmpty()) {
        p.print(Names.quoteIfNecessary(elem.name()));
      }
    }
  }
}
