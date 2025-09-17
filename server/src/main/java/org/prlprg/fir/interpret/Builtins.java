package org.prlprg.fir.interpret;

import static org.prlprg.primitive.Constants.NA_INT;

import java.util.Arrays;
import java.util.List;
import java.util.Optional;
import java.util.function.DoubleUnaryOperator;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.type.Kind;
import org.prlprg.fir.ir.type.Type;
import org.prlprg.fir.ir.variable.NamedVariable;
import org.prlprg.primitive.Constants;
import org.prlprg.primitive.Logical;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.IntSXP;
import org.prlprg.sexp.LglSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.RealSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Java implementations of GNU-R builtins for [Interpreter] (specifically
/// [Interpreter#registerExternal(String, ExternalVersion)]).
///
/// Note that these are only behaviorally equivalent to GNU-R implementations in some common
/// scenarios. They're not a complete substitute for GNU-R, but a way to test functions which
/// have issues when compiled to C, and a way to provide basic functionality to language-agnostic
/// IR code.
public final class Builtins {
  /// Register all builtins and intrinsics that are implemented.
  ///
  /// Use [#addAndRegisterHelpers(Interpreter)] to register non-builtin utility functions.
  public static void registerBuiltins(Interpreter interpreter) {
    // TODO: refactor
    //  - Abstract builtins like `+`, similar to how `abs` is abstracted via `registerMathBuiltin`
    //  - Give other builtins some specific versions. Also requires modifying `builtins.fir`
    // Builtins
    interpreter.registerExternal("+", 0, ExternalVersion.strict(Builtins::add));
    interpreter.registerExternal("+", 1, ExternalVersion.strict(Builtins::addInts));
    interpreter.registerExternal("+", 2, ExternalVersion.strict(Builtins::addIntAndReal));
    interpreter.registerExternal("+", 3, ExternalVersion.strict(Builtins::addRealAndInt));
    interpreter.registerExternal("+", 4, ExternalVersion.strict(Builtins::addReals));
    interpreter.registerExternal("-", 0, ExternalVersion.strict(Builtins::subtract));
    interpreter.registerExternal("-", 1, ExternalVersion.strict(Builtins::subtract));
    interpreter.registerExternal("-", 2, ExternalVersion.strict(Builtins::subtract));
    interpreter.registerExternal("-", 3, ExternalVersion.strict(Builtins::subtract));
    interpreter.registerExternal("-", 4, ExternalVersion.strict(Builtins::subtract));
    interpreter.registerExternal("*", ExternalVersion.strict(Builtins::multiply));
    interpreter.registerExternal("/", ExternalVersion.strict(Builtins::divide));
    interpreter.registerExternal("==", ExternalVersion.strict(Builtins::equal));
    interpreter.registerExternal("!=", ExternalVersion.strict(Builtins::notEqual));
    interpreter.registerExternal("<", ExternalVersion.strict(Builtins::less));
    interpreter.registerExternal("<=", ExternalVersion.strict(Builtins::lessEqual));
    interpreter.registerExternal(">", ExternalVersion.strict(Builtins::greater));
    interpreter.registerExternal(">=", ExternalVersion.strict(Builtins::greaterEqual));
    interpreter.registerExternal("rep", ExternalVersion.special(Builtins::rep));
    interpreter.registerExternal("[", ExternalVersion.strict(Builtins::index));
    interpreter.registerExternal("[<-", ExternalVersion.strict(Builtins::subAssign));
    interpreter.registerExternal("[[", ExternalVersion.strict(Builtins::index2));
    interpreter.registerExternal("[[<-", ExternalVersion.strict(Builtins::subAssign2));
    interpreter.registerExternal(":", ExternalVersion.strict(Builtins::colon));
    interpreter.registerExternal("c", ExternalVersion.strict(Builtins::c));
    interpreter.registerExternal("length", ExternalVersion.strict(Builtins::length));
    registerMathBuiltin(interpreter, "abs", Math::abs);
    registerMathBuiltin(interpreter, "sqrt", Math::sqrt);
    registerMathBuiltin(interpreter, "floor", Math::floor);
    interpreter.registerExternal("sum", Builtins::sum);
    interpreter.registerExternal("as.logical", ExternalVersion.strict(Builtins::asLogical));
    interpreter.registerExternal("is.object", ExternalVersion.strict(Builtins::isObject));

    // Intrinsics
    interpreter.registerExternal("toForSeq", 0, Builtins::toForSeq);
  }

  private static void registerMathBuiltin(
      Interpreter interpreter, String name, DoubleUnaryOperator javaFunction) {
    interpreter.registerExternal(
        name,
        0,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1) {
                throw new IllegalArgumentException(
                    "`" + name + "`.0 takes 1 scalar integer or real");
              }
              if (args.getFirst().asScalarInteger().isPresent()) {
                int value = args.getFirst().asScalarInteger().get();
                return SEXPs.integer((int) javaFunction.applyAsDouble(value));
              } else if (args.getFirst().asScalarReal().isPresent()) {
                double value = args.getFirst().asScalarReal().get();
                return SEXPs.real(javaFunction.applyAsDouble(value));
              } else {
                throw new IllegalArgumentException(
                    "`" + name + "`.0 takes 1 scalar integer or real");
              }
            }));
    interpreter.registerExternal(
        name,
        1,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || args.getFirst().asScalarInteger().isEmpty()) {
                throw new IllegalArgumentException("`" + name + "`.0 takes 1 scalar integer");
              }
              int value = args.getFirst().asScalarInteger().get();
              return SEXPs.integer((int) javaFunction.applyAsDouble(value));
            }));
    interpreter.registerExternal(
        name,
        2,
        ExternalVersion.strict(
            (_, _, args, _) -> {
              if (args.size() != 1 || args.getFirst().asScalarReal().isEmpty()) {
                throw new IllegalArgumentException("`" + name + "`.1 takes 1 scalar real");
              }
              double value = args.getFirst().asScalarReal().get();
              return SEXPs.real(javaFunction.applyAsDouble(value));
            }));
  }

  private static SEXP add(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`+` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.integer(arg0 + arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.real(arg0 + arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `+` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP addInts(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2
        || args.getFirst().asScalarInteger().isEmpty()
        || args.get(1).asScalarInteger().isEmpty()) {
      throw new IllegalArgumentException("`+`.0 takes 2 scalar integers");
    }

    int arg0 = args.getFirst().asScalarInteger().get();
    int arg1 = args.get(1).asScalarInteger().get();
    return SEXPs.integer(arg0 + arg1);
  }

  private static SEXP addIntAndReal(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2
        || args.getFirst().asScalarInteger().isEmpty()
        || args.get(1).asScalarReal().isEmpty()) {
      throw new IllegalArgumentException("`+`.0 takes a scalar integer and real");
    }

    int arg0 = args.getFirst().asScalarInteger().get();
    double arg1 = args.get(1).asScalarReal().get();
    return SEXPs.real(arg0 + arg1);
  }

  private static SEXP addRealAndInt(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2
        || args.getFirst().asScalarReal().isEmpty()
        || args.get(1).asScalarInteger().isEmpty()) {
      throw new IllegalArgumentException("`+`.0 takes a scalar real and integer");
    }

    double arg0 = args.getFirst().asScalarReal().get();
    int arg1 = args.get(1).asScalarInteger().get();
    return SEXPs.real(arg0 + arg1);
  }

  private static SEXP addReals(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2
        || args.getFirst().asScalarReal().isEmpty()
        || args.get(1).asScalarReal().isEmpty()) {
      throw new IllegalArgumentException("`+`.0 takes 2 scalar reals");
    }

    double arg0 = args.getFirst().asScalarReal().get();
    double arg1 = args.get(1).asScalarReal().get();
    return SEXPs.real(arg0 + arg1);
  }

  private static SEXP equal(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`==` takes 2 arguments");
    }
    var arg0 = args.getFirst();
    var arg1 = args.get(1);

    return SEXPs.logical(arg0.equals(arg1));
  }

  private static SEXP notEqual(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`!=` takes 2 arguments");
    }
    var arg0 = args.getFirst();
    var arg1 = args.get(1);

    return SEXPs.logical(!arg0.equals(arg1));
  }

  private static SEXP subtract(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`-` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      var arg0 = args.getFirst().asScalarInteger().get();
      var arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.integer(arg0 - arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.real(arg0 - arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `-` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP multiply(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`*` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      var arg0 = args.getFirst().asScalarInteger().get();
      var arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.integer(arg0 * arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.real(arg0 * arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `*` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP divide(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`/` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      if (arg1 == 0) {
        return SEXPs.real(
            arg0 == 0
                ? Double.NaN
                : (arg0 > 0 ? Double.POSITIVE_INFINITY : Double.NEGATIVE_INFINITY));
      }
      return SEXPs.real((double) arg0 / arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.real(arg0 / arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `/` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP less(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`<` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.logical(arg0 < arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.logical(arg0 < arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `<` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP lessEqual(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`<=` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.logical(arg0 <= arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.logical(arg0 <= arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `<=` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP greater(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`>` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.logical(arg0 > arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.logical(arg0 > arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `>` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP greaterEqual(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`>=` takes 2 arguments");
    }

    if (args.getFirst().asScalarInteger().isPresent()
        && args.get(1).asScalarInteger().isPresent()) {
      int arg0 = args.getFirst().asScalarInteger().get();
      int arg1 = args.get(1).asScalarInteger().get();
      return SEXPs.logical(arg0 >= arg1);
    } else if (args.getFirst().asScalarReal().isPresent()
        && args.get(1).asScalarReal().isPresent()) {
      double arg0 = args.getFirst().asScalarReal().get();
      double arg1 = args.get(1).asScalarReal().get();
      return SEXPs.logical(arg0 >= arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `>=` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP rep(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`rep` takes 2 arguments");
    }

    var value = args.getFirst();
    var times = args.get(1);

    int timesValue;
    if (times.asScalarInteger().isPresent()) {
      timesValue = times.asScalarInteger().get();
    } else if (times.asScalarReal().isPresent()) {
      // Convert real to integer, truncating
      timesValue = times.asScalarReal().get().intValue();
    } else {
      throw new UnsupportedOperationException("Mock `rep` requires numeric times argument");
    }
    if (timesValue < 0) {
      throw new IllegalArgumentException("rep() argument 'times' must be >= 0");
    }

    if (timesValue == 0) {
      if (value.asScalarInteger().isPresent()) {
        return SEXPs.EMPTY_INTEGER;
      } else if (value.asScalarReal().isPresent()) {
        return SEXPs.EMPTY_REAL;
      } else {
        throw new UnsupportedOperationException("Mock `rep` not implemented for this value type");
      }
    }

    if (value.asScalarInteger().isPresent()) {
      int intValue = value.asScalarInteger().get();
      var result = new int[timesValue];
      Arrays.fill(result, intValue);
      return SEXPs.integer(result);
    } else if (value.asScalarReal().isPresent()) {
      double realValue = value.asScalarReal().get();
      var result = new double[timesValue];
      Arrays.fill(result, realValue);
      return SEXPs.real(result);
    } else if (value.asScalarLogical().isPresent()) {
      var logicalValue = value.asScalarLogical().get();
      var result = new Logical[timesValue];
      Arrays.fill(result, logicalValue);
      return SEXPs.logical(result);
    } else {
      throw new UnsupportedOperationException(
          "Mock `rep` not implemented for arguments except scalar integers, reals, and logicals");
    }
  }

  private static SEXP index(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`[` takes 2 arguments");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `[` not implemented for non-vector objects");
    }

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.get(1).asScalarInteger().isPresent()) {
      index1 = args.get(1).asScalarInteger().get();
    } else if (args.get(1).asScalarReal().isPresent()) {
      index1 = args.get(1).asScalarReal().get().intValue();
    } else {
      throw new UnsupportedOperationException("Mock `[` requires numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    var index0 = index1 - 1;

    return interpreter.subscriptLoad(vector, index0);
  }

  private static SEXP subAssign(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 3) {
      throw new IllegalArgumentException("`[<-` takes 3 arguments");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `[<-` not implemented for non-vector objects");
    }

    // Unlike FIŘ, the value is the second argument. The index (or indices for multidim) are after.
    var value = args.get(1);

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.get(2).asScalarInteger().isPresent()) {
      index1 = args.get(2).asScalarInteger().get();
    } else if (args.get(2).asScalarReal().isPresent()) {
      index1 = args.get(2).asScalarReal().get().intValue();
    } else {
      throw new UnsupportedOperationException("Mock `[<-` requires numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    int realIndex = index1 - 1;

    // Cast `value` to the correct type if possible.
    if (vector instanceof IntSXP && value.asScalarReal().isPresent()) {
      value = SEXPs.integer(value.asScalarReal().get().intValue());
    } else if (vector instanceof RealSXP && value.asScalarInteger().isPresent()) {
      value = SEXPs.real(value.asScalarInteger().get().doubleValue());
    }

    // We must copy the vector because FIŘ mutates in-place.
    var result = vector.copy();
    interpreter.subscriptStore(result, realIndex, value);
    return result;
  }

  private static SEXP index2(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    // Mock [[ behaves the same as [
    return index(interpreter, callee, args, env);
  }

  private static SEXP subAssign2(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    // Mock [[<- behaves the same as [<-
    return subAssign(interpreter, callee, args, env);
  }

  private static SEXP colon(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`:` takes 2 arguments");
    }

    // Get start argument as double
    double start;
    if (args.getFirst().asScalarInteger().isPresent()) {
      start = args.getFirst().asScalarInteger().get().doubleValue();
    } else if (args.getFirst().asScalarReal().isPresent()) {
      start = args.getFirst().asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `:` requires numeric start argument");
    }

    // Get end argument as double
    double end;
    if (args.get(1).asScalarInteger().isPresent()) {
      end = args.get(1).asScalarInteger().get().doubleValue();
    } else if (args.get(1).asScalarReal().isPresent()) {
      end = args.get(1).asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `:` requires numeric end argument");
    }

    // Check if both arguments are integers for return type decision
    boolean bothIntegers =
        args.getFirst().asScalarInteger().isPresent() && args.get(1).asScalarInteger().isPresent();

    if (start == end) {
      if (bothIntegers) {
        return SEXPs.integer((int) start);
      } else {
        return SEXPs.real(start);
      }
    }

    var size = (int) (Math.abs(end - start) + 1);
    var result = new double[size];

    if (start < end) {
      for (int i = 0; i < size; i++) {
        result[i] = start + i;
      }
    } else {
      for (int i = 0; i < size; i++) {
        result[i] = start - i;
      }
    }

    if (bothIntegers) {
      var intResult = new int[size];
      for (int i = 0; i < size; i++) {
        intResult[i] = (int) result[i];
      }
      return SEXPs.integer(intResult);
    } else {
      return SEXPs.real(result);
    }
  }

  private static SEXP c(Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    // TODO: Once the interpreter is changed to pass arguments correctly, it will always pass a
    //  single argument that is dots list. Handle that instead of variadic `args`.
    if (args.isEmpty()) {
      return SEXPs.NULL;
    }

    var inferredKind = Type.of(args.getFirst()).kind();
    if (inferredKind instanceof Kind.PrimitiveScalar(var primitiveKind)) {
      inferredKind = new Kind.PrimitiveVector(primitiveKind);
    }

    return interpreter.mkVector(
        inferredKind, args.stream().map(_ -> Optional.<NamedVariable>empty()).toList(), args);
  }

  private static SEXP length(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 1) {
      throw new IllegalArgumentException("`length` takes 1 argument");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `length` requires a vector argument");
    }

    return SEXPs.integer(vector.size());
  }

  private static SEXP sum(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 1) {
      throw new IllegalArgumentException("`sum` takes 1 argument");
    }

    return switch (args.getFirst()) {
      case IntSXP i -> {
        // Sum of integers
        int sum = 0;
        for (var value : i) {
          if (value == NA_INT) {
            yield SEXPs.integer(Constants.NA_INT);
          }
          sum += value;
        }
        yield SEXPs.integer(sum);
      }
      case RealSXP r -> {
        // Sum of reals
        double sum = 0.0;
        for (var value : r) {
          sum += value;
        }
        yield SEXPs.real(sum);
      }
      case LglSXP l -> {
        // Sum of logicals, treating TRUE as 1 and FALSE as 0
        int sum = 0;
        for (var value : l) {
          boolean breakWithNa = false;
          switch (value) {
            case TRUE -> sum++;
            case FALSE -> {}
            case NA -> breakWithNa = true;
          }
          if (breakWithNa) {
            yield SEXPs.integer(Constants.NA_INT);
          }
        }
        yield SEXPs.integer(sum);
      }
      default ->
          throw new UnsupportedOperationException(
              "Mock `sum` requires an int, real, or logical vector");
    };
  }

  private static SEXP toForSeq(
      Interpreter interpreter, Abstraction version, List<SEXP> args, EnvSXP env) {
    if (args.size() != 1) {
      throw new IllegalArgumentException("`toForSeq` takes 1 argument");
    }

    if (!(args.getFirst() instanceof ListOrVectorSXP<?> vector)) {
      throw new IllegalArgumentException("toForSeq() requires a vector argument");
    }

    // Simply return the vector as-is after validation
    return vector;
  }

  private static SEXP asLogical(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 1) {
      throw new IllegalArgumentException("`as.logical` takes 1 argument");
    }

    var arg = args.getFirst();

    if (arg.asScalarInteger().isPresent()) {
      int intValue = arg.asScalarInteger().get();
      if (intValue == 0) {
        return SEXPs.logical(Logical.FALSE);
      } else if (intValue == NA_INT) {
        return SEXPs.logical(Logical.NA);
      } else {
        return SEXPs.logical(Logical.TRUE);
      }
    } else if (arg.asScalarReal().isPresent()) {
      double realValue = arg.asScalarReal().get();
      if (realValue == 0.0) {
        return SEXPs.logical(Logical.FALSE);
      } else if (Double.isNaN(realValue)) {
        return SEXPs.logical(Logical.NA);
      } else {
        return SEXPs.logical(Logical.TRUE);
      }
    } else if (arg.asScalarLogical().isPresent()) {
      return SEXPs.logical(arg.asScalarLogical().get());
    } else {
      throw new UnsupportedOperationException(
          "Mock `as.logical` not implemented for arguments except scalar integers, reals, and logicals");
    }
  }

  private static SEXP isObject(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    // Currently there's no object support, so this is always `FALSE`.
    return SEXPs.FALSE;
  }

  private Builtins() {}
}
