package org.prlprg.bc;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;
import org.prlprg.sexp.*;
import org.prlprg.util.Pair;

public class Context {
  private final boolean topLevel;
  private final boolean tailCall;
  private final boolean returnJump;
  private final EnvSXP environment;

  /**
   * @param topLevel {@code true} for top level expressions, {@code false} otherwise (e.g.,
   *     compilation of function arguments).
   * @param tailCall {@code true} for expressions that appear in tail position and should be
   *     followed by return, or {@code false} when the result is ignored, or whether the expression
   *     is contained in a loop.
   * @param returnJump {@code true} indicated that the call to return needs {@code RETURNJMP}.
   * @param environment the compilation environment.
   */
  Context(boolean topLevel, boolean tailCall, boolean returnJump, EnvSXP environment) {
    this.topLevel = topLevel;
    this.tailCall = tailCall;
    this.returnJump = returnJump;
    this.environment = environment;
  }

  public static Context functionContext(CloSXP fun) {
    var env = new UserEnvSXP(fun.env());
    var ctx = new Context(false, true, false, env);

    return ctx.functionContext(fun.formals(), fun.body());
  }

  public Context functionContext(ListSXP formals, SEXP body) {
    var env = new UserEnvSXP(environment);
    var ctx = new Context(false, true, false, env);

    formals.names().forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));
    for (var v : formals.values()) {
      ctx.findLocals(v).forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));
    }
    ctx.findLocals(body).forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));

    return ctx;
  }

  public Context nonTailContext() {
    return new Context(topLevel, false, returnJump, environment);
  }

  public Context promiseContext() {
    // TODO: check loop?
    // The promise context also sets returnJump since a return call that is triggered by forcing a
    // promise
    // requires a longjmp to return from the appropriate function.
    return new Context(false, true, true, environment);
  }

  public boolean isBaseVersion(String name) {
    return environment.find(name).map(b -> b.first() instanceof BaseEnvSXP).orElse(false);
  }

  public Optional<Pair<EnvSXP, SEXP>> resolve(String name) {
    return environment.find(name);
  }

  public Set<String> findLocals(SEXP e) {
    var shadowed =
        Set.of("quote", "expression", "local").stream()
            .filter(x -> !isBaseVersion(x))
            .collect(Collectors.toSet());

    var locals = new HashSet<String>();
    var todo = new LinkedList<>();
    todo.add(e);

    // the code is following compiler:::findLocals1 from R
    while (!todo.isEmpty()) {
      var elem = todo.removeFirst();
      if (elem instanceof LangSXP l && l.fun() instanceof RegSymSXP s) {
        var local =
            switch (s.name()) {
              case "=", "<-" -> {
                var args = l.args().values();
                todo.addAll(args.subList(1, args.size()));
                yield getAssignedVar(l);
              }
              case "for" -> {
                var args = l.args().values();
                todo.addAll(args.subList(1, args.size()));

                var sym = (RegSymSXP) l.arg(0).value();
                yield Optional.of(sym.name());
              }
              case "assign", "delayedAssign" -> {
                // The variable in assign and delayedAssign expressions is considered
                // local if it is an explicit
                // character string and there is no environment argument.
                var args = l.args().values();
                todo.addAll(args.subList(1, args.size()));

                if (args.size() == 2 && args.getFirst() instanceof StrOrRegSymSXP v) {
                  yield Optional.of(v.reifyString());
                } else {
                  yield Optional.<String>empty();
                }
              }
              case "function" -> {
                // Variables defined within local functions created by function expressions do not
                // shadow globals
                // within the containing expression and therefore function expressions do not
                // contribute any new
                // local variables.
                yield Optional.<String>empty();
              }
              case "~", "expression", "quote" -> {
                // they do not evaluate their arguments and so do not contribute new local
                // variables.
                if (shadowed.contains(s.name()) || locals.contains(s.name())) {
                  todo.addAll(l.args().values());
                }
                yield Optional.<String>empty();
              }
              case "local" -> {

                // local calls without an environment argument create a new environment
                // for evaluating their expression and do not add new local variables.
                // If an environment argument is present then this might be the current
                // environment and so assignments in the expression are considered to
                // create possible local variables.
                if (shadowed.contains(s.name())
                    || locals.contains(s.name())
                    || l.args().size() != 1) {
                  todo.addAll(l.args().values());
                }
                yield Optional.<String>empty();
              }
              default -> {
                todo.addAll(l.args().values());
                yield Optional.<String>empty();
              }
            };
        local.ifPresent(locals::add);
      } else if (elem instanceof ListSXP l) {
        todo.addAll(l.values());
      }
    }

    return locals;
  }

  private static Optional<String> getAssignedVar(LangSXP l) {
    var v = l.arg(0).value();
    if (v == SEXPs.MISSING_ARG) {
      throw new CompilerException("Bad assignment: " + l);
    } else if (v instanceof StrOrRegSymSXP s) {
      return Optional.of(s.reifyString());
    } else {
      if (l.args().isEmpty()) {
        throw new CompilerException("Bad assignment: " + l);
      }
      switch (l.arg(0).value()) {
        case LangSXP ll -> {
          return getAssignedVar(ll);
        }
        case StrOrRegSymSXP s -> {
          return Optional.of(s.reifyString());
        }
        default -> {
          throw new CompilerException("Bad assignment: " + l);
        }
      }
    }
  }

  public boolean isTailCall() {
    return tailCall;
  }

  public boolean needReturnJump() {
    return returnJump;
  }

  public Context argContext() {
    return new Context(false, false, returnJump, environment);
  }
}
