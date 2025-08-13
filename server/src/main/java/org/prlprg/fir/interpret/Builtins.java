package org.prlprg.fir.interpret;

import java.util.Arrays;
import java.util.List;
import org.prlprg.fir.ir.abstraction.Abstraction;
import org.prlprg.fir.ir.module.Function;
import org.prlprg.sexp.EnvSXP;
import org.prlprg.sexp.ListOrVectorSXP;
import org.prlprg.sexp.ListSXP;
import org.prlprg.sexp.SEXP;
import org.prlprg.sexp.SEXPs;

/// Java implementations of GNU-R builtins for [Interpreter] (specifically
/// [Interpreter#registerExternalFunction(String, ExternalFunction)]).
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
    // Builtins
    interpreter.registerExternalFunction("+", Builtins::add);
    interpreter.registerExternalVersion("+", 0, Builtins::addInts);
    interpreter.registerExternalFunction("-", Builtins::subtract);
    interpreter.registerExternalFunction("*", Builtins::multiply);
    interpreter.registerExternalFunction("/", Builtins::divide);
    interpreter.registerExternalFunction("==", Builtins::equal);
    interpreter.registerExternalFunction("<", Builtins::less);
    interpreter.registerExternalVersion("<", 0, Builtins::lessInts);
    interpreter.registerExternalFunction("<=", Builtins::lessEqual);
    interpreter.registerExternalFunction("!=", Builtins::notEqual);
    interpreter.registerExternalFunction(">", Builtins::greater);
    interpreter.registerExternalFunction(">=", Builtins::greaterEqual);
    interpreter.registerExternalFunction("rep", Builtins::rep);
    interpreter.registerExternalFunction("[", Builtins::index);
    interpreter.registerExternalFunction("[<-", Builtins::subAssign);
    interpreter.registerExternalFunction("[[", Builtins::index2);
    interpreter.registerExternalFunction("[[<-", Builtins::subAssign2);
    interpreter.registerExternalFunction(":", Builtins::colon);
    interpreter.registerExternalFunction("c", Builtins::c);
    interpreter.registerExternalFunction("length", Builtins::length);
    interpreter.registerExternalFunction("is.object", Builtins::isObject);

    // Intrinsics
    interpreter.registerExternalVersion("toForSeq", 0, Builtins::toForSeq);
  }

  /// Add to the module and register non-builtin utility functions provided by R, like `seq`.
  public static void addAndRegisterHelpers(Interpreter interpreter) {
    addAndRegister(interpreter, "seq", Builtins::seq);
  }

  private static void addAndRegister(
      Interpreter interpreter, String functionName, ExternalFunction javaClosure) {
    var module = interpreter.module();
    if (module.localFunction(functionName) != null) {
      return;
    }

    module.addFunction(functionName);
    interpreter.registerExternalFunction(functionName, javaClosure);
  }

  private static SEXP add(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`+` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.integer(arg0 + arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
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

  private static SEXP equal(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`==` takes 2 arguments");
    }
    var arg0 = args.value(0);
    var arg1 = args.value(1);

    return SEXPs.logical(arg0.equals(arg1));
  }

  private static SEXP subtract(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`-` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      var arg0 = args.value(0).asScalarInteger().get();
      var arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.integer(arg0 - arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.real(arg0 - arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `-` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP multiply(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`*` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      var arg0 = args.value(0).asScalarInteger().get();
      var arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.integer(arg0 * arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.real(arg0 * arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `*` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP divide(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`/` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      if (arg1 == 0) {
        return SEXPs.real(
            arg0 == 0
                ? Double.NaN
                : (arg0 > 0 ? Double.POSITIVE_INFINITY : Double.NEGATIVE_INFINITY));
      }
      return SEXPs.real((double) arg0 / arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.real(arg0 / arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `/` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP less(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`<` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.logical(arg0 < arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.logical(arg0 < arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `<` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP lessInts(
      Interpreter interpreter, Abstraction callee, List<SEXP> args, EnvSXP env) {
    if (args.size() != 2
        || args.getFirst().asScalarInteger().isEmpty()
        || args.get(1).asScalarInteger().isEmpty()) {
      throw new IllegalArgumentException("`<`.0 takes 2 scalar integers");
    }

    int arg0 = args.getFirst().asScalarInteger().get();
    int arg1 = args.get(1).asScalarInteger().get();
    return SEXPs.logical(arg0 < arg1);
  }

  private static SEXP lessEqual(
      Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`<=` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.logical(arg0 <= arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.logical(arg0 <= arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `<=` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP notEqual(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`!=` takes 2 arguments");
    }
    var arg0 = args.value(0);
    var arg1 = args.value(1);

    return SEXPs.logical(!arg0.equals(arg1));
  }

  private static SEXP greater(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`>` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.logical(arg0 > arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.logical(arg0 > arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `>` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP greaterEqual(
      Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`>=` takes 2 arguments");
    }

    if (args.value(0).asScalarInteger().isPresent()
        && args.value(1).asScalarInteger().isPresent()) {
      int arg0 = args.value(0).asScalarInteger().get();
      int arg1 = args.value(1).asScalarInteger().get();
      return SEXPs.logical(arg0 >= arg1);
    } else if (args.value(0).asScalarReal().isPresent()
        && args.value(1).asScalarReal().isPresent()) {
      double arg0 = args.value(0).asScalarReal().get();
      double arg1 = args.value(1).asScalarReal().get();
      return SEXPs.logical(arg0 >= arg1);
    } else {
      throw new UnsupportedOperationException(
          "Mock `>=` not implemented for arguments except two integers or two reals");
    }
  }

  private static SEXP rep(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`rep` takes 2 arguments");
    }

    var value = args.value(0);
    var times = args.value(1).asScalarInteger();

    if (times.isEmpty()) {
      throw new UnsupportedOperationException("Mock `rep` requires integer times argument");
    }

    int timesValue = times.get();
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
    } else {
      throw new UnsupportedOperationException(
          "Mock `rep` not implemented for arguments except scalar integers or reals");
    }
  }

  private static SEXP seq(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() < 2 || args.size() > 3) {
      throw new IllegalArgumentException("`seq` takes 2 or 3 arguments");
    }

    // Get from argument as double
    double from;
    if (args.value(0).asScalarInteger().isPresent()) {
      from = args.value(0).asScalarInteger().get().doubleValue();
    } else if (args.value(0).asScalarReal().isPresent()) {
      from = args.value(0).asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `seq` requires numeric from argument");
    }

    // Get to argument as double
    double to;
    if (args.value(1).asScalarInteger().isPresent()) {
      to = args.value(1).asScalarInteger().get().doubleValue();
    } else if (args.value(1).asScalarReal().isPresent()) {
      to = args.value(1).asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `seq` requires numeric to argument");
    }

    double by = 1.0;

    // Handle optional 'by' argument
    if (args.size() == 3) {
      if (args.value(2).asScalarInteger().isPresent()) {
        by = args.value(2).asScalarInteger().get().doubleValue();
      } else if (args.value(2).asScalarReal().isPresent()) {
        by = args.value(2).asScalarReal().get();
      }

      if (by == 0.0) {
        throw new IllegalArgumentException("seq() argument 'by' must not be 0");
      }
    }

    var areIntegers = args.values().stream().allMatch(x -> x.asScalarInteger().isPresent());

    // Handle case where from == to
    if (from == to) {
      // Return appropriate type based on input
      if (areIntegers) {
        return SEXPs.integer((int) from);
      } else {
        return SEXPs.real(from);
      }
    }

    // Calculate sequence
    if ((to - from) * by < 0) {
      // by has wrong sign, return empty sequence
      return areIntegers ? SEXPs.EMPTY_INTEGER : SEXPs.EMPTY_REAL;
    }

    var length = (int) Math.floor((to - from) / by) + 1;
    var result = new double[length];

    for (int i = 0; i < length; i++) {
      result[i] = from + i * by;
    }

    if (areIntegers) {
      var intResult = new int[length];
      for (int i = 0; i < length; i++) {
        intResult[i] = (int) result[i];
      }
      return SEXPs.integer(intResult);
    } else {
      return SEXPs.real(result);
    }
  }

  private static SEXP index(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`[` takes 2 arguments");
    }

    if (!(args.value(0) instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `[` not implemented for non-vector objects");
    }

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.value(1).asScalarInteger().isPresent()) {
      index1 = args.value(1).asScalarInteger().get();
    } else if (args.value(1).asScalarReal().isPresent()) {
      index1 = args.value(1).asScalarReal().get().intValue();
    } else {
      throw new UnsupportedOperationException("Mock `[` requires numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    var index0 = index1 - 1;

    return interpreter.subscriptLoad(vector, index0);
  }

  private static SEXP subAssign(
      Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 3) {
      throw new IllegalArgumentException("`[<-` takes 3 arguments");
    }

    if (!(args.value(0) instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `[<-` not implemented for non-vector objects");
    }

    // Get index as integer, truncating from real if necessary
    int index1;
    if (args.value(1).asScalarInteger().isPresent()) {
      index1 = args.value(1).asScalarInteger().get();
    } else if (args.value(1).asScalarReal().isPresent()) {
      index1 = args.value(1).asScalarReal().get().intValue();
    } else {
      throw new UnsupportedOperationException("Mock `[<-` requires numeric index argument");
    }

    // R uses 1-based indexing, but FIŘ uses 0
    int realIndex = index1 - 1;

    var value = args.value(2);

    // We must copy the vector because FIŘ mutates in-place.
    var result = vector.copy();
    interpreter.subscriptStore(result, realIndex, value);
    return result;
  }

  private static SEXP index2(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    // Mock [[ behaves the same as [
    return index(interpreter, callee, args, env);
  }

  private static SEXP subAssign2(
      Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    // Mock [[<- behaves the same as [<-
    return subAssign(interpreter, callee, args, env);
  }

  private static SEXP colon(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 2) {
      throw new IllegalArgumentException("`:` takes 2 arguments");
    }

    // Get start argument as double
    double start;
    if (args.value(0).asScalarInteger().isPresent()) {
      start = args.value(0).asScalarInteger().get().doubleValue();
    } else if (args.value(0).asScalarReal().isPresent()) {
      start = args.value(0).asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `:` requires numeric start argument");
    }

    // Get end argument as double
    double end;
    if (args.value(1).asScalarInteger().isPresent()) {
      end = args.value(1).asScalarInteger().get().doubleValue();
    } else if (args.value(1).asScalarReal().isPresent()) {
      end = args.value(1).asScalarReal().get();
    } else {
      throw new UnsupportedOperationException("Mock `:` requires numeric end argument");
    }

    // Check if both arguments are integers for return type decision
    boolean bothIntegers =
        args.value(0).asScalarInteger().isPresent() && args.value(1).asScalarInteger().isPresent();

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

  private static SEXP c(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    return interpreter.mkVector(args.values());
  }

  private static SEXP length(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    if (args.size() != 1) {
      throw new IllegalArgumentException("`length` takes 1 argument");
    }

    if (!(args.value(0) instanceof ListOrVectorSXP<?> vector)) {
      throw new UnsupportedOperationException("Mock `length` requires a vector argument");
    }

    return SEXPs.integer(vector.size());
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

  private static SEXP isObject(Interpreter interpreter, Function callee, ListSXP args, EnvSXP env) {
    // Currently there's no object support, so this is always `FALSE`.
    return SEXPs.FALSE;
  }

  private Builtins() {}
}
