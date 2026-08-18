package org.prlprg.fir.parseprint;

import java.util.ArrayList;
import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.argument.Argument;
import org.prlprg.fir.ir.argument.Constant;
import org.prlprg.fir.ir.argument.NamedArgument;
import org.prlprg.fir.ir.assumption.AssumeConstant;
import org.prlprg.fir.ir.assumption.AssumeFunction;
import org.prlprg.fir.ir.assumption.AssumeLoadFun;
import org.prlprg.fir.ir.assumption.AssumeLoadVar;
import org.prlprg.fir.ir.assumption.AssumeType;
import org.prlprg.fir.ir.assumption.Assumption;
import org.prlprg.fir.ir.callee.DynamicCallee;
import org.prlprg.fir.ir.callee.StaticFnCallee;
import org.prlprg.fir.ir.cfg.BB;
import org.prlprg.fir.ir.cfg.CFG;
import org.prlprg.fir.ir.expression.Assume;
import org.prlprg.fir.ir.expression.Call;
import org.prlprg.fir.ir.expression.Cast;
import org.prlprg.fir.ir.expression.Closure;
import org.prlprg.fir.ir.expression.Dup;
import org.prlprg.fir.ir.expression.Force;
import org.prlprg.fir.ir.expression.Load;
import org.prlprg.fir.ir.expression.MkEnv;
import org.prlprg.fir.ir.expression.MkVector;
import org.prlprg.fir.ir.expression.Noop;
import org.prlprg.fir.ir.expression.PopEnv;
import org.prlprg.fir.ir.expression.Promise;
import org.prlprg.fir.ir.expression.ReflectiveLoad;
import org.prlprg.fir.ir.expression.ReflectiveStore;
import org.prlprg.fir.ir.expression.Store;
import org.prlprg.fir.ir.expression.SubscriptRead;
import org.prlprg.fir.ir.expression.SubscriptWrite;
import org.prlprg.fir.ir.instruction.Checkpoint;
import org.prlprg.fir.ir.instruction.Deopt;
import org.prlprg.fir.ir.instruction.Goto;
import org.prlprg.fir.ir.instruction.If;
import org.prlprg.fir.ir.instruction.Jump;
import org.prlprg.fir.ir.instruction.Raise;
import org.prlprg.fir.ir.instruction.Return;
import org.prlprg.fir.ir.instruction.Statement;
import org.prlprg.fir.ir.instruction.Unreachable;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.fir.ir.module.Module;
import org.prlprg.fir.ir.variable.OptionalNamedVariable;
import org.prlprg.parseprint.PrintMethod;
import org.prlprg.parseprint.Printer;
import org.prlprg.sexp.SEXPs;

/// Prints FIŘ IR: [Module]s and everything in them, down to individual [Statement]s and [Jump]s.
///
/// Unlike parsing (see [ModuleParseContext]), printing needs no information from the enclosing
/// levels — a block knows its own label, a register its own name — so a single context covers the
/// whole IR instead of one per level, and it has no fields. Each of the printed classes declares a
/// `toString` that forwards here, so they still print correctly on their own.
public final class IrPrintContext {
  // region module, function, version

  @PrintMethod
  private void printModule(Module module, Printer p) {
    p.printSeparated("\n\n", module.localFunctions());
  }

  @PrintMethod
  private void printFunction(Function function, Printer p) {
    var w = p.writer();

    p.print(function.comments());

    if (function.userProperties().strict()) {
      w.write("@strict\n");
    }
    if (function.userProperties().liteSpecial()) {
      w.write("@liteSpecial\n");
    }

    w.write("fun ");
    p.print(function.name());

    p.printAsList("(", ")", function.parameterNames());

    w.write(" {");
    w.runIndented(
        () -> {
          // `versions()` is in *dispatch* order (most specific first, baseline last), but the
          // textual form goes baseline first and then increasingly specific — which is also what
          // the parser assumes, since it takes the first version it reads as the baseline. So
          // print the reverse; otherwise print -> parse -> print moves the baseline every time.
          for (var version : function.versions().reversed()) {
            w.write('\n');
            p.print(version);
          }
        });
    w.write("\n}");
  }

  @PrintMethod
  private void printAbstraction(Abstraction abstraction, Printer p) {
    var w = p.writer();

    p.print(abstraction.comments());

    // Parameters, e.g. `(reg n:*, reg m:I@!)`.
    w.write('(');
    var firstParam = true;
    for (var parameter : abstraction.parameters()) {
      if (!firstParam) {
        w.write(", ");
      }
      firstParam = false;
      w.write("reg ");
      p.print(parameter);
      w.write(':');
      p.print(parameter.type());
      if (parameter.strict()) {
        w.write("@!");
      }
    }
    w.write(')');

    w.write(" -");
    p.print(abstraction.effects());
    w.write("> ");
    p.print(abstraction.returnType());

    w.write(" {");

    var cfg = abstraction.cfg();
    if (cfg == null) {
      w.write(" ... ");
    } else {
      // Registers declare their type inline at their definition site (see [Statement] and the phi
      // parameters in a block header), so there is no separate declarations line — the body follows
      // the `{` directly.
      w.write('\n');
      p.print(cfg);
      w.write('\n');
    }

    w.write('}');
  }

  // endregion module, function, version

  // region blocks

  @PrintMethod
  private void printCfg(CFG cfg, Printer p) {
    p.printSeparated("\n", cfg.bbsInPrintOrder());
  }

  @PrintMethod
  private void printBB(BB bb, Printer p) {
    var w = p.writer();

    p.print(bb.comments());

    if (!bb.isEntry()) {
      w.write(bb.label());
      // Phi parameters carry their type inline at the definition site, e.g. `L1(r2: I, r3: v1(I))`.
      w.write('(');
      var firstParam = true;
      for (var parameter : bb.phiParameters()) {
        if (!firstParam) {
          w.write(", ");
        }
        firstParam = false;
        p.print(parameter);
        w.write(": ");
        p.print(parameter.type());
      }
      w.write(')');
      w.write(":");
    } else {
      w.write("  ");
    }

    w.runIndented(
        () -> {
          if (!bb.isEntry()) {
            w.write('\n');
          }

          for (var statement : bb.statements()) {
            p.print(statement);
            w.write(";\n");
          }
          p.print(bb.jump());
          w.write(";");
        });
  }

  // endregion blocks

  // region instructions

  @PrintMethod
  private void printStatement(Statement statement, Printer p) {
    p.print(statement.comments());
    var assignee = statement.assignee();
    if (assignee != null) {
      p.print(assignee);
      p.writer().write(": ");
      p.print(assignee.type());
      p.writer().write(" = ");
    }
    printExpression(p, statement);
  }

  @PrintMethod
  private void printJump(Jump jump, Printer p) {
    p.print(jump.comments());
    printJumpExpression(p, jump);
  }

  /// Print a statement's operation, interleaving the argument-free
  /// [Expression][org.prlprg.fir.ir.expression.Expression] metadata with the instruction's flat
  /// argument list to reproduce the textual FIŘ form.
  private void printExpression(Printer p, Statement statement) {
    var w = p.writer();
    var args = statement.args();
    switch (statement.expression()) {
      case Call(var callee) -> {
        switch (callee) {
          case StaticFnCallee(var functionRef, var isDispatch, var signature) -> {
            p.print(functionRef.get().name());
            if (isDispatch) {
              w.write('%');
            }
            var closureWithEnv = args.getFirst();
            if (!closureWithEnv.equals(Constant.ELIDED_CLOSURE)) {
              w.write('@');
              p.print(closureWithEnv);
            }
            w.write("< ");
            p.print(signature);
            w.write(" >");
            p.printAsList("(", ")", args.subList(1, args.size()));
          }
          case DynamicCallee(var callArgumentNames) -> {
            w.write("dyn ");
            p.print(args.getFirst());
            if (callArgumentNames.stream().anyMatch(OptionalNamedVariable::isPresent)) {
              p.printAsList("[", "]", callArgumentNames);
            }
            p.printAsList("(", ")", args.subList(1, args.size()));
          }
        }
      }
      case Store(var type, var variable) -> {
        w.write(
            switch (type) {
              case LOCAL_VAR -> "st ";
              case SUPER_VAR -> "st-super ";
            });
        p.print(variable);
        w.write(" = ");
        p.print(args.getFirst());
      }
      case Load(var type, var variable) -> {
        w.write(
            switch (type) {
              case LOCAL_VAR -> "ld ";
              case SUPER_VAR -> "ld-super ";
              case LOCAL_FUN -> "ldf ";
              case GLOBAL_FUN -> "ldf-glob ";
              case BASE_FUN -> "ldf-base ";
            });
        p.print(variable);
      }
      case Force(var isMaybe) -> {
        w.write(isMaybe ? "force? " : "force ");
        p.print(args.getFirst());
      }
      case Cast(var type) -> {
        p.print(args.getFirst());
        w.write(" as ");
        p.print(type);
      }
      case Closure(var isStatic, var codeRef) -> {
        w.write("clos");
        if (isStatic) {
          w.write("-static");
        }
        w.write(' ');
        p.print(codeRef.get().name());
      }
      case MkVector(var kind, var elementNames) -> {
        p.print(kind);
        var elements = new ArrayList<NamedArgument>(args.size());
        for (var i = 0; i < args.size(); i++) {
          elements.add(new NamedArgument(elementNames.get(i).orNull(), args.get(i)));
        }
        p.printAsList("[", "]", elements);
      }
      case MkEnv(var type) -> {
        w.write("mkenv");
        switch (type) {
          case REGULAR -> {}
          case NON_REFLECTIVE -> w.write('~');
          case ELIDED -> w.write('-');
        }
      }
      case PopEnv _ -> w.write("popenv");
      case Noop _ -> w.write("noop");
      case Dup _ -> {
        w.write("dup ");
        p.print(args.getFirst());
      }
      case SubscriptRead(var outOfRangeIsNa) -> {
        p.print(args.getFirst());
        w.write(outOfRangeIsNa ? "[" : "[[");
        p.print(args.get(1));
        w.write(outOfRangeIsNa ? "]" : "]]");
      }
      case SubscriptWrite _ -> {
        p.print(args.getFirst());
        w.write("[");
        p.print(args.get(1));
        w.write("] = ");
        p.print(args.get(2));
      }
      case ReflectiveLoad(var variable) -> {
        p.print(args.getFirst());
        w.write("$");
        p.print(variable);
      }
      case ReflectiveStore(var variable) -> {
        p.print(args.getFirst());
        w.write("$");
        p.print(variable);
        w.write(" = ");
        p.print(args.get(1));
      }
      case Assume(var assumption) -> printAssume(p, assumption, args);
      case Promise(var valueType, var effects, var code, var local) -> {
        w.write("prom");
        if (local) {
          w.write('-');
        }
        w.write('<');
        p.print(valueType);
        w.write(' ');
        p.print(effects);
        w.write(">{\n");
        p.print(code);
        w.write("\n}");
      }
    }
  }

  @PrintMethod
  private void printAssume(Assumption assumption, Printer p) {
    printAssume(p, assumption, List.of(new Constant(SEXPs.UNBOUND_VALUE)));
  }

  private void printAssume(Printer p, Assumption assumption, List<Argument> args) {
    var w = p.writer();
    switch (assumption) {
      case AssumeType(var type) -> {
        p.print(args.getFirst());
        w.write(" ?: ");
        p.print(type);
      }
      case AssumeConstant(var constant) -> {
        p.print(args.getFirst());
        w.write(" ?= ");
        p.print(constant);
      }
      case AssumeFunction(var functionRef) -> {
        p.print(args.getFirst());
        w.write(" ?- ");
        p.print(functionRef.get().name());
      }
      case AssumeLoadFun(var variable, var functionRef) -> {
        w.write("ldf ");
        p.print(variable);
        w.write(" ?- ");
        p.print(functionRef.get().name());
      }
      case AssumeLoadVar(var variable, var constant) -> {
        w.write("ld ");
        p.print(variable);
        w.write(" ?= ");
        p.print(constant);
      }
    }
  }

  /// Print a jump's operation, reading operands from its arguments and targets.
  private void printJumpExpression(Printer p, Jump jump) {
    var w = p.writer();
    var targets = jump.targets();
    switch (jump.expression()) {
      case Goto _ -> {
        w.write("goto ");
        p.print(targets.getFirst());
      }
      case If _ -> {
        w.write("if ");
        p.print(jump.arg(0));
        w.write(" then ");
        p.print(targets.getFirst());
        w.write(" else ");
        p.print(targets.get(1));
      }
      case Checkpoint _ -> {
        w.write("check ");
        p.print(targets.getFirst());
        w.write(" else ");
        p.print(targets.get(1));
      }
      case Deopt(var pc) -> {
        w.write("deopt ");
        w.write(String.valueOf(pc));
        w.write(" ");
        p.printAsList("[", "]", jump.args());
      }
      case Return _ -> {
        w.write("return ");
        p.print(jump.arg(0));
      }
      case Raise _ -> {
        w.write("raise ");
        p.print(jump.arg(0));
      }
      case Unreachable _ -> w.write("unreachable");
    }
  }

  // endregion instructions
}
