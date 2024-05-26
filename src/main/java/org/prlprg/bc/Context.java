package org.prlprg.bc;

import java.util.HashSet;
import java.util.LinkedList;
import java.util.Optional;
import java.util.Set;
import java.util.stream.Collectors;
import javax.annotation.Nullable;
import org.prlprg.sexp.*;
import org.prlprg.util.Pair;

record Loop(BcLabel start, BcLabel end, boolean gotoOK) {
  public Loop gotoNotOK() {
    return new Loop(start, end, false);
  }
}

public class Context {
  private final boolean topLevel;
  private final boolean tailCall;
  private final boolean returnJump;
  private final EnvSXP environment;
  private final @Nullable Loop loop;

  /**
   * @param topLevel {@code true} for top level expressions, {@code false} otherwise (e.g.,
   *     compilation of function arguments).
   * @param tailCall {@code true} for expressions that appear in tail position and should be
   *     followed by return, or {@code false} when the result is ignored, or whether the expression
   *     is contained in a loop.
   * @param returnJump {@code true} indicated that the call to return needs {@code RETURNJMP}.
   * @param environment the compilation environment.
   * @param loop the loop context or {@code null} if the context does not contain a loop.
   */
  Context(
      boolean topLevel,
      boolean tailCall,
      boolean returnJump,
      EnvSXP environment,
      @Nullable Loop loop) {
    this.topLevel = topLevel;
    this.tailCall = tailCall;
    this.returnJump = returnJump;
    this.environment = environment;
    this.loop = loop;
  }

  public static Context topLevelContext(EnvSXP env) {
    return new Context(true, true, false, env, null);
  }

  public static Context functionContext(CloSXP fun) {
    var env = new UserEnvSXP(fun.env());
    var ctx = topLevelContext(env);

    return ctx.functionContext(fun.formals(), fun.bodyAST());
  }

  public Context functionContext(ListSXP formals, SEXP body) {
    var env = new UserEnvSXP(environment);
    var ctx = new Context(true, true, false, env, loop);

    formals.names().forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));
    for (var v : formals.values()) {
      ctx.findLocals(v).forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));
    }
    ctx.findLocals(body).forEach(x -> env.set(x, SEXPs.UNBOUND_VALUE));

    return ctx;
  }

  public Context nonTailContext() {
    return new Context(topLevel, false, returnJump, environment, loop);
  }

  public Context returnJumpContext() {
    return new Context(topLevel, tailCall, true, environment, loop);
  }

  public Context promiseContext() {
    // The promise context also sets returnJump since a return call that is triggered by forcing a
    // promise
    // requires a longjmp to return from the appropriate function.
    return new Context(false, true, true, environment, loop != null ? loop.gotoNotOK() : null);
  }

  public Context argContext() {
    return new Context(
        false, false, returnJump, environment, loop != null ? loop.gotoNotOK() : null);
  }

  public Context loopContext(BcLabel start, BcLabel end) {
    var nctx = nonTailContext();
    return new Context(
        nctx.topLevel,
        nctx.tailCall,
        nctx.returnJump,
        nctx.environment,
        new Loop(start, end, true));
  }

  public boolean isBaseVersion(String name) {
    return environment.find(name).map(b -> b.first().isBase()).orElse(false);
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
      if (elem instanceof LangSXP l && l.fun() instanceof RegSymSXP fun) {
        var args = l.args().values();
        Optional<String> local =
            switch (fun.name()) {
              case "=", "<-" -> {
                todo.addAll(args.subList(1, args.size()));
                yield getAssignVar(l);
              }
              case "for" -> {
                todo.addAll(args.subList(1, args.size()));

                var sym = (RegSymSXP) args.getFirst();
                yield Optional.of(sym.name());
              }
              case "assign", "delayedAssign" -> {
                // The variable in assign and delayedAssign expressions is considered
                // local if it is an explicit
                // character string and there is no environment argument.
                todo.addAll(args.subList(1, args.size()));

                if (args.size() == 2 && args.getFirst() instanceof StrOrRegSymSXP v) {
                  yield v.reifyString();
                } else {
                  yield Optional.empty();
                }
              }
              case "function" ->
                  // Variables defined within local functions created by function expressions do not
                  // shadow globals
                  // within the containing expression and therefore function expressions do not
                  // contribute any new
                  // local variables.
                  Optional.empty();

              case "~", "expression", "quote" -> {
                // they do not evaluate their arguments and so do not contribute new local
                // variables.
                if (shadowed.contains(fun.name()) || locals.contains(fun.name())) {
                  todo.addAll(args);
                }
                yield Optional.empty();
              }
              case "local" -> {
                // local calls without an environment argument create a new environment
                // for evaluating their expression and do not add new local variables.
                // If an environment argument is present then this might be the current
                // environment and so assignments in the expression are considered to
                // create possible local variables.
                if (shadowed.contains(fun.name())
                    || locals.contains(fun.name())
                    || args.size() != 1) {
                  todo.addAll(args);
                }
                yield Optional.empty();
              }
              default -> {
                todo.addAll(args);
                yield Optional.empty();
              }
            };
        local.ifPresent(locals::add);
      } else if (elem instanceof ListSXP l) {
        todo.addAll(l.values());
      }
    }

    return locals;
  }

  public static Optional<String> getAssignVar(LangSXP l) {
    var v = l.arg(0).value();
    if (v == SEXPs.MISSING_ARG) {
      throw new CompilerException("Bad assignment: " + l);
    } else if (v instanceof StrOrRegSymSXP s) {
      return s.reifyString();
    } else {
      if (l.args().isEmpty()) {
        throw new CompilerException("Bad assignment: " + l);
      }
      switch (l.arg(0).value()) {
        case LangSXP ll -> {
          return getAssignVar(ll);
        }
        case StrOrRegSymSXP s -> {
          return s.reifyString();
        }
        default -> throw new CompilerException("Bad assignment: " + l);
      }
    }
  }

  public static Optional<SymOrLangSXP> getAssignFun(SEXP fun) {
    if (fun instanceof RegSymSXP s) {
      return Optional.of(SEXPs.symbol(s.name() + "<-"));
    } else
    // >> check for and handle foo::bar(x) <- y assignments here
    if (fun instanceof LangSXP l
        && l.args().size() == 2
        && l.fun() instanceof RegSymSXP funSym
        && (funSym.name().equals("::") || funSym.name().equals(":::"))
        && l.arg(0).value() instanceof RegSymSXP
        && l.arg(1).value() instanceof RegSymSXP) {
      var args = l.args().set(1, null, SEXPs.symbol(l.arg(1) + "<-"));
      return Optional.of(SEXPs.lang(l.fun(), args));
    } else {
      return Optional.empty();
    }
  }

  public boolean isTailCall() {
    return tailCall;
  }

  public boolean isReturnJump() {
    return returnJump;
  }

  @SuppressWarnings("BooleanMethodIsAlwaysInverted")
  public boolean isTopLevel() {
    return topLevel;
  }

  @Nullable Loop loop() {
    return loop;
  }

  public Optional<CloSXP> findFunDef(String name) {
    return environment
        .find(name)
        .map(Pair::second)
        .filter(CloSXP.class::isInstance)
        .map(CloSXP.class::cast);
  }
}
