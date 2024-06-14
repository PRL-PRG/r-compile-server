package org.prlprg.ir.closure;

import java.util.ArrayDeque;
import java.util.Deque;
import org.prlprg.parseprint.ParseMethod;
import org.prlprg.parseprint.Parser;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.primitive.Names;

/**
 * Context for {@linkplain org.prlprg.parseprint.Printer printing} {@link Closure} so that inner
 * closures and promises are printed after.
 */
sealed interface ClosurePrintContext {
  ClosurePrintContext.Inner inner();

  final class Outermost implements ClosurePrintContext {
    private final Deque<Closure> innerClosures = new ArrayDeque<>();
    private final Deque<Promise> promises = new ArrayDeque<>();
    private int nextInnerClosureId = 0;
    private int nextPromiseId = 0;
    private int lastYieldedInnerClosureId = 0;
    private int lastYieldedPromiseId = 0;
    private final Inner inner = new Inner(this);

    @Override
    public Inner inner() {
      return inner;
    }

    boolean hasNextDeferredInnerClosure() {
      return !innerClosures.isEmpty();
    }

    boolean hasNextDeferredPromise() {
      return !promises.isEmpty();
    }

    Closure nextDeferredInnerClosure() {
      lastYieldedInnerClosureId++;
      return innerClosures.removeFirst();
    }

    Promise nextDeferredPromise() {
      lastYieldedPromiseId++;
      return promises.removeFirst();
    }

    private int deferInnerClosure(Closure closure) {
      innerClosures.addLast(closure);
      return ++nextInnerClosureId;
    }

    private int deferPromise(Promise promise) {
      promises.addLast(promise);
      return ++nextPromiseId;
    }
  }

  final class Inner implements ClosurePrintContext {
    private final Outermost outermost;

    /** Context that is guaranteed to have a last yielded promise, so that can be printed. */
    static Inner dummyForPromise() {
      var outermost = new Outermost();
      outermost.lastYieldedPromiseId = 1;
      return outermost.inner;
    }

    private Inner(ClosurePrintContext.Outermost outermost) {
      this.outermost = outermost;
    }

    @Override
    public Inner inner() {
      return this;
    }

    int lastYieldedInnerClosureId() {
      if (outermost.lastYieldedInnerClosureId == 0) {
        throw new IllegalStateException("No deferred inner closures were yielded");
      }
      return outermost.lastYieldedInnerClosureId;
    }

    int lastYieldedPromiseId() {
      if (outermost.lastYieldedPromiseId == 0) {
        throw new IllegalStateException("No deferred promises were yielded");
      }
      return outermost.lastYieldedPromiseId;
    }

    @PrintMethod
    private void printInnerClosure(Closure closure, Printer p) {
      var w = p.writer();

      w.write('@');
      p.print(outermost.deferInnerClosure(closure));
      w.write(':');
      p.print(Names.quoteIfNecessary(closure.name()));
    }

    @PrintMethod
    private void printPromise(Promise promise, Printer p) {
      var w = p.writer();

      w.write('@');
      p.print(outermost.deferPromise(promise));
    }
  }
}

/**
 * Context for {@linkplain org.prlprg.parseprint.Parser parsing} {@link Closure} so that inner
 * closures and promises are parsed after.
 */
sealed interface ClosureParseContext {
  Inner inner();

  final class Outermost implements ClosureParseContext {
    private final Deque<Closure.LateConstruct> innerClosureConsumers = new ArrayDeque<>();
    private final Deque<Promise.LateConstruct> promiseConsumers = new ArrayDeque<>();
    private int nextInnerClosureId = 0;
    private int nextPromiseId = 0;
    private int nextYieldedInnerClosureId = 0;
    private int nextYieldedPromiseId = 0;
    private final Inner inner = new Inner(this);

    @Override
    public Inner inner() {
      return inner;
    }

    boolean needsNextInnerClosure() {
      return !innerClosureConsumers.isEmpty();
    }

    boolean needsNextPromise() {
      return !promiseConsumers.isEmpty();
    }

    void setNextInnerClosure(Closure next) {
      nextYieldedInnerClosureId++;
      innerClosureConsumers.removeFirst().set(next);
    }

    void setNextPromise(Promise next) {
      nextYieldedPromiseId++;
      promiseConsumers.removeFirst().set(next);
    }

    private Closure deferInnerClosure(Parser p, int index, String name) {
      if (index != ++nextInnerClosureId) {
        throw p.scanner()
            .fail(
                "Inner closure index isn't in order: expected "
                    + nextInnerClosureId
                    + " got "
                    + index);
      }
      var closureAndFinishDeserialize = Closure.lateConstruct(name);
      innerClosureConsumers.addLast(closureAndFinishDeserialize.second());
      return closureAndFinishDeserialize.first();
    }

    private Promise deferPromise(Parser p, int index) {
      if (index != ++nextPromiseId) {
        throw p.scanner()
            .fail("Promise index isn't in order: expected " + nextPromiseId + " got " + index);
      }
      var promiseAndFinishDeserialize = Promise.lateConstruct();
      promiseConsumers.addLast(promiseAndFinishDeserialize.second());
      return promiseAndFinishDeserialize.first();
    }
  }

  final class Inner implements ClosureParseContext {
    private final Outermost outermost;

    private Inner(ClosureParseContext.Outermost outermost) {
      this.outermost = outermost;
    }

    @Override
    public Inner inner() {
      return this;
    }

    int lastYieldedInnerClosureId() {
      if (outermost.nextYieldedInnerClosureId == 0) {
        throw new IllegalStateException("No deferred inner closures were yielded");
      }
      return outermost.nextYieldedInnerClosureId;
    }

    int lastYieldedPromiseId() {
      if (outermost.nextYieldedPromiseId == 0) {
        throw new IllegalStateException("No deferred promises were yielded");
      }
      return outermost.nextYieldedPromiseId;
    }

    @ParseMethod
    private Closure parseInnerClosure(Parser p) {
      var s = p.scanner();

      s.assertAndSkip('@');
      var index = s.readUInt();
      s.assertAndSkip(':');
      var name = Names.read(s, true);

      return outermost.deferInnerClosure(p, index, name);
    }

    @ParseMethod
    private Promise parsePromise(Parser p) {
      var s = p.scanner();

      s.assertAndSkip('@');
      var index = s.readUInt();

      return outermost.deferPromise(p, index);
    }
  }
}
